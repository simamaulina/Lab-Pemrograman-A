#include<stdio.h>
const double e = 2.71;


int main()
{
	int N = 0;
	
	char Alphabet = 'A';
	printf("%c\n", Alphabet);
	
	N++;
	printf("%d\n", N);
	++N;
	printf("%d\n", N);
	N--;
	printf("%d\n", N);
	--N;
	printf("%d\n", N);
	
	int a = 2, b = 3;
	float c = (float) a / (float) b;
	printf("hasil bagi 2 dari 3 adalah %.2f", c);
	return 0;
	
	
	
}
