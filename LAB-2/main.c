#include <stdio.h>
#include "fraction.h"

int main() {
	int an, ad, bn, bd;
	scanf("%d%d", &an, &ad);
	scanf("%d%d", &bn, &bd);
	Fraction a = get_frac(an, ad);
	Fraction b = get_frac(bn, bd);
	// TODO: Implement Addition
	// Fraction add = addition(a, b);
	Fraction m = mult(a, b);
	printf("The product is %d/%d\n", m.num, m.denom);
	return 0;
}