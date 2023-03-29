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
