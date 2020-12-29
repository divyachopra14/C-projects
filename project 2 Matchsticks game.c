// the matchstick game
#include<stdio.h>

int main(){
	int c,u,m=21;
	while(1){
		printf("Enter your pick out of 1,2,3 or 4\n");
		scanf("%d",&u);
		c = 5-u;
		m = m-(c+u);
		if(m<=21 && m!=1){
			printf("The computer picks %d\n",c);
			printf("Matchsticks left : %d\n",m-(c+u));
		}
		else if (m==1){
			printf("You Lost!!\n");
			break;
		}
	}
	return 0;
}

