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
#include "Truck.h"

using namespace std;
namespace sdds {
	Truck::Truck(const char* pNumber, int year, float cap, const char* address) : MotorVehicle(pNumber,year) {
		current_load = 0.0;
		capacity = cap;
		moveTo(address);
	}
	bool Truck::addCargo(double cargo) {
		double temp = current_load;
		current_load = (current_load + cargo) > capacity ? capacity : (current_load + cargo);
		return current_load != temp;
	}
	bool Truck::unloadCargo() {
		double temp = current_load;
		current_load = 0;
		return current_load != temp;
	}
	std::ostream& Truck::write(std::ostream& os) const{
		MotorVehicle::write(os);
		os << " | " << current_load << "/" << capacity;
		return os;
	}	
	std::istream& Truck::read(std::istream& is)  {
		MotorVehicle::read(is);
		cout << "Capacity: ";
		is >> capacity;
		cout << "Cargo: ";
		is >> current_load;
		return is;
	}
    std::ostream& operator<<(std::ostream& ostr, const Truck& tr){
		return tr.write(ostr);
		
	}
	std::istream& operator>>(std::istream& istr, Truck& tr) {
		return tr.read(istr);
	}
}