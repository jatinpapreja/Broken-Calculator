#include<iostream>
using namespace std;
int main()
{
    int a[1200]={1};
    int j=2;
    int carry;
    int n;
    cin>>n;

 for(j;j<=n;j++)
    {
        int temp;
         carry=0;
        for(int i=0;i<1200;i++)
        {
            temp=a[i];
            a[i]=((j*temp)+carry)%10;
            carry=((j*temp)+carry)/10;

        }
    }
    int i;
    for(i=1199;i>=0;i--)
        if(a[i]!=0)break;

    for(int k=i;k>=0;k--)
    {
        cout<<a[k];
    }
    return 0;
}
