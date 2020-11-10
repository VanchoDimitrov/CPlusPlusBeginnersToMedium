// CPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>
using namespace std;

void HelloPrinting() {
	// \n creates a new line
	std::cout << "Hello to everyone!\n\n";
	std::cout << "My name is John!";

	// Single line comment
	/* Multiline comment*/

	cin.get();
}

void VariablesAndDataTypes() {
	// Examples for variables. The names must be unique and could start with a letter or _, no white spaces or special characters

	// Basic DataTypes
	// int => 123, -123
	// double => 12.50, -12.50
	// char => V, C, v, c
	// string => "Hello to everyone!"
	// bool true or false

	string name = "John";
	name = "Monica\n\n"; //ovverides the previous value and prints a new line
	cout << name;

	name = "Jesica";
	int myAge;
	myAge = 30;
	cout << "My name is " << name << " and I am " << myAge << " old.\n\n\n";

	bool isActive = true; // printed value for true is 1 and false is 0
	char pressKey = 'V'; // char is sourounded with single quotes
	float invoiceTotal = 55.54850;
	cout << "Is Active? " << isActive << " Press Key: " << pressKey << " Invoice Total: " << invoiceTotal;

	cout << endl; // prints a new line
	// Mathematical operations
	int a, b, c;
	a = 1; b = 2, c = 3;
	int sum = a + b + c;
	cout << "The sum of the given numbers is: " << sum << endl;

	// string concatenation
	string yourName, lastName;
	yourName = "John", lastName = "Doe";
	cout << yourName + " " + lastName;

	cout << endl;
	string a1 = "10", b1 = "20";
	cout << "strings a + b produce " << a1 + b1 << endl;

	// strings length
	name = "John Doe";
	cout << "The string " << name << " is of a length " << name.length() << " same as " << name.size() << endl; // length() or size() are same

	// Access char from a string
	name = "Jesica";
	cout << name[0] << endl; // it accesses index 0 of the string and prints out J
	cout << name[1] << endl;

	// Change a charr within a string
	name[3] = 's';
	name[4] = 'i';
	name[5] = 'c';
	name[6] = 'a'; // this one is not added because index 6 does not exist in first place!
	cout << "After modification " << name << endl;

	cout << endl;
	cout << endl;

	// reference & operator to an existing variable value
	string bookTitle = "Programming with c#";
	string& book = bookTitle;
	cout << &book << endl; // prints the memory allocated address
	cout << book << endl; // prints the assigned string

	cout << endl;
	cout << endl;

	// pointers
	string city = "New York";
	string* _city = &city;
	cout << _city << endl; // with pointer reference
	cout << *_city << endl; // Dereference the pointer reference

	cin.get();
}

void DateTime() {

	char printDateTime[50];

	time_t  timeNow = time(NULL);
	errno_t conversion = ctime_s(printDateTime, 50, &timeNow);

	cout << printDateTime << endl;

	cin.get();
}

void Constants() {
	// Constants can't be overwritten like variables. The value is in read only.

	// In math we know that Pi = 3.14. That value never changes so we can call it a constant.
	const float Pi = 3.14;
	cout << "Pi is longer than: " << Pi;

	cin.get();
}

void InputOperation() {
	string name;
	cout << "What is your name?";
	cin >> name;
	cout << "Your name is: " << name << endl;

	int yourAge;
	cout << "How old are you?";
	cin >> yourAge;
	cout << "I am " << yourAge << " old." << endl;

	double enterYourSalary;
	cout << "Enter your salary: ";
	cin >> enterYourSalary;
	cout << "You have a salary of " << enterYourSalary << "USD." << endl;

	char fullName[] = "John Doe";
	cout << fullName << endl;

	cin.get();
}

