#include <iostream>

using namespace std;

void merge(int p,int m,int A[],int B[],int S[]){
int i=j=k=0;
    while(i < p && j < m){
        if(A[i] < B[j]){
            S[k]=A[i];
            i++;
        }
        else{
            S[k]=B[j];
            j++;
        }
        k++;
    }
    if(i >= p)
        while(j < m){
            S[k]=B[j];
            k++;
            j++;
        }
    else if(j >= m)
        while(i < p){
            S[k]=A[i];
            k++;
            i++;
        }
}
void sortmerge(int n,int S[]){
    int p = n/2 , m = n-p;
    int A[p],B[m];
    if(n > 1){
        for(int k=0;k<p;k++)
         A[k]=S[k];
        
        for(int k=p;k<(m+p);k++)
         B[k-p]=S[k];
            
     sortmerge(p,A);
     sortmerge(m,B);
     merge(p,m,A,B,S);
        
    }
    
}


int main()
{
    
    int S[] = {8,27,43,3,9,82,10};
    sortmerge(7,S);
    for(int k=0;k<7;k++)
        cout << S[k]<<endl;
}