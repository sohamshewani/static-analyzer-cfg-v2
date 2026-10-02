CC=gcc
CFLAGS=-Wall -Werror -std=c99
SRCS=$(wildcard src/*.c)
OBJS=$(SRCS:.c=.o)
TARGET=static-analyzer-cfg

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

test: all
	./$(TARGET) -t

integration-test: all
	./$(TARGET) -i

.PHONY: clean

clean:
	rm -f $(OBJS) $(TARGET)