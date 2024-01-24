//Программа сравнивает два момент в часах минутах и секундах и также выводит разницу.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int hour,minute,seconds,hour2,minute2,seconds2,flagfull=0;
	printf("Введите два момента времени ч:м:с пробел и ч:м:c\n");
	scanf("%d:%d:%d %d:%d:%d",&hour,&minute,&seconds,&hour2,&minute2,&seconds2);
	scanf("Вы ввели %d:%d:%d %d:%d:%d",hour,minute,seconds,hour2,minute2,seconds2);
	int firstseconds=(hour*3600)+(minute*60)+seconds;
	printf("Первый момент в секундах =%d\n",firstseconds);
	int secondseconds=(hour2*3600)+(minute2*60)+seconds2;
	printf("Второй момент в секундах =%d\n",secondseconds);
	int result=secondseconds-firstseconds;
	printf("Разница в секундах=%d\n",result);
	if(result>=3600) {
		int tempresult=result/3600;
		int tempmresult2=result%3600;
		printf("%d=%d\n",tempresult,tempmresult2);
		int tempminute=tempmresult2/60;
		int tempseconds=tempmresult2%60;
		printf("Итоговая разница %d:%d:%d\n",tempresult,tempminute,tempseconds);
		flagfull=1;
	}
	if(flagfull==0) {
		if(result>=60) {
			int tempminute=result/60;
			int tempseconds=result%60;
			printf("Итоговая разница %d минут:%d секунд\n",tempminute,tempseconds);
		}
		if(result<60) {
			printf("Итоговая разница %d в секундах\n",result);
		}
	}
	return 0;
}