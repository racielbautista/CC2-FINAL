#include <iostream>
#include <string>
using namespace std;

class menu{
private:
    string nombre[30];
    int cantidad;
    float precio;
public:
    void ingreso();
    
};

int main(){
    menu material;
    material.ingreso();
    return 0;
}