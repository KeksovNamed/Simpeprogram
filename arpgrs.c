//Программа проверяет арифметическую прогрессию у чётырехзначного числа.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int number1,number2,number3,number4;
	printf("Введите чётырехзначное число,каждое число через пробел\n");
	scanf("%d %d %d %d",&number1,&number2,&number3,&number4);
	printf("Вы ввели %d %d %d %d\n",number1,number2,number3,number4);
	number3==number2+number1&&number4==number3+number2?printf("Образуют геометрическую прогрессию\n"):printf("Не образуют геометрическую прогрессию");
}
