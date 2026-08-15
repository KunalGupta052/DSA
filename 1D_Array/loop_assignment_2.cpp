
// 1. Square:
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
        
//         for(int j=1; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//     cout<<endl;
//     }
    
    

//     return 0;
// }

//2.triangle:
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
        
//         for(int j=1; j<=n; j++){
//             cout<<"*"<<" ";
//         }
//     cout<<endl;
//     }
    
    

//     return 0;
// }

// 3. Inverted triangle:2.triangle:
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
        
//         for(int j=1; j<=n-i; j++){
//             cout<<"*"<<" ";
//         }
//     cout<<endl;
//     }
    
    

//     return 0;
// }

// 4. Left-angle triangle:
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i; k++){
//             cout<<"*";
//         }
//     cout<<endl;
        
        
//     }
//     return 0;
// }


//5. Inverted Left-angle triangle:

//* * * * * 
  //* * * * 
    //* * * 
      //* * 
        //*
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
        
//         for(int j=1;j<=i-1; j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=n-i+1;k++ ){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


//
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
        
//         for(int j=1;j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++ ){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

//7. Inverted Pyramid pattern:

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
        
//         for(int j=1;j<=i-1; j++){
//             cout<<" ";
//         }
//         for(int k=0;k<=2*n-1-2*i+1;k++ ){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// 8. Star diamond:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=2*i-1; k++){
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
    
//     for(int i=1; i<=n; i++){
        
//         for(int j=1;j<=i-1; j++){
//             cout<<" ";
//         }
//         for(int k=0;k<=2*n-1-2*i+1;k++ ){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// 9. hollow square

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==1 || i == n || j == 1 || j == n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

//

