
#include <bits/stdc++.h>
using namespace std;


int findSmallest(int arr[], int n)
{
   int res = 1; 


   for (int i = 0; i < n && arr[i] <= res; i++)
       res = res + arr[i];

   return res;
}


int main()
{
    int i;
    int n;
    int t;
    int l;


    scanf("%d", &t);


    for (i = 1; i <= t; i++)
    {
        scanf("%d", &l);
        int arr[l];
    
    
        for (i = 0; i < l; ++i)
            scanf("%d", &arr[i]);
    
         sort(arr, arr+l);






        n = sizeof(arr)/sizeof(arr[0]);
        cout << "K-" <<findSmallest(arr, n) << endl;
    }
    



    


   return 0;
}
