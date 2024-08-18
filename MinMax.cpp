#include <iostream>

using namespace std;

int min(int arr[], int size){
  int min = arr[0];
  
  for (int i = 0; i <= size; i++){
    if(arr[i] < min){
      min = arr[i];
    }
  }
  return min;
}

int max(int arr[], int size){
  int max  = arr[0];
  
  for (int i = 0; i <= size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int main(){
  int arr[] = {6,2,3,4,1,2134,573,457,2344,23451,457,4352,31251235,2346,364,23456,1235,123454,346,456,5645234};
  int size = sizeof(arr)/sizeof(int) - 1;

  cout << "The Min is: " << min(arr, size); << endl << "The Max is: " << max(arr,size);
  return 0;
}
