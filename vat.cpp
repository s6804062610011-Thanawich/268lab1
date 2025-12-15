#include <stdio.h>

int main () {
	float A, B, C, sum, sum1, sum2;
	scanf("%f %f %f" ,&A, &B, &C);
	
	sum = A * 0.95 * 1.07;
	printf("%.2f\n", sum);
	
	sum1 = (A + B)* 0.85 * 1.07;
	printf("%.2f\n", sum1);
	
	sum2 = (A + B + C)* 0.7 * 1.07;
	printf("%.2f\n", sum2);
