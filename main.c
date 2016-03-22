#include <stdio.h>
#include <math.h>

void kv(double d, double a,  double b,  double c)
{
	if (d >= 0)
    {
        if (d > 0)
        {
            printf("x 1 = %d", (-b - d) / 2 * a);
            printf("x 2 = %d", (-b + d) / 2 * a);
        }

        printf("x = %d", (-b / 2 * a);
    }

    printf("net recheni");
	
}
int main()
{
    double d, a, b, c, x;

    printf("wedite koeffizient 1\n");
    scanf("%d", &a);

    printf("wedite koeffizient 2\n");
    scanf("%d", &b);

    printf("wedite koeffizient 3\n");
    scanf("%d", &c);

	d = sqrt(b * b - 4 * a * c);
	
	kv(d, a, b, c);
}