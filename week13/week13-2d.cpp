#include <stdio.h>
#include <math.h>
int main()
{
	int a,b=0,c=0;
	scanf("%d",&a);
	while(a!=0){
		b+=(a%10)*pow(2,c);
		c++;
		a/=10;
	}
	printf("%d\n",b);
}
