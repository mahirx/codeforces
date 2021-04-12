#include <stdio.h>


int main(int argc, char const *argv[])
{
	int t, i, j, n, count, l;
	scanf("%d", &t);
	// printf(">>%d\n", t);


	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		// printf(">>%d\n", n);

		count = 0;
// 
		for (j = 1; j <= n; j++)
		{
			scanf("%d", &l);
			if (l == 1 || l == 3)
			{
				count=count+1;
			}
			
		}

		printf(">>%d\n", count);
	}

	return 0;
}