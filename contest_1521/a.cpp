#include <stdio.h>


int main()
{
    long long int t;
    long long int a, b;
    
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%lld", &a);
        scanf("%lld", &b);


        // printf(">>%d %d\n", a, b);


        if (b == 1 || (a%b)==0)
        {
        	printf("NO\n");
        }

        else{
        	if (b==2)
        	{
        		b=b*2;
        	}
        	// printf("YES\n");
        	printf("YES\n%lld %lld %lld\n", a*((b/2)+1), a*((b/2)-1), a*b);

        }
        
              
    }

    return 0;
    
}