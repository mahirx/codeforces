#include <bits/stdc++.h>
using namespace std;



long long number(int x, int p)
{
	if (p > 0)
	{
		x=x*pow(10,p);
	}
	else{
		return x;
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	int labib;

	int x1, x2, p1, p2;
	long long a,b;

	for (int i = 1; i <= t; i++)
	{
		cin >> x1 >> p1;
		cin >> x2 >> p2;
		// cout <<">>>>"<< x1 << x2 << p1 << p2  << endl;

		a = number(x1,p1);
		b = number(x2,p2);
        // cout << "=="<< a <<"	"<< b << endl;
		if(a>b)
		{
			printf(">\n");
		}
		else if (a<b)
		{
			printf("<\n");
		}
		else
		{
			printf("=\n");
		}


	}
	return 0;
}
