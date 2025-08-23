CC = gcc
CFLAGS = -Wall -Wextra -pedantic -MMD -MP
EJERCICIO = ej1
TARGET = bin/$(EJERCICIO)
SRC = src/$(EJERCICIO).c
OBJ = obj/$(EJERCICIO).o

all: $(TARGET)

$(TARGET): $(OBJ)
		@mkdir -p bin
		$(CC) $(CFLAGS) $^ -o $@

obj/%.o: src/%.c
		@mkdir -p obj
		$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJ:.o=.d)

# run: $(TARGET)
# 	./$(TARGET)

clean:
		rm -rf obj bin

.PHONY: all clean