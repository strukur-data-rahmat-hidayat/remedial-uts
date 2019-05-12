#include<iostream>
using namespace std;
int main(void){
string data[11]={"25","26","27","30","33","36","39","45","50","55","60"};
string pencarian;
bool got=false;
int i,get,jum=11;
cout<<"PENCARIAN SQUENTIAL\n";
cout<<"\n";
cout<<"\nData : \t";
for(i=0;i<jum;i++){
    cout<<"\'"<<data[i]<<"\'";
}
cout<<endl;
cout<<"\nData yang anda ingin cari : ";
cin>>pencarian;//input data yabg di cari
for(i=0;i<jum;i++){
    if(pencarian  == data[i]){
        got = true;
        get = i;
    }
}
if(!got){
    cout<<"data tidak ada";
}else{
    cout<<"data \""<<pencarian<<"\" berada di index ke - ";
    for(i=0;i<jum;i++){
    if(pencarian == data[i]){
       cout<<i<<" ";
       }
    }
}
return 0;
}
