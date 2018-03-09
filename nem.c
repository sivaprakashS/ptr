#include <stdio.h>
int main(void) 
{
	int s;
	scanf("%d",&s);
	s+=1;
	while(s%10!=0)
	{
		s=s+1;
	}
	printf("\s%d",s);
	return 0;
}
