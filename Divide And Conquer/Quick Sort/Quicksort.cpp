
#include <iostream>
using namespace std;

int partition(int array[], int start, int end)
{
   
    int pivot = array[start], i = start, j = end;
  
       while (i < j)
    {
        
        while (pivot >= array[i] && i < end )
                i++;
         
        while (pivot <= array[j] && j>start)
                j--;
    
    
           
            if (j > i){
            swap(array[j], array[i]);
         
        }
    }
    swap(array[j], array[start]);
    int pivotPoint = j;
    return pivotPoint;
}

void quickSort(int array[], int start, int end)
{
    if (start >= end)
        return;
        
    int p = partition(array, start, end);
    quickSort(array, start, p - 1);
    quickSort(array, p + 1, end);
}

int main()
{
    int S[] = {2, 12, 143, 99, 18, 55, 25, 14};
    quickSort(S, 0, 7);

    for (int i = 0; i < 8; i++)
        cout << S[i] << endl;

    return 0;
}
