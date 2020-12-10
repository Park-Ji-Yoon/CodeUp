#include <stdio.h>
void main(void)
{
	char a[20];
	printf("");
	scanf("%s", &a);
	for (int i = 0; a[i]!='\0'; i++) {
		printf("\'%c\'\n",a[i]);
	}
}
