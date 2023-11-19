#include<stdio.h>
void fn(int array[]){
    for(int i = 0; i<5; i++){
        printf("the value of element %d is %d\n", i , array[i]);
    }

}
int main(){
int arr[]={1,2,3,4,5};
fn(arr);
}