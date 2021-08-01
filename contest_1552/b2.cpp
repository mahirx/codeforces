#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);


	for (int limit = 1; limit <= t; limit++)
	{
		int n;
		scanf("%d", &n);


		int arr[7][n+2];


		for (int k = 1; k <= n; k++)
		{
			for (int l = 1; l <= 5; l++)
			{
				scanf("%d", &arr[k][l]);
			}
		}


		for (int k = 1; k <= n; k++)
		{
			for (int l = 1; l <= 5; l++)
			{
				printf("%d ", arr[k][l]);
			}
			printf("\n");
		}

		for (int k = 1; k <= n; k++)
		{
			int *p = &arr[k][1], *q = &arr[k][6];
			// sort(arr[k][1], arr[k][5]);
			sort(p, q);
		}



    	for (int k = 1; k <= n; k++)
		{
			for (int l = 1; l <= 5; l++)
			{
				printf(">%d ", arr[k][l]);
			}
			printf("\n");
		}


		int rr[n+2];

		long long sum;

		for (int k = 1; k <= 5; k++)
		{
			for (int l = 1; l <= n; l++)
			{
				
			}
			printf("\n");
		}

		
	}

	return 0;
}
