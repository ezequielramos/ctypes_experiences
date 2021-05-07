# generator
gcc -c so_generator.c -o so_generator.o -fPIC -Wall
gcc -shared so_generator.o -o libSoGenerator.so

# consumer
gcc so_consumer.c -o so_consumer.o -lSoGenerator -L. -I. -fPIC -Wall