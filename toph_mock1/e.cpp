#include <stdio.h>


int findlowest(int one, int two, int three, int four) {
    int output = one; //as of now , we will be outputting one , except if we find a lower score.
    if(output > two) { output = two;} // if output is proven to be bigger than two, two is our new output.
    if(output > three){ output = three;} //same operation with three
    if(output > four){ output = four;} // same operation with four
    return output;
}



int main(int argc, char const *argv[])
{
	int n;
	int c=0, o=0, d=0, e=0;


	scanf("%d", &n);

	char ara[n];

	scanf("%s", ara);
	printf("%s\n", ara);


	for (int i = 0; i < n; i++)
	{
		if (ara[i] == 'c')
		{
			c++;
		}

		else if (ara[i] == 'o')
		{
			o++;
		}

		else if (ara[i] == 'd')
		{
			d++;
		}


		else if (ara[i] == 'e')
		{
			e++;
		}

	}


	// printf("c %d", c);
	// printf("o %d", o);
	// printf("d %d", d);
	// printf("e %d", e);


	printf("%d\n", findlowest(c, o, d, e));




	return 0;
}