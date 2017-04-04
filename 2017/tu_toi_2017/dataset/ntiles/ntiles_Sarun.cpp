#include <bits/stdc++.h>
using namespace std;
struct bdt{
    int table[9];
    int key;
    int zero;
};
queue <bdt> goon;
unordered_set<int>visit;
int makekey(int table[],int n)
{
    int value=0;
    for(int i=0;i<n*n;i++)
    {
        value*=10;
        value+=table[i];
    }
    return value;
}
main()
{
    int m,n;
    bdt start;
    FILE *fp;
    fp=fopen("10pair.txt","r");
    fscanf(fp,"%d",&m);
    int ans[m],succ,need,nsucc;
    for(int i=0;i<m;i++)
    {
        fscanf(fp,"%d",&n);
        for(int j=0;j<n*n;j++)
        {
            fscanf(fp,"%d",&start.table[j]);
            if(start.table[j]==0)start.zero=j;
        }
        succ=1;
        ans[i]=0;
        visit.clear();
        while(!goon.empty())goon.pop();
        start.key=makekey(start.table,n);
        visit.insert(start.key);
        goon.push(start);
        if(n==2)need=123;
        else need=12345678;
        while(visit.find(need)==visit.end())
        {
            nsucc=0;
            for(int j=0;j<succ;j++)
            {
                bdt in,out;
                in=goon.front();
                goon.pop();
                if(in.zero/n>0)//up
                {
                    for(int k=0;k<n*n;k++)
                    {
                        if(k==in.zero)out.table[k]=in.table[k-n];
                        else if(k==in.zero-n)out.table[k]=0;
                        else out.table[k]=in.table[k];
                    }
                    out.zero=in.zero-n;
                    out.key=makekey(out.table,n);
                    if(visit.find(out.key)==visit.end())
                    {
                        goon.push(out);
                        visit.insert(out.key);
                        nsucc++;
                    }
                }
                if(in.zero/n<n-1)//down
                {
                    for(int k=0;k<n*n;k++)
                    {
                        if(k==in.zero)out.table[k]=in.table[k+n];
                        else if(k==in.zero+n)out.table[k]=0;
                        else out.table[k]=in.table[k];
                    }
                    out.zero=in.zero+n;
                    out.key=makekey(out.table,n);
                    if(visit.find(out.key)==visit.end())
                    {
                        goon.push(out);
                        visit.insert(out.key);
                        nsucc++;
                    }
                }
                if(in.zero%n>0)//left
                {
                    for(int k=0;k<n*n;k++)
                    {
                        if(k==in.zero)out.table[k]=in.table[k-1];
                        else if(k==in.zero-1)out.table[k]=0;
                        else out.table[k]=in.table[k];
                    }
                    out.zero=in.zero-1;
                    out.key=makekey(out.table,n);
                    if(visit.find(out.key)==visit.end())
                    {
                        goon.push(out);
                        visit.insert(out.key);
                        nsucc++;
                    }
                }
                if(in.zero%n<n-1)//right
                {
                    for(int k=0;k<n*n;k++)
                    {
                        if(k==in.zero)out.table[k]=in.table[k+1];
                        else if(k==in.zero+1)out.table[k]=0;
                        else out.table[k]=in.table[k];
                    }
                    out.zero=in.zero+1;
                    out.key=makekey(out.table,n);
                    if(visit.find(out.key)==visit.end())
                    {
                        goon.push(out);
                        visit.insert(out.key);
                        nsucc++;
                    }
                }
            }
            succ=nsucc;
            ans[i]++;
        }
    }
    for(int i=0;i<m;i++)cout<<ans[i]<<' ';
}
