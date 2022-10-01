#include<bits/stdc++.h>
using namespace std;
#define size 1000
int main()
{
    int candles[size],n;
    int i, count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>candles[i];
    }
int max=candles[0];
for(i=1; i<n; i++)
{
    if(candles[i]>max)
    {
        max=candles[i];
    }
}
for(i=0; i<n; i++)
{
    if(max==candles[i])
    {
        count++;
    }
}
cout<<count;
return 0;
}
