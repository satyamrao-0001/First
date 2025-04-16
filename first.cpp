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
// #include<iostream>
// using namespace std ; 
// int main () {
//     int n = 5;
//     for(int i=0 ; i<n ; i++) {

//         for(int j=0; j<i+1 ; j++ ){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std ; 
// int main () {
//     int n = 5;
//     for(int i=0 ; i<n ; i++) {

//         for(int j=0; j<i+1 ; j++ ){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std ; 
// int main (){
//     int n = 5 ; 
//     int num= 1;
// for(int i= 0 ; i<n ; i++ ) {
//         for( int j=i+1 ; j>0 ; j-- ){

//             cout<<num<<"  " ;
//             num=num +1 ;

//         }
//         cout<<endl; 

//     }
//     }

// #include<iostream>//VECTORS
// #include<vector>
// using namespace std ;

// int main (){
//   int array[5]={1,2,3,4,5} ;
//   int n = 5 ; 
//   for(int st=0 ; st<n ; st ++){
//       for(int end=st ; end<n ; end ++){
//         for(int i=st ; i<=end ; i++ ){
//           cout<<array[i] ;
//         }

//      cout<<" " ;  
//   }
  
//  cout<<endl;
// }
// }

// #include<iostream>
// #include<vector>
// using namespace std ;

// int main () {
//   vector<char>vec={'a','b','c'} ;
//   for(char val : vec ){
//     cout<<val<<endl; 
//   }
// }

// #include<iostream>
// using namespace std ;
// int main (){
// int marks [5]
// = {99, 69, 98 , 97 , 100} ; 
// cout<<marks[1]<<endl;
//  cout<<marks[2]<<endl;
 
// cout<<marks[3]<<endl;
 
// cout<<marks[4]<<endl;
 
// cout<<marks[0]<<endl;}


// #include <iostream>
// #include<cstring>

// using namespace std ;
// int main () {
//     char str[] = {'a','b','c','\0'} ;
//     cout << strlen(str) << endl; 
//     return 0 ;  
// }

// #include <iostream> 
// using namespace std ;
// int main () {
//     char str [100] ; ;

//     cout<<"enter char array : "<<endl; 
//     cin>> str  ; 
     

//     cout<<"output:"<<str<<endl ; 
    
// }

#include <iostream> 
using namespace std ;
int main () {
    char str [] ="satyam yadav " ;
    int len = 0; 
    for(int i=0 ; i<str[i]!='\0' ; i++)
    len ++ ; 
    cout<<"length of string :"<<len<<endl ;
}