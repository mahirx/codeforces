#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int t;
	int n;
	int q;


	scanf("%d", &t);


	for (int j = 1; j <= t; j++)
	{
		scanf("%d", &n);
		q = 0;


		for (int i = 1; i <= sqrt(n); i++)
			{
				if (n%i == 0)
				{
					q++;
				}
			}

		printf("%d\n", sqrt(n));

		if (sqrt(n) == 1)
			{
				printf("%d\n", q-1);
			}

		else{
			printf("%d\n", q);
		}	
	}
	return 0;
}