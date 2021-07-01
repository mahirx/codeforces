#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	long long T, human, time;
	int h, m;

	char str[4];

	scanf("%lld", &T);


	for (long long i = 1; i <= T; i++)
	{
		h = ((time[0]-'0')*10)+(time[1]-'0');
		m = ((time[2]-'0')*10)+(time[3]-'0');
		time = ((h-9)*60)+m;
		human = ((time/5)*8)-((time/15)*8);


		printf("%ld\n", human);
	}
	return 0;
}