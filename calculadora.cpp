#include <stdio.h> 
#include <iostream>
#include <math.h>

int main(){
		float val1,val2,resultado;
		printf("operacines");
		printf("\n	suma\n	resta\n	multiplicacion\n	divicion\n	");
		printf("\n	ingrese primer valor:	\n");
		scanf("%f",&val1);
		printf("\	ingreses segundo valor: \n");
		scanf("%f",&val2);
		
	 		printf("el resultado de la suma es %.2f+%.2f=%.2f: \n",val1,val2,val1+val2);
			printf("el resultado de la resta es %.2f-%.2f=%.2f: \n",val1,val2,val1-val2);
			printf("el resultado de la multiplicacion es %.2f*%.2f=%.2f: \n",val1,val2,val1*val2);
			printf("el resultado de la divición es %.2f/%.2f=%.2f: \n",val1,val2,val1/val2);
		
	return 0;
}
