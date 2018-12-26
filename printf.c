#include<stdio.h>
#include<stdlib.h>

void main()
{
	unsigned char ch1 = 255;
	signed char ch2 = -128;
	printf("%hhd,%hhu,%hho,%hhx", ch2, ch1, ch1, ch1);
	unsigned short sh1 = 65535;
	signed short sh2 = -32767;
	printf("\n%hd,%hu,%ho,%hx", sh2, sh1, sh1, sh1);
	unsigned long long1 = 4294967295;
	signed long long2 = -2147483647;
	printf("\n%ld,%lu,%lo,%lx", long2, long1, long1, long1);
	unsigned long long llong1 = 4556567678776;
	signed long long llong2 = -26778;
	printf("\n%lld,%llu,%llo,%llx", llong2, llong1, llong1, llong1);
	long double ld = 1271827;
	printf("\n%lf,%LF,%le,%LE,%lg,%LG", ld, ld, ld, ld, ld, ld);




	getchar();
}