/* W07 LAB
   Name: Shuqi Yang
   Std ID: 132162207
   Email: syang136@myseneca.ca
   Date: 03-18-2021
   -------------------------------------------------------
   I have done all the coding by myself and only copied the
   code that my professor provided to complete my workshops
   and assignments.
 */
#ifndef SDDS_TRUCK_H_
#define SDDS_TRUCK_H_
#include <iostream>
#include "MotorVehicle.h"
namespace sdds {
	class Truck: public MotorVehicle {
		double capacity;  //in double precision
		double current_load; //in double precision
	public:
		Truck(const char* pNumber, int year, float cap, const char* address);
		bool addCargo(double cargo);
		bool unloadCargo();
		std::ostream& write(std::ostream& os) const;
		std::istream& read(std::istream& is);
		using MotorVehicle::write;
	};
	std::ostream& operator << (std::ostream& , const Truck&);
	std::istream& operator >> (std::istream& , Truck&);
}
#endif
