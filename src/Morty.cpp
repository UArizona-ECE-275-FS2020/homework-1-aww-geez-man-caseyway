/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== //
//          Define functions enclosed in Namespace C137 here
// =========================================================================== //

namespace C137 {
    void Morty(int start, int stop, int step) {
        std::cout<<"Morty C137 says:"<<std::endl;

        for (int i = start; i <= stop; i = i + step) {
            std::cout << i << ": ";

            if (i % 3 == 0) {
                std::cout << "Aww";
            }
            else if (i % 5 == 0) {
                std::cout << "Geez";
            }
            else if (i % 15 == 0) {
                std::cout << "Aww Geez Man";
            }
            std::cout << std::endl;
        }
    }

    void Morty(int start, int stop) {
        std::cout << "Morty C137 says:" << std::endl;

        for (int i = start; i <= stop; i = i++) {
            std::cout << i << ": ";

            if (i % 3 == 0) {
                std::cout << "Aww";
            }
            else if (i % 5 == 0) {
                std::cout << "Geez";
            }
            else if (i % 15 == 0) {
                std::cout << "Aww Geez Man";
            }
            std::cout << std::endl;
        }
    }
}

// =========================================================================== //
//          Define functions enclosed in Namespace Z286 here
// =========================================================================== // 

namespace Z286 {
    void Morty(int start, int stop, int step) {
        std::cout << "Morty Z286 says:" << std::endl;
        
        for (int i = start; i <= stop; i = i + step) {
            std::cout << i << ": ";

            if (i % 3 == 0) {
                std::cout << "wwA";
            }
            else if (i % 5 == 0) {
                std::cout << "zeeG";
            }
            else if (i % 15 == 0) {
                std::cout << "naM zeeG wwA";
            }
            std::cout << std::endl;
        }
    }

    void Morty(int start, int stop) {
        std::cout << "Morty Z286 says:" << std::endl;

        for (int i = start; i <= stop; i = i++) {
            std::cout << i << ": ";

            if (i % 3 == 0) {
                std::cout << "wwA";
            }
            else if (i % 5 == 0) {
                std::cout << "zeeG";
            }
            else if (i % 15 == 0) {
                std::cout << "naM zeeG wwA";
            }
            std::cout << std::endl;
        }
    }
}
