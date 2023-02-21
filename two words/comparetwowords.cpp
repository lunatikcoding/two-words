#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main() 
{
	string word1;
	string word2;

	cout << "Please Enter Two Words"<<endl;
	cin >> word1 >> word2;

	if (word1.length() == word2.length())
	{
		cout << word1 << " They are the same length " << word2 << endl;
	}
	
	if (word1.length() > word2.length())
	{
		cout << word1 << " Is Longer Than " << word2 << endl;
	}

	if (word1.length() < word2.length())
	{
		cout << word1 << " Is Shorter Than " << word2 << endl;
	}
	
	return 0;




}