// #include <iostream>
// using namespace std ; 
// int main () {


// cout<<"Hello World"; 
// }

//  #include<iostream>
// using namespace std ;
// int main (){
//     int age ;
//     cout<<"Enter age : ";
//     cin>>age ;
//     if (age>=18){
//         cout<<"can give the vote\n";
//     } 
//     else {
//         cout<<"can't give the vote \n";
//     }
//     return 0 ;
// }

// #include<iostream>
// using namespace std ;
// int main (){
// int count = 1 ;
// while (count < 10
// ) {
//     cout<<count<<" ";
//     count++;
    

// }
// return 0 ;
// }
// #include<iostream>
// using namespace std ; 

// void printarr(int arr[], int n){
//     for(int i=0 ; i<n ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl; 
// }

// void selectionsort(int arr[], int n) {

// for(int i=0 ; i<n-1 ; i++) {
//     int smallestidx = i ;
//     for(int j=i+1 ; j<n ; j++){

//         if(arr[j]<arr[ smallestidx]) {
//             smallestidx =j ; 
          
//         }
//     }
//     swap( arr[i] , arr[smallestidx] ) ;
// }
// }
// int main (){
//     int n=5 ; 
//     int arr[]={4,1,5,2,3} ; 

//     selectionsort(arr,n) ;

//     printarr(arr,n);
    

// }
// #include<iostream>
// using namespace std ;
// int main (){
// int n = 10 ;
// int oddsum = 0 ;
// for ( int i=1 ; i<=10 ; i++) {
    
//     if(i%2 !=0) {
//         oddsum+=i ; }
        
//     }
//     cout<<"oddsum ="<<oddsum<<endl;
//     return 0;

// }




// #include <iostream>
//  using namespace std ; 
//  int main () {
//     int n=5 ; 
//     for(int i=1 ; i<=n  ;  i++ ) {
//         cout<<" *****"<<endl;
//     }

// #include<iostream>
// using namespace std ; 
// int main () {
//     int n=4 ;
//     for(int i=1 ; i<=n ; i++ ) {

//         for(int j=1 ; j<=4 ; j++) {
//             cout<<j ;

//         }
//         cout<<endl; 
//     }
// }
#include<iostream>
using namespace std ; 
int main () {
    int n = 5;
    for(int i=0 ; i<n ; i++) {

        for(int j=0; j<i+1 ; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}