#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
unsigned long int a[1000][1000]={{0}};
unsigned long int x[1000000]={0},y[1000000]={0};
int main(int argc,char *argv[])
{   
    string str=argv[1];
    string str1="test_case\\";
    string str2="\\matrix.data";
    string str3="\\final.peak";
    string ta=".data";
    string in,out,TA;
    in.append(str1);
    in.append(str);
    in.append(str2);
    out.append(str1);
    out.append(str);
    out.append(str3);
    TA.append(str1);
    TA.append(str);
    TA.append(ta);
    ifstream infile(in.c_str());
    //infile.open(TA.c_str());
    ofstream outfile(out.c_str());
    //ofstream outfile("test_case/TA3_final.peak");
    int n,m;
    infile>>n>>m;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            infile>>a[i][j];
    }
    int max=0;
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
    int count=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(max==a[i][j])
            {
                x[count]=i;
                y[count]=j;
                count++;
            }
        }
    }
    count--;
    if(count==(n*m))
        count=0;
    infile.close();
    //cout<<count<<endl;
    outfile<<count<<endl;
    for(i=1;i<=count;i++)
    {
        //cout<<x[i]<<" "<<y[i]<<endl;
        outfile<<x[i]<<" "<<y[i]<<endl;
    }
    outfile.close();
    return 0;
}

