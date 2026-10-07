#include<iostream>
#include<cstring>
using namespace std;

//  <ctring> function 

// 1......... strcpy(dest, src)

// int main(){
//     char str1[20];
//     //str1 = "dileep kumar"; // error show karega
//     // cout<<str1;  
//     // then use strcpy funtion
//   // exaple 01
// //    strcpy(str1, "dileep kumar");
// //     cout<<str1;  // dileep kumar

//     char str2[]="dileep kumar";
//     char str3[20];
//     strcpy(str3, str2);
//     cout<<str3;


//     return 0;
// }

// 2.........strcat(str1, str2)   yani we add two string

// int main(){
//     char str1[100]="dillep kumar get job offer from ";
//     char str2[100]="from google company";
//     strcat(str1, str2);
//     cout<<str1;
//     return 0;
// }


// 3.............. strcmp(str1, str2) for comparison between strings

int main(){
    char str1[100]="abc ";
    char str2[100]="xyz";
    cout<<strcmp(str1, str2);
   
    return 0;
}