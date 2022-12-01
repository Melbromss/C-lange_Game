#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int inputF; // User inputted Fahreinheit;
  int inputC; // User inputted Celsius;
  int inputUSDtoEuro; // User inputted for USD to EURO;
  int inputUSDtoJPY; // User inputted for USD to JPY;
  int inputUSDtoRMB; // User inputted for USD to RMB;
  int inputOunce; // User inputted for Ounce;
  int inputGram; // User inputted for Gram;
  int FtoC; // variable that  converted F->C;
  int CtoF; // variable that  converted C->F;
  float USDtoEURO ; // varaible that stores the converted USD->EURO;
  float USDtoJPY; // stores the converted USD->JPY;
  float USDtoRMB; // stores the converted USD->RMB;
  float ounceToPounds; // stores the converted Ounce->Pounds;
  float gramsToPounds; // stores the vonerted Grams->Pounds;
  
  printf("Unit Converter \n");
  printf("List of conversation to choose from: \n");
  printf("Temperature (T),Currency (C),Mass (M) \n");
  printf("Enter the letter.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("List of conversations to choose Temparature: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);

      if(tempChoice == 1){
          printf("Please enter the Fahrenheit : \n");
          scanf("%d",&inputF);
          FtoC =  ((rinputF-32) * (5.0/9.0));
          printf("Celcius: %d",FtoC);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius: \n");
        scanf("%d",&inputC);
        CtoF = ((9.0/5.0)*inputC + 32);
        printf("Fahrenheit: %d",CtoF);
      }
      else
        printf("Fail choose again. \n");
  }
  
  else if(category == 'C') {
      printf("Currency Converter! \n");
      printf("List of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RMB. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&inputUSDtoEuro);
          USDtoEURO = inputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&inputUSDtoJPY);
          USDtoJPY = inputUSDtoJPY * 111.09;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&inputUSDtoRMB);
        USDtoRMB = inputUSDtoRMB * 6.82;
        printf("RMB: %.2f",USDtoRMB);
      }
      else
        printf("Fail chose aganin. \n");
   }
  else if(category == 'M'){
      printf("Mass Converter! \n");
      printf("List of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&inputOunce);
          ounceToPounds = inputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&inputGram);
          gramsToPounds = inputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("Fail chose aganin. \n");
   }
  return 0;
}