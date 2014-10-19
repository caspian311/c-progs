CC = gcc
TARGET = prog
OBJS = prog.o
FLAGS = -g -Wall -pedantic

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)
