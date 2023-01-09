
#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[10] = {34,67,8,98,12,45,65,78,12,79};
   cout <<"Input list : ";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<" ";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List : ";
for(i = 0; i<10; i++) {
   cout <<a[i]<<" ";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}