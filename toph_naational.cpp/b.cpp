#include <bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
	int t;
	cin >> t;

	int begin, end;

	int i, j;

	for (i = 1; i <= t; i++)
	{
		cin >> begin >> end;
		
		vector<int> list;
		vector<int> even;


		for (j = begin; j <= end; j++)
		{
			if (j % 2 == 0)
			{
				even.push_back(j);
			}
			else{
				list.push_back(j);
			}
		}



	}


	cout << list << even;
	return 0;
}