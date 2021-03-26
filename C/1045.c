#include <stdio.h>
void main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f\n", (double)a / (double)b);
}
