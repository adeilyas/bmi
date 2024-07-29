#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

struct imb{          
  int tinggiBadan;
  int beratBadan;
  char jk; 
  int usia;
  string nama;
  float bmi;
}; 
imb pengguna[10];
int posisi=-1;
string kategImt[5];


 
void dMenu(){
system("cls");
cout<<"Aplikasi Indeks Massa Tubuh"<<"\n";       
cout<<"1. Hitung Index Masa Tubuh"<<"\n";            
cout<<"2. Daftar Penggunaan"<<"\n";            
cout<<"3. Referensi Index Masa Tubuh"<<"\n";           
cout<<"4. Tentang Developer"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}
void refBMI(){
  system("cls");
  cout<<"Referensi Kategori Idex Massa Tubuh\n\n";
  cout<<"-> "<<kategImt[0]<<"\n";
  cout<<"-> "<<kategImt[1]<<"\n";
  cout<<"-> "<<kategImt[2]<<"\n";
  cout<<"-> "<<kategImt[3]<<"\n";
  cout<<"-> "<<kategImt[4]<<"\n";
  getch();
}

int cekBmi(float data){

if(data<17.0)
return 0;
else if(data<=18.4)
return 1;
else if(data <= 25.0)
  return 2;
else if(data<=27.0)
  return 3;
 else
return 4;

}
void aDev(){
  system("cls");
  cout<<"Our Team\n\n";
  cout<<"1. Ade < leader >\n";
  cout<<"2. ilyas\n";
  getch();
}

void awal(){
  kategImt[0]="Kurang dari 17.0 termasuk dalam kategori kurus tingkat berat";
  kategImt[1]="17.0 - 18.4 termasuk dalam kategori kurus tingkat ringan";
  kategImt[2]="18.5 - 25.0 termasuk dalam kategori normal";
  kategImt[3]="25.1 - 27.0 termasuk dalam kategori gemuk tingkat ringan";
  kategImt[4]="Di atas 27 termasuk dalam kategori gemuk tingkat berat";
}

char hurufBesar(char masuk){
  if(masuk=='l')
  return 'L';
  else if(masuk=='p')
  return 'P';
  else if(masuk=='P' || masuk=='L')
  return masuk;
  else
  return '-';
}
float getBmi(float tinggi,float berat){
float mTinggi=tinggi/100;
float hasil=berat/(mTinggi*mTinggi);
return hasil;
}
void hitung (){
system("cls");
posisi++;
char jk;
int tinggi;
cout <<"Hitung Indeks Massa Tubuh\n\n";
cout <<"Berat Badan    [kg]: ";
cin >> pengguna[posisi].beratBadan;
cout <<"Tinggi Badan   [cm]: ";
cin >> pengguna[posisi].tinggiBadan;
cout <<"Jenis Kelamin (L/P): ";
cin >> jk;
pengguna[posisi].jk=hurufBesar(jk);
cout <<"Usia               : ";
cin >> pengguna[posisi].usia;
cout <<"Nama               : ";
cin >> pengguna[posisi].nama;

pengguna[posisi].bmi=getBmi(pengguna[posisi].tinggiBadan,pengguna[posisi].beratBadan);

cout <<"Hasil BMI          : "<<pengguna[posisi].bmi;
cout <<"\n"<<kategImt[cekBmi(pengguna[posisi].bmi)];

getch();
}

void sampelData(){
  pengguna[posisi].beratBadan=67;
  pengguna[posisi].tinggiBadan=158;
  pengguna[posisi].usia=30;
  pengguna[posisi].jk='L';
  pengguna[posisi].nama="Pengguna Aplikasi Laki-laki";
  pengguna[posisi].bmi=0.0;
  posisi++;
  pengguna[posisi].beratBadan=58;
  pengguna[posisi].tinggiBadan=151;
  pengguna[posisi].usia=28;
  pengguna[posisi].jk='P';
  pengguna[posisi].nama="Pengguna Aplikasi Perempuan";
  pengguna[posisi].bmi=0.0;
  posisi++;


}
void listPengguna(){
int count;
system("cls");
if(posisi>=0){
cout<<"Daftar Pengguna :\n";
for (int i = 0; i <= posisi; i++)
{
  cout<<i+1<<". "<<pengguna[i].jk<<" # "<<pengguna[i].bmi<<" # "<<kategImt[cekBmi(pengguna[i].bmi)]<<"\n";
}


}else{
  cout<<"kosong";
}


}

int main() {
awal();
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    hitung();
    break;
   case '2':
    //mPertama("ke- dua");
    listPengguna();
    getch();
    /* code */ 
    break;  
   case '3':
    refBMI();
    /* code */
    break;  
   case '4':
    aDev();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}