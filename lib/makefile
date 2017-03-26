target := hello.out
allobjc := $(shell ls *.c)
allobj := $(allobjc:.c=.o)
alldep := $(allobjc:.c=.d)
CC := gcc
		
all: $(target)

%.d: %.c
	$(CC) -MM $< > $@
-include $(alldep)

%.o: %.c
	$(CC) -c $<

$(target): $(allobj)
	$(CC) -o $@  $^

.POHONY clean:
	-rm *.o *.d $(target) 
