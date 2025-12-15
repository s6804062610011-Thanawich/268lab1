#include <stdio.h>

int main () {
	float A, B, C, sum, sum1, sum2;
	scanf("%f %f %f" ,&A, &B, &C);
	sum = A * 0.95;
	printf("%.2f\n", sum);
	sum1 = (A + B)*0.85;
	printf("%.2f\n", sum1);
	sum2 = (A + B + C)*0.7;
	printf("%.2f\n", sum2);
}
