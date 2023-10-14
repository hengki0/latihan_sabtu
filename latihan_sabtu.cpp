#include <iostream>
using namespace std;

int main() {
    float uts, uas, quiz, tugas, nilai_proyek, rata_rata;

    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    
    cout << "Masukkan nilai UAS: ";
    cin >> uas;
    
    cout << "Masukkan nilai Quiz: ";
    cin >> quiz;
    
    cout << "Masukkan nilai Tugas: ";
    cin >> tugas;
    
    cout << "Masukkan nilai Proyek: ";
    cin >> nilai_proyek;

    rata_rata = (uts + uas + quiz + tugas + nilai_proyek) / 5.0;

    cout << "Nilai rata-rata adalah: " << rata_rata << endl;

    // Menentukan predikat
    if (rata_rata >= 90) {
        cout << "Predikat: A" << endl;
    } else if (rata_rata >= 80) {
        cout << "Predikat: B" << endl;
    } else if (rata_rata >= 70) {
        cout << "Predikat: C" << endl;
    } else if (rata_rata >= 60) {
        cout << "Predikat: D" << endl;
    } else {
        cout << "Predikat: E" << endl;
    }

    
}
