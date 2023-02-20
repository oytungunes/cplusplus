string firstName = "John";
string lastName = "Doe";
string fullName = firstName + " " + lastName;
cout << fullName;

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName); 
cout << fullName; John Doe

string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string) 

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();

string myString = "Hello";
myString[0] = 'J';
cout << myString;
// Outputs Jello instead of Hello


Special Characters

Escape character	Result	Description
\'	'	Single quote
\"	"	Double quote
\\	\	Backslash

#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;
}

Result Size: 945 x 782
#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;
}

Type your full name: Oytun
Your name is: Oytun
