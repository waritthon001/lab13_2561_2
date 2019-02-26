#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}


template <typename T>
void insertionSort(T d[],int N){
	int i, x, y; 
   	for (i = 1; i < N; i++) 
   	{ 
    	x = d[i]; 
       y = i-1; 
       for(int t = 0; t < i; t++) cout << d[t] << " ";
       cout<<"["<<d[i]<<"]";
       for(int t = i+1; t < N; t++) cout << d[t] << " ";
       cout<<"=>";
       while (y >= 0 && d[y] < x) 
       { 
       	   swap(d,y+1,y);
		   y = y-1; 
       }
       d[y+1] =x; 
	    for(int t = 0; t <= y; t++) cout << d[t] << " ";
       cout<<"["<<d[y+1]<<"]";
       for(int u = y+2; u < N; u++) cout << d[u] << " ";
	    cout<<"\n";
   	} 
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}