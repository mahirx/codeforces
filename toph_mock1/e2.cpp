#include <stdio.h>


// int findlowest(int one, int two, int three, int four) {
//     int output = one; //as of now , we will be outputting one , except if we find a lower score.
//     if(output > two) { output = two;} // if output is proven to be bigger than two, two is our new output.
//     if(output > three){ output = three;} //same operation with three
//     if(output > four){ output = four;} // same operation with four
//     return output;
// }



int main(int argc, char const *argv[])
{
	int n;
	int c[500000] = {0}, o[500000] = {0}, d[500000] = {0}, e[500000] = {0};


	scanf("%d", &n);

	char ara[n];

	scanf("%s", ara);
	printf("%s\n", ara);


	for (int i = 0; i < n; i++)
	{
		if (ara[i] == 'c')
		{
			c[i]=1;
		}

		else if (ara[i] == 'o')
		{
			o[i]=1;
		}

		else if (ara[i] == 'd')
		{
			d[i]=1;
		}


		else if (ara[i] == 'e')
		{
			e[i]=1;
		}

	}


	printf("c %s", c);
	printf("o %s", o);
	printf("d %s", d);
	printf("e %s", e);


	// printf("%d\n", findlowest(c, o, d, e));




	return 0;
}