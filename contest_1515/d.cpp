#include <stdio.h>



int main(int argc, char const *argv[])
{
	int t, n, l, r;
	scanf("%d", &t);


	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		scanf("%d", &l);
		scanf("%d", &r);


		sum = 0;



		// std::swap(n, x);
		// printf("%d %d\n", n, x);


		int ara[n];

		s = 0;
		do {
			scanf("%d%c", &ara[s], &temp);
			s++;
		}while(temp != '\n');


		// for(int j=0; j<n; j++) { 
  //   		printf(">>%d ", ara[j]); 
 	// 	} 

		if (l != r)
		{
			if (l>r)
			{
				sum = sum + (l-r);
			}
			else{
				sum = sum + (r-l);
			}
		}

		int labib = (n/2)-1;


		for (int j = 0; j <= labib; j++)
		{
			if (ara[j] != ara[j+labib])
			{
				sum++
			}
		}

		printf("%d\n", sum);


		
 	 	
		} 


		
	}



	return 0;
}