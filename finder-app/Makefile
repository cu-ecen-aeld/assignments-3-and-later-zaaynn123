# Compiler
CC = gcc
# Cross compiler variable
CROSS_COMPILE ?=
# Set target
TARGET = writer
# Set source
SRCS = writer.c
# Set object
OBJS = writer.o

# Default build
default: $(TARGET)

# Cross compile using aarch64-none-linux-gnu-gcc
aarch64-none-linux-gnu-%:
	$(MAKE) CROSS_COMPILE=aarch64-none-linux-gnu-

# Build with appropriate compiler
$(TARGET): $(OBJS)
	$(CROSS_COMPILE)$(CC) -o $(TARGET) $(OBJS)
	
# Build object
writer.o: writer.c
	$(CROSS_COMPILE)$(CC) -c writer.c -o writer.o

# Clean target
clean:
	rm -f $(TARGET) $(OBJS)
