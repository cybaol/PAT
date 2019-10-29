#include <stdio.h>
void main(){
  char A1[61],A2[61],A3[61],A4[61];
  char DAY,HH;
  int MM,i,j;
  gets(A1);
  gets(A2);
  gets(A3);
  gets(A4);
  for(i=0,j=0;A1[i],A2[i];i++,j++)
    if(A1[i]>='A'&&A1[i]<='G'&&A1[i]==A2[j]){
     	DAY = A1[i];
     	break;
     	}
  for(int m=i+1,n=j+1;A1[m],A2[n];m++,n++)
    if((A1[m]>='A'&&A1[m]<='N'||A1[m]>='0'&&A1[m]<='9')&&A1[m]==A2[n]){
     	HH = A1[m];
     	break;
     	}
  for(int m=0,n=0;A3[m],A4[n];m++,n++)
    if((A3[m]>='a'&&A3[m]<='z'||A3[m]>='A'&&A3[m]<='Z')&&A3[m]==A4[n]){
      MM = m;
      break;
    }
  switch(DAY){
    case 'A':printf("%s","MON ");break;
    case 'B':printf("%s","TUE ");break;
    case 'C':printf("%s","WED ");break;
    case 'D':printf("%s","THU ");break;
    case 'E':printf("%s","FRI ");break;
    case 'F':printf("%s","SAT ");break;
    case 'G':printf("%s","SUN ");break;
  }
  for(char T='A';T<='N';T++)
    if(HH==T){printf("%d:",HH-55);break;}
  for(char T='0';T<='9';T++)
    if(HH==T){printf("0%d:",HH-'0');break;}
  if(MM>=0&&MM<=9) printf("0%d",MM);
  else printf("%d",MM);
}