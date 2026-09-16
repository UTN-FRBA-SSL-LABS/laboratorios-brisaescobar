CC := gcc
CFLAGS := -Wall
PROGRAMA := suma

.PHONY: all clean

all: $(PROGRAMA)

$(PROGRAMA): suma.c
	$(CC) $(CFLAGS) suma.c -o $(PROGRAMA)

clean:
	rm -f $(PROGRAMA)