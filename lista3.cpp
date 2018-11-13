#include <iostream>
#include <string>
#include <googletest/googletest/include/gtest/gtest.h>
#include <googletest/googlemock/include/gmock/gmock.h>
#include "QuadraticEquation.h"

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
	
	QuadraticEquation a(5, 8, 2);
	std::cout << a.Roots(1) << std::endl;
	std::cout << a.Roots(3) << std::endl;
}
