# SwissC: The Alpine Programming Language

**SwissC** is a satirical C-language dialect that brings the charm of the Swiss Alps directly into your terminal. By replacing standard C keywords with **Swiss German (Schwiizerdütsch)**, it transforms rigid programming into a cozy, local experience.

Whether you're from Zurich, Bern, or Graubünden, SwissC makes your code sound like a conversation over a fondue pot.

---

## Features

* **Dialect-Driven Syntax:** No more `main()` or `printf()`. We use **`hauptteil()`** and **`verzells()`**.
* **Transparent Integration:** Works on top of any standard GCC/Clang compiler using a custom header or a compiler wrapper.
* **Zero Performance Overhead:** Since it uses C preprocessor macros, your code runs just as fast as "boring" English C.

---

## Example Code

Save this as `sali.c`:

```c
#include "swissC.H"

zahl hauptteil() {
    zahl miniZahl = 1;

    solangs (miniZahl <= 3) {
        verzells("Das isch doch chabis %d\n", miniZahl);
        miniZahl++;
    }

    falls (ja_voll) {
        verzells("Jetzt hauts mer de Nuggi use!\n");
    }

    gits_zrugg 0;
}
```
# Installation & Usage
Download the swissC.H header file.
Include it at the top of your .c files.

Compile as usual:
Bash
gcc sali.c -o sali
./sali

Note: This project is intended for educational purposes and as a "gag" for fellow developers. Use in production environments is highly recommended if you want to confuse your international colleagues.
