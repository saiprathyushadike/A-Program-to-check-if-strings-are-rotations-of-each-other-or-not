#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,s1,temp;
	int n,i,a,b;
	int count=1;
	cin>>s;
	cin>>s1;
	a=s.length();
	 b=s1.length();
	if(b!=a)
	{
	    cout<<"no";
	    return 0;
	}
	else
	{
	  temp=s+s;
	  int find =temp.find(s1);
	  if(find=1){
	      cout<<"yes";
	  }
	  else
	    cout<<"no";
	    
	}
	return 0;
	    
	}
