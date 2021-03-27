#include <stdio.h>
void main(void) {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	int sum = num1 + num2 + num3;
	double average = sum/3.0;
	printf("%d\n", sum);
	printf("%.1f", average);
}
