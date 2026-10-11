#include <stdio.h>
#include <math.h>

int main (void)
{
	float height;
	float base;
	float area;

	printf ("Enter area of the sail : ");
	scanf ("%f",&area);

	height = sqrt( 3 * area);
	base = ( 2 * height)/ 3;

	printf("Height of the sail %2f meters\n", height);
	printf("Base of the sail %2f meters", base);

	return 0;
}
