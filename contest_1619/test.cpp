#include <iostream>
#include <cmath>
using namespace std;

double nth_root(double a,double n)
{
	return pow(a,1/double(n));	
}
int main() {
	double a,n;
	cin>>a>>n;
	cout<<nth_root(a,n);
	return 0;
}