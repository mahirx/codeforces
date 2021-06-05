#include <stdio.h>



int main(int argc, char const *argv[])
{
	int t;
	char ara[11];

	scanf("%d", &t);


	for (int i = 1; i <= t; i++)
	{
		
		// for (int j = 0; j <= 10; j++)
		// {
		// 	ara[j] = 'b';
		// }


		scanf("%s", ara);
		// printf("%s", ara);

		int h = 0;

		for (int j = 0; j < 11; j++)
		{
			if (ara[j] == 'a' || ara[j] == 'e' || ara[j] == 'i' || ara[j] == 'o' || ara[j] == 'u')
			{
				h = 1;
				break;
			}
		}

		if (h == 0)
		{
			printf("No\n");
		}
		else{
			printf("Yes\n");
		}

		
	}
	return 0;
}