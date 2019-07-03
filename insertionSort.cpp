// insertion_sorting.cpp
//O(n^2)
#include<iostream>
#include<ctime>

#define SIZE 10
#define RANGE 100

//namespace preferred for the snippet size programs
using namespace std;

bool checkOutOfBounds( int index, int boundaryValue ) {
  return ( index >= boundaryValue ? true : false );
} 

void printSequence( int arr[] ) {
  for( int  i = 0 ; i < SIZE ; ++i )	{
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertion(int arr[] ){
  if( SIZE == 1 )
    return ;
  else {
    for( int trav = 1; trav < SIZE; trav++ ) {
      
      //capture the first element as reference
			int key = arr[trav];
      
      //index variable that aids checking values from the previous segment respective to current index
			int i = trav -1;
      while( key < arr[i] &&  checkOutOfBounds(i, 0) ) {
        arr[ i+1 ] = arr[i] ; //shift value
        i--; // **intuitive**
      }
			arr[ i+1 ] = key;
      //above instruction works even if the while cond. invalidates in first iteration perse
			//as it increments the pre decremented index.
      }
  }
}

int main() {
  srand( time(0) ); //seeding the random number generator
  //YES!! it stamps as per compile time
  int arr[SIZE];
  
  for( int temp = 0; temp < SIZE; temp++ )
    arr[temp] = rand() % RANGE; // larger range -> larger numbers & V-V

  printSequence( arr );

  insertion( arr );
	
  printSequence( arr );

	//system("pause"); 
	//comment out above codeline, for non MSVC compiler
  return 9;
}
