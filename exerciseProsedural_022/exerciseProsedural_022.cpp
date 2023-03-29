#include <iostream>

using namespace std;

const int MAX_CANDIDATES = 20;

// Fungsi untuk menentukan apakah seorang kandidat diterima atau tidak
bool diterima(float nilM, float nilB) {
    float Rerata = (nilM + nilB) / 2;
    if (Rerata >= 70 || nilM > 80) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    string nama[MAX_CANDIDATES];
    float nilM[MAX_CANDIDATES], nilB[MAX_CANDIDATES];
    int numCandidates, numDiterima = 0, numDitolak = 0;

    cout << "Masukkan jumlah kandidat: ";
    cin >> numCandidates;

    // Memasukkan nilai tes Matematika dan B. Inggris untuk setiap kandidat
    for (int i = 0; i < numCandidates; i++) {
        cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
        cin >> nama[i];

        cout << "Masukkan nilai Matematika: ";
        cin >> nilM[i];
        cout << "Masukkan nilai B. Inggris: ";
        cin >> nilB[i];

        if (diterima(nilM[i], nilB[i])) {
            cout << nama[i] << " diterima." << endl;
            numDiterima++;
        }
        else {
            cout << nama[i] << " tidak diterima." << endl;
            numDitolak++;
        }
    }
