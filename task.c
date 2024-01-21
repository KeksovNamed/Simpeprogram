//Программа превращает число в дробь v1.2 by Keksovname
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<math.h>

int main()
{
	int wholepart,fractional;
	float number;
	printf("Введите число\n");
	scanf("%g",&number);
	printf("Вы ввели %g\n",number);
	int integer=number;
	float remaindernum=number-integer;
	int ten=10;
	int zero=0;
	int numberstozero=1;
	for(; remaindernum/1<100;)
	{
		remaindernum=remaindernum*ten;
		numberstozero++;
	}
	float nearestinteger=roundf(remaindernum);
	if(nearestinteger<remaindernum)
	{
		remaindernum=remaindernum*ten;
		numberstozero++;
	}
	printf("Остаток целое =%g\n",remaindernum);
	wholepart=integer;
	fractional=remaindernum;
	int length(int n)   //код взят из гугла
	{
		int l = 1;
		for (; n = n /10; ++l);
		return l;
	}
	int lengthnumbers = length(fractional);//дальше мой
	printf("Длина дробной части =%d\n",numberstozero);
	int result=10;
	int flag=0;
	for (int i = 0; i < lengthnumbers; i++)
	{

		result = ten*wholepart;
		if(flag<2)
		{
			flag=1;
		}

		if(flag<lengthnumbers)
		{
			ten=ten*10;
			++flag;
		}

	}
	result=result+fractional;
	printf("Числитель готов и он равен %d\n",result);
	double biglengthnumbers=numberstozero;
	double bigdenominator=pow(10,numberstozero);
	int denominator=bigdenominator;
	printf("Знаменатель готов и он равен %d\n",denominator);
	printf("Дробь равна %d/%d\n",result,denominator);
	int gcd(int a, int b)	//алгоритм Евклида
	{
		int c;
		while (b)
		{
			c = a % b;
			a = b;
			b = c;
		}

		return a;
	}
	int i = gcd(result,denominator);	//алгоритм Евклида,находим общее число для деления.
	printf("Общее делимое число=%d\n", i);	//чему равно число для делания числителя и знаменателя.
	if(i>0)
	{
		result=result/i;	//делим числитель на общее число для деления
		denominator = denominator / i;	//делим знаменатель на общее число для деления
	}
	printf("Сокращаем дроби\n");
	printf("%d/%d\n",result,denominator);
	if(result>denominator);
	{
		printf("Приводим неправильную дробь в смешанное число\n");
		int incomplete=result/denominator;
		int remainder=result%denominator;
		printf("Получаем %d %d/%d",incomplete,remainder,denominator);
	}
	return 0;
}
