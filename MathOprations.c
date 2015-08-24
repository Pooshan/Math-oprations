#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main(void)
{
	puts("Mathematical expressions");
	puts("------------------------");

	//Find the area of circle

	float radius = 5.0;
	float area;

	// 2
	// A = PI*Radius
	area = PI*radius*radius;
	printf("A circle with radius %f has area %f\n", radius,area);

	puts("------- Solving a quadratic equations --------------");

	// Find the two real roots of quadratic equation
	//  2
	// ax + bx + c = 0;

	float a=2;
	float b=7;
	float c=4;
	float discriminant = sqrt(b*b - 4*a*c); // The value must be positive or real number
	float root1 = (-b+discriminant)/(4*a);
	float root2 = (-b - discriminant)/(4*a);

	printf("root1, %f\n",root1);
	printf("root2, %f\n",root2);

	puts("------ The volume of a cylinder -------");

	//Find the volume V of a Cylinder given the radius of the base R
	//and the height h
	// V = PI*R*h

	float R=12.375;
	float h=10.03;
	float volume=PI*R*R*h;
	printf("the volume is: %f", volume);




}
