#include <stdio.h>
int main()
{
int n,reversedinteger = 0,remainder,originalinteger;
scanf("%d",&n);
originalinteger = n;
while(n != 0)
{
	remainder = n%10;
	reversedinteger = reversedinteger*10 + remainder;
	n /= 10;
}
if(originalinteger == reversedinteger)
printf("yes");
else
printf("no");
return 0;

}
