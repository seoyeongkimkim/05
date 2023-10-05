#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=32;
	int num;
	int trial=0;
	
	do
	{
		printf("Guess a number: ");
		scanf("%d", &num);
		
		if(num<answer)
		printf("low!");
		
		else if(num>answer)
		printf("high!");
		
		trial=trial+1;
	}
	while(num!=answer);
	
	printf("congratulation! trial:%d\n", trial);
	
	
	return 0;
}
