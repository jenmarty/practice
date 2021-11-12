
#include <iostream>
#include "animal.cpp"
using namespace std;

int main() {
	
	cout << "hi";
	string animalName;
	cin >> animalName;
	
	Animal temp(animalName);
	
	cout << temp.name;
	return 0;

}              
