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
     printf("%f\n",s.height);
}
int main(){
  S s1,s2,s3;

  s1.no=1;
  strcpy(s1.name,"Sher");
  s1.height=173.4;
  show(s1);


  s2.no=2;
  strcpy(s2.name,"Her");
  s2.height=174.0;
  show(s2);

  s3.no=3;
  strcpy(s3.name,"She");
  s3.height=175.0;
  show(s3);


  return 0;
}
