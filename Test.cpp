#include "doctest.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include "NumberWithUnits.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("checks that the constructor works"){
    CHECK_NOTHROW(NumberWithUnits dollars (500,"USD"));
    CHECK_NOTHROW(NumberWithUnits shekel(104,"ILS"));
    CHECK_NOTHROW(NumberWithUnits sec(54,"sec"));
    CHECK_NOTHROW(NumberWithUnits mints(45,"min"));
    CHECK_NOTHROW(NumberWithUnits hours(10,"hours"));
    CHECK_NOTHROW(NumberWithUnits gram(456,"g"));
    CHECK_NOTHROW(NumberWithUnits kg(56,"kg"));
    CHECK_NOTHROW(NumberWithUnits ton(78,"ton"));
    CHECK_NOTHROW(NumberWithUnits cm(987,"cm"));
    CHECK_NOTHROW(NumberWithUnits meter(345,"m"));
    CHECK_NOTHROW(NumberWithUnits km(34,"km"));
}
TEST_CASE("Illegal inputs"){
    CHECK_THROWS(NumberWithUnits dollars (45,"UsD"));
    CHECK_THROWS(NumberWithUnits shekel(36,"shekel"));
    CHECK_THROWS(NumberWithUnits sec(235,"1/60 mints"));
    CHECK_THROWS(NumberWithUnits mints(30,"60 seconds"));
    CHECK_THROWS(NumberWithUnits hours(85,"HoUr"));
    CHECK_THROWS(NumberWithUnits gram(96,"G"));
    CHECK_THROWS(NumberWithUnits kg(564,"k-g"));
    CHECK_THROWS(NumberWithUnits ton(235,"tOn"));
    CHECK_THROWS(NumberWithUnits cm(657,"cM"));
    CHECK_THROWS(NumberWithUnits meter(78,"meter"));
    CHECK_THROWS(NumberWithUnits km(546,"kilometer"));
}

