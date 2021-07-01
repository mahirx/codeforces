#include <stdio.h>



int main()
{
	int t, n, holder;
	scanf("%d", &t);


	int j, k, l; 


	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		holder = 0;


		int ara[n+2];

		for (j = 1; j <= n; j++)
		{
			scanf("%d", &ara[j]);
		}


		for (k = 1; k <= n-1; k++)
		{
			for (l = k+1; l <= n; l++)
			{
				if (ara[k]*ara[l] == (k+l))
				{
					holder = holder + 1;
				}
			}
		}


		printf("%d\n", holder);

	}
	return 0;
}
