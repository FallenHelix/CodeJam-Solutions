#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false),cin.tie(NULL)


int getMax(unordered_map<int,int> &map )
{
	int temp=0;
	for(auto i =map.begin();i!=map.end();++i)
	{
		if(i->second>1)
			return 1;
	}
		return 0;
}

void f(vector<vector<int> > &arr,int &i)
{

	 unordered_map<int	,int> rowMap; 
	 unordered_map<int	,int> columnMap; 
	 int row=0,column=0;

	 int trace=0;
	 for(int i=0;i<arr.size();++i)
	 {
	 	rowMap.clear();
	 	columnMap.clear();
	 	for(int j=0;j<arr.at(i).size();++j)
	 	{
	 		if(i==j)
	 		{
	 			trace+=arr.at(i).at(j);
	 		}
	 		//row part
	 		rowMap[arr.at(i).at(j)]+=1;

	 		//column part
	 		columnMap[arr.at(j).at(i)]+=1;
	 	}
	 	row+=getMax(rowMap);
	 	column+=getMax(columnMap);
	 	//number of columns
	}
	cout<<"Case #"<<i+1<<": "<<trace<<" "<<row<<" "<<column<<endl;
}

int main()
{
	
	FAST_IO;
	int n,temp,t;
	vector<vector<int> > arr;
	cin>>t;
	for(int k=0;k<t;++k)
	{
		arr.clear();
		cin>>n;
		arr.resize(n);
		for(int i=0;i<n;++i)
		{
		arr.at(i).reserve(n);
			for(int j=0;j<n;++j)
			{
				cin>>temp;
				arr.at(i).push_back(temp);
			}
		}
		f(arr,k);
	}
	return 0;

}

 