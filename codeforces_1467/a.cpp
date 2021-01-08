#include <stdio.h>


int main(int argc, char const *argv[])
{
	int t, i, k;
	long int n, j;
	scanf("%d", &t);


	for (i = 1; i <= t; i++)
	{
		scanf("%ld", &n);

		k = 10;
		for (j = 1; j <= n; j++)
		{
			if (k == 0)
			{
				k=10;
			}
			k = k-1;
			printf("%d", k);
		}

		printf("\n");
	}


	return 0;
}