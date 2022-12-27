#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,interest,paid;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> paid;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year=0;
	double newbalance,total;
	newbalance = loan;
	cout << fixed << setprecision(2);
	while(newbalance > 0){
		year++; 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << newbalance;
		cout << setw(13) << left << (newbalance*interest/100);
		cout << setw(13) << left << newbalance+(newbalance*interest/100);
		if(paid > newbalance+(newbalance*interest/100)){
			paid = newbalance+(newbalance*interest/100);
		}
		total = newbalance+(newbalance*interest/100);
		cout << setw(13) << left << paid;
		cout << setw(13) << left << total-paid;
		newbalance = total-paid;
		cout << "\n";
	}
	
	return 0;
}