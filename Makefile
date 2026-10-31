all: rpc

rpc: main.c stack.h stack.c buffered_reader.h buffered_reader.c parser.h parser.c
	cc main.c stack.c buffered_reader.c parser.c -o rpc

.PHONY: clean
clean:
	rm rpc
