#include <iostream>
using namespace std ;

int main() {
  //address of a array 
int a =5;
  cout<<"address of a :"<<&a<<endl ;
int arr =45;
  cout<<"adress of arr:" <<&arr<<endl;
}


// Size of array 
#include <iostream>
using namespace std ;

int main() {
int a=5;
  cout<<"size of a :"<<sizeof(a)<<endl;

int arr[10];
  cout<<"size of arr:"<<sizeof (arr)<<endl;
}



#include <iostream>
using namespace std ;

int main() {
// array initialisation 
  int arr[]= {1,2,3,5,6,4};
  int arr1[5]={1,2,3,4,5};
  int arr2[ 5]= {1,2};
  int arr3[5]={1,2,3,4,5,6,7};

  return 0;
  
}