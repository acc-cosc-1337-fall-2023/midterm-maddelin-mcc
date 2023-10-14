#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test param_function()")
{
	int num1 = 2;
	int num2 = 2;
	param_function(num1, num2);
	REQUIRE((num1 == 2 && num2 ==10));

	num1 = 500;
	num2 = 0;
	param_function(num1, num2);
	REQUIRE((num1 == 500 && num2 ==10));
}

