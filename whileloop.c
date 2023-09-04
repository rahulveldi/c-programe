#include<stdio.h>
int main()
{
	int  i = 1;
	int num;
	int sum =0;
	   printf("enter number to perform sum");
		scanf("%d",&num);
		while(i<=num){
			sum+=i;
			i++;
		}
		printf("sum is %d",sum);
		return 0;
	}

