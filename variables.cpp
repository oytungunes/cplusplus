//int - stores integers (whole numbers), without decimals, such as 123 or -123
//double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//string - stores text, such as "Hello World". String values are surrounded by double quotes
// bool - stores values with two states: true or false



#include <iostream>
using namespace std;

int main() {
  int myNum = 15;
  cout << myNum;
  return 0;
}

// Note that if you assign a new value to an existing variable, it will overwrite the previous value:


int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10


//Declare multiple variables

int x = 5, y = 6, z = 50;
cout << x + y + z;

int x, y, z;
x = y = z = 50;
cout << x + y + z;


//Constants
//When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'


const int minutesPerHour = 60;
const float PI = 3.14;

