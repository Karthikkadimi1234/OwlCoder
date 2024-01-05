AndValue
--------------

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int N,q;
  cin>>N>>q;
  vector<int>v(N);
  for(int i=0;i<N;i++)
  {
    cin >> v[i];
  }
  vector<vector<int>>queries(q,vector<int>(2));
  for(int i=0;i<q;i++)
  {
  	cin>>queries[i][0]>>queries[i][1];
  }
  vector<vector<int>>Twod(N,32)
  for(int i=0;i<N;i++)                 // 7 3 7 2 5
  {
    for(int j=0;j<32;j++)
    {
       if(1&(v[i]>>j))
       {
         Twod[i][j]++;
       }
    }
  }
  int l,r;
  for(int i=0;i<32;i++)
   {
    for(int j=1;j<N;j++)
    {
       Twod[j][i]+=Twod[j-1][i];
    }
   }
for(int i=0;i<q;i++)
{
  l=q[i][0];
  r=q[i][1];
  int av =0;
  for(int j=0;j<32;j++)
  {
    if(l==0)
    {
      if(Twod[r][j]==(r-l)+1)
      {
        av = av|(1<<j);
      }
    }
   else if(Twod][j]-Twod[l-1][j]==((r-l)+1)
    {
      av = av|(1<<j);
    }
  }
  cout<<av<<' ';
}
  
}





Orvalue
-----------
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int N,q;
  cin>>N>>q;
  vector<int>v(N);
  for(int i=0;i<N;i++)
  {
    cin >> v[i];
  }
  vector<vector<int>>queries(q,vector<int>(2));
  for(int i=0;i<q;i++)
  {
  	cin>>queries[i][0]>>queries[i][1];
  }
  vector<vector<int>>Twod(N,32)
  for(int i=0;i<N;i++)                 // 7 3 7 2 5
  {
    for(int j=0;j<32;j++)
    {
       if(1&(v[i]>>j))
       {
         Twod[i][j]++;
       }
    }
  }
  int l,r;
  for(int i=0;i<32;i++)
   {
    for(int j=1;j<N;j++)
    {
       Twod[j][i]+=Twod[j-1][i];
    }
   }
for(int i=0;i<q;i++)
{
  l=q[i][0];
  r=q[i][1];
  int av =0;
  for(int j=0;j<32;j++)
  {
    if(l==0)
    {
      if(Twod[r][j]>=1)
      {
        av = av|(1<<j);
      }
    }
   else if(Twod][j]-Twod[l-1][j]>=1)
    {
      av = av|(1<<j);
    }
  }
  cout<<av<<' ';
}
  
}







