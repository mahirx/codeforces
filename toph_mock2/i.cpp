#include <bits/stdc++.h>
#define ll long long



int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	ll n;


	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);


		printf("Case %d: %lld\n", i, ((n*(n+1)/2) + 1));
	}

	return 0;
}