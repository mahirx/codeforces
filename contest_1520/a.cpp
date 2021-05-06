#include <stdio.h>


int main()
{
	int i,j,n,t;

	scanf("%d", &t);
	printf(">>%d", t);

	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf(">>%d", n);

		char str[n];

		
		
		scanf("%s", str);
		// printf("%s\n", str);

		for (int j= 0; j < n; j++)
		{
			printf(">>%c\n", str[j]);
		}

		int temp = 0;


		for (int j= 0; j < n; j++)
		{
			for (int k = j+1; i < n; k++)
			{
				if (str[k] == str[j])
				{
					if (str[k] != str[k-1])
					{
						temp = 1;
						// printf("%d\n", temp);
						
					}
				}
			}
		}


		if (temp == 1)
		{
			printf("-------------------------->NO\n");
		}
		else{
			printf("-------------------------->YES\n");
		}


		// for (int j= 0; j < n; j++)
		// {
		// 	printf(">>%c\n", str[j]);
		// }


		
	}
	
}