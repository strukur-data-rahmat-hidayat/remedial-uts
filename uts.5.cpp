#include<iostream>
using namespace std;
int main()
{
    string  hari[4][4]={{"satu","dua","tiga","empat"},{"lima","enam","tujuh","delapan",},{"sembilan","sepuluh","sebelas","duabelas"}
    ,{"tigabelas","empatbelas","limabelas","enambelas"}};



    for( int a=0;a<4;a++){
    for(int b=0;b<4;b++){
        cout<<hari[a][b]<<" | ";
    }cout<<endl;
    }
    return 0;
}


