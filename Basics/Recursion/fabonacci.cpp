#include<iostream>
using namespace std;
int fab(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return fab(n-2)+fab(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<fab(n)<<endl;
}