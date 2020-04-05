#include <bits/stdc++.h>
using namespace std;




int main()
{
	int t,n;
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	cin>>t;
	for(int k=0;k<t;++k)
	{
		cin>>n;
		 vector<pair<pair<int,int>,int>> arr(n);
		for(int i=0;i<n;++i)
		{
			cin>>arr[i].first.first>>arr[i].first.second;
			arr[i].second=i;
		}
		map<int,string> m;
		int flag=-1;
		string ans;
		sort(arr.begin(),arr.end());
		int s1=0,s2=0;
		for(int i=0;i<n;++i)
		{
			if(s1<=arr[i].first.first)
			{
				s1=arr.at(i).first.second;
				m[arr[i].second]='C';
			}
			else if(s2<=arr.at(i).first.first)
			{
				s2=arr.at(i).first.second;
				m[arr[i].second]='J';
			}
			else
			{
				flag=0;
				break;
			}
		}
		for(auto i:m)
		{
            ans+=i.second;
        }
        if(flag==0) ans="IMPOSSIBLE";
        cout<<"Case #"<<k+1<<": "<<ans<<endl;
		
	}
}

