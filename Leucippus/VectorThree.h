#pragma once
/*
* Class to support crystallography learning
*/

#include <string>
#include <vector>

using namespace std;

class VectorThree
{
public:
    //lazy member data
    double A;
    double B;
    double C;    
    double getByIndex(int idx);
    void putByIndex(int idx, double val);        
    VectorThree();
    VectorThree(double a, double b, double c);
    double distance(VectorThree ABC);
    double getMagnitude();
    double getDotProduct(VectorThree vec);
    VectorThree operator + (VectorThree const& obj);
    VectorThree operator - (VectorThree const& obj);
    VectorThree operator / (double val);
    double getAngle(VectorThree vec);     
    VectorThree getMillerIndices(int m, int n, int p);
    VectorThree getCrystalIndices(int h, int k, int l);    

private:
    int getLCM(int a, int b, int c);

};

