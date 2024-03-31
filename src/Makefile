CC := clang

SRCS := main.c get_sequence.c

OBJS := $(SRCS:.c=.o)

TARGET := geneprediction

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)