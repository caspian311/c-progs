CC = gcc
TARGET = prog
OBJS = prog.o user_input.o random_number.o guessing_game.o
FLAGS = -g -Wall -pedantic

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)
