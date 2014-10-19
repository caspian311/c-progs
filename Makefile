CC = gcc
TARGET = prog
OBJS = prog.o fizzbuzz.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)
