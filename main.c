#include <stdio.h>
#include <math.h>

void kv(double d, double a,  double b,  double c)
{
		
}
int main()
{
    double d, a, b, c, x;

    printf ("wedite koeffizient 1\n");
    scanf ("%d", &a);

    printf ("wedite koeffizient 2\n");
    scanf ("%d", &b);

    printf ("wedite koeffizient 3\n");
    scanf ("%d", &c);

	d = sqrt(b * b - 4 * a * c);
	
	kv(d, a, b, c);
}