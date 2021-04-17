#include <stdio.h>


int main(int argc, char const *argv[])
{
	int t, n;
	scanf("%d", &t);


	int i,j;


	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		int ara[n];
		
		for ( j = 0; j < n; j++)
		{
			scanf("%d", &ara[j]);
		}


		// for ( j = 0; j < n; j++)
		// {
		// 	printf("%d", ara[j]);
		// }


		for ( j = 0; j < n; j++)
		{
			if (ara[j] % 2 == 1)
			{
				printf("%d ", ara[j]);
			}
		}

		for ( j = 0; j < n; j++)
		{
			if (ara[j] % 2 == 0)
			{
				printf("%d ", ara[j]);
			}
		}

		printf("\n");






	}
	return 0;
}