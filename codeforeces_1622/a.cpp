#include <algorithm>
#include <iostream>

using namespace std;


int sort3(int arr[])
{
    // Insert arr[1]
    if (arr[1] < arr[0])
       swap(arr[0], arr[1]);
 
    // Insert arr[2]
    if (arr[2] < arr[1])
    {
       swap(arr[1], arr[2]);
       if (arr[1] < arr[0])
          swap(arr[1], arr[0]);
    }
}


int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	
	int a[3];

	for (int i = 0; i < t; i++)
	{
		cin >> a[0] >> a[1] >> a[2];

		sort3(a);

		// for (int y = 0; y < 3; y++)
  		//       cout << a[y] << " ";


		if (a[0]+a[1]<a[2] || a[2] == 1)
		{
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}



	}
	return 0;
}