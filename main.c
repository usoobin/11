#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) 


int main(void)
{
	int i,sum,average;
	int grade[5];
	
	for (i=0; i<5; i++)
	{
		printf("grade[%i] =", i);
		scanf("%d",&grade[i]);
	}
	
	for (i = 0; i<5; i++)
	{
		printf("grade[%i] = %i\n",i,*(grade+i));
		sum = sum + *(grade+i);
		
	}
	
	printf("average = %i", sum/5);
	
}
