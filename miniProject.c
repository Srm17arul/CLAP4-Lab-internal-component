// Name: Arul Gupta
// Reg. No.: RA2111003010411
// Section: F1

#include <stdio.h>
#include <string.h>
int main(){
    FILE *fr;

    int id,Units;
    float rate,amt,tamt,surcharge;
    char name[50];

    fr = fopen("Gas bill", "w");

    // Taking input from user
    printf("Customer name: ");
    scanf("%s",&name[50]);
    printf("Customer id: ");
    scanf("%d",&id);
    printf("Units Consumed: ");
    scanf("%d",&Units);

    // Conditions
    if(Units<=1000){
        rate=0.35;
    }
    else if(Units>1000&&Units<=2500){
        rate=1.59;
    }
    else if(Units>2500&&Units<=3500){
        rate=2.3;
    }
    else if(Units>3500&&Units<=4500){
        rate=2.99;
    }
    else if(Units>4500&&Units<=5500){
        rate=3.5;
    }
    else{
        rate=4;
    }
    tamt=Units*rate;
    if(tamt>2500){
        surcharge=tamt*0.15;
    }
    amt=tamt+surcharge;

    // Saving data in file
    fprintf(fr,"\n****Gas Bill****\n");
    fprintf(fr,"Customer name:\t%s\n",name);
    fprintf(fr,"Customer id:\t %d\n",id);
    fprintf(fr,"Units Consumed:\t %d\n",Units);
    fprintf(fr,"Amount charge %.2f per Units:\t %.2f\n",rate,tamt);
    fprintf(fr,"Surcharge:\t %.2f\n",surcharge);
    fprintf(fr,"Total amount:\t %.2f\n",amt);
    fclose(fr);
    return 0;
}