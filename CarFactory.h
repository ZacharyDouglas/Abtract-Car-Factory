#ifndef CARFACTORY_H
#define CARFACTORY_H

#include <string>
#include "Car.h"

// absract factory
class CarFactory {
public:
	CarFactory(std::string location,
		int numCarsInProduction) :
		location_(location),
		numCarsInProduction_(numCarsInProduction) {}

	Car* requestCar();
	int getNumCarsInProduction() const
	{
		return numCarsInProduction_;
	}
	std::string getLocation() const { return location_; }
	virtual ~CarFactory() {}
protected:
	virtual Car* makeCar() = 0;

private:
	int numCarsInProduction_;
	std::string location_;
};

// two concrete factories
class FordFactory : public CarFactory {
public:
	FordFactory(std::string location = "",
		int numCarsInProduction = 0) :
		CarFactory(location, numCarsInProduction) {}
protected:
	Car* makeCar();
};

class ToyotaFactory : public CarFactory {
public:
	ToyotaFactory(std::string location = "",
		int numCarsInProduction = 0) :
		CarFactory(location, numCarsInProduction) {}
protected:
	Car* makeCar();
}; 
#endif // CARFACTORY_H