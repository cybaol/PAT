#include <stdio.h>
#include <string.h>
void main(){
  char A[81];
  gets(A);
  for(int i=strlen(A)-1;i>=0;i--){
  	if(A[i]==' '){
  	  printf("%s ",&A[i+1]);
  	  A[i] = '\0';
  	}
  	else if(!i) printf("%s",&A[i]);
  }
}