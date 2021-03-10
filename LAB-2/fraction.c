#include "fraction.h"

int getgcd(int a, int b) {
	if(b==0) return a;
	return getgcd(b, a%b);
}

Fraction reduce(Fraction f) {
	int gcd = getgcd(f.num, f.denom);
	f.num /= gcd;
	f.denom /= gcd;
	return f;
}

Fraction get_frac(int num, int denom) {
	Fraction frac;
	frac.num = num;
	frac.denom = denom;
	frac = reduce(frac);
	return frac;
}

Fraction mult(Fraction a, Fraction b) {
	Fraction frac;
	frac.num = a.num * b.num;
	frac.denom = a.denom * b.denom;
	frac = reduce(frac);
	return frac;
}