#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	ofstream file("text.txt", ios::out);

	if (!file)
	{
		cout << "Error creating file!";
		return 1;
	}
	file << "Hello world ";
	file.close();

	ofstream user_text("text.txt", ios::app);
	if (!user_text)
	{
		cout << "Error opening file!";
		return 1;
	}
	string usertext;
	cout << "Enter your text to append:";
	getline(cin, usertext);

	user_text << usertext << endl;
	user_text.close();

	cout << "Text saved successfully";
	return 0;
}