#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	long long i;


	long long l;

	for (int it = 1; it <= t; it++)
	{
		scanf("%lld", &l);
        long long arr[l];
    
    
        for (i = 0; i < l; ++i)
            scanf("%lld", &arr[i]);
    
        sort(arr, arr+l);



        for (i = 0; i < l; ++i)
        	printf("%lld\n", arr[i]);


    	vector<int> v;

    	

	}
	return 0;
}