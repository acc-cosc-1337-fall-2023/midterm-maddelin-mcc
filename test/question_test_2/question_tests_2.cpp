#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test roll die")
{	
	int a;
	for( int i = 0; i < 10; i++)
	{
		a = roll_die();
		REQUIRE((a > 0 && a < 7));
	}
}
