#include <conio.h>
#include <iostream>
#include <stdio.h>
#define MAX 10



using namespace std;
struct mahasiswa{
    char nim[20];
    string nama;
    int uas,uts,tugas;

};

void inputMhs(mahasiswa &m);
float rata2 (mahasiswa m);
int main()
{
mahasiswa mhs[MAX];

for (int i=0; i <MAX; i++)
{
	cout<<"Masukan Data Mahasiswa ke-"<<i+1<<endl;
	inputMhs(mhs [i]);
cout<<"rata-rata = " <<rata2(mhs [i]);
cout<<"\n\n ";
}

getch();
return 0;

}
void inputMhs(mahasiswa &m){
cout<<"Input nama = ";
cin>>(m).nama;
cout<<"Input nim = ";
cin>>(m).nim;
cout<<"Input nilai uas = ";
cin>>(m).uas;
cout<<"Input nilai uts = ";
cin>>(m).uts;
cout<<"Input nilai Tugas = ";
cin>>(m).tugas;
}

float rata2(mahasiswa m){
	return (0.3*m.uts)+(0.4*m.uas)+(0.3*m.tugas);
}
 
