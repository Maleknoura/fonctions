#include<stdio.h>
#include<stdlib.h>

int PGCD(int x , int y){

	if(x % y==0){
		printf("%d est pgcd ",x);
			}
	else{

		printf("%d est pgcd ",y);
		
		
		}
		return PGCD;
	}
	int main(){
		int a, b;
		printf("saisir deux nombres entiers :");
		scanf("%d %d",&a,&b);
		printf("%d ",PGCD( a, b));
	return 0;
	}