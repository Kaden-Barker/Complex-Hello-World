CC = g++

helloworld: hello.h HelloWorldProgram.cpp hello.cpp	
	$(CC) hello.cpp -o helloworld
# all: 
# 	$(CC) -o hello.out HelloWorldProgram.cpp

# HellowWorldProgram.o:
# 	$(CC) - HelloWorldProgram.cpp

# hello.o:
# 	$(CC) - hello.cpp

clean:
	rm -rf *.o hello.out
	