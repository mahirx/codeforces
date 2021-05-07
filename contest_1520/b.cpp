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
	int 
	scanf("%d", &t);


	for (int i = 1; i <= t; ++i)
	{
		scanf("%d", &n);
		temp = 0;

		for (int k = 1; k <= n; k++)
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