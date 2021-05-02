#include <stdio.h>
#include <math.h>



int final(int num)
{
	int iVar;
	float fVar;
	fVar=sqrt((double)num);
	iVar=fVar;
	if(iVar==fVar){
		// printf("YES");
		return 1;
	}
	
	else{
		// printf("NO",num);
		return 0;
	}
	
}



int cutter(int x)
{
	while((x%2) != 1){
		x=x/2;
	}

	return x;
}

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


			else if (final(cutter(n)) == 1)
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