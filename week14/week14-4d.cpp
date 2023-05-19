#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i=10; i<=a*100000;i=i*10){
		printf("%d ",(a%10)*i/10);
		a=a/10;
	}
}
