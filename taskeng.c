//The program turns a number into a fraction by KeksovName v1.1
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<math.h>

int main()
{
	int wholepart,fractional;
	double number;
	printf("Enter the number\n");
	scanf("%Lf",&number);
	printf("You entered %Lf\n",number);
	int integer=number;
	double remaindernum=number-integer;
	int ten=10;
	int zero=0;
	int numberstozero=0;
	for(; remaindernum/1<10;)
	{
		remaindernum=remaindernum*ten;
		numberstozero++;
	}
	double temprem=remaindernum;
	temprem=temprem/1;
	if(temprem=!0)
	{
		remaindernum=remaindernum*ten;
		numberstozero++;
	}
	printf("Remainder whole =%g\n",remaindernum);
	wholepart=integer;
	fractional=remaindernum;
	int length(int n)   //code taken from Google
	{
		int l = 1;
		for (; n = n /10; ++l);
		return l;
	}
	int lengthnumbers = length(fractional);//next is mine
	printf("Fractional length =%d\n",numberstozero);
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
	printf("The numerator is ready and it is equal to %d\n",result);
	double biglengthnumbers=numberstozero;
	double bigdenominator=pow(10,numberstozero);
	int denominator=bigdenominator;
	printf("The denominator is ready and it is equal to %d\n",denominator);
	printf("Дробь равна %d/%d\n",result,denominator);
	int gcd(int a, int b)	//Euclidean algorithm
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
	int i = gcd(result,denominator);	//Euclidean algorithm, find the total number for division.
	printf("Total divisible number=%d\n", i);	//what is the number to make the numerator and denominator.
	if(i>0)
	{
		result=result/i;	//divide the numerator by the total number for division
		denominator = denominator / i;	//divide the denominator by the total number for division
	}
	printf("Reducing fractions\n");
	printf("%d/%d\n",result,denominator);
	if(result>denominator);
	{
		printf("Converting an improper fraction to a mixed number\n");
		int incomplete=result/denominator;
		int remainder=result%denominator;
		printf("We get %d %d/%d",incomplete,remainder,denominator);
	}
	return 0;
}
