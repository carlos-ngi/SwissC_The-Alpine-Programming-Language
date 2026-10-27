# SwissC: The Alpine Programming Language

[![Build](https://github.com/carlos-ngi/SwissC_The-Alpine-Programming-Language/actions/workflows/build.yml/badge.svg)](https://github.com/carlos-ngi/SwissC_The-Alpine-Programming-Language/actions/workflows/build.yml)

**SwissC** is a satirical C-language dialect that brings the charm of the Swiss Alps directly into your terminal. By replacing standard C keywords with **Swiss German (Schwiizerdütsch)**, it transforms rigid programming into a cozy, local experience.

Whether you're from Zurich, Bern, or Graubünden, SwissC makes your code sound like a conversation over a fondue pot.

---

## Features

* **Dialect-Driven Syntax:** No more `main()` or `printf()`. We use **`hauptteil()`** and **`verzells()`**.
* **Transparent Integration:** Works on top of any standard GCC/Clang compiler, either with `#include "swissC.h"` or through the `swissc` compiler wrapper.
* **Error Messages in Swiss German:** If something is off, your compiler tells you in proper Schwiizerdütsch.
* **Zero Performance Overhead:** Since it uses C preprocessor macros, your code runs just as fast as "boring" English C.

---

## Example Code

Save this as `sali.c`:

```c
#include "swissC.h"

zahl hauptteil(nüt) {
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

More examples are in the [`beispiele/`](beispiele) folder.

---

## Installation & Usage

### Option 1: Include the header

Download `swissC.h`, include it at the top of your `.c` file and compile as usual:

```bash
gcc -std=c11 sali.c -o sali
./sali
```

### Option 2: The `swissc` wrapper

The `swissc` script includes the header for you, so you don't need any `#include` in your code. All options are passed straight on to `gcc` (or whatever `$CC` is set to):

```bash
./swissc ohni_include.c -o ohni_include
./ohni_include
```

### Building the examples

```bash
make        # baut alli Biispiel
make test   # baut und lasst sie laufe
make clean  # ruumt uf
```

### Requirements

* A C11 compiler
* Umlauts in identifiers (`kommazüüg`, `päckli`, ...) need **GCC 10 or newer** or Clang. With MSVC, compile with `/utf-8`.
* No umlauts on your keyboard? Every keyword with an umlaut also has an ASCII version (`kommazueueg`, `paeckli`, `fuer`, ...).

---

## Keywords

| SwissC | C |
|---|---|
| `hauptteil` | `main` |
| `gits_zrugg` / `schluss_jetzt` | `return` |
| `fertig_luschtig` | `exit` |
| `zahl` / `langi_zahl` / `churzi_zahl` | `int` / `long` / `short` |
| `ohni_vorzeiche` | `unsigned` |
| `kommazüüg` / `gnauers_züüg` | `float` / `double` |
| `buechstabe` | `char` |
| `nüt` | `void` |
| `logisch` | `bool` |
| `ufzellig` | `enum` |
| `wg` | `union` |
| `falls` / `suscht` | `if` / `else` |
| `uswahl` / `fall` / `standard` | `switch` / `case` / `default` |
| `solangs` / `mach` / `für` | `while` / `do` / `for` |
| `brich_ab` / `wiiter_gahts` | `break` / `continue` |
| `gang_go` | `goto` |
| `ja_voll` / `chrüzfalsch` | `true` / `false` |
| `nüt_as_luft` | `NULL` |
| `verzells` / `los_mal` | `printf` / `scanf` |
| `buechstabe_hole` / `buechstabe_schriibe` | `getchar` / `putchar` |
| `päckli` | `struct` |
| `eigeti_art` | `typedef` |
| `wie_gross` | `sizeof` |
| `fixe_wärt` / `fix` / `vo_dusse` | `static` / `const` / `extern` |
| `platz_haue` / `leere` | `malloc` / `free` |
| `prüef_das` | `_Static_assert` |

### Compile-time checks

Use `prüef_das` to stop the build with your own message:

```c
prüef_das(wie_gross(langi_zahl) >= 8, "Hoppla, langi_zahl isch z'churz!");
```

Tip: keep these messages free of umlauts, GCC doesn't print them nicely.

---

Note: This project is intended for educational purposes and as a "gag" for fellow developers. Use in production environments is highly recommended if you want to confuse your international colleagues.
