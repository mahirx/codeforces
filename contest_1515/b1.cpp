#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t;
	long long int n;


	scanf("%d", &t);


	for (int i = 1; i <= t; i++)
	{
		scanf("%lld", &n);

		if(n==1 || (n%2) == 1){
			printf("NO\n");
		}

		else{
			if (((n &(n - 1)) == 0))
			{
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}

	}
	return 0;
}