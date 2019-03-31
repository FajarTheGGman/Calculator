#include <iostream>
using namespace std;

int main(){

cout << "(ノಠ益ಠ)ノ彡┻━┻ Calculator By Fajar Fidaus\n\n";
cout << "[===================]\n";
cout << "Coder : Fajar Firdaus\n";
cout << "Fb : Fajar Firdaus\n";
cout << "IG : fajar_firdaus_7\n";
cout << "YT : iTech7732\n";
cout << "[===================]\n\n\n";

cout << "[========] Menu [========]\n";
cout << "1.Penjumlahan\n";
cout << "2.Perkalian\n";
cout << "3.Pengurangan\n";
cout << "4.Pembagian\n";
cout << "[========] Menu [========]\n";

int a;
int b;
int hasil;
int inpt;
cout << "Masukan operator : ";
cin >> inpt;
cout << "Masukan angka : ";
cin >> a;
cout << "Masukan angka kedua : ";
cin >> b;


if (inpt == 1){
  hasil = a + b;
}else if (inpt == 2){
    hasil = a * b;
}else if (inpt == 3){
   hasil = a - b;
}else if (inpt == 4){
    hasil = a / b;
}

cout << "Hasilnya adalah : " << hasil << endl;

cout << endl;
cin.get();
return 0;
}
