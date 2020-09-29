/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/

// Include the Morty header file
#include "Morty.hpp"
#include <cstdlib>

int main(int ac, char** av) {
    // Parse the command line arguments. The program is executed as
    // ./AwwGeezMan {start} {stop} {dimension}
    // or 
    // ./AwwGeezMan {start} {stop} {step} {dimension}
    if (ac != 4 and ac != 5) {

        std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)" << std::endl;
        std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
        std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

        return -1;
    }

    // Parse the command line arguments

    int start = atoi(av[1]);
    int stop = atoi(av[2]);
    int step = 1;

    if (ac != 4) {
        step = atoi(av[3]);
    }

    // Depending on the dimension of the arguments, call the appropriate Morty
    // function
        
    std::string dimension = *(av + ac - 1);
    
    if (dimension == "Z286") {
        if (step == 1) {
            Z286::Morty(start, stop);
        }
        else {
            Z286::Morty(start, stop, step);
        }
    }

    if (dimension == "C137") {
        if (step == 1) {
            C137::Morty(start, stop);
        }
        else {
            C137::Morty(start, stop, step);
        }
    }

    if (dimension != "Z286" && dimension != "C137") {
        std::cout << "ERROR: Unknown dimension!!" << std::endl;
    }

    return 0;
}