// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b, c;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     if(a==b && b==c){
//         cout<<"Equilateral triangle"<<endl;
//     }
//     else if(a==b || b==c || c==a){
//         cout<<"Isosceles triangle"<<endl;
//     }
//     else{
//         cout<<"Scalene triangle"<<endl;
//     }




//     return 0;
// }


//MUltiple of 3 & 7
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     if (n%3==0 && n%7 == 0)
//    {
//     cout<<"Multiple of both 3 and 7"<<endl;
//    } 
//    else{
//     cout<<"Not a multiple of both 3 and 7"<<endl;
//    }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int Bill;
//     cin>>Bill;
//     int Discount;
//     if(Bill>=500){
//         Discount = Bill - (Bill* 0.10);
//         cout<<"discount: " <<Discount;
        
//     }
//     else if(Bill<500){
//         cout<<"Bill remains the same";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char a;
//     cin>>a;
//     if( a>=97 && a<=122){
//         cout<<"Lowercase Alphabet";
//     }
//     else if(a>=65 && a<=92){
//         cout<<"UpperCase Alphabet";
//     }
//     else if(a>=47 and a<= 58){
//         cout<<"digits";
//     }
//     else{
//         cout<<"special charaters";
//     }
    
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char a;
//     cin>>a;
//     if( a>=97 && a<=122){
//         cout<<"Lowercase Alphabet";
//     }
//     else if(a>=65 && a<=92){
//         cout<<"UpperCase Alphabet";
//     }
//     else if(a>=47 and a<= 58){
//         cout<<"digits";
//     }
//     else{
//         cout<<"special charaters";
//     }
    
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     if(n<0){
//         n = -n;
//         cout<<n;
        
//     }
//     else{
//         cout<<n;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     if(n<0){
//         n = -n;
//         cout<<n;
        
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // for(int i=1;i<=n;i++){
    //     for (int j=0;j<n-i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    //     for(int j=n;j>n-i;j--){
    //         cout<<"*";
    //     }
    // }
    // cout<<endl;
    
    for(int i=1; i<=n; i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        
        for(int k=1;k<=n-i+1;k++){
            cout<<"*";
        }
        cout<<endl;
        

    }
    
    
    return 0;
}