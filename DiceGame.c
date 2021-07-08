#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int a[2];
  printf("Rolling the dice...\n");
  srand((unsigned int)time(NULL));
  for(int i=0;i<2;i++){
    printf("Dice %d:",i+1);
    int num = rand() % 6 + 1;
            switch(num) {
            case 1:
                printf("1\n");
		a[i]=1;
		break;
            case 2:
                printf("2\n");
		a[i]=2;
		break;
            case 3:
                printf("3\n");
		a[i]=3;
		break;
            case 4:
                printf("4\n");
		a[i]=4;
		break;
            case 5:
                printf("5\n");
		a[i]=5;
		break;
            case 6:
                printf("6\n");
		a[i]=6;
		break;
            default:
                printf("\n");
        }
    }
  printf("Total value:%d\n",a[0]+a[1]);
  
  return 0;
}
