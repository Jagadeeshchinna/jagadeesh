include <stdio.h>
int main()
{
	int number;	

	printf("enter the number:\n");
	scanf("%d",&number);
	
	if(number>=0)
	printf("%d is positive number\n",number);
	else 
	printf("%d is negative number\n",number);
	
	return 0;
}
