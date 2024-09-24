//Name: Siddhant Bedre
//PRN:23070123037
//Aim: Using 2D arrays to add antidiagonals of a matrix.
#include <iostream>
using namespace std;

int main() { int a[3][3] = {{1,2,3},{5,2,4},{5,9,1}}; 
int sum=0;
int r = 3;
    
    for(int i = 0;i<3;i++){
       for(int j = 0;j<3;j++) {
          if(i + j == r-1){
              sum += a[i][j];
          }
       }
    }
    cout << "The sum of antidiagonals is : " << sum;

    return 0;
}
/*
Output
The sum of antidiagonals is : 10
*/
