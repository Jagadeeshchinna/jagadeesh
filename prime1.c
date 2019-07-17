#include<stdio.h>
int main()
{
int n,i,flag=1;
scanf("%d",&n);
for(i = 2;i <= n; i++)
{
	if(n%i==0)
	
    {
    	flag++;
	
	
	}	
}
if (flag == 2)
{
	printf("yes");
}
else
	printf("no");
	return 0;
	
}
