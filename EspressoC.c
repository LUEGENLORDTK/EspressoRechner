//Created with Pearl C for Dummies
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float liter;
    int espressi;
    
    printf("Wie viele Liter Kaffee?\n");
    scanf("%f", &liter);
    espressi = liter / 0.04;
    printf("Das ist ein %i facher Espresso\n", espressi);
    
    return 0;
}

