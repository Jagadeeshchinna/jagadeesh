#include <stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a<0){
		printf("Negative");
}else
if(a==0){
	printf("Zero");
}else
if(a>0){
	printf("Positive");
}return 0;
}
