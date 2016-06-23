#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

	//input number function
	void inputNum(int *arrayList, int qty){
		for(int i=0; i<qty; i++){
			cout << i+1 <<":\t";
			cin >> arrayList[i];
		}
	}
	
	//order number function
	void orderNum(int *arrayList, int qty){
		int temp;
		
		for(int i = 0; i<qty-1;  i++){
			for(int j = i+1; j<qty; j++){
				if(arrayList[i] < arrayList[j]){
					temp = arrayList[i];
					arrayList[i] = arrayList[j];
					arrayList[j] = temp;
				}
			}
		}
	}
	
	//print result function
	void printResult(int *arrayList, int qty){
		cout << "Result: \n";
		for(int i=0; i<qty; i++){
			cout<<arrayList[i]<<"\t";
		}
	}
	
	//find most Frequent
	
int main(){
	int qty;
	int max;
	
	cout << "Nhap so luong so cua day:";
	cin >> qty;
	
	int arrayList[qty];
	
	//input
	inputNum(arrayList, qty);
	
	//order number;
	orderNum(arrayList, qty);
	
	//printResult;
	printResult(arrayList, qty);
	
	//max
	cout<< "Max:" << max = arrayList[0];
	
	//Most frequent;
	//mostFreq(arrayList, qty);
}
