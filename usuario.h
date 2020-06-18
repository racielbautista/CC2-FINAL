#ifndef USUARIO_H
#define USUARIO_H
#include <string>


using std::string;

// para hacer el login - vendria a ser como el controlar haciendo uso del modelo MODELOUSUARIO
class Usuario{
private:
    int idUsuario;
    string usuario;
    string clave;
public:
    Usuario();
    Usuario(string nuevoUsuario, string nuevaClave);

    bool ingresar(string clave);

};

#endif // USUARIO_H
