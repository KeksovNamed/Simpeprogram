/* Программа считает число и пишет его вразрядку с пробелами между цифрами */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
	unsigned int summa;
	printf("Введите сумму\n");
	scanf("%d",&summa);
	printf("Вы ввели %d\n",summa);
	int length(int n)   //код взят из гугла
	{
		int l = 1;
		for (; n /= 10; ++l);
		return l;
	}

	int lengthnumbers = length(summa);
	int final = 0;
	int one=1;
    double onetemp = pow(10,lengthnumbers-1);
    one=onetemp;
    int tmpfinal = 0;
    int count1=0;
    int newfinal=0;
    for (count1; count1 < lengthnumbers; ++count1)
    {
        final = summa / one % 10;
        printf("%d",final);
        printf(" ");
        newfinal = newfinal + final;
        one = one / 10;
    }
	return 0;
}