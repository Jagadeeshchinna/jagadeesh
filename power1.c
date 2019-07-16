#include <stdio.h>
int main()
{
int a,b,n=1;
scanf("%d %d",&a,&b);
int i=1;
while(i<=b)
{
	n=n*a;
	i++;
}
printf("%d",n);
return 0;

}
