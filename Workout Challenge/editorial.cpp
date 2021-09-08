#include <bits/stdc++.h>
using namespace std;

long long int possibleValues(long long int b){
  while(b%2==0){
    b/=2;
  }
  b/=2;
  return b;
}

int main()
{
	long long int t;
  cin>>t;
	while(t--)
	{
		long long int b;
		cin>>b;
		long long int ans = possibleValues(b);
		cout<<ans<<endl;
	}
}