#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
const int length = 101;
char List[length];
int Upper, Lower, Digit;


cout << "Create your password\n"<< "Your passwords must meet the following criteria :\n"<< " - The password should be at least six characters long.\n"<< " - The password should contain at least one uppercase\n"<< "   and at least one lowercase letter.\n"<< " - The password should have at least one digit.\n";

	do
	{		
		Upper = Lower = Digit = 0;
		
		cout << "Enter password: ";
		cin.getline(List, length);

		for (int i = 0; i < strlen(List); i++)
		{
			if (isupper(List[i]))
				Upper++;
			if (islower(List[i]))
				Lower++;
			if(isdigit(List[i]))
				Digit++;
		}
		if (strlen(List) < 6)
			cout << "password is not at least six characters long.\n";
		if (Upper == 0)
			cout << "password does not contain at least one uppercase letter.\n";
		if (Lower == 0)
			cout << "password does not contain at least one lowercase letter.\n";
		if (Digit == 0)
			cout << "password does not have at least one digit.\n";			
	}
	while (Upper == 0 || Lower == 0 || Digit == 0 || strlen(List) < 6);

	cout << "Password verified. Your password is: " << List << endl;
}
