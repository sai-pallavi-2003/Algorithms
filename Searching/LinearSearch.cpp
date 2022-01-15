/* finding an element in an array, the array can be unsorted. the code is written using templates for better reusability.
same code can be used for various data types.*/



#include<iostream>
using namespace std;
template <class T>
class LinearSearch{
public:
int n;
LinearSearch(int x){
n = x;
}
T arr[100];
T key;
void getdata();
T search();
};
template <class T>
void LinearSearch<T>::getdata(){
cout<<"give an array: ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"give element to search: ";
cin>>key;
}
template <class T>
T LinearSearch<T>::search(){
int i;
int c=0;
for(i=0;i<n;i++){
if(arr[i]==key){
    return i;
}
}
return 0;
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
LinearSearch<int>obj(n);
obj.getdata();
res = obj.search();
if(res==0){
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
LinearSearch<double>obj(n);
obj.getdata();
res = obj.search();
if(res==0){
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
LinearSearch<char>obj(n);
obj.getdata();
res = obj.search();
if(res==0){
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
