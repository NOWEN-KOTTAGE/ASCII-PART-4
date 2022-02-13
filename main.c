#include<stdio.h>
#include<string.h>
int main(){
  char pass[30];
  int uc,lc,nc,other;
  printf("enter the pass : ");
  scanf("%s",pass);
  for(int i=0;i<strlen(pass);i++)
  {
    if (pass[i]<91 && pass[i]>64){
    uc=1;
    }
    else if (pass[i]<123 && pass[i]>96){
    lc=1;
    }
    else if(pass[i]<58 && pass[i]>47){
    nc=1;
    }
    else if(pass[i]=='@'||pass[i]=='&'||pass[i]=='$'){
    other=1;
    }
  }
  if(strlen(pass)>10 && uc==1 && lc==1 && nc==1 && other==1){
    printf("%s is a valid password\n",pass);
  }
  else
  printf("invalid pass\n");
  return 0;

}