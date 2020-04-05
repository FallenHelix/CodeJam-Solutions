#include <bits/stdc++.h>
using namespace std;


  

void printLatin(int n,int s) 
{ 
    
    int k = s; 
  
   
    for (int i=1; i<=n; i++) 
    { 
       
        int temp = k; 
        while (temp <= n) 
        { 
        	cout<<temp<<" ";
            // printf("%d ", temp); 
            temp++; 
        } 
  
       
        for (int j=1; j<k; j++) 
        	cout<<j<<" ";
            // printf("%d ", j); 
  
        k--; 
        if(k==0)
        {
        	k=n;
        }
        cout<<endl;
    } 
} 

void printLatinSquare(int &n,int &s)
{
	int factor=s/n;
	printLatin(n,factor);
	 
}
  

int main(void) 
{ 
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int t,n,s;
	cin>>t;
	for (int k = 0; k < t; ++k)
	{
		cin>>n>>s;  	
		if(s%n!=0||int(s/n)>n)
		{
			cout<<"Case #"<<k+1<<": "<<"IMPOSSIBLE"<<endl;
		}
		else{
			cout<<"Case #"<<k+1<<": "<<"POSSIBLE"<<endl;

			printLatinSquare(n,s);
		}
	}  
  
    return 0; 
} 