#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ 
	float a, b, h, s;
	scanf("%f%f%f", &a, &b, &h);
	s = (a + b) * h / 2;
	print("%f", s);
	return 0;


}
