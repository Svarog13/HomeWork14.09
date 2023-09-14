#include <iostream>
#include<string>

class Vehicle
{
private:
	std::string name;
	int maxSpeed;
	int passengerCapacity;
public:
	Vehicle(): name("no name"), maxSpeed(0), passengerCapacity(0){}
	Vehicle(std::string name, int maxSpeed, int passengerCapacity): name(name), maxSpeed(maxSpeed), passengerCapacity(passengerCapacity){}
	
	void displayInfo()const
	{
		std::cout << "Vehicle: " << name << std::endl;
		std::cout << "Max Speed: " << maxSpeed << std::endl;
		std::cout << "Passenger Capacity: " << passengerCapacity << std::endl;
	}
};

class Car : public Vehicle
{
private: 
	float engineCapacity;
public:
	Car() : engineCapacity(0.0){}
	Car(std::string name, int maxSpeed, int passengerCapacity, double engineCapacity) :
		Vehicle(name, maxSpeed, passengerCapacity), engineCapacity(engineCapacity){}
	void displayInfo()const
	{
		Vehicle::displayInfo();
		std::cout << "Engine Capacity: " << engineCapacity << " litres" << std::endl;
	}
};

class Bicycle : public Vehicle
{
private:
	int pedalCount;
public:
	Bicycle() : pedalCount(0) {}
	Bicycle(std::string name, int maxSpeed, int passengerCapacity, int pedalCount) :
		Vehicle(name, maxSpeed, passengerCapacity), pedalCount(pedalCount) {}
	void displayInfo()
	{
		Vehicle::displayInfo();
		std::cout << "Pedal Count: " << pedalCount << std::endl;
	}	
};
class Boat : public Vehicle
{
private:
	std::string hullType;
public:
	Boat() : hullType("no type"){}
	Boat(std::string name, int maxSpeed, int passengerCapacyty , std::string hullType):
	Vehicle(name,maxSpeed,passengerCapacyty),hullType(hullType){}

	void displayInfo()
	{
		Vehicle::displayInfo();
		std::cout << "Hull Type: " << hullType << std::endl;
	}
};