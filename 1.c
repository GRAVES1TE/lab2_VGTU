#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("123\n"); // подзадание 2
	getchar();
	printf("1\n2\n3\n"); // подзадание 2
	getchar();
	printf("1\n\t2\n\t\t3"); //подзадание 3
	getchar();
	printf("%d",1,2,3,4);//подзадание 4
	getchar();
	printf("%10.5f\n",12.234657); //подзадание6
	getchar();
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);// подзадание 8-9
	getchar();
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);// подзадание 10
	return 0;
}