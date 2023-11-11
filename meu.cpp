#include<stdio.h>
int n1,n2,sum,mult,divi,rest,res,opcion;
void menu(){
printf("selecciona una opcion: \n1.suma \n2.resta \n3.multiplicacion \n4.divicion \n5.factorial \n6.salir  \n");
scanf("%d",&opcion);
}
int main () {
do{
menu();
switch(opcion){
case 1:
printf("cuales son tus numeros: \n");
scanf("%d",&n1);
scanf("%d",&n2);
sum=n1+n2;
printf("la suma es %d\n",sum);
break;
case 2:
printf("cuales son tus numeros: \n");
scanf("%d",&n1);
scanf("%d",&n2);
rest=n1-n2;
printf("la resta es %d\n",rest);
break;
case 3:
printf("cuales son tus numeros: \n");
scanf("%d",&n1);
scanf("%d",&n2);
mult=n1*n2;
printf("la multiplicacion es %d\n",mult);
break;
case 4:
printf("cuales son tus numeros: \n");
scanf("%d",&n1);
scanf("%d",&n2);
divi=n1/n2;
printf("la divicion es %d\n",divi);
break;
case 5:
printf("cuales es tu numero: \n");
scanf("%d",&n1);
res=1;
for (int i=1;i <= n1; ++i)
{
res*=i;
}
printf("al factorizar %d es igual a  %d\n",n1,res);
break;
case 6:
return 0;
default:
printf("Opcion no valida. Intentalo de nuevo.\n");
}
} while (opcion != 6);
return 0;
}

