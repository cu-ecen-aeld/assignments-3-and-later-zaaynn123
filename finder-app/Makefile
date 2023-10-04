CC = gcc
CFLAGS = -Wall -Wextra
TARGET = writer
OBJFILES = writer.o

ifdef CROSS_COMPILE
    CC = $(CROSS_COMPILE)gcc
endif

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJFILES)
