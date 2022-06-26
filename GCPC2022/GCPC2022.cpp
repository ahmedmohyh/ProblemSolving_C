#include <iostream>
using namespace std;

void main()
{
	int x;
	cin >> x;

	bool myBoolArray[12] = { true };

	cout <<"the value of the first elemt is " << myBoolArray[3] << endl;
	if (x > 6)
		cout << "Test hello world" << endl;
	else
		cout << "please enter a number that is bigger than 6" << endl;

	return; 
	
}

