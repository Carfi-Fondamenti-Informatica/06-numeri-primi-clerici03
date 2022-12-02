#include <iostream>
#include "lib.h"

  using namespace std;
int main() {
    int a;
    int b;
    bool r;
    cin >> a;
    b=a-1;
    r=funzione(a,b);
    if(r==1) {
        cout << "numero primo" << endl;
    }else{
        cout<< "numero non primo"<<endl;
    }
    return 0;
}
