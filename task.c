//Программа превращает число в дробь v1.3 by Keksovname
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<math.h>

int main() {
	int wholepart,fractional,number;
	int fraction;
	printf("Введите число.дробную часть\n");
	scanf("%d.%d",&number,&fraction);
	printf("Вы ввели %d %d\n",number,fraction);

	printf("Остаток целое =%d\n",fraction);
	wholepart=number;
	fractional=fraction;
	int length(int n) { //код взят из гугла
		int l = 1;
		for (; n = n /10; ++l);
		return l;
	}
	int lengthnumbers = length(fraction);;//дальше мой
	int numberstozero=lengthnumbers;
	printf("Длина дробной части =%d\n",numberstozero);
	int result=10;
	int flag=0;
	int ten=10;
	for (int i = 0; i < lengthnumbers; i++) {

		result = ten*wholepart;
		if(flag<2) {
			flag=1;
		}

		if(flag<lengthnumbers) {
			ten=ten*10;
			++flag;
		}

	}
	result=result+fractional;
	printf("Числитель готов и он равен %d\n",result);
	double biglengthnumbers=numberstozero;
	double bigdenominator=pow(10,numberstozero);
	int denominator=bigdenominator;
	printf("Введите количество незначащих нулей перед число(0) если таких нету\n");
	int leadingzeros=0;
	scanf("%d",&leadingzeros);
	if(leadingzeros==0) {
	}
	if(leadingzeros>=1) {
		double bigleadingzero=leadingzeros;
		double bigtemplead=pow(10,bigleadingzero);
		leadingzeros=bigtemplead;
		denominator=denominator*leadingzeros;
	}
	printf("Знаменатель готов и он равен %d\n",denominator);
	printf("Дробь равна %d/%d\n",result,denominator);
	int gcd(int a, int b) {	//алгоритм Евклида
		int c;
		while (b) {
			c = a % b;
			a = b;
			b = c;
		}

		return a;
	}
	int i = gcd(result,denominator);	//алгоритм Евклида,находим общее число для деления.
	printf("Общее делимое число=%d\n", i);	//чему равно число для делания числителя и знаменателя.
	if(i>0) {
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
		if(incomplete==0) {
			printf("Получаем %d/%d",remainder,denominator);
		}
		if(incomplete>=1) {
			printf("Получаем %d %d/%d",incomplete,remainder,denominator);
		}
	}
	return 0;
}
