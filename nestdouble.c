int main(){
	int num;
	printf("enter the number");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
		printf(" %d,%d\n",j,i);
        }
}
	
	return 0;
}
