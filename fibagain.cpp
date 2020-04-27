#include<iostream>
using namespace std;
long long fib(long long c, int b)
{
	int  fn_1=1,fn_2=0,fn;
	if(c==0 || c==1)
	return c;
	
	else{
		for(int i=2;i<=c;i++)
		{
			fn= (fn_1+fn_2)%b;
			fn_2= fn_1;
			fn_1=fn;		
		}
		return fn;
		}
		return 0;
}

int main()
{
	int b,r1=1,r2=1,r, count=1;
	long long a;
	cin>>a;
	cin>>b;
	if(b==0)
	cout<<0;
	else{
	
		while(1)
		{
			if(r1==1 && r2==0)
			break;
			
			r= (r1+r2)%b;
			r2= r1;
			r1= r;
			count++;	
			
		}
    }
 long long rem= (a)%count;
   cout<<fib(rem,b);
   
	return 0;
}
