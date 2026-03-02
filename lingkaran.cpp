#include <iostream>
using namespace std;

float phi = 3.14159;
int r;

void input(){
    cout <<"Masukkan ruas =";
    cin >> r;
}

float luaslingkaran(int b){
    return phi*b*b;
}

void output(){
    cout << "hasilnya =" << luaslingkaran(r);
}



int main (){ 
    input();
    output();
} 

//karena phi bukan variabel, jadi bisa ga dimasukkan ke return. dia konstanta. 
//bisa dikatakan variabel kalau angka nya bebas   