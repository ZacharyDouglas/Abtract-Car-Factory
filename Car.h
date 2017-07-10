
#ifndef CAR_H
#define CAR_H


#include <string>
#include <vector>


class Car {
public:
	//Default constructor due to concrete method overloading
	Car();
	//Abstract constructor for Ford cars
	Car(const std::array<std::string, 5> models, std::string make);
	//Abstract constructor for Toyota Cars
	Car(const std::array<std::string, 4> models, std::string make);
	virtual std::string getMake() = 0;
	virtual std::string getModel() = 0;
	virtual ~Car() {}
protected:
	std::string model_; // this car's model
	std::string make_; // this car's make
};


class Ford : public Car {
public:
	Ford();
	Ford(const std::array<std::string, 4> models, std::string make);
	std::string getMake() {
		return make_;
	}
	std::string getModel() {
		return model_;
	}
	Car* setCar();
};

class Toyota : public Car {
public:
	Toyota();
	Toyota(const std::array<std::string, 5> models, std::string make);
	std::string getMake() {
		return make_;
	}
	std::string getModel() {
		return model_;
	}
	Car* setCar();
};
#endif // !CAR_H