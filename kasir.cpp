#include <iostream>
#include <string>
using namespace std;

int main() {

	int quantity;
	string goods_name;
	float price_item, Tp1, Tp2, cash, change;
	char opt = 'Y';
	
	change = cash - Tp2;

	while ((opt=='Y')||(opt=='y')){
		
		cout<<"\nInput the goods name: ";
		cin.ignore();
		getline (cin,goods_name);
		cout<<"Quantity : ";
		cin>>quantity;
		cout<<"Price per item : ";
		cin>>price_item;
		Tp1 = quantity * price_item;
		cout<<"Total price : "<<Tp1<<'\n';
		
		Tp2 = Tp2 + Tp1;
		
		cout<<"\nDo you want to enter more numbers (y/n)? ";
		cin>>opt;
	}
	cout<<"\nTotal : "<<Tp2;
	cout<<"\nCash : ";
	cin>>cash;
	change = cash - Tp2;
	cout<<"Change : "<<change;

	return 0;
}
