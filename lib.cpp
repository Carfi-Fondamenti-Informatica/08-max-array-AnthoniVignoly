#include <iostream>
#include "lib.h"
using namespace std;

int funzione( float numeri[], int dimensione){
    float max=0-1;
    for (int i=0; i<dimensione; i++){
        cin >> numeri[i];
    }
    for(int i=0;i<dimensione;i++){
       if (numeri[i]>max) max=numeri[i];
    }
    return max;
}

