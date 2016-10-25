CFLAGS =

all: test.out

debug: CFLAGS += -DDEBUG -g
debug: main.out

test: test.out
	./test.out

test.out: test.o list.o value.o
	gcc -o $@ $^

%.o:%.c
	gcc -c $^ $(CFLAGS)

clean:
	rm -rf *.o *~ *.out
