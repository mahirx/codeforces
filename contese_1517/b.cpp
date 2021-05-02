#include <stdio.h>



int main(int argc, char const *argv[])
{
	int t, n, m;
	scanf("%d", &t);


	// int ara[100][100];

	char temp;

	int test;

	int i, j, k;
	int labib;


	for (test = 1; test <= t; test++)
	{
		scanf("%d %d", &n, &m);
		int ara[n][m];


		

		for (i = 0; i < n; i++)
		{
			j=0;
			do { 
      		scanf("%d%c", &ara[i][j], &temp); 
      		j++; 
  			} while(temp != '\n');
		}



		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf("%d -->  %d %d\n", ara[i][j], i, j);
			}
		}


		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				for (k = j+1; k < m; k++)
				{
					if (ara[i][j] < ara[i][k])
					{
						labib = ara[i][j];
						ara[i][j]= ara[i][k];
						ara[i][k] = labib;
					}
				}
			}
		}




		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf("%d ", ara[i][j]);
			}
			printf("\n");
		}



	}
	return 0;
}