#include "swissC.h"

ufzellig rechenart { PLUS = '+', MINUS = '-', MAL = '*', DUR = '/' };

zahl hauptteil(nüt) {
    gnauers_züüg a, b;
    buechstabe op;

    verzells("Rechnig igä (z.B. 3 + 4): ");
    falls (los_mal("%lf %c %lf", &a, &op, &b) != 3) {
        verzells("\nHäsch dich vertippt? Das verstah ich nöd.\n");
        gits_zrugg 1;
    }

    uswahl (op) {
        fall PLUS:  verzells("%g\n", a + b); brich_ab;
        fall MINUS: verzells("%g\n", a - b); brich_ab;
        fall MAL:   verzells("%g\n", a * b); brich_ab;
        fall DUR:
            falls (b == 0) {
                verzells("Dur null teile? Spinnsch?\n");
                gits_zrugg 1;
            }
            verzells("%g\n", a / b);
            brich_ab;
        standard:
            verzells("Das Zeiche '%c' kenn ich nöd.\n", op);
            gits_zrugg 1;
    }

    gits_zrugg 0;
}
