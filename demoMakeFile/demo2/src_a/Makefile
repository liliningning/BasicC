OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=libMdiv.a 

$(TARGET):$(OBJ)
	$(AR) -r $(TARGET) $^

%.c:%.o
	$(CC) -c $^ -o $@

clean:
	$(RM) *.o $(TARGET) $(OBJ)	


show:
	@echo &(AR)