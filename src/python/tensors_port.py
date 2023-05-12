import proto.tensors_pb2 as protoTensors
import numpy as np


'declare a numeric tensor from `NumTensor` protobuf'
tensor_3d = protoTensors.NumTensor()

#This is a 3-D tensor with random numbers between 0 - 99
tensor = np.random.randint(0,100,(3,3,3))
Z,Y,X = tensor.shape

'populate fields of protobuf object'
for i in range(Z):
    my_array = tensor_3d.my_arrays.add()
    for j in range(Y):
        my_sub_array = my_array.my_sub_arrays.add()
        for k in range(X):
            my_sub_array.my_array.append(tensor[i,j,k])

print(tensor_3d)

with open("tensor.bin", "wb") as f:
    f.write(tensor_3d.SerializeToString())


