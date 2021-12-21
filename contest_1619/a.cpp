#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
	int x;
	cin >>x;
	int n, labib;

	string list;

	for (int i = 1; i <= x; i++)
	{
		cin >> list;
		// cout << list <<list.size()<< endl;
		// cout << list[2] << endl;

		if (list.size() % 2 == 1)
		{
			printf("NO\n");
		}

		else{
			labib=1;
			n=list.size()/2;

			for (int i = 0; i < n; i++)
			{
				if (list[i] != list[i+n])
				{
					labib=0;
					break;
				}
			}

			if (labib == 0)
			{
				printf("No\n");
			}
			else{
				printf("Yes\n");
			}
		}
	}
	return 0;
}