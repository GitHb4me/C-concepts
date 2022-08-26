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
return 0;
}
