
int soma (float num1, float num2){
	float total;
	total = num1 + num2;
	printf ("\nTotal: %.2f \n", total);
return total;
}

int sub (float num1, float num2){
	float total;
	total = num1 - num2;
	printf ("\nTotal: %.2f \n", total);
return total;
}

int divi (){
	
	float num1;
	float num2;
	float total;
	
	printf("\n\nDigite um numero:\n\n");
	scanf("\n%f",&num1);
			
	printf("\n  dividido por:\n\n");
	scanf("\n%f",&num2);
					
	while(num2 ==0){
		printf("Numero invalido. Digite novamente");
		printf("\n  dividido por:\n\n");
		scanf("\n%f",&num2);
	}
	total = num1 / num2;
	printf ("Total: %.2f \n", total);
	
return total;
}

int mul (float num1, float num2){
	float total;
	total = num1 * num2;
	printf ("\nTotal: %.2f \n", total);
return total;
} 
