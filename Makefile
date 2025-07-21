#CFLAGS=-Wall -g 

# 编译器
CC = gcc
# 编译选项
CFLAGS = -Wall -g
# 目标可执行文件
TARGET = my_app
# 源文件
SRCS = main.c
# 目标文件
OBJS = $(SRCS:.c=.o)

# 默认目标
all: $(TARGET)

# 生成可执行文件
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# 生成目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)
	