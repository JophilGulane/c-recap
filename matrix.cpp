#include <iostream>

using namespace std;

int main(){
  int A[3][3] = {
  {5,2,1},
  {6,3,1},
  {9,6,8}
  };
  
  int B[3][3] = {
  {7,8,3},
  {4,6,7},
  {3,2,9}
  };

  int AB[3][3];

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      AB[i][j] = 0;
      for (int k = 0; k < 3; k++){
        AB[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << AB[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}
