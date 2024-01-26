//Программа сравнивает 2 числа.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int number1,number2;
	int flag=0;
	printf("Введите два числа\n");
	scanf("%d %d",&number1,&number2);
	printf("Вы ввели %d %d\n",number1,number2);
	int ch=number1>number2?printf("%d>%d\n",number1,number2)
	       :number1==number2?printf("%d=%d\n",number1,number2):
	       printf("%d<%d",number1,number2);
	return 0;
}
