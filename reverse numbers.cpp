#include <iostream>

using namespace std;

int main() {

int values[5];

int input;

cout<<"Please, Enter array of 5 numbers :\n";

for(int i =0 ; i<5 ; i++)
{

cin>>input;
 values[i]=input;

}
cout<<"{";
for(int j=4 ; j>=0 ; j--)
{

cout<<values[j];
    
if(j>0)
    
cout<<" , ";

}

cout<<"}";
   

 
return 0;


}