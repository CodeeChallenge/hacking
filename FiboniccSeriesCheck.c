#include <stdio.h>
int fun(int n)
{
	int a=0,b=1,next=0;
	while(next<=n)
	{
		if(next==n)
			return 1;
		a=b;
		b=next;
		next=a+b;
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=fun(n);
	printf("\n%d",res);
	return 0;
}