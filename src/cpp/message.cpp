#include "proto/object.pb.h"
#include <fstream>

int main() {
  // create a new message and populate its fields
  proto::Object msg;
  msg.set_string_field("hello world");
  for (int i = 1; i <= 5; ++i) {
    msg.add_array_field(i);
  }

  // serialize the message to bytes
  std::string serialized_msg;
  msg.SerializeToString(&serialized_msg);

  // deserialize the message from bytes
  proto::Object new_msg;
  new_msg.ParseFromString(serialized_msg);

  return 0;
}