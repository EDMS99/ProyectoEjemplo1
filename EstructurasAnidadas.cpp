#include <iostream>
#include <conio.h>
using namespace std;

struct Animal{
	char nombre[20];
	int edad;
	struct Animal *ptr;
} animal1,animal2,*inicio;

int main ()
{
	inicio=&animal1;
	inicio->ptr=&animal2;
	cout <<"edad del animal 1: ";
	cin>>inicio->edad;
	cout<<"nombre del animal 1: ";
	fflush(stdin);
	cin.getline(inicio->nombre,20,'\n');
	
	cout <<"edad del animal 2: ";
	cin>>inicio->ptr->edad;
	cout<<"nombre del animal 2: ";
	fflush(stdin);
	cin.getline(inicio->ptr->nombre,20,'\n');
	
	int totaldeanimales=10;
	
	struct Animal animal3;
	inicio->ptr->ptr=&animal3;//rellenamos al naimal 3//
	
	cout<<"edad del animal 3: "<<endl;
	cin>>inicio->ptr->ptr->edad;
	cout<<"nombre del animal 3: "<<endl;
	fflush(stdin);
	cin.getline(inicio->ptr->ptr->nombre,20,'\n');
	
	cout<<"direccion inicio: "<<&inicio<<endl;
	cout<<"direccion aniaml1: "<<&animal1<<endl;
	cout<<"direccion animal2: "<<&animal2<<endl;
	cout<<"edad que se guardo 1: "<<inicio->edad<<endl;
	cout<<"nombre que se guardo 1: "<<inicio->nombre<<endl;
	cout<<"edad que se guardo 2: "<<inicio->ptr->edad<<endl;
	cout<<"nombre que se guardo 2: "<<inicio->ptr->nombre<<endl;
	cout<<"nombre3: "<<inicio->ptr->ptr->nombre<<endl;
	cout<<"edad3 :"<<inicio->ptr->ptr->edad<<endl;
	
	
	cin.get();
	return 0;
}
