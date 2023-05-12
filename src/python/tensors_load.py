import proto.tensors_pb2 as protoTensors
import numpy as np

# Load the serialized tensor from file
with open("tensor.bin", "rb") as f:
    serialized_tensor = f.read()

# Parse the serialized tensor into a NumTensor protobuf object
tensor_3d = protoTensors.NumTensor()
tensor_3d.ParseFromString(serialized_tensor)

# Unpack the NumTensor protobuf object into a 3-D numpy array
my_array = tensor_3d.my_arrays[0]  # get first my_array
Z, Y, X = len(tensor_3d.my_arrays), len(my_array.my_sub_arrays), len(my_array.my_sub_arrays[0].my_array)
tensor = np.zeros((Z, Y, X), dtype=np.int32)

for i in range(Z):
    my_array = tensor_3d.my_arrays[i]
    for j in range(Y):
        my_sub_array = my_array.my_sub_arrays[j]
        for k in range(X):
            tensor[i,j,k] = my_sub_array.my_array[k]

print(tensor)