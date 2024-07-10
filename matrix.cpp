#include<iostream>
using namespace std;
int a[2][2][2];
int i,j,k;
class damo
{
	public:
void data()
	{
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			for(k=1;k<=2;k++)
			{
				cout<<"enter "<<i;
			cin>>a[i][j][k];
		}
		}
		}	
	}
};
int main()
{
damo d;
d.data();
}