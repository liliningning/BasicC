#生成动态库
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=libMyadd.so


$(TARGET):$(OBJ)
	$(CC) -shared -fPIC $^ -o $@
# 发布 
	sudo cp $(TARGET) /usr/lib/

%.o:%.c
	$(CC) -c $^ -o $@

clean:
	$(RM) *.o $(TARGET) $(OBJ)
	sudo $(RM) /usr/lib/libMyadd.so 

#打印
show:
	@echo /usr/lib/$(TARGET)

