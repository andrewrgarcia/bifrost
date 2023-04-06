import tensors_pb2
import numpy as np



# Create a NumTensor object
my_message = tensors_pb2.NumTensor()


tensor = np.random.randint(0,4,(4,4,4))
Z,Y,X = tensor.shape

# Create a 3-D array of size 2x3x4
for i in range(Z):
    my_array = my_message.my_arrays.add()
    for j in range(Y):
        my_sub_array = my_array.my_sub_arrays.add()
        for k in range(X):
            # my_sub_array.my_array.append(i * 100 + j * 10 + k)
            my_sub_array.my_array.append(tensor[i,j,k])


# Print the NumTensor object
print(my_message)