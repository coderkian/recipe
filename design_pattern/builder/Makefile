TARGET=main

CC=g++
MAKE=make

RM = -rm -rf

CFLAGS+=-Wall -std=c++11 

SRCS=$(wildcard *.cpp)
OBJS=$(SRCS:%.cpp=%.o)

all:$(TARGET)  

$(TARGET):$(OBJS)
	$(CC)  -o  $@ $^ $(LDFLAGS)

$(OBJS):%.o:%.cpp
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	$(RM) $(TARGET) $(OBJS) 
