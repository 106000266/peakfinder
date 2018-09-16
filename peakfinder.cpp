#include<iostream>
using namespace std;
int main()
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
    int max[50]={0};
    int x[50]={0},y[50]={0};
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1)
            {
                if(j==1)
                {
                    if((a[i][j]>a[i+1][j]) && (a[i][j]>a[i][j+1]))
                    {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
                else if(j==m)
                {
                    if((a[i][j]>a[i+1][j]) && (a[i][j]>=a[i][j-1]))
                    {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
                else
                {
                    if((a[i][j]>a[i+1][j]) && (a[i][j]>a[i][j+1]) && (a[i][j]>=a[i][j-1]))
                     {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
            }
            else if(i==n)
            {
                if(j==1)
                {
                    if((a[i][j]>a[i-1][j]) && (a[i][j]>a[i][j+1]))
                    {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
                else if(j==m)
                {
                    if((a[i][j]>a[i-1][j]) && (a[i][j]>=a[i][j-1]))
                    {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
                else
                {
                    if((a[i][j]>a[i-1][j]) && (a[i][j]>a[i][j+1]) && (a[i][j]>=a[i][j-1]))
                     {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
            }
            else if(i<n && i>1)
            {
                 if(j==1)
                {
                    if((a[i][j]>a[i-1][j]) && (a[i][j]>a[i][j+1]) && (a[i][j]>a[i+1][j]))
                    {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
                else if(j==m)
                {
                    if((a[i][j]>a[i-1][j]) && (a[i][j]>=a[i][j-1]) && (a[i][j]>a[i+1][j]))
                    {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
                else
                {
                    if((a[i][j]>a[i-1][j]) && (a[i][j]>a[i+1][j]) && (a[i][j]>a[i][j+1]) && (a[i][j]>=a[i][j-1]))
                     {
                        max[count]=a[i][j];
                        x[count]=j;
                        y[count]=i;
                        count++;
                    }
                }
            }
        }
    }
    count--;
    cout<<"There is(are)"<<count<<"peak(s)"<<endl;
    for(i=1;i<=count;i++)
    {
        cout<<"(One of the)The high peak's height is "<<max[i]<<"."<<endl;
        cout<<"It's location is (column) "<<x[i]<<",(row) "<<y[i]<<"."<<endl;
    }
    return 0;
}
