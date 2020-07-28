#include <iostream>

  using namespace std;


 int main() {
 
 
   

   int sumatoria,totalv,totalz,totalc;
      double  subtotal,descuento, total ;
      int num1,num2,num3;

   
  cout<<" Bienvenido Sr usuario a la tienda NOGA"<< endl;
  
  cout <<"Indique cuantos vestidos adquirio"<< endl;
  cin>>num1;
  cout << "Indique cuantos zapatos  adquirio"<< endl;
  cin>>num2 ;
  cout <<"Indique cuantos carteras  adquirio"<< endl;
  cin>>num3 ;
  sumatoria =num1+num2+num3;
  

 
  
  if ((sumatoria>10)&&(sumatoria<20)){ 
  cout<<"Felicidades eres beneficiario de un descuento del 10% por tus compras " <<endl; 
   totalv=num1*80;// total$ de vestidos comprados
   totalc=num3*40;// total$ de carteras compradas
   totalz=num2*50;// total$ de zapatos comprados 
   // total a pagar sin descuento 
   subtotal=totalv+totalc+totalz;
   descuento =(subtotal * 0.10);// descuento del 10%
   total= subtotal-descuento;// valo s pagar con descuento 
   cout << " subtotal:" << subtotal << endl;
   cout << " su valor a pagar es :"<< total<< endl;
   cout << "  Gracias por su compra " << endl;
  }
   
   if ((sumatoria>20)&&(sumatoria<30)){ 
     totalv=num1*80;// total$ de vestidos comprados
     totalc=num3*40;// total$ de carteras compradas
     totalz=num2*50;// total$ de zapatos comprados  
   
     cout <<  "Felicidades eres beneficiario de un descuento del 20% por tus compras " <<endl; 
     subtotal=totalv+totalc+totalz;
     descuento =(subtotal *0.20);// descuento del 10%
     total= subtotal-descuento;// valo s pagar con descuento 
     cout << " subtotal: " << subtotal << endl;
     cout << " su valor a pagar es :"<< total<< endl;
     cout << "  Gracias por su compra " << endl;

   }
   if (sumatoria>=30){
   	  totalv=num1*80;// total$ de vestidos comprados
     totalc=num3*40;// total$ de carteras compradas
     totalz=num2*50;// total$ de zapatos comprados 
     cout<< "Felicidades eres beneficiario de un descuento del 30% por tus compras " <<endl; 
     subtotal=totalv+totalc+totalz;
     descuento =(subtotal *0.30);// descuento del 10%
   total= subtotal-descuento;// valo s pagar con descuento 
   cout << " subtotal:"  << subtotal << endl;
   cout << " su valor a pagar es :"<< total<< endl;
   cout << "  Gracias por su compra " << endl;

   }
  if (sumatoria<10){
  	  totalv=num1*80;// total$ de vestidos comprados
     totalc=num3*40;// total$ de carteras compradas
    totalz=num2*50;// total$ de zapatos comprados 
  	subtotal=totalv+totalc+totalz;
  
  
    cout<<" total a pagar :" << subtotal << endl; 
     }
   
  

   
  

  



  return 0;

}
