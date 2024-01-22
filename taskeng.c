//The program turns a number into a fraction v1.3 by Keksovname
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<math.h>

int main() {
	int wholepart,fractional,number;
	int fraction;
	printf("Enter the number.fractional part\n");
	scanf("%d.%d",&number,&fraction);
	printf("You entered %d %d\n",number,fraction);

	printf("Remainder whole =%d\n",fraction);
	wholepart=number;
	fractional=fraction;
	int length(int n) { //code taken from Google
		int l = 1;
		for (; n = n /10; ++l);
		return l;
	}
	int lengthnumbers = length(fraction);;//next is mine
	int numberstozero=lengthnumbers;
	printf("Fractional length =%d\n",numberstozero);
	int result=10;
	int flag=0;
	int ten=10;
	for (int i = 0; i < lengthnumbers; i++) {

		result = ten*wholepart;
		if(flag<2) {
			flag=1;
		}

		if(flag<lengthnumbers) {
			ten=ten*10;
			++flag;
		}

	}
	result=result+fractional;
	printf("The numerator is ready and it is equal to %d\n",result);
	double biglengthnumbers=numberstozero;
	double bigdenominator=pow(10,numberstozero);
	int denominator=bigdenominator;
	printf("Enter the number of leading zeros before number(0) if there are none\n");
	int leadingzeros=0;
	scanf("%d",&leadingzeros);
	if(leadingzeros==0) {
	}
	if(leadingzeros>=1) {
		double bigleadingzero=leadingzeros;
		double bigtemplead=pow(10,bigleadingzero);
		leadingzeros=bigtemplead;
		denominator=denominator*leadingzeros;
	}
	printf("The denominator is ready and it is equal to %d\n",denominator);
	printf("The fraction is equal to %d/%d\n",result,denominator);
	int gcd(int a, int b) {	//Euclidean algorithm
		int c;
		while (b) {
			c = a % b;
			a = b;
			b = c;
		}

		return a;
	}
	int i = gcd(result,denominator);	//Euclidean algorithm, find the total number for division.
	printf("Total divisible number=%d\n", i);	//what is the number to make the numerator and denominator.
	if(i>0) {
		result=result/i;	//divide the numerator by the total number for division
		denominator = denominator / i;	//divide the denominator by the total number for division
	}
	printf("Reducing fractions\n");
	printf("%d/%d\n",result,denominator);
	if(result>denominator);
	{
		printf("Converting an improper fraction to a mixed number\n");
		int incomplete=result/denominator;
		int remainder=result%denominator;
		if(incomplete==0) {
			printf("We get %d/%d",remainder,denominator);
		}
		if(incomplete>=1) {
			printf("We get %d %d/%d",incomplete,remainder,denominator);
		}
	}
	return 0;
}
