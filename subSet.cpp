#include <iostream>
#include <stdio.h>
#include <set>
using namespace std;
bool isSubset(int arr1[] , int arr2[] , int size1 , int size2){
    set<int> s;
    for(int i = 0 ; i < size1 ; i++)
        s.insert(arr1[i]);
    set<int>::iterator it;
    for(int i = 0 ; i < size2 ; i++)
        if(s.find(arr2[i]) == s.end())
            return false;
    return true;
}
int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1 , 5};
   
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
 
    if(isSubset(arr1, arr2, m, n))
      printf("arr2[] is subset of arr1[] \n");
    else
      printf("arr2[] is not a subset of arr1[] \n");      
 
    return 0;
}