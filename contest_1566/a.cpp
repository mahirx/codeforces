#include <iostream>


using namespace std;



int main(int argc, char const *argv[])
{
	int t;
	long long n, s;
	long long mid, legend;

	scanf("%d", &t);

	int i;

	for (i = 1; i <= t; i++)
	{
		scanf("%lld", &n);
		scanf("%lld", &s);

		// printf(">>%ld %ld\n", n, s);

		mid = (n/2);

		if (n % 2 == 1)
		{
			mid++;
		}


		// printf(">>%ld\n", mid);

		// remain = n - (mid - 1);

		legend = s / (n - mid + 1);


		printf("%lld\n", legend);




	}
	return 0;
}