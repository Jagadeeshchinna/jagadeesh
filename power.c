#include <stdio.h>
int main()
{
int a,b,n=1;
scanf("%d",&a);
scanf("%d",&b);
int i=1;
while(i<=b)
{
	n=n*a;
	i++;
}
printf("%d^%d = %d",a,b,n);
return 0;

}
