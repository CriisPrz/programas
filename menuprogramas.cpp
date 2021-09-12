#include <iostream>
#include <cstdlib>
#include<cstring>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h> 
#include <time.h>
#include <math.h>
#define N 11 
#include <limits>
 #include<conio.h>
#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2
#define CENTENAS 1

using namespace std;

// Prototipos de las funciones
void Operaciones();
void paroimpar();
void conversor1();
void palindroma();
void romanos();
void tabla1();
void tabla2();
void binario();
void hexadecimal();
void punto();
void cajero();
void hipotenusa();
void areayperimetro();
void areatriangulo();


int main()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        // Texto del menú que se verá cada vez
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Operaciones Básicas" << endl;
        cout << "\t2. Determinar si un número es par o impar" << endl;
        cout << "\t3. Conversor " << endl;
        cout << "\t4. Determinar si una palabra es palíndroma" << endl;
        cout << "\n\t5. Conversión de números arábigos a romanos" << endl;
        cout << "\t6. Conversión de números enteros a letras" << endl;
        cout << "\t7. Conversión de números enteros con decimal a letras" << endl;
        cout << "\t8. Una tabla de multiplicar" << endl;
        cout << "\n\t9. Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "\t10. Crear de forma gráfica la multiplicación manual" << endl;
        cout << "\t11. Conversión de números decimales a binario" << endl;
        cout << "\t12. Conversión de números decimales a hexadecimales" << endl;
        cout << "\n\t13. Crear Figuras Geométricas Básicas" << endl;
        cout << "\t14. Mover un punto en toda la pantalla" << endl;
        cout << "\t15. Simular un Cajero Automático (Autómata)  " << endl;
        cout << "\t16.  Calcular la hipotenusa " << endl;
        cout << "\t17. Area y perimetro" << endl;
        cout << "\t18. Area y perimetro del triangulo  " << endl;
        
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        int numero1, numero2;
        float resultado;
        switch (opcion)
        {
        case 1:
            Operaciones();
            break;

        case 2:
            paroimpar();
            break;

        case 3:
            conversor1();
            break;

        
        case 5:
            romanos();
            break;

        

        case 8:
           binario();
            break;
            
        case 9:
            hexadecimal();
            break;

        case 10:
            punto();
            break;

        case 11:
            cajero();
            break;

        case 12:
            hipotenusa();
            break;
            
        case 13:
            areayperimetro();
            break;

        case 14:
            areatriangulo();
            break;

        

        case 0:
            repetir = false ;
            break;
        }
    } while (repetir);

    return 0;
}


void  Operaciones()
{
    int a;
int b;
int suma;
int resta;
int mult;
double div;




cout<<"Ingrese el primer numero:  ";
cin>>a;
cout<<"Ingrese el segundo numero:  ";
cin>>b;
suma= a+b;
cout<<"El resultado de la suma es: "<<suma<<endl;

    system("pause>nul");
}

void paroimpar()
{
    long long int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	
	
	

    system("pause>nul");
}

void conversor1()
{
    char resp;
 int num,num2,num3,num4,num5,c,c2,c3,c4;
 float cm,km,m,dm;
 
 do{
 	printf("Hola, este programa  es un converson de unidades de medida (logintud).\n\n");
 
 	printf("Seleccione la unidad a la que quiere convertir. \n1.-Metros\n2.-Cent\241metros \n3.-Dec\241metros \n4.-Kil\242metros\n\n");
 	scanf("%d",&num);
 	system("cls");
 	if(num==1){
 		printf("Ud; Ha seleccionado la opcion de Metros\n\n");
 		printf("¿A que unidad lo quiere convertir? \n1.-Metros-->cm \n2.-Metros-->dm \n3.-Metros-->km\n\n");
 		scanf("%d",&num2);
 		system("cls");
		 printf("Ingrese el numero a convertir\n");
 		scanf("%d",&c);
 		} if(num2==1){
 		cm=c*100;
 		printf("Los cent\241metros son: %.3f",cm);
	 }else
	 if(num2==2){
	 	dm=c/0.1000;
	 	printf("Los dec\241metros son de :%.3f",dm);
	 }else
	 	if(num2==3){
	 		km=c*1000;
	 		printf("Los kil\242metros son de : %.3f",km);
		 }else
		 if(num==2){
		 	printf("Ud;ha seleccionado la opcion de Centímetros\n");
		 	printf("A que unidad lo quiere convertir.\n \n1.-Cent\241metros-->M\n \n2.-Cent\241metros-->dm \n3.-Cent\241metros--->k\n\n");
		 	scanf("%d",&num3);
		 	 printf("ingrese el numero a convertir\n");
		 	 scanf("%d",&c2);
			 if(num3==1){
			 	m=c2/100;
			 	printf("Los metros son de: %.3f",m);
			 }else
			  if(num3==2){
			    dm=c2*0.1000;
			  	printf("Los dec\241metros son de: %.4f",dm);
			  }else
			  if(num3==3){
			  	km=c2*0.000010;
			  	printf("Los kil\242metros son de :%.8f",km);
 
			  }else
			  if(num==3){
			  printf("Ud;ha seleccionado la opcion de Decímetros\n");
		 	printf("A que unidad lo quiere convertir. 1.-Decimetros-->M\n 2.-DC-->cm 3.-Dc--->k");
		 	scanf("%d",&num4);
		 	printf("ingrese el numero a convertir\n");
		 	 scanf("%d",&c3);
			 if(num4==1){
			 	m=c3*0.1000;
			 	printf("Los metros son de: %.4f",m);
			 }else
			 if(num4==2){
			 	cm=c3*10;
			 	printf("Los cent\241metros son de : %.3f",cm);
 
				 }else
				 if(num4==3){
				 	km=c3*0.0001;
				 	printf("Los kil\242metros son de : %.7f",km);
 
				 }else
			  if(num==4){
			  printf("Ud;ha seleccionado la opcion de kilómetros\n");
		 	printf("A que unidad lo quiere convertir. 1.-kilómetros-->M\n 2.-km-->cm 3.-km--->dm");
		 	scanf("%d",&num5);
		 	printf("Ingrese el numero a convertir\n");
		 	scanf("%d",&c4);
			 if(num5==1){
		 		m=c4*1000;
		 		printf("Los metros son de: %.6f",m);
 
				 }else
				 if(num5==2){
				 	cm=c4*100000;
				 	printf("Los cent\241metros son de: %.8f",cm);
 
				 }else
				 if(num5==3){
				 	dm=c4*10000;
				 	printf("los Dec\241metros son de: %.8f",dm);
 
				 	printf("¿Desea convertir otro numero?");
				 	scanf("%s",&resp);
				 }
			}
		}
	}
}
				 	while(resp=='s');
			
				 
    system("pause>nul");
}


