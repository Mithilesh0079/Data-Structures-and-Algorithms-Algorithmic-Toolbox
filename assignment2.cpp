#include<iostream>
#include<vector>
#include <cstdlib>
#include<time.h>
#include <ctime>
using namespace std;

long long max_prod(vector<int> A)
{
	long long  prod=0;
	for(int i=0; i<A.size()-1; i++)
	{
		for(int j= i+1;j<A.size();j++ )
		{
			if(prod < ((long long)A[i])*(A[j]))
			prod= (long long )A[i]*(A[j]);
		}
	}
	return prod;
}
long long max_prod_fast(vector<int> A)
{
	int m1= -1, m2= -1, m_index=-1;
	for(int i=0;i<A.size();i++)
	{
		if(m1<A[i])
		{
			m_index=i;
			m1= A[i];
		}
	}
	for(int i=0;i<A.size();i++)
	{
		if(m2<A[i] && i!=m_index)
		{
		   m2= A[i];
		}
	}
	return (long long)m1* m2;
}

int main()
{
	int count=50;
	
	while(count>0)
	{
		
		int n= rand()%100+20;
		cout<<n<<endl;
		vector<int> v;
			
		for(int i=0;i<n;i++)
		v.push_back(rand()%1000+100);
		for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
		
		cout<<endl;
		time_t my_time = time(NULL); 
		printf("%s", ctime(&my_time)); 
		long long res1= max_prod(v);
		time_t my_time1 = time(NULL); 
		printf("%s", ctime(&my_time1)); 
		
       	time_t my_time2 = time(NULL); 
		printf("%s", ctime(&my_time2)); 
		long long res2= max_prod_fast(v);
		time_t my_time3 = time(NULL); 
		printf("%s", ctime(&my_time3)); 
		
		cout<<res1<<" "<<res2<<endl;
		if(res1!= res2)
		break;
		else cout<<"OK"<<endl;
		count--;	
	}
	return 0;
}

