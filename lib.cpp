#include "lib.h"
bool funzione (int a, int b){
    if (b<2) {
        return true;
    }if (a%b==0) {
        return false;
    }else
        funzione(a,b-1);

}
