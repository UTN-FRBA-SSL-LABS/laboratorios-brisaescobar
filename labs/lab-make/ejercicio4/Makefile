CC := gcc
CFLAGS := -Wall
PROGRAMA := programa
SRCS := main.c operaciones.c
OBJS := $(SRCS:.c=.o)

.PHONY: all clean

all: $(PROGRAMA)

$(PROGRAMA): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(PROGRAMA)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(PROGRAMA) $(OBJS)