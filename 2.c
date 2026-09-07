#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int N = 11;
	int K = 45;
		printf("Сейчас %d часов %d минут 00 секунд",N,K);
		getchar();
		printf("Идет %d минута суток", K);
		getchar();
		printf("До полуночи осталось %d часов и %d минут", N, K);
		getchar();
		printf("С 8.00 прошло %d секунд", K * 60);
		getchar();
		printf("Текущий час  = %f суток  и текущая минута = %f часа", N / 24., K / 60.);
	
	return 67;
}