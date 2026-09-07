#include <stdio.h>
#include <locale.h>

int main()
{
	int l = 2313;
	int n = 4;
	int k = 2;
	int m = 6;
	setlocale(LC_ALL, "RUS");
	printf("Дано:\n\t\t%10d\n\t\t%10d\n\t\t------",n,l);
	printf("\nОтвет:\n\t\t%+010.6f\n",1.0*n/l);
}