#include <stdio.h>
#include <algorithm>


int main(int argc, char const *argv[])
{
	int t, n, x, s;
	scanf("%d", &t);
	char temp;
	int sum;
	int v;


	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		scanf("%d", &x);

		// std::swap(n, x);
		// printf("%d %d\n", n, x);


		int ara[n];
		v = 0;

		s = 0;
		do {
			scanf("%d%c", &ara[s], &temp);
			s++;
		}while(temp != '\n');


		// for(int j=0; j<n; j++) { 
  //   		printf(">>%d ", ara[j]); 
 	// 	} 


		sum = 0;

		for (int j = 0; j < n; j++)
		{
			sum = sum + ara[j];

			if (sum == x)
			{
				if (j == (n-1))
				{
					printf("NO\n");
					v = 1;

				}
				

				else{
					std::swap(ara[j], ara[j+1]);
				}
			}
		}


		if (v == 0)
		 {
		 	printf("YES\n");
		 	for(int j=0; j<n; j++) { 
     		printf("%d ", ara[j]); 
 	 	}

 	 	
		} 


		
	}



	return 0;
}