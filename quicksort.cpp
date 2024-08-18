#include <iostream>

using namespace std;

int partition(int arr[], int start, int end){
  int pivot = arr[end];
  int i = start - 1;

  for(int j = start; j < end; j++){
    if(arr[j] < pivot){
      i++;
      swap(arr[j],arr[i]);
    }
  }
  i++;
  swap(arr[i], arr[end]);
  return i;
}

int quicksort(int arr[], int start, int end){
  int pivot = partition(arr, start, end);

  quicksort(arr,start,pivot - 1);
  quicksort(arr,pivot + 1, end
}

int main(){
  int arr[] = {8,1,2,5,32,6,988,34,21,346,67,235,57};
  int start = 0;
  int end = sizeof(arr) / sizeof(int) - 1;
  quicksort(arr,start,end);

  for(int i: array) cout << i << " ";
}
