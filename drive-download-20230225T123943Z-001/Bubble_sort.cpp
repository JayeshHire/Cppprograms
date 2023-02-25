#include <iostream>
#include <String>

using namespace std;
void bubble_sort(int * ptr[]){
	int arraySize = sizeof(ptr)/sizeof(int);
	while(true){
		int changes = 0;
		for (int j = 1; j<arraySize/2; j++){
			if(*ptr[j-1] > *ptr[j]){
				int temp = *ptr[j-1];
				*ptr[j-1]=*ptr[j];
				*ptr[j]=temp;
				changes++;
			}
		}
		if (changes == 0){
			break;
		}
	}
}

void display(int * ptr[]){
	int arraySize = sizeof(ptr)/sizeof(int);
	for(int i=0; i<(arraySize/2);i++){
		cout << *ptr[i] << " ";
	}
}
int main(){
	int size;
	cout << "Enter the size of the array to enter" << endl;
	cin >> size;
	int demoarray[size];
	cout << " ENter the elements in the array "<< endl;
	for (int i = 0; i<size; i++){
		cin >> demoarray[i];
	}
	int * demoptr[size];
	*demoptr = demoarray;
	bubble_sort(demoptr);
	//display(demoptr);
	cout << *demoptr[0] << endl;
	cout << *demoptr[1] << endl;
	cout << *demoptr[2] << endl;
	cout << *demoptr[3] << endl;
	
	return 0;
}
