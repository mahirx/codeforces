#include <stdio.h>
#include <math.h>



int final(int num)
{
	int iVar;
	float fVar;
	fVar=sqrt((double)num);
	iVar=fVar;
	if(iVar==fVar){
		printf("YES");
		return 1;
	}
	
	else{
		printf("NO",num);
		return 0;
	}
	
}


int cutter(int x)
{
	while((x%2) != 1){
		x=x/2;
	}

	return x;
}


int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%d\n", final(cutter(n)));
	return 0;
}