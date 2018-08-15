#include <iostream>
using namespace std;
int main()
{
  int i, n=35, *ap_n=&n,arreglo[]={1,2,3,5,6,7,4,8,4,1},*apuntador=&arreglo[0];
  float n2=10.76,*ap_n2=&n2,promedio=1, suma=0;
  char n3='a',*ap_n3=&n3;
  double n5=0.000000000045, *ap_n5=&n5;
  short n6=-15,*ap_n6=&n6;
  long n7=262144,*ap_n7=&n7;
  cout << "valor de n:" <<*ap_n<<endl;
  cout <<"direccion n:" <<ap_n2<<endl;
  cout <<"\n\n";

  cout <<"valor n2:" <<*ap_n2<<endl;
  cout <<"direccion n2:" <<ap_n2<<endl;
  cout <<"\n";

  cout <<"valor n3:"<<*ap_n3<<endl;
  cout <<"direccion n3:"<<ap_n3<<endl;
  coutzz"\n";

  for(i=0;i<10;i++)
  {
	cout << "valor n4:"<<endl;
	cout <<"Dato n[" << i << "]:"<<*apuntador<<endl;
	cout <<"direccion arreglo:"<<apuntador<<endl;
	apuntador++;
  }
  for(i=0; i<10;i++)
  {
	suma=suma+arreglo[i];
	promedio=suma/10;
  }
  cout <<"la suma del arreglo es:"<<suma<<endl;
  cout <<"el promedio es:"<<promedio<<endl;
  cout <<"\n";

  cout <<"valor de n5"<<*ap_n5<<endl;
  cout <<"direccion n5:"<<ap_n5<<endl;
  cout<<"\n";

  cout <<"valor n6:"<<*ap_n6<<endl;
  cout <<"direccion n6:"<<ap_n6<<endl;

  cout <<"valor n7:"<<*ap_n7<<endl;
  cut <<"direccion n7:"<<ap_n7<<endl;
  cout <<"\n";
  return 0;
}
