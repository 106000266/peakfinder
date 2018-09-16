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
    int max=0,x=0,y=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                x=j;
                y=i;
            }
        }
    }
    cout<<"The highest peak's height is "<<max<<endl;
    cout<<"It's location is at (column) "<<x<<", (row) "<<y<<endl;
    return 0;
}
