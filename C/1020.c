#include <stdio.h>
void main(void)
{
	int year=0, month=0, day=0, zen=0, area=0,ara=0;
	printf("");
	scanf("%2d%2d%2d - %2d%2d%3d", &year, &month, &day, &zen, &area, &ara);
	printf("%02d%02d%02d%02d%02d%03d", year, month, day, zen, area, ara);
}
