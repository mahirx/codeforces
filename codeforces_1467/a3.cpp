#include <stdio.h>


int main(int argc, char const *argv[])
{
    long int t, i, k, m, j;
	long int n;
	scanf("%ld", &t);

	for (i = 1; i <= t; i++)
	{
		scanf("%ld", &n);

		m = n / 10;
		k = n % 10;
		

		for (j = 1; j <= m; j++)
		{
			printf("9876543210");
		}

		if (k == 1)
		{
			printf("9");
		}

		else if (k == 2)
		{
			printf("98");
		}

		else if (k == 3)
		{
			printf("987");
		}

		else if (k == 4)
		{
			printf("9876");
		}

		else if (k == 5)
		{
			printf("98765");
		}

		else if (k == 6)
		{
			printf("987654");
		}

		else if (k == 7)
		{
			printf("9876543");
		}

		else if (k == 8)
		{
			printf("98765432");
		}

		else if (k == 9)
		{
			printf("987654321");
		}


		printf("\n");
	}

	return 0;
}
