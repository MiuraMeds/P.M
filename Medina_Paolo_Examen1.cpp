/*
Nombre del estudiante: Paolo Medina
Fecha: 29/07/2026
Tema: Sistema de registro y análisis de notas
Entrada: cantidad, nombres, notas, opción del menú y nombre a buscar
Proceso: validar, almacenar, recorrer, calcular y buscar
Salida: reporte general y resultado de búsqueda
Enunciado: Una academia necesita un programa en C++ para registrar las notas finales de un grupo de estudiantes y
consultar información básica del curso. El sistema trabajará con un máximo de 20 estudiantes.
De cada estudiante se almacenará:
• primer nombre (sin espacios);
• nota final en escala de 0 a 20.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int opcion, i, notas[20];
    string nombres[20];
    do{
        cout<<"=====MENÚ====="<<endl;
        cout<<"1.REGISTRE ESTUDIANTE Y NOTA"<<endl;
        cout<<"2.MOSTRAR REPORTE GENERAL"<<endl;
        cout<<"3.BUSCAR ESTUDIANTE POR NOMBRE"<<endl;
        cout<<"4.SALIR"<<endl;
        cout<<"SELECCIONE UNA OPCIÓN"<<endl;
        cin>>opcion;
        if(opcion>4){
            cout<<"NÚMERO DE OPCIÓN INVÁLIDA, POR FAVOR INTENTE NUEVAMENTE";
        }

        switch(opcion){
            case 1:
            for(i=0;i<20;i++){
                cout<<"INGRESE EL NOMBRE DEL ESTUDIANTE:"<<i+1<<endl;
                cin>>nombres[i];
                cout<<"INGRESE EL NOTA DEL ESTUDIANTE:"<<i+1<<endl;
                cin>>notas[i];
            }
            break;
            case 2:
            if(notas[20]>14){
                cout<<"LOS ESTUDIANTES APROBADOS SON"<<nombres[i]<<endl;
            } else (notas[20]<14);{
                cout<<"LOS ESTUDIANTE QUE NO APROBARON SON"<<nombres[i]<<endl;
            }
            break;
            case 3:
            if(nombres[i]==nombres[20]){
                nombres[i]=true;
            }
            break;

        }
    }while(opcion !=4);
}