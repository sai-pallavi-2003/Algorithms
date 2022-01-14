/*The code is written in C++ using templates for better reusability. same code can be used for various data types.*/

#include<iostream>
using namespace std;
template<class T>
class selection_sort{
T arr[100];
    int  n;
   
    public:
    selection_sort(int x){
    n=x;
}
    void getdata();
    void sorting();
    void display();
};
template<class T>
void selection_sort<T>::getdata(){
   
    cout<<"give the elements in random order: ";
    int i ;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

}
template<class T>
void selection_sort<T>::sorting(){
    T temp;
    int min;
    int i,j;

    for(i=0;i<n;i++){
    min = i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
            min = j;
            }
        }
       temp = arr[i];
  arr[i]= arr[min];
    arr[min]= temp;
    }
}
template<class T>
void selection_sort<T>::display(){
   
    cout<<"after sorting :"<<endl;
    for(int i=0;i<n;i++){
        cout<<"  "<<arr[i];
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
selection_sort<int> s1(n);
    s1.getdata();
    s1.sorting();
    s1.display();
cout<<endl<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 2:
{


selection_sort<double> s2(n);
    s2.getdata();
    s2.sorting();
    s2.display();
    cout<<endl<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 3:
{


selection_sort<char> s3(n);
s3.getdata();
    s3.sorting();
    s3.display();
    cout<<endl<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
}
}
}
