# import protobuf
from file_pb2 import *
import numpy as np

# import my_pb2

# create a new message and populate its fields
msg = MyMessage()
msg.string_field = "hello world"

msg.array_field.extend([1, 2, 3, 4, 5])

# serialize the message to bytes
serialized_msg = msg.SerializeToString()
print(serialized_msg)

# deserialize the message from bytes
new_msg = MyMessage()
new_msg.ParseFromString(serialized_msg)


tensor = NumTensor()


array = np.random.randint(0,4,(4,4,4))

tensor.array_3d =  array

Z,Y,X = array.shape

# populate the 3-D array with data
for i in range(Z):
    outer_array = tensor.array_3d.add()
    for j in range(Y):
        inner_array = outer_array.add()
        for k in range(X):
            inner_array.append(array[i,j,k])
    

# serialize the message to bytes
serialized_tensor = tensor.SerializeToString()

# deserialize the message from bytes
new_tensor = Num_Tensor()
new_tensor.ParseFromString(serialized_tensor)


