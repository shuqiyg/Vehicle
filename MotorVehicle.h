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
#define _CRT_SECURE_NO_WARNINGS
#ifndef SDDS_MOTORVEHICLE_H_
#define SDDS_MOTORVEHICLE_H_
#include <iostream>

namespace sdds {
	class MotorVehicle {
	protected:
		char plateNumber[8];
		char address[64];
		int year;
	public:
		MotorVehicle(const char* pNumber, int year);
		void moveTo(const char* address);
		std::ostream& write(std::ostream& os)const ;
		std::istream& read(std::istream& is);
	};
	std::ostream& operator<<(std::ostream&, const MotorVehicle&);
	std::istream& operator>>(std::istream&, MotorVehicle&);
}
#endif
