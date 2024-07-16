#include <iostream>
#include <conio.h>
using namespace std;


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
void aDev(){
  system("cls");
  cout<<"Our Team\n\n";
  cout<<"1. Ade < leader >\n";
  cout<<"2. ilyas\n";
  getch();
}


int main() {
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
    mPertama("ke- tiga");
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