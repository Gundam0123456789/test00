#include <stdio.h>

int main(){
  int amount1;
  printf("input element of array1: ");
  scanf("%d", &amount1);
  int array1[amount1];
  for(int i = 0; i < amount1; i++){
   printf("array1[%d]: ", i + 1);
   scanf("%d", & array1[i]);
  }
  int amount2;
  printf("input element of array2: ");
  scanf("%d", &amount2);
  int array2[amount2];
  for(int j = 0; j < amount2; j++){
   printf("array2[%d]: ", j + 1);
   scanf("%d", & array2[j]);
  }
  printf("----------------\n");
  // printf("Merge Array1 & Array2");
  int temp1 ;
  for(int i=0; i < amount1; i++){
   for(int j=0; j < amount2; j++){
      if(array2[j] < array1[i]){
          temp1 = array1[i];
         array1[i] = array2[j];
          array2[j] = temp1;
        }
     }
} 
    printf("\n");
    for(int i = 0; i < amount1; i++){
      for(int j = 0; j < amount2; j++){
    printf("%d", array1[i]);
 }
int temp1;
 int count1 = 1;
printf("\n");
 for(int i = 0; i < amount1; i++){
    if(temp1 == array1[i] && i > 0){
       continue;
    }
   for(int j = i + 1; j< amount2; j++){
       if(array1[i] == array2[j]){
          count1++;
       }
    }
     }
// int temp2;
// int count2 = 1;
// printf("\n");
// for(int i = 0; i < amount; i++){
   // if(temp1 == array[i] && i > 0){
      // continue;
    }
   // for(int j = i + 1; j< amount; j++){
      // if(array[i] == array[j]){
        //  count2++;
       // }
   // }
   // printf("%d-> %d\n", array[i], count1, count2);
   // temp =array[i];
   // count1 = 1 ;
   // count2 = 1 ;
// }

}
