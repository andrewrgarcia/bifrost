import proto.object_pb2 as proto

'object declaration'
obj = proto.Object()
#populate fields of object
obj.string_field = "hello world"

mylist = [i for i in range(10)]
obj.array_field.extend(mylist)

'serialize object'
serialized_obj = obj.SerializeToString()

'deserailization of object'
new_obj = proto.Object()
new_obj.ParseFromString(serialized_obj)

print(new_obj)
