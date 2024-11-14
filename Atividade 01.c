#include <stdio.h> 
int main(){
    int x,z;
    float y;
    scanf("%d", &x);
    printf("%d\n", x);
    scanf("%f", &y);
    printf("%f\n", y);
    scanf("%d%f", &x, &y);
    printf("%d%f\n", x, y);
    scanf("%d%d", &x, &z);
    printf("%d%d\n", x, z);
    scanf("%d %d", &x, &z);
    printf("%d %d\n", x, z);
    
    return 0;

}
