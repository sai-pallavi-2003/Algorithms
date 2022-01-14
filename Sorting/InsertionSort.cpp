/* The code is written in C++ using function templates for better reusability. same code can be used for various data types.*/

#include<iostream>
using namespace std;
template <class T>
class insertion_sort{
T arr[100];int n;
public:
insertion_sort(int x){
n = x;
}
void getdata();
void Insertion();
void PrintArray();
};
template<class T>
void insertion_sort<T>::getdata(){  
    cout<<"give the elements in random order: ";
    int i ;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
}
template <class T>
void insertion_sort<T>::Insertion()
{
int i, j;
T temp;
for (i = 1; i < n; ++i)
{
temp = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > temp)
{
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = temp;
}
}
template <class T>
void insertion_sort<T>::PrintArray()
{
for (int i = 0; i < n; ++i)
{
cout << arr[i] << ' ';
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
insertion_sort<int> s1(n);
    s1.getdata();
    s1.Insertion();
    cout<<"After sorting: ";
    s1.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 2:
{
insertion_sort<double> s2(n);
    s2.getdata();
    s2.Insertion();
    cout<<"After sorting: ";
    s2.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
case 3:
{
insertion_sort<char> s3(n);
    s3.getdata();
    s3.Insertion();
    cout<<"After sorting: ";
    s3.PrintArray();
cout<<"Do you want to continue? (Y/N)";
    cin>>ch;
break;
}
}
}
}
