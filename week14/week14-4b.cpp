#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum=0;
	if(n==2) printf("2");
	for(int i=1;i<=n;i++){
		sum=sum+i;
		if(sum>n){
			printf("%d", i);
			break;
		}
	}
}
