# Makefile für SwissC
CC=gcc
CFLAGS=-Wall

# Das Ziel (dein fertiges Programm)
all: sali rechner

sali: sali.c swissC.H
  $(CC) $(CFLAGS) -o sali sali.c

rechner: rechner.c swissC.H
  $(CC) $(CFLAGS) -o rechner rechner.c

# Aufräumen: löscht die ausführbaren Dateien
clean:
  rm -f sali rechner
