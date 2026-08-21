/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int *a = new int(5);
//     int *arr = new int[5];
    
//     int **p = new int(*a);
//     cout<<*p<<endl;


//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int n=10;
//     cout<<&n;
    
    
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int n = 10;
//     int* ptr = &n;
    
//     cout<<*ptr;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=15;
//     int *ptr = &n;
    
//     cout<<*ptr;
    
    
    
    
//     return 0;
    
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=25;
//     cout<<&n;
    
//     return 0;
    
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=5;
//     int *ptr = &a;
    
//     cout<<&a<<endl;
//     cout<<a;
    
//     return 0;
    
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10;
//     int *ptr = &a;
    
//     cout<<*ptr * 2;
    
//     return 0;
    
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x;
//     int *ptr=&x;
    
//     ptr+=1;
//     cout<<*ptr<<endl;
//     cout<<x;
    
//     return 0;
    
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     int *ptr = &a;
//     b = *ptr + b;
//     cout<<b;
    
//     return 0;
    
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int b=10;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp;
    
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    cout<<*ptr1<<" , "<<*ptr2;
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//10. Pointer decrement
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x=10;
    
//     int *ptr = &x;
//     cout<<*ptr<<endl;
//     ptr--;
    
//     cout<<*ptr<<endl;
//     cout<<x;

//     return 0;
// }

// // Pointer Arithematic with Multiplication Variables:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int a,b,c;
    
//     int *ptr = &a;
//     int *ptr = &b;
//     int *ptr = &c;
    
//     cout<<*ptr;
    
    
    
//     return 0;
// }


// Pointer Arithematic with Multiplication Variables:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int a,b,c;
    
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     int *ptr3 = &c;
    
//     cout<<*ptr1<<endl;
//     cout<<*ptr2<<endl;
//     cout<<*ptr3;
    
    
    
//     return 0;
// }



//13.  Manipulating Pointer Value : 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int num=10;
//     int *ptr=&num;
    
//     for(int i=1; i<=10; i++){
//         *ptr+=1;
//     }
//     cout<<*ptr;
    
    
//     return 0;
// }



//14. pOinter Comparision
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int a,b;
//     int *ptr1 = &a;
//     int *ptr2 = &b;
    
//     if(*ptr1 == *ptr2){
//         cout<<"They are Equal";
        
//     }
//     else{
//         cout<<"They are not Equal";
//     }
    
//     return 0;
// }


//15.Add and subtrct using pointer Arithematic:
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a,b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    
    cout<<*ptr1 + *ptr2<<endl;
    cout<<(*ptr1 - *ptr2)<<endl;
    
    cout<<abs(*ptr1 - *ptr2);
    
    
    
    
    return 0;
}


