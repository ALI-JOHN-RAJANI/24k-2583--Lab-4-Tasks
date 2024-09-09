#include <stdio.h>
int main() {

    int customerid;
    char customername[100];
    float unitconsumed, bill, unitcost, surcharge=0;
    printf("Enter customer id: ");
    scanf("%d",&customerid);
printf("Enter customer name: ");
    scanf("%s",&customername);
printf("Enter Units Consumed: ");
    scanf("%f",&unitconsumed);
if(unitconsumed<=199){
    unitcost = 16.20;
    bill = unitconsumed * unitcost;
}    
else if(unitconsumed>=200 && unitconsumed<300){
    unitcost = 20.10;
    bill = unitconsumed * unitcost;
}
else if(unitconsumed>=300 && unitconsumed<500){
    unitcost = 27.10;
    bill = unitconsumed * unitcost;
}
else{
    unitcost = 35.90;
    bill = unitconsumed * unitcost;
}
printf("\n");
printf("Customer ID: %d\n", customerid);
printf("Customer Name: %s\n", customername);
printf("Unit Consumed: %.2f\n", unitconsumed);
printf("Cost per unit: %.2f\n", unitcost);
printf("Amount Bill: %.2f\n", bill);

if(bill>18000){
    surcharge = bill * 0.15;
    bill = bill + surcharge;
}   
printf("Surcharge Amount: %.2f\n", surcharge);
printf("Net amount paid by the customer: %.2f\n", bill);




 return 0;   
}
