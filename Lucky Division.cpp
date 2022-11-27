#include <iostream>
#include <cmath>
#include <string> 
using namespace std;
void check_number_Lucky(int number){
    if(number % 7 == 0 || number % 4 == 0 ){
    cout<<"YES";
    }
    else {
        for(int i=4;i<=7;i++){
            string numberLucky1 ="4";
            string numberLucky2 ="7";
            string new_lucky1 = to_string(i)+numberLucky1;
            string new_lucky2 =to_string(i)+numberLucky2;
            string new_lucky3 =new_lucky1+numberLucky1;
            string new_lucky4 =new_lucky1+numberLucky2;
            string new_lucky5 =new_lucky2+numberLucky1;
            string new_lucky6 =new_lucky2+numberLucky2;
            if(number%stoi(new_lucky1)==0 ||
               number%stoi(new_lucky2)==0 ||
               number%stoi(new_lucky3)==0 ||
               number%stoi(new_lucky4)==0 ||
               number%stoi(new_lucky5)==0 ||
               number%stoi(new_lucky6)==0 ){
                 cout<<"YES";
                 break;
                 
            }
           else{
                i=7;
           }
           if(i==7){
               cout<<"NO";
           }
            
        }
    }   
}
int main() {

int num;
cin>>num;
check_number_Lucky(num);
    return 0;
  
}