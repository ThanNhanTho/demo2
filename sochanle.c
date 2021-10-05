#include<stdio.h>
int a;
void sochanle(){
    if(a%2 == 0){
        printf("So chan");
    }else{
        printf("So le");
    }
}
int main(){
    scanf("%d", &a);
    sochanle();
}
  