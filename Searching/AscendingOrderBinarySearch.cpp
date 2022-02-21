/* The code is written using  Function Templates for better reusability.
 the same code can be used for various data types by changing the data type while creating an object
 the array has to be a sorted one.*/

#include<iostream>
using namespace std;
template <class T>
class BinarySearch{
public:
int n;
BinarySearch(int x){
n = x;
}
T arr[100];
T key;
void getdata();
T search();
};
template <class T>
void BinarySearch<T>::getdata(){
cout<<"give a sorted array: ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"give element to search: ";
cin>>key;
}
template <class T>
T BinarySearch<T>::search(){
int low = 0;
    int high = n -1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(key < arr[mid])
        high = mid - 1;
        else if(key > arr[mid])
        low = mid + 1;
        else
        return mid;
    }
    return -1;
}
int main(){
int n,res;
char ch ='Y';
int cho;
while(ch!='N'){
cout<<"Give 1 for integer data type searching"<<endl;
cout<<"Give 2 for double/float data type searching"<<endl;
cout<<"Give 3 for charecter data type searching"<<endl;
cin>>cho;
switch(cho){
case 1:
{
cout<<"n: ";
cin>>n;
BinarySearch<int>obj(n);
obj.getdata();
res = obj.search();
if(res==-1){
cout<<"not found ";
}
else{
cout<<"found at: "<<res+1; 
}
cout<<"do you want to continue (Y/N)";
cin>>ch;
break;
}
case 2:
{
cout<<"n: ";
cin>>n;
BinarySearch<double>obj(n);
obj.getdata();
res = obj.search();
if(res==-1){
cout<<"not found ";
}
else{
cout<<"found at: "<<res+1; 
}
cout<<"do you want to continue (Y/N)";
cin>>ch;
break;
}
case 3:
{
cout<<"n: ";
cin>>n;
BinarySearch<char>obj(n);
obj.getdata();
res = obj.search();
if(res==-1){
cout<<"not found ";
}
else{
cout<<"found at: "<<res+1; 
}
cout<<"do you want to continue (Y/N)";
cin>>ch;
break;
}
}
}
}
