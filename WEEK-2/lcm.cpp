#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
	return a;
	else if(a>b)
	return gcd(b, a%b);
	else return gcd(a,b%a);
}
int main()
{
	int a, b,h;
	cin>>a;
	cin>>b;
	h=gcd(a,b);
	cout<<(long long )(a)*b/h;
	return 0;
}
