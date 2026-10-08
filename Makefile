all: rpc

rpc: main.c stack.h stack.c buffered_reader.h buffered_reader.c
	cc main.c stack.c buffered_reader.c -o rpc

.PHONY: clean
clean:
	rm rpc
