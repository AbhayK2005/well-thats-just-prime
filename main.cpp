#include <iostream>
#include <cassert>
#include "src/prime.hpp"

int main() {
    Factorizer factorizer;
    assert(factorizer.primeFactors(0) == std::vector<int>{});
    assert(factorizer.primeFactors(1) == std::vector<int>{});
    std::vector<int> nine = {3, 3};
    assert(factorizer.primeFactors(9) == nine);
    std::vector<int> ten = {2, 5};
    assert(factorizer.primeFactors(10) == ten);
}
