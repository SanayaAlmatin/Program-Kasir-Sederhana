#include <iostream>
#include <string>
using namespace std;

int main() {

	int quantity;
	string goods_name;
	float price_item, Tp1, Tp2, cash, change;
	char opt = 'Y';
	
	cout<<"Price List Item : ";
	cout<<"\n1. Biore Body Wash = Rp 2000 \n2. Rinso = Rp 11000 \n3. Indomie Goreng Rendang = Rp 3000"<<endl;
	
	
	change = cash - Tp2;

	while ((opt=='Y')||(opt=='y')){
	
		cout<<"\nInput the goods name: ";
		cin.ignore();
		getline (cin,goods_name);
		cout<<"\nQuantity : ";
		cin>>quantity;
		cout<<"\nPrice per item : ";
		cin>>price_item;
		Tp1 = quantity * price_item;
		cout<<"\nTotal price : "<<Tp1;
		
		Tp2 = Tp2 + Tp1;
		
		
		cout<<"\nDo you want to enter more numbers (y/n)? ";
		cin>>opt;
	
	}
	cout<<"\nTotal : "<<Tp2;
	cout<<"\nCash : ";
	cin>>cash;
	change = cash - Tp2;
	cout<<"Change : "<<change;


}
