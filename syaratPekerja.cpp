#include <iostream>
using namespace std;

int main() {
    int num_applicants = 10;
    int passed_count = 0;
    
    for (int i = 1; i <= num_applicants; i++) {
        char gender;
        int height, weight;
        
        cout << "Enter gender (M/W), height (in cm), and weight (in kg) for applicant " << i << ":\n"<<endl;
        cout<<"Gender : ";
        cin >> gender; 
        cout<<"Height : ";
		cin>> height; 
		cout<<"Weight : ";
		cin>> weight;
        
        if (gender == 'M' && height >= 160 && weight <= 65) {
            passed_count++;
        } else if (gender == 'W' && height >= 165 && weight <= 80) {
            passed_count++;
        }
    }
    
    cout << "\nNumber of applicants who passed: " << passed_count << endl;
    
    return 0;
}

