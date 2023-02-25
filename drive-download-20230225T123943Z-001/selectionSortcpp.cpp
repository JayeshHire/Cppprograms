#include <iostream>
#include <String>
using namespace std;

void selection_sort(int * ptr,int arraySize){
	//int arraySize = sizeof(*ptr);
	
	for (int i =0; i<arraySize ; i++){
		int key = *(ptr + i);
		for (int k= i+1; k<arraySize ; k++){
			int element = *(ptr + k);
			if (key > element){
				int temp;
				*(ptr + k) = key;
				*(ptr + i) = element;
				temp = key;
				key = element;
				element = temp;

			}
		}
	}
}

void display(int * ptr,int arraySize){
	//int arraysize = sizeof(ptr)/sizeof(int);
	for (int i = 0; i< arraySize ; i++){
		cout << *(ptr + i) << " ";
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
	int * demoptr;
	demoptr = demoarray;
	selection_sort(demoptr,size);
	display(demoptr,size);
	return 0;
	
}
