all: rpc

rpc: main.c stack.h stack.c
	cc main.c stack.c -o rpc

.PHONY: clean
clean:
	rm rpc
