#include<iostream>
using namespace std;
bool prime(int a)
{

bool check =false;
int c=0; 
for(int i=1;i<=a;i++)
{
	if (a%i==0)
	{
		c+=1;
	}
}
if(c==2)
	{
		check=true;

	}
else
	{
		check = false;
	}
	return check;
}

int main()

{ 
	int n,s;
	cout<<"Enter the positive integer:";
	cin>>n;
	for(int i=0;i<=n/2;i++)
	{
		  s=i+(n-i);
			if(s==n)
			{
			if((prime(i) &&  prime(n-i)))
			{
				cout<<s<<"="<<i<<"+"<<n-i<<endl;
			}
			}

	}
}

OUTPUT:
Enter the positive integer:34
34=3+31
34=5+29
34=11+23
34=17+17
