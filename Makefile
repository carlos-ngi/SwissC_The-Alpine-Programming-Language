# Makefile für SwissC
CC=gcc
CFLAGS=-Wall

# Das Ziel (dein fertiges Programm)
all: sali rechner

sali: sali.c schwiiz.h
  $(CC) $(CFLAGS) -o sali sali.c

rechner: rechner.c schwiiz.h
  $(CC) $(CFLAGS) -o rechner rechner.c

# Aufräumen: löscht die ausführbaren Dateien
clean:
  rm -f sali rechner
