#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age:";
	cin>>age;
	if(age>=18)
	{

		cout<<"your age is:"<<age<<\n<<"so,you are eligible to vote";

	}
	else
	{
		cout<<"your age is:"<<age<<\n<<"so,you are not eligible to vote";
	}
	return 0;
}



#OUTPUT:
enter your age:20
your age is:20
so,you are eligible to vote
