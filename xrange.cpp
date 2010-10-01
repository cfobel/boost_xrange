#include "xrange.hpp"

int main() {
    BOOST_FOREACH(int i, xrange(10)) {
        std::cout << i << ' ' << std::endl;
    }
    std::cout << std::endl;
    BOOST_FOREACH(int i, xrange(10, 20)) {
        std::cout << i << ' ' << std::endl;
    }
    std::cout << std::endl;
    BOOST_FOREACH(int i, xrange(0, 46, 5)) {
        std::cout << i << ' ' << std::endl;
    }
    std::cout << std::endl;
    BOOST_FOREACH(int i, xrange(10, 0, -1)) {
        std::cout << i << ' ' << std::endl;
    }
}
