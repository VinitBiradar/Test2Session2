#include<stdio.h> 
void input_line(float*x1,float*y1,float*x2,float*y2,float*x3,float*y3)
{
  printf("enter the value of x1,y1,x2,y2,x3,y3\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
float area;
  area=0.5*((x1*(y2-y3))*(x2*(y3-y1))*(x3*(y1-y2)));
    return area;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,float area)
{
  if (area<=0)
  {
    printf("the points %f,%f and %f,%f and %f,%f dosen't form a triangle\n",x1,y1,x2,y2,x3,y3);
    }
    else
  {
    printf("the points %f,%f and %f,%f and %f,%f form a triangle\n",x1,y1,x2,y2,x3,y3);
    }
  }
  int main()
{
  float a,b,c,d,e,f,result;
  input_line(&a,&b,&c,&d,&e,&f);
  result=is_triangle(a,b,c,d,e,f);
  output(a,b,c,d,e,f,result);
  return 0;
  }