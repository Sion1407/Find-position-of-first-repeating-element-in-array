//given an array off size n, task is to find the first repeating element in the array of integers,
//i.e., an element that occurs more than once and whose index of first occurence is smallest
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,index=0;
    cin>>n;
    int a[n],count_array[n],count=0;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < n; i++)
    {
        count_array[i]=-1;
    }
    for(i=0;i<n;i++){
        for ( j = 0; j < n; j++)
        {
            if(a[i]==a[j]){
                count_array[i]++;
            }
            
        }    
    }
    for ( i = 0; i < n; i++)
    {
        if (count_array[i]>0)
        {
            cout<<i+1;
            break;
        }
        
    }
    
        
    
    
    
}
/*
7
1 5 3 4 3 3 2 
i
j

*/