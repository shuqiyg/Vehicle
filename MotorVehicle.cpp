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
#include "MotorVehicle.h"
#include <cstring>
#include <iostream>

using namespace std;
namespace sdds {
	MotorVehicle::MotorVehicle(const char* pNumber, int yr) {
		year = yr;	
		strcpy(plateNumber, pNumber);
		strcpy(address, "Factory");
	}
	void MotorVehicle::moveTo(const char* addr) {
		if (strcmp(address, addr) != 0) {
			cout << "|";
			cout.width(8);
			cout.setf(ios::right);
			cout << plateNumber;
			cout << "| |";
			cout.width(20);
			cout << address;
			cout.unsetf(ios::right);
			cout << " ---> ";
			cout.width(20);
			cout.setf(ios::left);
			strcpy(address, addr);
			cout << address;
			cout.unsetf(ios::left);
			cout << "|" << endl;
		}			
	}
	std::ostream& MotorVehicle::write(std::ostream& os) const{
		os << "| " << year << " | " << plateNumber << " | " << address;
		return os;
	}
	std::istream& MotorVehicle::read(std::istream& is) {
		cout << "Built year: ";
		is >> year;
		cout << "License plate: ";
		is >> plateNumber;
		cout << "Current location: ";
		is >> address;
		return is;
	}
	std::ostream& operator<<(std::ostream& ostr, const MotorVehicle& v) {
		return v.write(ostr);
	}
	std::istream& operator>>(std::istream& istr, MotorVehicle& v) {
		return v.read(istr);
	}
}
