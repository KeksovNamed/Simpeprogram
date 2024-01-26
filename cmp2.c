//Программа сравнивает 2 числа и указывает делится ли они друг на друга.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int number1,number2;
	printf("Введите два числа\n");
	scanf("%d %d",&number1,&number2);
	printf("Вы ввели %d %d\n",number1,number2);
	number1%number2==0?printf("Взаимно простые\n"):printf("Не взаимно простые");
}
