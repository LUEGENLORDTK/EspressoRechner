//Created with Pearl C for Dummies
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void waitFor (unsigned int secs) {
    unsigned int retTime = (int)time(0) + secs;
    while (time(0) < retTime);
}

int main(int argc, const char * argv[]) {
    
    float liter;
    int espressi;
    
    printf("Wie viele Liter Kaffee?\n");
    scanf("%f", &liter);
    espressi = liter / 0.04;
    printf("Das ist ein %i facher Espresso\n", espressi);
    printf("Dazu benoetigst du %i Gramm Kaffeepulver\n", espressi*8);
    
    for(int i=0;i<espressi;i++){
        printf("Tasse %i von %i wird zubereitet...", i+1, espressi);
        printf("         {\n");
        waitFor(1);
        printf("      {   }\n");
        waitFor(1);
        printf("       }_{ __{\n");
        waitFor(1);
        printf("    .-{   }   }-.\n");
        waitFor(1);
        printf("   (   }     {   )\n");
        waitFor(1);
        printf("   |`-.._____..-'|\n");
        waitFor(1);
        printf("   |             |--.\n");
        waitFor(1);
        printf("   |            (__  \\\n");
        waitFor(1);
        printf("   |             | )  )\n");
        waitFor(1);
        printf("   |             |/  /\n");
        waitFor(1);
        printf("   |             /  /\n");
        waitFor(1);
        printf("   |            (  /\n");
        waitFor(1);
        printf("   \\             y'\n");
        waitFor(1);
        printf("    `-.._____..-'\n\n");
        
    }
    
    return 0;
}


