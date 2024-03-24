#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
   *a=*a + *b;
   *b=abs(*a - 2* *b); // Complete this function  2**b means 2 multiply pointer b  bcoz b value increased after above summation 
}
int main()
{
int t=9; int*a;
*a=t; *a=8;
cout<<endl<<*a;
int a, b;
int* pa = &a, *pb = &b;    
scanf("%d %d", &a, &b);
update(pa, pb);
printf("%d\n%d", *pa, *pb);
printf("%d\n%d",                     // can a pointer stores pointer itself or can a pointer stores integer or character


   int a =10;
    int *ap1 = &a;

    int **ap2 = &ap1;

    int ***ap3 = &ap2;

    int s =10;
    int *e = &s ; 
    int * r = e;

    

    cout<<*e<<endl<<e<<endl<<r<<endl<<&e;
    

    **ap3 = &a;
    *ap3=ap2;
    **ap3 = &a;

    int ****aptr4 = &aptr3;

    cout<<****aptr4;
    cout<<aptr4<<endl<<&aptr3



    i can do 
    aptr = &a;
    aptr = aptr;
    *aptr = 12;

    // // but i cannot do  (error codes)

    &aptr = &a; // addresses are immutable and hard coded

    *aptr = aptr; // this was only possible if *aptr was pointer of another pointer 
    // means 
    // int a =10;
    // int *first = &a;
    // int *pointer_to_first_pointer = &first;
    // *pointer_to_first_pointer = first; ---> this means now pointer to first pointer stores address of a not of first pointer

    aptr = &aptr; // pointer cannot store address of itself 

    cout<<aptr<<endl<<&aptr;
return 0;
}
