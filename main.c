#include <stdio.h>
#include <math.h>

void kv(double d, double a,  double b,  double c)
{
	if (d == 0)
		printf("x = %lf", -b / (2 * a));

	if (d > 0)
	{
		printf("x1 = %lf\n", (-b - sqrt(d)) / 2 * a);
		printf("x2 = %lf", (-b + sqrt(d)) / 2 * a);
    }

	if (d < 0)
		printf("net recheni");
}

int main()
{
    double d, a, b, c;

    printf("wedite koeffizient 1\n");
    scanf("%lf", &a);

    printf("wedite koeffizient 2\n");
    scanf("%lf", &b);

    printf("wedite koeffizient 3\n");
    scanf("%lf", &c);

	d = b * b - 4 * a * c;
	
	kv(d, a, b, c);
	
	return 0;
}