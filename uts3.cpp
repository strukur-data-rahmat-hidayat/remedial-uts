#include <iostream>
using namespace std;
int main()
{
struct nama
{
string nama;
string nim;
string ipk;
}a,b;

a.nama="William Stalling";
a.nim="20451009";
a.ipk="3.95";
b.nama="Alan Turing";
b.nim="90015402";
b.ipk="4.0";

cout<<"Nama : "<<a.nama<<endl;
cout<<"NIM  : "<<a.nim<<endl;
cout<<"IPK  : "<<a.ipk<<endl;
cout<<"=========================\n";
cout<<"Nama : "<<b.nama<<endl;
cout<<"NIM  : "<<b.nim<<endl;
cout<<"IPK  : "<<b.ipk<<endl;
}