void  tabla1()
{
   
   int numero;
	
	
	do{
		cout<<"Digite un numero[1-10]: "; cin>>numero;
	}while((numero<1) || (numero>10));
	
	
	for(int i=1;i<=20;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	getch();	

    system("pause>nul");

}
void  tabla2()
{
    int numero;
	
	
	do{
		cout<<"Digite un numero[1-10]: "; cin>>numero;
	}while((numero<1) || (numero>10));
	
	
	for(int i=1;i<=20;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	getch();	
    system("pause>nul");
}
void  binario()
{
    int decimal;
    short binario[8];

    cout << "Ingrese el valor en decimal a convertir:" << endl;
    cin >> decimal;

    for (int i = 0; i < 8; i++)
    {
        binario[i] = decimal % 2;
        decimal /= 2;
    }

    cout << "El numero en binario es:" << endl;

    for (int i = 7; i >= 0; i--)
    {
        cout << binario[i];
    }

    cout << endl;

    system("pause>nul");
}
void  hexadecimal()
{
   int digitoex[20];
    int decimal, residuo, resultado, i = 0;

    cout << "Introduce el numero decimal a convertir: " << endl;
    cin >> decimal;

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitoex[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

    cout << "El equivalente en hexadecimal es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }   
    }
    cout << endl;

    system("pause>nul");

}
void  punto()
{
   int n,i,j,x=0,y=0,k;
        char c,opc='u', opc2;
    cout<<"Ingrese caracter: ";
    cin>>c;
    do{
       cout<<"Ingrese dimensiones (5-25): ";
       cin>>n;
    }while(n<5 || n>25);
    srand(time(0));  //inicializando la semilla para la función rand() 
    do{
     system("cls"); //limpiado de pantalla
     for(j=0;j<x;j++)
     cout<<endl;
     for(j=0;j<n;j++){
      for(i=0;i<y;i++)
      cout<<" ";
      for(i=0;i<n;i++){
        if(j==0 || i==0 || j==n-1 || i==n-1|| i==j+n/2|| i==j-n/2||j==n/2-i || j==3*n/2-1-i || j==n/2 && i==n/2)
        cout<<c;
        else cout<<" ";}
        cout<<endl;
        }
     //condiciones para volver al menú o presentarlo por primera vez
     if(opc=='u' || opc=='b'&& k==15 || opc=='a' && opc2=='x'){


      k=0;
      opc2='u';
     cout<<"  *Menu*\n a)Para mover figura manualmente\n b)Para que la figura se mueva aleatoriamente \n z)salir \n Opcion: ";
     cin>>opc;
     }
     if(opc=='a'){
      if (opc2=='u')
       cout<<"Para mover figura presione(w/s/a/d/)  x (para volver al menu anterior)";
             
     opc2=getch();
     switch(opc2){
     case 'w': x--;break;
     case 's': if(x<24-n)x++;break;
     case 'a': y--;break;
     case 'd': if(y<79-n)y++;break;
     case 'x': break;
   
     }
     }
     if(opc=='b'){
       k++;
       y=1+rand()%(78-n);
       x=1+rand()%(25);        
       Sleep(600); //pausa de 600 milisegundos
       }
      if(opc!='a' && opc!='b' && opc!='z')
      opc='u';        
     }while(opc!='z'); 
    system("pause>nul");
}
void  cajero()
{
    
int saldo_inicial = 1000,opc;
	float extra,saldo = 0,retiro; 
	
	cout<<"\tBienvenido a su cajero automatico"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; 
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"\nCuanto dinero desea ingresar en cuenta: "; 
				cin>>extra;
				
				saldo = saldo_inicial + extra;
				cout<<"\nDinero en cuenta: "<<saldo; break;
		case 2: cout<<"\nCuanto dinero desea retirar: "; 
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No cuenta con esa cantidad";
				}
				else{
					saldo = saldo_inicial - retiro;
					cout<<"\nDinero en cuenta: "<<saldo; break;
				}
		case 3: break;
		dafault: cout<<"Se equivoco de opcion de menu";break;
	}
    system("pause>nul");
}
void  hipotenusa()
{
    int co,ca;
 float h;
 
 cout<<"digite cateto opuesto:";
 cin>>co;
 
 cout<<"digite cateto adyacente:";
 cin>>ca;
 
 h=sqrt (pow(co,2)+pow(ca,2));
 
 cout<<"la hipotenusa es:"<<h;
 
 cin.get();

    system("pause>nul");
}
void  areayperimetro()
{
     int base;
     int altura;
     int area;
     int perimetro;
     int lado1;
     int lado2;
     int lado3;
     int D;
     int c;
     int radio;
     double pi=3.1416;
     
     cout<<"Introduzca la base del triangulo:";
     cin>>base;
     cout<<"Introduzca la altura del triangulo:";
     cin>>altura;
     area=(base*altura)/2;
     cout<<"El valor del area es: "<<area<<endl;
     system("pause");
     
     
     
     cout<<"Introduzca la base del cuadrado: ";
     cin>>base;
     cout<<"Introduzca la altura del cuadrado: ";
     cin>>altura;
     area=(base*altura);
     cout<<"El valor del area es: "<<area<<endl;
     perimetro=(base*4);
     cout<<"El valor del perimetro es: "<<perimetro<<endl;
     system("pause");
     
     
     
     cout<<"Introduzca la base del rectángulo: ";
     cin>>base;
     cout<<"Introduzca el perimetro del rectangulo: ";
     cin>>altura;
     area=(base*altura);
     cout<<"El valor del area es: "<<area<<endl;
     perimetro=(base+altura)*2;
     cout<<"El valor del perimetro es: "<<perimetro<<endl;
     system("pause");
     
     
     cout<<"Introduzca la base del paralelogramo: ";
     cin>>base;
     cout<<"Introduzca la altura del paralelogramo: ";
     cin>>altura;
     area=(base*altura);
     cout<<"El valor del area es: "<<area<<endl;
     perimetro=(base+altura)*2;
     cout<<"El valor del perimetro es: "<<perimetro<<endl;
     system("pause");
     
     
     cout<<"Introduzca la diagonal a del rombo: ";
     cin>>D;
     cout<<"Introduzca la diagonal b del rombo: ";
     cin>>c;
     cout<<"Introduzca el valor del lado del rombo: ";
     cin>>lado1;
     area=(D*c)/2;
     cout<<"El valor del area es: "<<area<<endl;
     perimetro=(lado1*4);
     cout<<"El valor del perimetro es: "<<perimetro<<endl;
     system("pause");
     
     
     cout<<"Introduzca la diagonal a del cometa: ";
     cin>>D;
     cout<<"Introduzca la diagonal b del cometa: ";
     cin>>c;
     cout<<"Introduzca el valor del lado a del cometa: ";
     cin>>lado1;
     cout<<"Introduzca el valor del lado b del cometa: ";
     cin>>lado2;
     area=(D*c)/2;
     cout<<"El valor del area es: "<<area<<endl;
     perimetro=(lado1+lado2)*2;
     cout<<"El valor del perimetro es: "<<perimetro<<endl;
     system("pause");
     
     
     
     cout<<"Introduzca lado 1 del trapecio: ";
     cin>>lado1;
     cout<<"Introduzca lado 2 del trapecio: ";
     cin>>lado2;
     cout<<"Introduzca lado 3 del trapecio: ";
     cin>>lado3;
     cout<<"Introduzca base del trapecio: ";
     cin>>base;
     area=((lado2+base)*altura)/2;
     cout<<"El valor del area es: "<<area<<endl;
     perimetro=(lado1+lado2+lado3+base);
     cout<<"El valor del perimetro es: "<<perimetro<<endl;
     system("pause");
     
     
     
     
     cout<<"Introduzca el radio del circulo: ";
     cin>>radio;
     area=(radio*radio)* pi;
     cout<<"El valor del area es: "<<area<<endl;
     perimetro=(radio*2*pi);
     cout<<"El valor del perimetro es: "<<perimetro<<endl;
     

    system("pause>nul");
}
void  areatriangulo()
{
    float base;

float altura;

float resultado;
cout << "Ingrese la base del triangulo: ";

cin >> base;

cout << "Ingrese la altura del triangulo: ";

cin >> altura;

resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.

cout << "El area de su triangulo es: " << resultado << endl;



cin.ignore();

cin.get();

    system("pause>nul");
}
