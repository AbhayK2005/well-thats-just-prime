#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"

Factorizer factorizer;

TEST_CASE( "Less than 1" ) {
    std::vector<int>expected = {};
    REQUIRE( factorizer.primeFactors(0) == expected );
}

TEST_CASE( "Equal to 1" ) {
    std::vector<int>expected = {};
    REQUIRE( factorizer.primeFactors(1) == expected );
}

TEST_CASE( "Odd number" ) {
    std::vector<int>expected = {3,3};
    REQUIRE( factorizer.primeFactors(9) == expected );
}

TEST_CASE( "Even number" ) {
    std::vector<int>expected = {2,5};
    REQUIRE( factorizer.primeFactors(10) == expected );
}