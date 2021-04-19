#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	int t, n, num;
	scanf("%d", &t);

	int iVar;
	float fVar;

	int j;


	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		int a[n];
		num = 1;

		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[j]);
			num = num * a[j];
		}


		fVar=sqrt((double)num);
		iVar=fVar;
		if(iVar==fVar)
		printf("NO");
		else
		printf("YES\n");




	}
	return 0;
}