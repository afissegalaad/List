CFLAGS =

all: test.out

debug: CFLAGS += -DDEBUG -g
debug: test.out

doc: dox.conf
	doxygen $^
	cd latex && make

test: test.out
	./test.out

test.out: test.o list.o value.o
	gcc -o $@ $^

%.o:%.c
	gcc -c $^ $(CFLAGS)

clean:
	rm -rf *.o *~ *.out
