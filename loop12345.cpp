#include <iostream>
using namespace std;

int main() {
	
    int j, k, l, m;
    
//Ini merupakan kode untuk mencetak bintang dengan bentuk seperti piramida
    cout << "\nKetinggian = ";
    cin >> j;

    for (k = 1; k <= j; k++) {
    	int space = (j - k); 
    	 for (m = 1; m <= space; m++) {
            cout << " ";
        }
        for (l = 1; l <= k; l++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

