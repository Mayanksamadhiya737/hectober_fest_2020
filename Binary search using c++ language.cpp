#include <iostream>

#include <conio.h>

using namespace std;
void Sort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
void cari(int a[], int b, int target) {

    int awal = 0, akhir = b;
    int startIndex = -1;
    while (awal <= akhir) {
        int tengah = (akhir - awal) / 2 + awal;
        if (a[tengah] > target) {
            akhir = tengah - 1;
        } else if (a[tengah] == target) {
            startIndex = tengah;
            akhir = tengah - 1;
        } else
            awal = tengah + 1;
    }

    int endIndex = -1;
    awal = 0;
    akhir = b;
    while (awal <= akhir) {
        int tengah = (akhir - awal) / 2 + awal;
        if (a[tengah] > target) {
            akhir = tengah - 1;
        } else if (a[tengah] == target) {
            endIndex = tengah;
            awal = tengah + 1;
        } else
            awal = tengah + 1;
    }

    if (startIndex != -1 && endIndex != -1){
    	cout<<endl<<"data ada pada urutan ke ke..."<<endl;
        for(int i=0; i+startIndex<=endIndex;i++){
                cout<<i+startIndex + 1<<",";
			
        }
    }else {
    	cout << "data tidak ada";
	}
}
int main(){

int Ar[10]; // untuk proses ascending

int i, tar, jumlahdata;

	cout<<"Inputkan Jumlah Data yang akan diinputkan : ";
	cin>>jumlahdata;
	for(i=0;i<jumlahdata;i++){
		cout<<"Masukan Data "<<i+1<<" : ";
		cin>>Ar[i];	
	}
//	cout<<"Data : ";
//	for(i=0;i<jumlahdata;i++){
//		cout<<Ar[i]<<" ";
//	}

Sort(Ar, jumlahdata);
	cout<<"Data : ";
	for(i=0;i<jumlahdata;i++){
		cout<<Ar[i]<<" ";
	}
cout<<endl<<"masukan data yang dicari : ";

cin>>tar;

cari(Ar, jumlahdata, tar);

getch();

}
