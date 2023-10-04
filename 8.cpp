#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//IO
int main()
{
	char s[30];
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		s[i]=219-s[i];
		cout<<s[i];
	}
	return 0;
}
