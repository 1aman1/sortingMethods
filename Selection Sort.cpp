#include<iostream>
using namespace std;

void swap(int * x, int*y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

/* concept draws sense by preparing a sorted and an unsorted sequence
 * it repeatedly finds minimum in sequence, 
 * and puts it in sorted sequence
 * [ [SORTED] [UNSORTED] ]
 * */
void selection(int ar[], int Len) {	
  for(int i = 0; i<Len ; ++i) {
    int min = i;
    for(int j = i+1; j < Len; ++j) {
      if(ar[j] < ar[min])
        min = j;
    }
    if(min != i) 
      swap(&ar[min], &ar[i]);
  }
}

int main() {
  int *arr, n;
	cout << "\nlen of sequence :";
	cin >> n;
  arr = new int[n];
  for(int i = 0; i<n ; ++i)          
    cin >> arr[i];

  selection(arr, n);

  for(int i = 0; i<n; ++i)         
    cout << arr[i] << " ";
  cout << endl;
  //	system("pause");
  return 9;
}