void Operators() {
	// Arithmetic operators
	// + Addition, - Subtraction, * Multiplication, / Division, % Modulus, ++ Increment, -- Decrement
	cout << "Arithmetic operators" << endl;
	int a = 4, b = 3;
	cout << "Addition " << a + b << endl;
	cout << "Subtraction " << a - b << endl;
	cout << "Multiplication " << a * b << endl;
	cout << "Division " << a / b << endl;
	cout << "Modulus " << a % b << endl;
	cout << "Increment " << ++a << endl;
	cout << "Decrement " << --a << endl;

	cout << endl;
	// Assignement operators
	// a = 4,  a += 4, a -= 4, a *= 4, a /= 4, a %= 4, a &=3, a |= 4, a ^= 4, a >>= 4, a <<= 4
	cout << "Assignement operators" << endl;
	a = 4;
	cout << "a = 4=" << a << endl;
	a += 4;
	cout << "a += 4=" << a << endl;
	a -= 4;
	cout << "a -= 4=" << a << endl;
	a *= 4;
	cout << "a *= 4=" << a << endl;
	a /= 4;
	cout << "a /= 4=" << a << endl;
	a %= 4;
	cout << "a %= 4=" << a << endl;
	a &= 4;
	cout << "a &= 4=" << a << endl;
	a |= 4;
	cout << "a |= 4=" << a << endl;
	a ^= 4;
	cout << "a ^= 4=" << a << endl;
	a >>= 4;
	cout << "a >>= 4=" << a << endl;
	a <<= 4;
	cout << "a <<= 4=" << a << endl;
	cout << endl;

	// Comparison operators
	// ==, !=, >, <, >=, <=
	cout << "Comparison operators" << endl;
	a = 5, b = 7;
	cout << "a == b " << (a == b) << endl;
	cout << "a != b " << (a != b) << endl;
	cout << "a > b " << (a != b) << endl;
	cout << "a < b " << (a != b) << endl;
	cout << "a >= b " << (a != b) << endl;
	cout << "a <= b " << (a != b) << endl;
	cout << endl;

	// Logical operators
	// &&, ||, !
	string name, lastName;
	name = "John", lastName = "Doe";
	cout << "" << (name == "Jessica" && lastName == "Doe") << endl;
	cout << "" << (name != "Jessica" && lastName == "Doe") << endl;
	cout << "" << (name == "John" && lastName == "Doe") << endl;
}

void MathFunctions() {
	cout << max(6, 20) << endl;
	cout << min(6, 20) << endl;
	cout << round(6.20) << endl;
	cout << abs(-20);
}

void Conditions() {

#pragma region If
	int a, b;
	a = 5, b = 20;

	// if usage
	if (a > b) {
		cout << "a is bigger than b" << endl;
	}

	// else usage
	string name, lastName;
	name = "John"; lastName = "Doe";

	if (name.length() > lastName.length())
	{
		cout << "Name is longer than Last Name!" << endl;
	}
	else
	{
		cout << "Last Name is longer than Name" << endl;
	}

	// else if
	if (name.length() >= 3 && lastName.length() <= 2)
	{
		cout << "That is the right Name and Last Name" << endl;
	}
	else if (lastName.length() >= 3) {
		cout << "Last Name has more than 3 letters" << endl;
	}
	else {
		cout << "None of the above conditions are met." << endl;
	}

	// ternary operator of short if 
	string result = (name == "Jon") ? "True" : "False"; // since condition is not met, result is false
	cout << result << endl;
#pragma endregion If

#pragma region SWITCH
	cout << endl;
	cout << "Please choose payment method!" << endl;
	cout << "-----------------------------" << endl;
	cout << "1 - Credit Card" << endl;
	cout << "2 - Cash" << endl;
	cout << "-----------------------------" << endl;

	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Credit card payment processing..." << endl;
		break;
	case 2:
		cout << "Cash payment processing..." << endl;
		break;
	default:
		break;
	}

	cin.get();
#pragma endregion SWITCH
}

void WhileLoop() {
	int counter = 0;
	while (counter <= 10) {
		cout << "Value: " << counter << endl;
		counter++;
	}
}

void DoWhileLoop() {
	int a = 0;
	do {
		cout << "Value: " << a << endl; // gets executed at least once as opposed to the While loop
		a++;
	} while (a < 10);

	cout << endl;
	cout << endl;

	a = 0;
	// break
	do {
		cout << "Value: " << a << endl; // gets executed at least once as opposed to the While loop
		a++;
		if (a == 5) {
			cout << "Stopped at value " << a << endl;
			break;
		}
	} while (a < 10);

	cout << endl;
	cout << endl;

	a = 0;
	// continue
	do {
		cout << "Value: " << a << endl; // gets executed at least once as opposed to the While loop		
		a++;
		if (a == 5) {
			cout << "Stopped at value " << a << " and continued..." << endl;
			continue;
		}
	} while (a < 10);
}

