#include<iostream>
using namespace std;
int mul(int res[],int res_size,int x)
{
    int prod=0,mul=0,i=0,carry=0;
    for(i=0;i<res_size;i++)
    {
        prod=(res[i]*x)+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}
void f(int a)
{
    int res[500],res_size=1;
    res[0]=1;
    for(int i=2;i<=a;i++)
    {
        res_size=mul(res,res_size,i);
    }
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }
}
int main()
{
    int t=0,x=0;
    cin>>t;
    while(t--)
    {
        cin>>x;
        f(x);
        cout<<endl;
    }
    return 0;
}
