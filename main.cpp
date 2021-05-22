#include <iostream>
using namespace std;
int main() {
  int n;
  int arreglo[n];
  int contadorImp=0;
  //Numero de elementos del arreglo
  cout<<"Digite el numero de vertices del grafo: ";
  cin>>n;
  //Bucle for para determinar el grado de cada vertice
  for(int i=0; i<n;i++){
    //Bucle do while anidado para evitar errores al llenar el arreglo
    do{
      cout<<"Digite el numero de aristas incidentes al vertice "<<i+1<<" : ";
      cin>>arreglo[i];
      //Condicional para verificar si existe algun error
      if(arreglo[i]>n){
        cout<<"Las aristas incidentes no pueden ser mayor al numero de vertices del grafo";
        cout<<"\nIntentelo nuevamente "<<endl;
      }
    }while(arreglo[i]>n);
  }
  cout<<"------------------------------------------------------"<<endl;
  //Bucle para mostrar los grados de los vertices
  for(int i=0;i<n;i++){
    cout<<"Grado del vertice "<<i+1<<" : "<<arreglo[i]<<endl;
  }
  cout<<"------------------------------------------------------"<<endl;
  //Bucle para contabilizar el numero de vertices de grado impar que se vayan registrando
  for(int i=0;i<n;i++){
    if(arreglo[i]%2 != 0){
      contadorImp=contadorImp+1;
    }
  }
  //Condicionales para verificar la existencia de trayectorias o circuitos de Euler
  if(contadorImp==0){
    cout<<"Existe circuito de Euler";
    cout<<"\nExiste trayectoria de Euler";
  }
  else if(contadorImp>0 && contadorImp<=2){
    cout<<"Existe trayectoria de Euler";
    cout<<"\nNo existe circuito de Euler";
  }
  else{
    cout<<"No existe ni trayectoria ni circuito de Euler";
  }
  return 0;
}