#include  <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <vector> 
#include <iostream>
#include <algorithm>
#include <ctime> 
#include <bits/stdc++.h>  

void rellenar_arreglo (std::vector <int> &arreglo, int tam){
	int i,last;
    arreglo.clear();
	for (i=0;i<tam;i++){
        last=rand()%10 +1;
        arreglo.push_back(last);
    }

}

void imprimir (std::vector <int> &arreglo){
	int i;
    int tam= arreglo.size();
	for (i=0;i <tam;i++)
	    if (i< (tam-1))
	        printf ("%i, ",arreglo [i]);
	    else
	        printf ("%i\n",arreglo [i]);
}
void countSort(std::vector <int>& arreglo) 
{ 
    int max = *max_element(arreglo.begin(), arreglo.end()); 
    int min = *min_element(arreglo.begin(), arreglo.end()); 
    int range = max - min + 1; 
      
    std::vector<int> count(range), output(arreglo.size()); 
    for(int i = 0; i < arreglo.size(); i++) 
        count[arreglo[i]-min]++; 
          
    for(int i = 1; i < count.size(); i++) 
           count[i] += count[i-1]; 
    
    for(int i = arreglo.size()-1; i >= 0; i--) 
    {  
         output[ count[arreglo[i]-min] -1 ] = arreglo[i];  
              count[arreglo[i]-min]--;  
    } 
      
    for(int i=0; i < arreglo.size(); i++) 
            arreglo[i] = output[i]; 
} 
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

int partition (std::vector <int>& arreglo, int low, int high)  
{  
    int pivot = arreglo[high];
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++)  
    {   
        if (arreglo[j] < pivot)  
        {  
            i++; 
            swap(&arreglo[i], &arreglo[j]);  
        }  
    }  
    swap(&arreglo[i + 1], &arreglo[high]);  
    return (i + 1);  
}  
  
void quickSort(std::vector <int>& arreglo, int low, int high)  
{  
    if (low < high)  
    { 
        int pi = partition(arreglo, low, high);  
        quickSort(arreglo, low, pi - 1);  
        quickSort(arreglo, pi + 1, high);  
    }  
}
void merge(std::vector<int> &arreglo, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    int L[n1], R[n2]; 
  
    
    for (i = 0; i < n1; i++) 
        L[i] = arreglo[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arreglo[m + 1 + j]; 
  
    
    i = 0; 
    j = 0; 
    k = l;  
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arreglo[k] = L[i]; 
            i++; 
        } 
        else { 
            arreglo[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < n1) { 
        arreglo[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arreglo[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(std::vector <int> &arreglo, int l, int r) 
{ 
    if (l < r) { 
        int m = l + (r - l) / 2; 
        mergeSort(arreglo, l, m); 
        mergeSort(arreglo, m + 1, r); 
  
        merge(arreglo, l, m, r); 
    } 
} 

  
int jumpSearch(std::vector <int> &arreglo, int x, int n) 
{ 
    int step = sqrt(n); 
    int prev = 0; 
    while (arreglo[std::min(step, n)-1] < x) 
    { 
        prev = step; 
        step += sqrt(n); 
        if (prev >= n) 
            return -1; 
    } 
    while (arreglo[prev] < x) 
    {  
        prev++; 
        if (prev == std::min(step, n)) 
            return -1; 
    } 
    if (arreglo[prev] == x) 
        return prev; 
  
    return -1; 
} 
int binarySearch(std::vector <int> &arreglo, int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arreglo[mid] == x) 
            return mid; 
        if (arreglo[mid] > x) 
            return binarySearch(arreglo, l, mid - 1, x); 
        return binarySearch(arreglo, mid + 1, r, x); 
    } 
    return -1; 
} 
int search(std::vector <int> &arreglo, int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arreglo[i] == x) 
            return i; 
    return -1; 
} 
int main (){
    int x = 78;
    std::vector <int> arreglo(2000000);
    int tam= arreglo.size();
    rellenar_arreglo (arreglo,tam);
    std::cout << "sin orden:\n";
    imprimir (arreglo);
    /*countSort(arreglo);*/
    /*std::cout << "ordenado counting sort:\n";
    /*quickSort(arreglo, 0,tam-1); */
    /*mergeSort(arreglo,0 , tam-1);*/
    /*int index = jumpSearch(arreglo, x, tam); 
    std::cout << "\nNumber " << x << " is at index " << index;*/
    int result = binarySearch(arreglo, 0, tam, x); 
    (result == -1) ? std::cout << "Element is not present in array"
                   : std::cout << "Element is present at index " << result; 
   /* int result = search(arreglo, tam, x); 
   (result == -1)? std::cout<<"Element is not present in array" 
                 : std::cout<<"Element is present at index " <<result; */
    return 0; 
}