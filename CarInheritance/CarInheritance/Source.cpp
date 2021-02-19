#include <iostream>

using namespace std;

class Car {
private:
	string name;
	int speed;
	string color;

public:
	Car(string name, int speed, string color) {
		name = name;
		speed = speed;
		color = color;

	};

};

class Honda: public Car {

};

int main() {

	Car("Honda", 100, "red");

}