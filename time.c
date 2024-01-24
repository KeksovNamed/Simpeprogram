//Программа переводит время в секунды.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int hour,minute,seconds;
	printf("Введите время в формате ч:м:с\n");
	scanf("%d:%d:%d",&hour,&minute,&seconds);
	printf("Вы ввели %d:%d:%d\n",hour,minute,seconds);
	seconds=(hour*3600)+(minute*60)+seconds;
	printf("Секунд =%d",seconds);
	return 0;
}