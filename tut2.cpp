/*#include <iostream>
using namespace std;
int main (){
    
    cout<<
     "hello world";
    return 0 ;

} */
#include<iostream>
using namespace std ;
int main (){
    int age ;
    cout<<"Enter age : ";
    cin>>age ;
    if (age>=18){
        cout<<"can give the vote\n";
    } 
    else {
        cout<<"can't give the vote \n";
    }
    return 0 ;
}