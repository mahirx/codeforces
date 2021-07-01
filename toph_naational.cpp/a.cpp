#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int ara[4];
	int a,b;
	int j;
	int result[4]={0,0,0,0};

	// for (int i = 1; i <= 3; i++)
	// {
	// 	printf("%d", result[i]);
	// }


	for (int i = 1; i <= 3; i++)
	{
		scanf("%d", &ara[i]);
	}


	for (int i = 1; i <= 3; i++)
	{
		printf("%d", &ara[i]);
	}


	int s;

	scanf("%d", &s);

	for (j = 1; j <= s; j++)
	{
		scanf("%d %d", a, b);
		printf("%d %d\n", a, b);

		// swap(ara[a], ara[b]);


		
		if (ara[1] == 1)
		{
			result[1]++;
		}


		else if (ara[2] == 1)
		{
			result[2]++;
		}


		else{
			result[3]++;
		}


	}


	for (int i = 1; i <= 3; i++)
	{
		printf("%d", result[i]);
	}



	return 0;
}