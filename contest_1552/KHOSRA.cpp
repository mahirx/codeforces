#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
	for (int i = 2; i <= 8; i++)
	{
		printf("\tdigitalWrite(%d, HIGH);\n\tdelay(100);\n\tdigitalWrite(%d, LOW);\n\tdelay(100);\n", i, i);
	}
	return 0;
}