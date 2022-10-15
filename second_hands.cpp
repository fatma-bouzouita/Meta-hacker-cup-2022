    #include <bits/stdc++.h>
    #define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
    #define MP make_pair
    #define PB push_back
    #define ll long long
    #define FOR(x,i,n) for(int (i)=(x);(i)<(n);(i)++)
    using namespace std;
 int main()
    {freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t ;
    cin>>t;
for(int j=1;j<=t;j++)
    {int n,k;
    cin>>n>>k ;
    int n1;
    if(n%2==1)
    n1=n+1;
    else n1=n;

    string ok="YES";
    if(n1/2>k)
    ok="NO";
map<int,int> m;
for(auto t:m)
t.second=0;
for(int i=0;i<n;i++)
{int x;
cin>>x;
m[x]++  ;}
    for(auto t:m)
    {if(t.second>2)
    {ok="NO";
    break ;}
    }
    cout<<"Case #"<<j<<": "<<ok<<endl;
    //cout<<t.first<<"size  ";
    //cout<<t.second<<"recurrence"<<endl;
    }
    }
