#include<iostream>
using namespace std;
long long fib(int c)
{
	int  fn_1=1,fn_2=0,fn, sum=0;
	if(c==0 || c==1)
	return c;
	
	else{
		for(int i=2;i<=c;i++)
		{
			fn= (fn_1+fn_2)%10;	
			sum= (sum+fn)%10;
			fn_2= fn_1;
			fn_1=fn;		
		}
		return (sum+1)%10;
		}
		return 0;
}
int main()
{
	long long a;
	cin>>a;
	cout<<fib((int)(a%60));
	return 0;
}
