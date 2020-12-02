//Clase INDVIDUAL
//Paulina Yasaret Chávez Roldán A01751696

#ifndef ETAPADOS_C
#define ETAPADOS_C
#include "Paquete.h"
#include <iostream>
#include <string>
using namespace std;


class Etapados{
    private:
    string edoproducto;
    string reembolso;
    string causaeb;
    string tiempo_env;
    string comentarios;
    public:
    Etapados(){
        edoproducto = "Si";
        reembolso = "No";
        causaeb = "No hace falta";
        tiempo_env = "Si";
        comentarios = "Todo excelente";
    }
    Etapados(string edoproducto ,string reembolso ,string  causaeb,string tiempo_env,string comentarios){
         this -> edoproducto = edoproducto,
         this -> reembolso = reembolso;
         this -> causaeb = causaeb ;
         this -> tiempo_env = tiempo_env;
         this -> comentarios = comentarios;

    }
    ~Etapados(){
        //Destructor
    }

    void retroalimentacion(){
        string edo;
        string reem;
        string c_reem;
        string coments;

        cout << "¿Su producto llego en condiciones optimas? (Si/no)"; getline(cin,edo);
        cout << "¿Requiere de algun reembolso o necesita realizar una devolucion? (Si/No)"; getline(cin,reem);
        cout << "¿Cual es la causa de su reembolso o devolucion? "; getline(cin, c_reem);
        cout << "¿Tiene algun comentario extra?"; getline(cin, coments);
        cout << "Presione enter\n";
        cin.ignore(32767,'\n');
        edoproducto = edo;
        reembolso = reem;
        causaeb = c_reem;
        comentarios = coments;
    }
    void imprimirretro(){
        cout << "LLego bien el producto: " << edoproducto << endl;
        cout << "Requiere reeembolso: " << reembolso << endl;
        cout << "Causa reembolso: " << causaeb << endl;
        cout << "Sus comentarios fueron: " << comentarios << endl;
    }
    void enviar(){
        cout << "Sus mensajes seran enviados en brevedad" << endl;
        cout << "Gracias por sus comentarios" << endl;
    }
};
#endif