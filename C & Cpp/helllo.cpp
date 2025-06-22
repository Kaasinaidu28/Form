#include <iostream>
using namespace std;
int main(){
   
    string str;
    string temp = "";
  

    cout << " Enter a string: ";
    cin>>str;

    for(int i=str.length()-1; i>=0; i--){

      temp += str.at(i);


    }
    cout<<temp<<"";
}
                
    
  
    