#include <iostream>

using namespace std;

int main() {
    int direccion = 3509;
    int* ApuntadorADir;
    cout <<  direccion << endl;

    ApuntadorADir=&direccion;
    *ApuntadorADir=3;
    cout <<  direccion << endl;

    return 0;
}
