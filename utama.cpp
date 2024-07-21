#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct imb{          
  int tinggiBadan;
  int beratBadan;
  int jk; 
  int usia;
  string nama;
}; 
imb pengguna[10];
int posisi=0;
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


void aDev(){
  system("cls");
  cout<<"Our Team\n\n";
  cout<<"1. Ade < leader >\n";
  cout<<"2. ilyas\n";
  getch();
}

void awal(){
  kategImt[0]="Kurang dari 17,0 termasuk dalam kategori kurus tingkat berat";
  kategImt[1]="17,0-18,4 termasuk dalam kategori kurus tingkat ringan";
  kategImt[2]="18,5-25,0 termasuk dalam kategori normal";
  kategImt[3]="25,1-27,0 termasuk dalam kategori gemuk tingkat ringan";
  kategImt[4]="Di atas 27 termasuk dalam kategori gemuk tingkat berat";
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
    mPertama("pertama");
    break;
   case '2':
    mPertama("ke- dua");
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