#include <stdio.h>
int main()
{
	int a[10],n,c=0,s=0;
	for(int i=0;i<10;i++){
	scanf("%d",&a[i]);
	s++;
	if(a[i]==0)break;
	}
	scanf("%d",&n);
	for(int i=0;i<s;i++){
	if(a[i]==n)c++;
	}
	printf("%d\n",c);
}
