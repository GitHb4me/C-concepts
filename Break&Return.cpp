#include<iostream>
#include<stdio.h>
int main(){
    int s=7;
    for(;s>0;s--)
    {
        if(s== 4){  
            break;
        }std::cout<<s<<"\t";
    }
    for(;s>0;s--){
        std::cout<<s<<std::endl;
    }
    }  
    
    // break exits all nested loop if encountered once in case of ladder one loop exit for one break statement 
// return exits full function if encountered once
