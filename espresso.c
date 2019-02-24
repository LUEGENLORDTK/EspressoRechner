//Created with Pearl C++ for Dummies

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    float liter;
    int espressi;
    
    cout << "Wie viele Liter Kaffee?" << endl;
    cin >> liter;
    
    espressi = liter / 0.04;
    
    cout << "Das ist ein " << espressi << " facher Espresso" << endl;
    
    return 0;
}
