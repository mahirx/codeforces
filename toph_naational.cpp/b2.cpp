#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
	int test;
	scanf("%d", &test);


	long l, r;


	for (int i = 1; i <= test; i++)
	{
		scanf("%ld %ld", &l, &r);
		printf("%ld %ld\n", l, r);


		long h = (r-l)+1;
		long m = 0, n = 0;


		int even[h];
		int odd[h];

		for (int j = l; j <= r; j++)
		{
			if (j%2 == 0)
			{
				even[m]=j;
				m++;
			}
			else{
				odd[n]=j;
				n++;
			}
		}



		for (int j = 0; j < n ; j++)
		{
			for (int q = 2; q*odd[j] <= r; q++)
			{
				if (q*odd[j] % 2 == 0)
				{
					even[m]=odd[j];
					m++;

				}
			}
		}


		

	}
	return 0;
}