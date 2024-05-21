#include <stdio.h>  
void countCoins(int amount) 
{  
    int coin[5] = {20, 10, 5, 2, 1};  
    int temp = amount;  
  
    for (int i = 0; i< 5; i++) 
    {  
    printf("\n%d Coins is: %d", coin[i], temp / coin[i]);  
    temp = temp % coin[i];  
    }  
}  
  
int main() 
{  
    int amount;  
  
    printf("Enter the amount: ");  
    scanf("%d", &amount);  
  
    countCoins(amount);  
  
    return 0;  
}