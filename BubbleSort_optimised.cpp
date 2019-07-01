#include <iostream>
using namespace std;

void swap(int * , int*);

void bubble(int ar[], int n) { 
  int i, j; 
  bool swapped; 
  for (i = 0; i < n-1; i++) { 
    swapped = false; 
    for (j = 0; j < n-i-1; j++) {
      if (ar[j] > ar[j+1]) {
        swap(&ar[j], &ar[j+1]); 
        swapped = true; 
      }
    }
    // IF no elements were swapped ->break 
    if (swapped == false) 
      break; 
  } 
} 

void swap(int * x, int * y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int main() {
  int arr[] ={412,24,23,13,15,7};
  int n = sizeof(arr)/sizeof(arr[0]);

  bubble(arr, n);

  for(int i = 0; i < 6; ++i)
    cout << arr[i] << ",";

 // system("pause");
  return 0;
}
