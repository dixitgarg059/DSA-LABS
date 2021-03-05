#ifndef __LIB_FRACTIONS_H
#define __LIB_FRACTIONS_H

struct Fraction {
	int num;
	int denom;
};
typedef struct Fraction Fraction;

Fraction mult(Fraction, Fraction);
Fraction get_frac(int, int);

#endif