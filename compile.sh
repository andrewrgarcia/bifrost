TYPE=$1

protoc -I=. --${TYPE}_out=src/${TYPE} proto/*.proto