#include <iostream>
#include <fstream>
#include <string>
#include "proto/tensors.pb.h"

int main() {
  // Declare a numeric tensor from `NumTensor` protobuf
  proto::NumTensor tensor_3d;

  // This is a 3-D tensor with random numbers between 0 - 99
  int tensor[3][3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        tensor[i][j][k] = rand() % 100;
      }
    }
  }

  // Populate fields of protobuf object
  for (int i = 0; i < 3; i++) {
    auto my_array = tensor_3d.add_my_arrays();
    for (int j = 0; j < 3; j++) {
      auto my_sub_array = my_array->add_my_sub_arrays();
      for (int k = 0; k < 3; k++) {
        my_sub_array->add_my_array(tensor[i][j][k]);
      }
    }
  }

  std::cout << tensor_3d.DebugString() << std::endl;

  // Save the serialized protobuf object to file
  std::ofstream output("tensor.bin", std::ios::out | std::ios::binary);
  if (!tensor_3d.SerializeToOstream(&output)) {
    std::cerr << "Failed to serialize tensor." << std::endl;
    return EXIT_FAILURE;
  }
  output.close();

}