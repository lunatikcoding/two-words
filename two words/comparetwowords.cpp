#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main() 
{
	string one;
	string two;

	cout << "Please Enter Two Words"<<endl;
	cin >> one >> two;

	if (one.length() == two.length())
	{
		cout << one << " They are the same length " << two << endl;
	}
	
	if (one.length() > two.length())
	{
		cout << one << " Is Longer Than " << two << endl;
	}

	if (one.length() < two.length())
	{
		cout << one << " Is Shorter Than " << two << endl;
	}
	
	return 0;




}