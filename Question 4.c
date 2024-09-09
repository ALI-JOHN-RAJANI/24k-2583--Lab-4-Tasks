#include <stdio.h>
int main() {

    float bill, discount, billafterdiscount;
    printf("Enter Bill Amount: ");
    scanf("%f",&bill);
    if(bill>=500 && bill>0){
        if(bill<2000){
            discount = bill*0.05;
            billafterdiscount = bill-discount;
        }
        else if(bill>=2000 && bill<4000){
             discount =  bill*0.1;
            billafterdiscount = bill-discount;
        }
        else if(bill>=4000 && bill<6000){
            discount = bill*0.2;
            billafterdiscount = bill-discount;
        }
        else{
            discount = bill*0.35;
            billafterdiscount = bill-discount;
        }
        
        printf("The actual amount is: %.2f\n",bill);    
printf("The discount is: %.2f\n",discount);
printf("The bill after discount is: %.2f\n",billafterdiscount);
    }else{
        printf("The value should be positive");
       
    }

 return 0;   
}
