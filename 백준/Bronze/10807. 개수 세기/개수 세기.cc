#include <stdio.h>

int main(){
	
  
  int count;
  int i = 0;
  int j = 0;
  int find;
  
  int answer = 0;
  
  scanf("%d",&count);
  int array[count];

  while(i<count){
    scanf("%d",&array[i]);
    i++;
  }
  scanf("%d", &find);
  
  for (j = 0; j < count; j++)
  {
  	if (find == array[j])
  	{
  		answer = answer + 1;
  		
	}
  }
  
  printf("%d", answer);
  
  return 0;
}