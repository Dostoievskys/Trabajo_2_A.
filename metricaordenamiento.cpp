#include  <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <vector> 
#include <iostream>
#include <algorithm>
#include <ctime> 
 

void rellenar_arreglo (std::vector <int> &arreglo, int tam){
	int i,last;
    arreglo.clear();
	for (i=0;i<tam;i++){
        last=rand()%1000 +1;
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

int main (){
    std::vector <int> arreglo(1000);
    int tam= arreglo.size();
    rellenar_arreglo (arreglo,tam);
    std::cout << "sin orden:\n";
    imprimir (arreglo);
    /*countSort(arreglo);*/
    /*std::cout << "ordenado counting sort:\n";
    /*quickSort(arreglo, 0,tam-1); */
    /*mergeSort(arreglo,0 , tam-1);*/
    imprimir (arreglo);
    return 0;
}