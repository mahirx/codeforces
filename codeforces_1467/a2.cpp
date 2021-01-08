#include <stdio.h>


int main(int argc, char const *argv[])
{
    long int t, i, k, m, j, l;
	long int n;
	scanf("%ld", &t);

	for (i = 1; i <= t; i++)
	{
		scanf("%ld", &n);

		m = n / 10;
		k = n % 10;
		l = 10;

		for (j = 1; j <= m; j++)
		{
			printf("9876543210");
		}

		for (j = 1; j <= k; j++)
		{
			l = l-1;
			printf("%ld", l);
		}

		printf("\n");
	}

	return 0;
}
