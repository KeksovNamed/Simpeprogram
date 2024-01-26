//Программа считает идеальный вес человека.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int height,weight;
	printf("Введите рост в сантиметрах и вес через пробел\n");
	scanf("%d %d",&height,&weight);
	printf("Вы ввели %d %d\n",height,weight);
	height-weight>=100?printf("Все впорядке,вес в норме\n"):printf("Вам нужно похудеть для идеального веса\n");
}
