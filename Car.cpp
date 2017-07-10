#include <string>
#include <array>
#include <cstdlib>
#include <iostream>
#include "Car.h"

//Default constructor for Ford
Ford::Ford() {
	setCar();
};

//Ford constructor with initialization list for abstract class Car
Ford::Ford(const std::array<std::string, 4> models, std::string fordMake) : Car(models, fordMake) {
}

//Method to return pointer of Car to an instance of Ford
Car* Ford::setCar() {
	const std::array<std::string, 4>
		models = { "Focus", "Mustang", "Explorer", "F-150" };
	std::string fordMake = "Ford";
	return new Ford(models, fordMake);
}

//Default constructor for Toyota
Toyota::Toyota() {
	setCar();
};

//Toyota constructor with initialization list for abstract class Car
Toyota::Toyota(const std::array<std::string, 5> models, std::string make) : Car(models, make){
}

//Method to return pointer of Car to an instance of Toyota
Car* Toyota::setCar() {
	const std::array<std::string, 5>
		models = { "Corolla", "Camry",
		"Prius", "4Runner", "Yaris" };
	std::string make = "Toyota";
	return new Toyota(models, make);
}


//Default constructor made for Concrete Method Overloading
Car::Car() {}

//Toyota car constructor
Car::Car(const std::array<std::string, 5> models, std::string make)
{
	make_ = make;
	model_ = models[rand() % models.size()];
}

//Ford car constructor
Car::Car(const std::array<std::string, 4> models, std::string make)
{
	make_ = make;
	model_ = models[rand() % models.size()];
}
