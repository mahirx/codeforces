#include <stdio.h>


int main(int argc, char const *argv[])
{
	int t, n, j, j1, j2;


	scanf("%d", &t);


	for (int i = 1; i <= t; i++)
	 {
	 	scanf("%d", &n);
		char ara[n];
		int a[n];
		int sum=0;


		scanf("%s", ara);
		// printf("%s", ara);


		// for ( j = 0; j < n; j++)
		// {
		// 	printf("%c\n", ara[j]);
		// }

		for ( j = 0; j < n; j++)
		{
			if (ara[j] == 'T')
			{
				a[j]=1;
			}

			else
			{
				a[j]=0;
			}

		}


		for ( j = 0; j < n; j++)
		{
			printf("%d", a[j]);
		}
		printf("\n");









		for ( j = 0; j < n; j++)
		{
			printf("%d", a[j]);
		}
		printf("\n");



 
	 } 
	return 0;
}