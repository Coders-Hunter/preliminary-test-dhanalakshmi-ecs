#include <stdio.h>

void check_divisibility(int num) {
    // Expected output is "TRUE" or "FALSE"
    if(num%5==0){
        printf("true");
    }else{
        printf("false");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    check_divisibility(num);
    return 0;
}
