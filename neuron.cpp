#include "neuron.h"

Neuron::Neuron(double _weight1, double _weight2, double _bias) {
    weight1 = _weight1;
    weight2 = _weight2;
    bias = _bias;
}

double Neuron::computeZ(double x1, double x2) {
    return x1 * weight1 + x2 * weight2 + bias;
}

double Neuron::feed(double x1, double x2) {
    double z = this->computeZ(x1, x2);
    if (z > 0) return 1; else return 0;
}