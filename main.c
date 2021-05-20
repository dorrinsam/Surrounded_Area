#include<stdio.h>

int main(){
  int n;
    scanf("%d", &n);
  int arr[n];
  int maxmasahat = 0;
  int i, j;
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
                              }
  int stack[n];
  int top = -1;
  int k;
  int masahat;
    for(i = 0; i < n; i++) {
       if(top == -1 || arr[stack[top]] <= arr[i]){
          stack[++top] = i;
                                                        }
       else{
          k = stack[top--];
          masahat = arr[k] * (top == -1 ? i : i - stack[top] - 1);
      if (masahat > maxmasahat) {
          maxmasahat = masahat;
                                                             }
             i--;
                                                                    }

                                                                          }


     while(top != -1){
        k = stack[top--];
        masahat = arr[k] * (top == -1 ? i : i - stack[top] - 1);
           if(masahat > maxmasahat){
              maxmasahat = masahat;
                                                                                       }

                                                                                           }



                  printf("%d", maxmasahat);
                      return 0;
                                                                                                 }
