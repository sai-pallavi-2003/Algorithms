/* The code is writen using templates for better reusability*/

#include<iostream>
using namespace std;
template <class T>
class Quick_sort{
T arr[100];
T pi;
int n;
T pivot;
public:
Quick_sort(int x){
n = x;
}
void getdata();
T partition(int low,int high);
void quick_sort(int low, int high);
void PrintArray();
};
template<class T>
void Quick_sort<T>::getdata(){  
    cout<<"give the elements in random order: ";
    int i ;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
}
template <class T>
void Quick_sort<T>::quick_sort(int low,int high)
{
    int i;
if (low < high) 
    { 
        pi = partition(low, high); 
        quick_sort( low, pi-1); 
        quick_sort( pi+1 , high); 
    }

}
template <class T>
T Quick_sort<T>::partition(int low, int high){
    int i,j;
    pivot = arr[high];
    i = low-1;
    for(j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            int t = arr[i];  
            arr[i] = arr[j];  
            arr[j] = t;  
        }
    }
    int t = arr[i+1];  
    arr[i+1] = arr[high];  
    arr[high] = t; 
    return (i+1);
}
template <class T>
void Quick_sort<T>::PrintArray()
{
    int i;
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout << endl;
}
int main()
{
int n;
cout<<"give number of elements: ";
cin>>n;
char ch ='Y';
int cho;
while(ch!='N'){
cout<<"Give 1 for integer data type sorting"<<endl;
cout<<"Give 2 for double/float data type sorting"<<endl;
cout<<"Give 3 for charecter data type sorting"<<endl;
cin>>cho;
switch(cho){
case 1:
{
Quick_sort<int> q1(n);
    q1.getdata();
    q1.quick_sort(0,n-1);
    cout<<"after sorting: ";
    q1.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 2:
{
Quick_sort<double> q2(n);
    q2.getdata();
  q2.quick_sort(0,n-1);
    cout<<"after sorting: ";
    q2.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 3:
{
Quick_sort<char> q3(n);
q3.getdata();
q3.quick_sort(0,n-1);
    cout<<"after sorting: ";
    q3.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
}
}
}
