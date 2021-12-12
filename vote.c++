#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Would you please enter your age:\n";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"\nIt feels great,you are eligible"<<endl;
	}
	else
	cout<<"\nBetter luck next time,you are not eligible";
	return 0;
}
