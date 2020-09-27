#include<iostream>
using namespace std;
void AddStd(int roll,char name)
{
	cout<<"Enter roll :: \n";
	cin>>roll;
	cout<<"Enter name :: \n";
	cin>>name;
}
void SearchStudent(int roll)
{
	cin>>roll;
}
int main()
{
	int roll;
	char name;
	char q;
	int n;
	while(!q)
	{
		cout<<" :****: Student record management system :****: \n";
		cout<<"Press 1 to add a student \n";
		cout<<"Press 2 to search a student \n";
		cout<<"Press q to quit\n";
		cin>>n;
		switch(n)
		{

		case 1:
			cin>>name;
			cin>>roll;
			AddStd(roll,name);
			break;
		case 2:
			cin>>roll;
			SearchStudent(roll);
			break;
		default:
			cout<<"Wrong input!!";
		}
	}
	return 0;
}
