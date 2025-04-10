all: peterson

export TLIB_PATH := ../../lect13/thread-lib

CFLAGS := -I$(TLIB_PATH) -O2

peterson: peterson.c Makefile
	gcc $(CFLAGS) -o $@ $<

clean:
	rm -f peterson
