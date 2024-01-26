//Программа показывает выходной или нет.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int day;
	printf("Введите день недели\n");
	scanf("%d",&day);
	printf("Вы ввели %d\n",day);
	day<=5?printf("Рабочий день\n"):printf("Выходной!Отдыхаем =)\n");
	return 0;
}
