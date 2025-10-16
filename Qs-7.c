#include <stdio.h>

int main(){
	
	int array[10];
	int duplicate[100];
	int y = 0;
	for(y; y< 100; y++){	
		duplicate[y] = 0;
	}
	int i =0;
	for(i; i<10 ; i++){	
		printf("Enter The Number: ");
		scanf("%d", &array[i]);
	}
	int j = 0;
	int q;
	for(j; j < 10; j++){	
		q = array[j] - 1;
		if(duplicate[q] == 0){
			duplicate[q] = 1;
		}else{		
			array[j] = -1;
		}
	}
	int x = 0;
	for(x; x<10; x++){
		printf("%d", array[x]);
		printf(" ");
	}
    return 0;
}