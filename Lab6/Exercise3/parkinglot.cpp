// Chapter 10 of C++ How to Program
// taxi.cpp
#include <iostream>

using std::cout;

#include "parkinglot.h"
#include "taxi.h"
#include "truck.h"

ParkingLot::ParkingLot():vehicles(0){
	count=0;
}

ParkingLot::~ParkingLot(){
	count=0;
	vehicles.clear();
}

void ParkingLot::addVehicle(Vehicle* x){
	vehicles.push_back(x);
	count++;
}

int ParkingLot::getVehicleCount()const{
	return count;
}

void ParkingLot::printVehicles() const{
	for(int i=0; i<count; i++){
		vehicles[i]->horn();
		vehicles[i]->print();
	}
}
