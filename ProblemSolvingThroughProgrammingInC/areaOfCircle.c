#include<stdio.h>
#define PI 3.1415296

int main()
{
	float area, radius;
	float myfunc(float radius);

	scanf("%f", &radius);
	area = myfunc(radius);

	printf("\nThe area is %f\n", area);
}

float myfunc(float r)
{
	int a;
	a = r * r * PI;
	return (a);
}