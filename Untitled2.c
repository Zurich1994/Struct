#include<stdio.h>
#include<string.h>
typedef struct student{
	int no;
	char name[65];
	float height;
}S;
void show(S s){
     printf("%d  ",s.no);
     printf("%s  ", s.name);
     printf("%f  \n",s.height);
}
int main(){

  S *p=(S *)malloc(sizeof(S)*3);

  p[0].no=1;
  strcpy(p[0].name,"Sher");
  p[0].height=173.4;
  show(p[0]);

  p[1].no=2;
  strcpy(p[1].name,"Her");
  p[1].height=174.0;
  show(p[1]);

  p[2].no=3;
  strcpy(p[2].name,"She");
  p[2].height=175.0;
  show(p[2]);
  return 0;
}
