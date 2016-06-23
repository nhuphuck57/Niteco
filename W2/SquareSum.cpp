#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main () {
  
  	vector<float> arrayList;
  	ifstream myFile ("input.txt");
  
	if(!myFile.is_open()){
	    cout<<"Khong the mo file.\n";
	    return 0;
	}
	else{
	    while (!myFile.eof( )) 
	 	{  
	 		float data;
	      	myFile >> data;
		  	arrayList.push_back(data);     
	 	}
	}
    
    cout << "Input: ";
    float sum=0;
    for(int i=0; i<arrayList.size(); i++)
    {	
    	cout<<"\t"<<arrayList[i];
        sum += arrayList[i];
    }
    
    cout<<"\nSum: "<< sum << "\n";
    
    myFile.close();
    system("pause");
}
