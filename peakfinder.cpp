#include<iostream>
#include<time.h>
using namespace std;
int main(int argc,char *argv[])
{
    int a[100][100]={{0}};
    int n,m;
    cin>>n>>m;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    }
    int count=1;
    int max=0;
    int x[50]={0},y[50]={0};
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                x[0]=j;
                y[0]=i;
            }
        }    
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(max==a[i][j])
            {
                x[count]=j;
                y[count]=i;
                count++;
            }
        }    
    }
    count--;
    cout<<count<<endl;
    for(i=1;i<=count;i++) 
        cout<<x[i]<<" "<<y[i]<<endl;
    return 0;
}
