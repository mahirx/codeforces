#include <stdio.h>
#include <string.h>


int lcm(int a, int b)
{
	int cm, t;
	int m = a*b;
	

	if (b > a)
	{
		cm = a;
		a = b;
		b = a;


	}


	while(b!=0){
		t=b;
		b=a%b;
		a=t;
	}

	cm = m/a;
	return cm;
}

int main(int argc, char const *argv[])
{
	int q;
	char ara1[20], ara2[20];
	int s1, s2;
	int i, k;
	int a1, b1;
	int a2, b2;

	
	scanf("%d", &q);


	for (i = 0; i < q; i++)
	{
		scanf("%s", &ara1);
		scanf("%s", &ara2);


		// printf("%s\n", ara1);
		// printf("%s\n", ara2);


		s1 = strlen(ara1);
		s2 = strlen(ara2);


		// printf("%d\n", s1);
		// printf("%d\n", s2);


		a1 = 0;
		b1 = 0;
		

		for (k = 0; k < s1; k++)
		{
			if (ara1[k] == 'a')
			{
				a1++;
			}

			else if (ara1[k] == 'b')
			{
				b1++;
			}
		}


		printf("number of a: %d\n", a1);
		printf("number of b: %d\n", b1);


		a2 = 0;
		b2 = 0;


		for (k = 0; k < s2; k++)
		{
			if (ara1[k] == 'a')
			{
				a2++;
			}

			else if (ara1[k] == 'b')
			{
				b2++;
			}
		}


		printf("number of a: %d\n", a2);
		printf("number of b: %d\n", b2);


		if (a1 == a2 == 0 || b1 == b2 == 0)
		{
			if (a1 == 0)
			{
				printf("%d\n", lcm(b1, b2));
			}

			
			else if (b1 == 0)
			{
				printf("%d\n", lcm(a1, a2));
			}
		}
	}
	return 0;
}