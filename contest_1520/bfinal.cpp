#include <stdio.h>


int controlNumber(int a)
{
    int q = a;
    int r = a % 10;
    int temp;
    
    while (q != 0) {
        temp = q % 10;
        if (temp == r) {
            q = q / 10;
        } else {
            
            return 0;
        }
        
    }
    return 1;
}
   


int main(int argc, char const *argv[])
{
	int t, n, temp;
	scanf("%d", &t);


	for (int i = 1; i <= t; ++i)
	{
		scanf("%d", &n);
		temp = 0;
		int k;


		if (n >= 1000000000)
		{
			temp = 81;
			k=1000000000;
		}

		else if (n >= 100000000)
		{
			temp = 72;
			k=100000000;
		}

		else if (n >= 10000000)
		{
			temp = 63;
			k=10000000;
		}

		else if (n >= 1000000)
		{
			temp = 54;
			k=1000000;
		}

		else if (n >= 100000)
		{
			temp = 45;
			k=100000;
		}

		else if (n >= 10000)
		{
			temp = 36;
			k=10000;
		}

		else if (n >= 1000)
		{
			temp = 27;
			k=1000;
		}


		else if (n >= 100)
		{
			temp = 18;
			k=100;
		}

		else{
			k=1;
		}




		for (; k <= n; k++)
		{
			if (controlNumber(k) == 1)
			{
				// printf("Yep\n");
				temp = temp + 1;

			}
			// else{
			// 	printf("nope\n");
			// }
		}
		printf("%d\n", temp);
	}
	return 0;
}