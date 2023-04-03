1


OBJS=list.c main.c
CC=gcc
TARGET=List

$(TARGET):$(OBJS)
	$(CC) $^ -o $@
clean:
	rm $(TARGET)
	
result:add.c main.c
	gcc add.c main.c -o result
clean:
	rm result
	rm *~