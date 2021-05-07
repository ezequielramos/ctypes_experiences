# ctypes_experiences

This project porpuse is to test some interactions with ansi-c shared objects/libraries using python ctypes.

There are a so_generator program that generates a shared object/librarty.

There are two so_consumer programs (written on c and python) to test consuming a shared object/librarty.

## How to build?

To compile the c programs just run:

```sh
./compile.sh
```

It will generate a so_generator.o and a libSoGenerator.so. It will generate the so_consumer executor too.

## How to run?

Using python:

```sh
python so_consumer.py
```

Using c requires to add the library to the LD_LIBRARY_PATH path... But there is a script that already does that to you, just run:

```sh
./run.sh
```
