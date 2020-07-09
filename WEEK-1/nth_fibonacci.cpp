#include<iostream>
using namespace std;
int main()
{
	int  fn_1=1,fn_2=0, c,fn;
	cin>>c;
	if(c==0 || c==1)
	cout<<c;
	
	else{
		for(int i=2;i<=c;i++)
		{
			fn= fn_1+fn_2;
			fn_2= fn_1;
			fn_1=fn;		
		}
		cout<<fn;
	}
	
	return 0;
}
