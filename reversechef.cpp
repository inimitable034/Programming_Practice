#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,tmp=0;
		cin>>n;
		while(n>0)
		{
			tmp=(tmp*10)+(n%10);
			n=n/10;
		}
		cout<<tmp<<endl;
	}
	return 0;
}
