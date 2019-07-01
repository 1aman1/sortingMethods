//bubble sorting.cpp 
// O( n*n )
#include <iostream>
using namespace std;

void swap(int * , int*);

void bubble(int ar[], int n) {
  for(int i = 0; i < n-1; ++i) {
    for(int j = 0; j< n-i-1; ++j) {
      if(ar[j] > ar[j+1])
        swap(&ar[j], &ar[j+1]);
    }
  }
}

void swap(int * x, int * y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int main() {
  int arr[] ={12,23,412,13,5,24};
  int n = sizeof(arr)/sizeof(arr[0]);
  bubble(arr, n);
  for(int i = 0; i < 6; ++i)
    cout << arr[i] << ",";
  // system("pause");
  return 0;
}
