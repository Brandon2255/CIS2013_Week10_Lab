#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Person.cpp"

using namespace std;

int main() {
	
	Person bob;
	Person tom("Tom","M","Stupid");
	Person p3("Susan","F","Pretty");
	
	
	// bob.setName("bob");
	// bob.setAge(25);
	// bob.setRace("pale");
	// bob.setAlive(true);
	// bob.setGender("male");
	
	
	 cout << "name: " << bob.getName() << endl;
	 cout << "age: " << bob.getAge() << endl;
	 cout << "gender: " << bob.getGender() << endl;
	 cout << "race: " << bob.getRace() << endl;
	 cout << "alive: " << bob.getAlive() << endl;


    cout << bob.getStats() << endl;
	
	cout << tom.getStats() << endl;
	
	
	return 0;
	
}