#include<stdio.h>
#include<string.h>
typedef struct student{
	int no;
	char name[65];
	float height;
}S;
void show(S *s){
     printf("%d  ",s->no);
     printf("%s  ", s->name);
     printf("%f\n",s->height);
}
int main(){
  S *s[3];
  s[0]=(S *)malloc(sizeof(S));
  s[0]->no=1;
  strcpy(s[0]->name,"Sher");
  s[0]->height=173.4;
  show(s[0]);

  s[1]=(S *)malloc(sizeof(S));
  s[1]->no=2;
  strcpy(s[1]->name,"Her");
  s[1]->height=174.0;
  show(s[1]);

  s[2]=(S *)malloc(sizeof(S));
  s[2]->no=3;
  strcpy(s[2]->name,"She");
  s[2]->height=175.0;
  show(s[2]);

  return 0;
}

