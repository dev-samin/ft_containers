// #include <map>
#include "map/map.hpp"
#include <iostream>

int main()
{
    ft::map<char, std::string> mymap;


    // mymap['a'] = "hello";
    std::cout << mymap['a'] << std::endl;
    // mymap['b'] = "another element";
    // mymap['c'] = mymap['b'];

    // std::cout << "mymap['a'] is " << mymap['a'] << '\n';
    // std::cout << "mymap['b'] is " << mymap['b'] << '\n';
    // std::cout << "mymap['c'] is " << mymap['c'] << '\n';
    // std::cout << "mymap['d'] is " << mymap['d'] << '\n';

    // std::cout << "mymap now contains " << mymap.size() << " elements.\n";

    return 0;
}