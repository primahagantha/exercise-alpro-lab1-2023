#include <iostream>
#include <vector>

using namespace std;

int searchFreq(vector<int>& myVector, int test) {
    int freq = 0;
    for (int loopVector : myVector) {
        if (loopVector == test) {
            freq++;
        }
    }
    return freq;
}

int main() {
    vector<int> myVector = {1, 2, 2, 3, 3, 3, 5, 5, 5, 5};
    int test = 0;

    cout << "Masukkan angka ingin anda cari tau berapa frequency dari angka : ";
    cin >> test;
    
    int freq = searchFreq(myVector, test);
    
    if (freq > 0) {
        cout << "freq dari angka " << test << " di dalam array adalah " << freq << endl;
    } else {
        cout << "angka tidak ditemukan" << endl;
    }
    
    return 0;
}