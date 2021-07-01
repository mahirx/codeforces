#include <stdio.h>


int main(int argc, char const *argv[])
{
	int t, n;
	int temp;

	scanf("%d", &t);


	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);


		int ara[n+5];


		for (int j = 1; j <= n+5; j++)
		{
			ara[j] = j;
		}


		for (int j = 1; j <= n; j = j + 2)
		{
			temp = ara[j];
			ara[j] = ara[j+1];
			ara[j+1] = temp;
		}

		if (n % 2 == 1)
		{
			ara[n] = ara[n+1];
			temp = ara[n];
			ara[n] = ara[n-1];
			ara[n-1] = temp;
		}


		for (int k = 1; k <= n; k++)
		{
			printf("%d ", ara[k]);
		}
		printf("\n");
	}
	return 0;
}