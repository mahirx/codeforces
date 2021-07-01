#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
	int ara[5];
	int a, b;
	

	int result[5] = {0,0,0,0,0};

	int i;

	for (i = 1; i <= 3; i++)
	{
		cin >> ara[i];
	}

	// for (i = 1; i <= 3; i++)
	// {
	// 	cout << ara[i];
	// }



	int limit;
	cin >> limit;
	// cout << limit;



	for (i = 1; i <= limit; i++)
	{
		cin >> a >> b;
		// cout << a << b;

		swap(ara[a], ara[b]);

		if (ara[1] == 1)
		{
			result[1] += 1;
		}

		else if (ara[2] == 1)
		{
			result[2] += 1;
		}
		else if (ara[3] == 1)
		{
			result[3] += 1;
		}





	}


	for (i = 1; i <= 3; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}