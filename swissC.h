#ifndef SWISSC_H
#define SWISSC_H

// ==========================================
// 0. CHECKS (Fehlermeldige uf Schwiizerdütsch)
// ==========================================
#ifdef __cplusplus
#error "Hoppla, das isch kei SwissC, das isch C++!"
#endif

#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 201112L
#error "Din Compiler isch z'alt. SwissC bruucht mindestens C11 (probiers mit -std=c11)."
#endif

#if defined(__GNUC__) && !defined(__clang__) && __GNUC__ < 10
#error "Din GCC isch z'alt für Umlaut. Bruuchsch mindestens GCC 10."
#endif

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ==========================================
// 1. PROGRAMM-BASICS
// ==========================================
#define hauptteil           main
#define gits_zrugg          return
#define schluss_jetzt       return
#define fertig_luschtig     exit

// ==========================================
// 2. DATENTYPEN (TYPES)
// ==========================================
#define zahl                int
#define kommazüüg           float
#define gnauers_züüg        double
#define buechstabe          char
#define nüt                 void
#define logisch             bool
#define langi_zahl          long
#define churzi_zahl         short
#define ohni_vorzeiche      unsigned
#define ufzellig            enum
#define wg                  union

// ==========================================
// 3. KONTROLLSTRUKTUREN (LOGIC)
// ==========================================
#define falls               if
#define suscht              else
#define uswahl              switch
#define fall                case
#define standard            default
#define solangs             while
#define mach                do
#define für                 for
#define brich_ab            break
#define wiiter_gahts        continue
#define gang_go             goto

// ==========================================
// 4. LOGIK & WERTE
// ==========================================
#define ja_voll             true
#define chrüzfalsch         false
#define nüt_as_luft         NULL

// ==========================================
// 5. EIN- & AUSGABE (I/O)
// ==========================================
#define verzells            printf
#define los_mal             scanf
#define buechstabe_hole     getchar
#define buechstabe_schriibe putchar

// ==========================================
// 6. STRUKTUREN & SPEICHER
// ==========================================
#define päckli              struct
#define eigeti_art          typedef
#define wie_gross           sizeof
#define fixe_wärt           static
#define fix                 const
#define vo_dusse            extern
#define platz_haue          malloc
#define leere               free

// ==========================================
// 7. PRÜEFE
// ==========================================
// prüef_das(bedingig, "meldig") -> Fehler bim Kompiliere, wenn d'Bedingig falsch isch
#define prüef_das(bedingig, meldig) _Static_assert(bedingig, meldig)

prüef_das(wie_gross(zahl) >= 4, "Hoppla, e zahl isch uf dere Kiste z'chli!");

// ==========================================
// 8. OHNI UMLAUT (für alti Tastature)
// ==========================================
#define kommazueueg         kommazüüg
#define gnauers_zueueg      gnauers_züüg
#define nuet                nüt
#define fuer                für
#define chruezfalsch        chrüzfalsch
#define nuet_as_luft        nüt_as_luft
#define paeckli             päckli
#define fixe_waert          fixe_wärt
#define pruef_das           prüef_das

#endif
