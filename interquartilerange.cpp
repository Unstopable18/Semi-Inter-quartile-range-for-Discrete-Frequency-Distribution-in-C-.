#include<iostream>
using namespace std;
int main()    
{
    int n, i,q1medclass,q3medclass;
    float cf[50],farr[50],arr[50],fsum=0,N4,N2,N3,fsum3,SIQ;
    cout<<"**********************************************";
    cout<<"\nEnter Total No. of Elements = \t";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of X Elements: ";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Frequency  Elements: ";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>farr[i];
        fsum = fsum+farr[i];
    }
    cout<<"\nSum of Frequency Elements ="<<fsum<<"\n";
    for(i=0; i<n; i++)
    {
        cf[0]=farr[0];
        {
         for(i=1;i<n;i++)
         cf[i]=(cf[i-1]+farr[i]);
        }
    }
    cout<<"\nCommulative frequency  for respective X and F \n\nX----F ----CF\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"----"<<farr[i]<<"----"<<cf[i]<<"";
        cout<<endl;
    }
    N4=fsum/4;  
    fsum3=3*fsum;
    N3=fsum3/4;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if (cf[i]>=N4)
        {
            q1medclass=i;
            break;
        }
    }
    cout<<"**********************************************\n";
    cout<<"Q1 is = "<<arr[q1medclass];
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if (cf[i]>=N3)
        {
            q3medclass=i;
            break;
        }
    }
    cout<<"Q3 is = "<<arr[q3medclass];
    cout<<"\n**********************************************";
    cout<<endl;
    SIQ=(arr[q3medclass]-arr[q1medclass])/2;
    cout<<"Semi Inter-quartile Range = "<<SIQ;
    cout<<"\n**********************************************";
    cout<<endl;
    return 0;
}