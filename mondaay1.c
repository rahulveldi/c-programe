#include<stdio.h>
int main() {
	char name[]= "rahul";
	char gender= 'M';
	float sub1=10,sub2 = 20, sub3 = 30, sub4 = 40, sub5 = 50;
	float total= sub1+sub2+sub3+sub4+sub5;
	float percentage = (total*100/500);
	printf("name %s,\n gender %c,\n percentage %f,\n ", name,gender,percentage); 
	return  0;
}
