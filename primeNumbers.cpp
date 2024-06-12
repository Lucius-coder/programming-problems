#include <iostream>
#include <cmath>
#include <vector>
#include <array>
using namespace std;
vector <int>sumOfPrimeNumbers;
void findingAndAddingPrimeNumbers(int number){
  int sum=0;
for (int i=2;i<number;i++){
 for (int secondIterator=2;secondIterator<i;secondIterator++)
    {
        if(i%secondIterator==0)
        break;
        else if (i==secondIterator+1)
        cout<<"prime number: "<<i<<endl;
        sumOfPrimeNumbers.push_back(i);
    
    }
    
}
for (int n=0;n<sumOfPrimeNumbers.size();n++){
    sum+=sumOfPrimeNumbers[n];
}
   cout<<sum<<endl;
}
   

int main (){
  findingAndAddingPrimeNumbers(60);
    return 0;
}