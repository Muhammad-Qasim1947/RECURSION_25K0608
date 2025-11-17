#include <stdio.h>

void descending(int n){
	if(n == 0){
		return 1 ;
		
	} 
	printf("%d",n);
	return descending(n - 1);
}

void asscending(int i , int n){
	
	if(i > n){
		return ;
	} printf("%d",i);
	return asscending(i+1,n);
} 

int main() {
    int n = 3 ;
    
    descending(n);
    asscending(n-1,n);
}
