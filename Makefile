# Makefile für SwissC
CC     = gcc
CFLAGS = -std=c11 -Wall -Wextra -I.

# Die fertige Programm
all: sali rechner ohni_include

sali: beispiele/sali.c swissC.h
	$(CC) $(CFLAGS) -o $@ $<

rechner: beispiele/rechner.c swissC.h
	$(CC) $(CFLAGS) -o $@ $<

# Das Biispiel het kei #include, drum lauft das übers swissc-Skript
ohni_include: beispiele/ohni_include.c swissC.h swissc
	CC=$(CC) ./swissc -Wall -Wextra -o $@ $<

# Churz teste ob alles lauft
test: all
	./sali
	echo "6 * 7" | ./rechner
	./ohni_include

# Ufruume: löscht die fertige Programm
clean:
	rm -f sali rechner ohni_include

.PHONY: all test clean
