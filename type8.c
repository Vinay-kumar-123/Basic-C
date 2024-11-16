#include<stdio.h>
int main(){
  int l,i;
  int arr[100];
  printf("enter the length of array :");
  scanf("%d",&l);

  for(i=0;i<l;i++){
     printf("enter element of array :");
    scanf("%d",&arr[i]);

    //printf("select array:");
    //scanf("%d",&l);

    
    
  
  }
  int s;
  printf("Array index:");
  scanf("%d",&s);
  if(s >=0 && s<1){
    printf("Array of element:  %d ", arr[s]);
  }
  else{
    printf("not element in array");
  }
  
  return 0;
}