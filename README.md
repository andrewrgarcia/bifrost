# The Bifrost

The Bifrost is currently a platform suite of scripts libraries based on Google Protocol Buffers (protobufs) designed to
connect data structures across different programming languages.

[![](icon_bifrost.png)](https://thebifrost.readthedocs.io/)

## python

virtual environment:

```
virtualenv venv
source venv/bin/activate
pip install -r requirements.in
```
execute:
```
cd src/python
python message.py
```

## cpp

```
clang++ -lprotobuf message.cpp
```