AS = lcc -c
CC = lcc -Wa-l -Wm-yc -DCGB

BIN = trans.gbc
OBJS = trans.o

all: $(BIN)

%.s: %.ms
	maccer -o $@ $<

$(BIN): $(OBJS)
	$(CC) -o $(BIN) $(OBJS)

clean:
	rm -f *.o *.gbc *.lst *.map *.asm *.sym *.ihx