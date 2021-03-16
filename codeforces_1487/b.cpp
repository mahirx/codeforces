#include <stdio.h>


int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	printf("%d\n", t);


	int n, k;



	for(int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		scanf("%d", &k);


		if (n % 2 == 0)
		{
			if (k % n != 0)
			{
				printf("%d\n", k%n);
			}

			else 
			{
				printf("%d\n", n);
			}
		}


		else
		{
			
		}

	}
	return 0;
}