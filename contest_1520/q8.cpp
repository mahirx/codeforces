#include <stdio.h>
#include <math.h>

long long int fractorization(long long int x)
{
	long long int sum=1;
	for (int i = 1; i <= x; i++)
	{
		sum=sum*i;
	}
}



int main(int argc, char const *argv[])
{
	long long int labib, iVar, fVar;

	for (int i = 1; i <= 50; i++)
	{
		labib = fractorization((i*i)-1)/pow(fractorization(i),i);
    	
		fVar=sqrt((double)labib);
    	iVar=fVar;

 
    	if(iVar==fVar)
        printf("%lld is a perfect square.",labib);
    	else
        printf("%lld is not a perfect square.",labib);
	}
	return 0;
}