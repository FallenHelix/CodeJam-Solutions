#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &s,int &i)
{
	int c=0;//# of open brackets
	string answer;
	string temp;
	int prev=-1;//t=latest element
	for(auto t: s)
	{
		if(prev!=-1)
		{
			if(prev>t) //need closing brackets
			{
				int diff=prev-t;
				c-=diff;
				temp=string(diff,')');
				answer+=temp+to_string(t);
				prev=t;
			}
			else if(prev==t)
			{
				answer+=to_string(t);
			}
			else // new number is bigger need more open brackets
			{
				int diff=t-prev;
				c+=diff;
				temp=string(diff,'(');
				answer+=temp+to_string(t);
				prev=t;
			}

			
		}
		else
		{
			prev=t;
			c+=t;
			temp=string(t,'(');
			temp+=to_string(c);
			answer+=temp;
		}
	}
	answer+=string(c,')');
	cout<<"Case #"<<i+1<<": "<<answer<<endl;

}
void print(vector<int> & arr)
{
	cout<<endl;

	for(auto x : arr)
	{
		cout<<x;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif


	int n;
	cin>>n;
	string input;
	std::vector<int> arr;
	for(int k=0;k<n;++k)
	{
		cin>>input;
		arr.reserve(input.length());
		
		for( int i=0;i<input.length();++i)
		{
			int t=stoi(input.substr(i,1));
			arr.push_back(t);
		}
		func(arr,k);
		arr.clear();
		input.clear();
	}
	return 0;
}