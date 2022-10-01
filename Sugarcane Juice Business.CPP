#include <iostream>
using namespace std;

int main() {
	int k;
	cin>>k;
	while(k--){
	    long kt;
	    cin>>kt;
	    kt=kt*50;
	    long expense_of_Sugarcane = ((kt*20)/100);
	    long expense_of_Mint_Leaves = ((kt*20)/100);
	    long expense_of_Rent = ((kt*30)/100);
	    long total_Expenses=(expense_of_Sugarcane+expense_of_Mint_Leaves+expense_of_Rent);
	    cout<<(kt-total_Expenses)<<endl;
	}
	return 0;
}
