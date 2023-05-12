#include <iostream>
#include <fstream>
#include <string>
#include "proto/tensors.pb.h"

int main() {
  // declare a numeric tensor from `NumTensor` protobuf
  proto::NumTensor tensor_3d;


  // deserialize the tensor from the file
  std::ifstream input("tensor.bin", std::ios::in | std::ios::binary);
  if (!tensor_3d.ParseFromIstream(&input)) {
    std::cerr << "Failed to read tensor." << std::endl;
    return -1;
  }

  // convert the tensor to a 3D numpy array
  int Z = tensor_3d.my_arrays_size();
  int Y = tensor_3d.my_arrays(0).my_sub_arrays_size();
  int X = tensor_3d.my_arrays(0).my_sub_arrays(0).my_array_size();
  std::cout << "Tensor shape: (" << Z << ", " << Y << ", " << X << ")" << std::endl;
  int data[Z][Y][X];
  for (int i = 0; i < Z; i++) {
    for (int j = 0; j < Y; j++) {
      for (int k = 0; k < X; k++) {
        data[i][j][k] = tensor_3d.my_arrays(i).my_sub_arrays(j).my_array(k);
      }
    }
  }

  // print the tensor
  for (int i = 0; i < Z; i++) {
    std::cout << "z = " << i << std::endl;
    for (int j = 0; j < Y; j++) {
      for (int k = 0; k < X; k++) {
        std::cout << data[i][j][k] << " ";
      }
      std::cout << std::endl;
    }
  }

  return 0;
}