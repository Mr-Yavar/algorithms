#include <iostream>

using namespace std;
int binarySearch(int S[], int x, int low, int high) {


  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (S[mid] == x)
      return mid;

    if (S[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1; // x was not found
}
int main()
{
    int array[]={1,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};
    int x=37; // what you want to find
    int index =  binarySearch(array,x,0,16); 
    
    if(index != -1)
        cout << "array["<< index << "] = "<< x ;
    else
        cout <<"Not found";
    return 0;
}
