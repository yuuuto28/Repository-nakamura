#include<stdio.h>

int main(){
    int answer;
    printf("1から９までの数を入力してください");
    scanf("%d",&answer);
    
    switch(answer){
    case 1:
    case 2:
        printf("バッテリー");
        break;

    case 3:
    case 4:
    case 5:
    case 6:
        printf("内野手");
        break;

    case 7:
    case 8:
    case 9:
    printf("外野手");
}
return 0;
}