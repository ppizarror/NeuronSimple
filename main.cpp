#include <iostream>
#include "neuron.h"

int main() {
    Neuron orNeuron(1.0, 1.0, -0.5);
    std::cout << "0 OR 0 = " << orNeuron.feed(0, 0) << std::endl;
    std::cout << "1 OR 0 = " << orNeuron.feed(1, 0) << std::endl;
    std::cout << "0 OR 1 = " << orNeuron.feed(0, 1) << std::endl;
    std::cout << "1 OR 1 = " << orNeuron.feed(1, 1) << std::endl;
    return 0;
}
