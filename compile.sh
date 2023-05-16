TYPE=$1

DIR=$HOME/bifrost

cd $DIR

protoc -I=. --${TYPE}_out=src/${TYPE} proto/*.proto
