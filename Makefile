CC       = gcc
CFLAGS   = -O2 -g -Wall -fmessage-length=0
OBJS     = list.o main.o
TARGET   = application

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)

