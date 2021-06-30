#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int arr[],int n){
	 	cout <<"sorted array Is::  ";
    	for(int i = 0 ; i< n;i++){
        cout <<  arr[i] << " " ;
    }
    cout <<endl;
}
void bubble_sort(int arr[],int n ){
	bool flag = false;
    for(int i = 0 ; i< n;i++){
        for(int j = 1 ; j <= n - i - 1; j++){
            if(arr[j-1] > arr[j])
            {
            	flag = true;
                swap(&arr[j-1],&arr[j]);
            }
        }
        if(flag == false)
        	break;
    }
}
void selection_sort(int arr[],int n)
{
	
	int min_idx;
	for(int i = 0 ; i < n ; i++)
	{
	 	min_idx = i;
		for(int j = i+ 1 ; j < n ; j++ )
		{
			if(arr[j] < arr[min_idx])
			{
			
				min_idx = j ;
			}
		}
	
		swap(&arr[i],&arr[min_idx]);
	}
}
void Insertion_sort(int arr[],int n){
	for(int i = 1 ; i< n ; i++)
	{
		int min_val = arr[i] ;
		int j = i-1 ;
		while(j >= 0 && arr[j] > min_val)
		{
				arr[j+1] = arr[j];
				j--;		
		}
		arr[j+1] = min_val;
	}
}
int partition(int arr[],int low,int high){
	int pivot = arr[high];
	int i = low - 1 ;
	for(int j = low  ;j  <= high ;j++)
	{
			if(arr[j] < pivot)
			{
				i++;
				swap(&arr[i],&arr[j]);
			}
			
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
	
}
void Quick_sort(int arr[],int low ,int high ){
	
	if( low <= high)
	{
		int pi = partition(arr,low , high);
		Quick_sort(arr,low ,pi-1);
		Quick_sort(arr,pi+1, high);
	}
}
void merge(int arr[] , int low , int mid , int high){
	int n1 = mid - low + 1;
	int n2 = high- mid;
	int left[n1],right[n2];
	for(int i = 0; i < n1 ;i++){
		left[i] = arr[low + i];
		
	}
	for(int i = 0;i < n2; i++){
		right[i] = arr[mid + i + 1];
	}
	int i = 0;
	int j = 0;
	int k = low;
	while(i < n1 && j < n2){
		if(left[i] < right[j]){
			arr[k] = left[i++];
		}
		else{
			arr[k] = right[j++];
		}
		k++;
	}
	while( i < n1){
		arr[k++] = left[i++];
	}
	while(j <  n2){
		arr[k++] = right[j++];
	}
}
void Merge_sort(int arr[],int low,int high){
	if(low < high)
	{
		int mid = (low+high)/2;
		Merge_sort(arr,low,mid);
		Merge_sort(arr,mid+1,high);
		merge(arr ,low , mid , high) ;
	
	}
}
int main(){
    int arr[5] = {1,-2,5,3,0};
    int ch;
    while(1)
    {
    cin >> ch;
    switch (ch){
        case 1:
        {
            bubble_sort(arr,5);
            display(arr,5);
            break;
             
        }
        case 2:
        {
        	selection_sort(arr,5);
        	display(arr,5);
        	break;
		}
		case 3:
        {
        	Insertion_sort(arr,5);
        	display(arr,5);
        	break;
		}
		case 4:
		{
			Quick_sort(arr,0,4);
			display(arr,5);
			break;			
		}
		case 5:
		{
				Merge_sort(arr,0,4);
				display(arr,5);
				break;
		}
    }
	}
}
