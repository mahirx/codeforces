#include <bits/stdc++.h>
using namespace std;


long long findSmallest(long long arr[], long long n)
{
   long long res = 1;


   for (int i = 0; i < n && arr[i] <= res; i++)
       res = res + arr[i];

   return res;
}


int main()
{
    int i, j;
    long long  n;
    int t;
    long long l;


    scanf("%d", &t);


    for (i = 1; i <= t; i++)
    {
        scanf("%lld", &l);
        long long arr[l];


        for (j = 0; j < l; j++)
            scanf("%lld", &arr[j]);

         sort(arr, arr+l);

        // for (i = 0; i < l; ++i)
        //     printf("%d\n", arr[i]);




        n = sizeof(arr)/sizeof(arr[0]);
        cout << "K-" <<findSmallest(arr, n) << endl;
    }







   return 0;
}