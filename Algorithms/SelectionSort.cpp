//An Simple Algorithm for Selection Sort.
#include<iostream>
using namespace std;
void SelectionSort(int arr[], int size){
	for(int i=0;i<size;i++){
		int j=i;
		for(int k=i+1;k<size;k++){
			if(arr[k]<arr[j]){
				j=k;
			}
		}
		int t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
	}
}
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[7]{3,5,2,6,1,8,6};
	SelectionSort(arr,7);
	printArray(arr,7);
}