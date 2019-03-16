#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool isSubset(char *array1, char *array2, int n1, int n2){
    bool isS;
    for (int i = 0; i < n2; i++){
        isS = 0;
        for (int j = 0; j < n1;j++){
            if (array1[j] == array2[i]){
                isS = 1;
            }
        }
        if(isS == 0){
            return 0;
        }
    }
    if(isS == 1){
        return 1;
    }
}

int main ()
{
  int n1 = 0;
  int n2 = 0;
  printf ("Input the number of element(s) in the 1st array:\n");
  scanf ("%d", &n1);
  char *array1 = (char*)malloc(n1 * sizeof(char));
  printf ("Input the element(s) in 1st array:\n");
  for (int i = 0; i < n1; i++){
    scanf (" %c", &array1[i]);
  }
  
  printf ("Input the number of element(s) in the 2nd array:\n");
  scanf ("%d", &n2);
  char *array2 = (char*)malloc(n2 * sizeof(char));
  printf ("Input the element(s) in 2nd array:\n");
  for (int j = 0; j < n2; j++){
    scanf (" %c", &array2[j]);
  }
  bool result = isSubset(array1,array2,n1,n2);
  if(result == 0){
      printf("False\n");
  }else{
      printf("True\n");
  }
  return 0;
}}
