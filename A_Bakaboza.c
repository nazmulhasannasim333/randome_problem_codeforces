#include<stdio.h>

int main(){
    int  x, y;
    scanf("%d %d", &x, &y);
    if(x <= y + 5){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}