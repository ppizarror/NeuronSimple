class Neuron {
private:
    double weight1, weight2;
    double bias;
public:
    Neuron(double _weight1, double _weight2, double _bias);
    double computeZ(double x1, double x2);
    virtual double feed(double x1, double x2);
};