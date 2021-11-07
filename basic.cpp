#include <iostream>
#include <string>
using namespace std;

int main(){
	
	cout << "Hello" << endl;
	cout << "World";
	cout << "!" << endl;
	
	string name = "Mike"; // string of characters
	char testGrade = 'A'; // single 8-bit character
	
	// You can make them unsigned by adding "unsigned" prefix
	
	short age0 = 10; //atleast 16-bits signed integer
	unsigned int age1 = 20; // atleast 16-bits signed integer (not smaller than short)
	long age2 = 30; // atleast 32-bits signed integer
	long long age3 = 40; // atleast 64-bits signed integer
	
	float gpa0 = 2.5f; // single precision floating point
	double gpa1 = 3.5; // double precision floating point
	long double gpa2 = 3.5; // extended precision floating point
	
	bool isTall; // 1 bit -> true/false
	isTall = true;
	
	name = "John";
	
	
	return 0;
}
