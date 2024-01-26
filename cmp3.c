//Программа сравнивает 3 числа.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int number1,number2,number3;
	printf("Введите три числа\n");
	scanf("%d %d %d",&number1,&number2,&number3);
	printf("Вы ввели %d %d %d\n",number1,number2,number3);
	int i=number1>number2?(number1>number3?number1:number3):(number2>number3?number2:number3);
	printf("Максимум =%d",i);
}
