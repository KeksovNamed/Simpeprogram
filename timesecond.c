//Программа переводит секунды во время.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int hour,minute,seconds;
	printf("Введите время в секундах\n");
	scanf("%d",&seconds);
	printf("Вы ввели %d\n",seconds);
	int wholehour=seconds/3600;
	int remainderhour=seconds%3600;
	int wholeminute=remainderhour/60;
	int remainderminute=remainderhour%60;
	seconds=remainderminute;
	printf("Часов полных =%d остаток %d\n",wholehour,remainderhour);
	printf("Минут =%d\n",wholeminute);
	printf("Полное время равно %d:%d:%d",wholehour,wholeminute,seconds);
	return 0;
}