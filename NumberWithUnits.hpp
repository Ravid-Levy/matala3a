#include <iostream>
#include <string.h>

using namespace std;

namespace ariel {
   class NumberWithUnits{
      private:
      double num;
      std::string unit; 

      public :
   static void read_units(std::ifstream &units_file);
   NumberWithUnits(double num, std::string unit) : num(num), unit(unit) {}
   ~NumberWithUnits() {} //distructor
   NumberWithUnits operator+();
   NumberWithUnits operator-();
   NumberWithUnits operator+(const NumberWithUnits &nm);
   NumberWithUnits &operator+=(const NumberWithUnits &nm);
   NumberWithUnits operator-(const NumberWithUnits &nm);
   NumberWithUnits &operator-=(const NumberWithUnits &nm);
   NumberWithUnits operator --();
   NumberWithUnits operator --(int);
   NumberWithUnits operator ++();
   NumberWithUnits operator ++(int);
   bool operator ==(const NumberWithUnits& nm)const;
   bool operator !=(const NumberWithUnits& nm)const;
   bool operator >(const NumberWithUnits& nm)const;
   bool operator <(const NumberWithUnits& nm)const;
   bool operator <=(const NumberWithUnits& n2)const;
   bool operator >=(const NumberWithUnits& n2)const;
   friend ostream& operator <<(ostream& out, const NumberWithUnits& n);
   friend istream& operator >>(istream& in, NumberWithUnits& n);
   friend NumberWithUnits operator*(double num, NumberWithUnits& num1);
   };
}

