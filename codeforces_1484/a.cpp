#include <stdio.h>


int main(int argc, char const *argv[])
{
	int a, b, t, c;
	

	scanf("%d", &t);
	// printf(">>%d\n", t);


	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d", &a, &b);
		// printf(">>%d %d\n", a, b);

		c = b*(a-1)+b;
		printf("%d\n", c);
	}

	return 0;
}