void ForLoop() {
	int page = 0;
	/*for (page; page <= 10; page++) {
		cout << "Page: " << page << endl;
	}*/

	// break
	for (page; page <= 10; page++) {
		if (page == 2) {
			cout << "I stopped at page " << page << endl;
			break;
		}
	}

	cout << endl;
	// continue
	for (page; page <= 10; page++) {
		if (page == 2) {
			cout << "I stopped at page " << page << " but still continue..." << endl;
			continue;
		}
		cout << "Page: " << page << endl;
	}
}

void Arrays() {
	// Declare an array of a type integer
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // no size allocation
	string cities[] = { "London","New York","Munich","Alexandria" }; // no size allocation

	int coordinates[2] = { 4567897892132,456412134585 }; // allocated size 2

	// printing elements of an array
	cout << numbers[0] << endl; // it prints the value at index 0 which is 1

	cout << endl;
	cout << endl;

	// foor loop
	for (int i = 0; i <= 8; i++) {
		cout << numbers[i] << endl;
	}

	cout << endl;
	cout << endl;

	int arrSize = sizeof(cities) / sizeof(cities[0]) - 1; // array size or length
	for (int i = 0; i <= arrSize; i++) {
		cout << cities[i] << endl;
	}

}

// Functions with parameters
void PrintName(string name, string lastName) {
	cout << name << " " << lastName << endl;
	cin.get();
}

// Function with a default assigned parameter
void Salary(double salary = 55000.50) {
	cout << "Salary " << salary << endl;
	cin.get();
}

// return a fulle name
string GetName(string name, string lastName) {
	return name + " " + lastName;
}

void PrintNameImplementation() {
	string fullName = GetName("John", "Doe");
	cout << "Full Name " << fullName << endl;
}

// Vector Function with return value
vector<string> Countries() {
	vector<string> countries(3);
	countries[0] = "USA";
	countries[1] = "Australia";
	countries[2] = "New Zeland";
	return countries;
}

void CountriesImplementation() {
	for (auto i : Countries()) {
		cout << i << endl;
	}
}

// Function by passing a reference
void GetNameLastName(string& name, string& lastName) {
	string swapRef = name;
	name = lastName;
	lastName = swapRef;
}

void SwapNameAndLastName() {
	// swap name and last name
	string name = "John";
	string lastName = "Doe";

	GetNameLastName(name, lastName);

	cout << name << " " << lastName << endl;
}

//Function overloading when you have the same name for a function but different passing parameter types
string GetAge(string age) {
	return age;
}
#
int GetAge(int age) {
	return age;
}

void FuncOverlImplementation() {
	int yourAge = GetAge(30) + stoi(GetAge("30"));
	cout << yourAge << endl;

	cout << endl;

	if (yourAge > 40) {
		cout << "You appear to be older than 40 or exactly " << yourAge << " years old person." << endl;
	}
}

// Data Structures
void PrintInvoices(struct Invoice invoice);

struct Invoice {
	int InvoiceID;
	string InvoiceNumber;
	string InvoiceDate;
	string InvoiceTotal;
};

void InvoiceImplementation() {
	struct Invoice invoice1;
	struct Invoice invoice2;

	// Add 1st invoice information
	invoice1.InvoiceID = 1;
	invoice1.InvoiceNumber = "0001";
	invoice1.InvoiceDate = "09/11/2020";
	invoice1.InvoiceTotal = "1500.00";
	
	PrintInvoices(invoice1);

	// Add 2nd invoice information
	invoice1.InvoiceID = 2;
	invoice2.InvoiceNumber = "0002";
	invoice2.InvoiceDate = "10/12/2020";
	invoice2.InvoiceTotal = "2500.00";

	PrintInvoices(invoice2);
}

void PrintInvoices(struct Invoice invoice) {	
	cout << invoice.InvoiceID << " " << invoice.InvoiceNumber << " " << invoice.InvoiceDate << " " << invoice.InvoiceTotal << endl;
}

int main()
{
	//HelloPrinting();
	//VariablesAndDataTypes();
	//DateTime();
	//Constants();
	//InputOperation();
	//Operators();
	//MathFunctions();
	//Conditions();
	//WhileLoop();
	//DoWhileLoop();
	//ForLoop();
	//Arrays();
	//PrintName("John", "Doe");
	//Salary();
	//PrintNameImplementation();
	//CountriesImplementation();
	//SwapNameAndLastName();
	//FuncOverlImplementation();
	InvoiceImplementation();


	std::cin.get();
}