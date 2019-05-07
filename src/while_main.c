#include <math.h>
#include <stdio.h>

int main()
{
	int k;
	double n;

	printf("Введите номер задания от 1 до 5: ");

	switch (k)
	{
	case 1:
	{
		printf("Задание 1\n ");
		int n;
		double a;
		printf("Введите число n:\n");
		scanf_s("%d", &n);
		a = summ(n);
		printf("Результат: %f\n", a);
		break;
	}
	case 2:
	{
		printf("Задание 2\n ");
		double a1;
		double eps;
		printf("Введите точность eps= ");
		scanf_s("%f", &eps);
		a1 = summ2(eps);
		printf("Результат: %4f\n", a1);
		break;
	}
	case 3:
	{
		printf("Задание 3\n ");
		int n1;
		int k;
		printf("Введите число n= ");
		scanf_s("%d", &n1);
		printf("Введите число k= ");
		scanf_s("%d", &k);
		print(n1, k);
		break;
	}
	case 4:
	{
		printf("Задание 4\n ");
		int i;
		double eps;
		printf("Введите точность eps= ");
		scanf_s("%f", &eps);
		i = findFirstElement(eps);
		printf("Результат: %d\n", i);
		break;
	}
	case 5:
	{
		printf("Задание 5\n ");
		int i1;
		double eps1;
		printf("Введите точность eps= ");
		scanf_s("%f", &eps1);
		i1 = findFirstNegativeElement(eps1);
		printf("Результат: %d\n", i1);
		break;
	}
	case 6:
	{
		printf("Такого задания не существует\n ");
		break;
	}
	default:
		break;
	}
	system("pause");
	return 0;
}

