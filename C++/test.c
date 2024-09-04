#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i, a[4]={3,1,2,4},result;
    result = a[0];
    for(i = 0; i<4; i++){
        if(result<a[i])
        continue;
        result = a[i];
    }
    printf("%d", result);
    return 0;
}
