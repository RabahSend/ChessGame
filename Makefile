CC = g++
CFLAGS = -Wall -std=c++17 -Iinclude
LDLIBS = -lsfml-graphics -lsfml-window -lsfml-system
SRC = $(wildcard source/*.cpp)
OBJ = $(SRC:source/%.cpp=obj/%.o)
TARGET = chess

all: $(TARGET)

obj:
	mkdir -p obj

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

obj/%.o: source/%.cpp | obj
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) $(TARGET)
