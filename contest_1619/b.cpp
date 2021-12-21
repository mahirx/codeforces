#include <iostream>
#include <cmath>
using namespace std;

int nth_root(double a,double n)
{
	return int(pow(a,1/double(n)));	
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	double n;


	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		// s = nth_root(n,2);
		// q = nth_root(n,3);
		// c = nth_root(n,6);


		// printf("%d %d %d\n", s, q, c);



		cout << nth_root(n,2)+nth_root(n,3)-nth_root(n,6) << endl;

	}
	return 0;
}