# Définition Compilateur
CC = gcc


EXECUTABLE = main_bessala_23V2531


SOURCES = main_bessala_23V2531.c functions_bessala_23V2531.c


OBJETS = $(SOURCES:.c=.o)

all: $(EXECUTABLE)


$(EXECUTABLE): $(OBJETS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $< -o $@


clean:
	rm -f $(OBJETS)