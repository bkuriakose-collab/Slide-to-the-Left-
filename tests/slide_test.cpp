#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/slide.hpp"

TEST_CASE("the array will shift left one time") {
	int arr[5] = { 1,2,3,4,5 };
	arrayShift(arr, 5, 1);
	REQUIRE(arr[0] == 2);
	REQUIRE(arr[1] == 3);
	REQUIRE(arr[2] == 4);
	REQUIRE(arr[3] == 5);
	REQUIRE(arr[4] == 1);
}
TEST_CASE("the array will shift left two times") {
	int arr[5] = { 1,2,3,4,5 };
	arrayShift(arr, 5, 2);
	REQUIRE(arr[0] == 3);
	REQUIRE(arr[1] == 4);
	REQUIRE(arr[2] == 5);
	REQUIRE(arr[3] == 1);
	REQUIRE(arr[4] == 2);
}
TEST_CASE("shifts by array size") {
	int arr[3] = { 1, 2, 3 };
	arrayShift(arr, 3, 3);
	REQUIRE(arr[0] == 1);
	REQUIRE(arr[1] == 2);
	REQUIRE(arr[2] == 3);
}
TEST_CASE("shifts more than array size") {
	int arr[3] = { 1, 2, 3 };
	arrayShift(arr, 3, 4);
	REQUIRE(arr[0] == 2);
	REQUIRE(arr[1] == 3);
	REQUIRE(arr[2] == 1);
}
