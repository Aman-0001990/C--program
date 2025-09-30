#include<stdio.h>
int swap(int *a, int *b){
	 int temp=*a;
	*a=*b;
	*b=temp;
	return 0;
	
}
int main(){
	int a,b,temp;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);
/*	temp=*a;
	*a=*b;
	b=temp;/
	printf("%d %d",a,b);*/
	return 0;
}

