#include<iostream>
using namespace std;
int main()
{
    int n,size;
    cin>>size;
   while(size!=0)
   {
       size--;
       cin>>n;
       int rem=0,sum=0;
        while(n!=0)
        {
        rem=n%10;
        sum+=rem;
        n=n/10;
        }
         
    cout<<sum<<endl;
   }
   
  
return 0;
}
