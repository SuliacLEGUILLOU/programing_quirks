#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Hello ");
    write(1, "World\n", 6);
    return 0;
}
