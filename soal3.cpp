#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector;
    int n, input;

    cout << "Masukkan panjang Array : ";
    cin >> n;

    cout << "Masukkan nilai : ";
    for (int i = 0; i < n; i++) {
        cin >> input;
        myVector.push_back(input);
    }

    // Memindahkan nilai 0
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (myVector[i] != 0) {
            swap(myVector[i], myVector[j]);
            j++;
        }
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (myVector[j] > myVector[j+1]) {
                swap(myVector[j], myVector[j+1]);
            }
        }
    }

    //cetak hasil move zero / urutkan
    for (int i = 0; i < n; i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}
