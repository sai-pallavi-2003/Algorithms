/*The code is written in C++ using templates for better reusability. same code can be used for various data types.*/



#include<iostream>
using namespace std;
template <class T>
class Bubble_sort{
    T arr[100];
    T temp;
    int n;
    public:
    Bubble_sort(int x){
        n = x;
    }
    void getdata();
    void sorting();
    void display();
};
template<class T>
void Bubble_sort<T>::getdata(){
    cout<<"give the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
template<class T>
void Bubble_sort<T>::sorting(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
template<class T>
void Bubble_sort<T>::display(){
    cout<<"after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int n;
cout<<"n: ";
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
Bubble_sort<int> b1(n);
    b1.getdata();
    b1.sorting();
    b1.display();
cout<<endl<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 2:
{


Bubble_sort<double> b2(n);
    b2.getdata();
    b2.sorting();
    b2.display();
    cout<<endl<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 3:
{


Bubble_sort<char> b3(n);
b3.getdata();
    b3.sorting();
    b3.display();
    cout<<endl<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
}
}
}
