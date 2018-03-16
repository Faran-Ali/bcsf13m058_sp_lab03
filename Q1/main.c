#include<stdio.h>
#include "myMath.h"
int main()
{
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	z=isEqual( x, y);
	swap( &x, &y);
	printf("%d",z);
	printf("X is %d",x);
	printf("Y is %d",y);
	
}
