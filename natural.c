#include <stdio.h>
int main()
{
	int n,count,sum = 0;
	scanf("%d",&n);
	for(count=1; count<=n; count++)
	{
		sum=sum+count;
	}
	printf("%d",sum);
	return 0;
	
}
