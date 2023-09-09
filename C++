#include<iostream>

using namespace std;
int yogurt=3550;
int N;
int Op=0;
int Num1=0;
int Num1T=0;
int LitrosT=0;
int totalT=0;
int litros=0;
int ventaTT=0;
int ventaTj=0;
int total=0;
int adicionar=0;
int adicionarT=0;
void Factura();
void informe();
void salir();
int main(){
    do{
    	cout<<"Buen dia"<<  
		"\n 1:Registrar una factura \n 2:Ver informe \n 3:Salir \n"<<endl;
    	cin>>Op;
    	switch(Op) {
    		case 1:
    			Factura();
    			        			char Variable2;	
	            cout<<"Quieres continuar S/N"<<endl;
	            cin>>Variable2;
	            Variable2= tolower(Variable2);
                switch(Variable2){
	            case 'n':
	 	          cout<<"El programa se cerrara"<<endl;
	 	           Op=6;
	 	           salir();
	 	         break;
                 case 's':
	 	           cout<<"El programa continuara"<<endl;
	 	         break;}
    		    	break;
    		case 2:
    			informe();
    		break;
    		case 3:
    			salir();
    			break;
}

    	
	}while(Op!=3);
	return 0;
}
 
void Factura(){
	 srand(getpid());
	Num1 = 250+rand() % (750-250);
    cout<<"Regalame la cantidad de litros vendidos"<<endl;
    cin>>litros;   
    ventaTj=(yogurt*litros);
    adicionar=(ventaTj)*0.08;  
    total=adicionar+ventaTj;
    cout<<"Resumen de factura \n\nnumero de factura:"<<Num1<<endl;
	cout<<"\nLitros vendidos:"<<litros<<endl;
	cout<<"\nEl subtotal es de:"<<ventaTj<<endl;
	cout<<"\nEl valor de envio es:"<<adicionar<<endl;
	cout<<"\nTotal a pagar:"<<total<<endl;
	LitrosT=LitrosT+litros;
	totalT=totalT+total;
	Num1T=Num1T+1;
	ventaTT=ventaTT+ventaTj;
	adicionarT=adicionarT+adicionar;
}
void informe(){
    cout<<"Resumen de facturas \nnumero de factura realizadas:"<<Num1T<<endl;
	cout<<"\n Litros vendidos:"<<LitrosT<<endl;
	cout<<"\n subtotales:"<<ventaTT<<endl;
	cout<<"\n valor de envios:"<<adicionarT<<endl;
	cout<<"\nRecibido hasta ahora:"<<totalT<<endl;	

}
void salir(){
  cout<<"Saliste del programa"<<endl;
  Op=3;
}
