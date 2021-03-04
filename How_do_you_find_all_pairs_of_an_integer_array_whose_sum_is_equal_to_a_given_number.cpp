#include<iostream>
using namespace std;
int main()
{
    int array[]={8,7,1,5,3,2,1};
    int n=sizeof(array)/sizeof(array[0]);
    int sum=10;
    int total_value;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            total_value=array[i]+array[j];
            if(total_value==sum)
            {
                cout<<"positon are {"<<i<<","<<j<<"}"<<endl;
                exit(0);
            }
        }
    }
    cout<<"positon are not in the array"<<endl;

}