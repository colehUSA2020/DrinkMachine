//Drink Machine Program
//Written by: Cole Helmuth
//This program simulates a virtual vending machine. It uses a
//structure called DrinkMachine and an array called selection
//to allow the user to choose from five different beverages,
//enter how much money they put in the machine, validates all
//inputs and then determines how much change they will receive 
//from the input. The program also displays how many drinks in 
//each category are remaining, and will display how much money 
//the machine takes in. Two functions are used in this 
//program: printHeader displays the menu choices, and profitTotal 
//displays the amount of money the drink machine has taken in.
//The user can enter 0 to exit the program. 

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//Declare DrinkMachine structure
struct DrinkMachine
{
 string drinkName;
 double drinkCost;
 int numDrinks;   
};

//function prototypes
void printHeader(void);//print header function
void profitTotal(double);//profit total function


int main()//begin main 
{
    //link the element values in array selection 
    //with the variables from DrinkMachine structure
 DrinkMachine selection[15] = {"Cola      ", .75, 20, "Root Beer ", .75, 20, "Lemon-Lime", .75, 20, "Grape Soda", .80, 20, "Cream Soda", .80, 20};
 int choice = 99;
 double payment = 0;
 double change = 0;
 double totSales = 0;
 
 while (choice !=0)//Begin user choice loop
 {
       //Display interactive DrinkMachine structural data array
 cout << "==========================================" << endl;
 cout << "Drink Name" << "       " << "Cost" << "    " << "Number in Machine" << endl;
 cout << "------------------------------------------" << endl;
 cout << selection[0].drinkName << "       " << setprecision(2) << fixed << selection[0].drinkCost << "            " << selection[0].numDrinks << endl;            
 cout << selection[1].drinkName << "       " << setprecision(2) << fixed << selection[1].drinkCost << "            " << selection[1].numDrinks << endl;
 cout << selection[2].drinkName << "       " << setprecision(2) << fixed << selection[2].drinkCost << "            " << selection[2].numDrinks << endl;            
 cout << selection[3].drinkName << "       " << setprecision(2) << fixed << selection[3].drinkCost << "            " << selection[3].numDrinks << endl;
 cout << selection[4].drinkName << "       " << setprecision(2) << fixed << selection[4].drinkCost << "            " << selection[4].numDrinks << endl; 
 cout << "------------------------------------------" << endl;
 cout << "  " << endl;
 
 printHeader();//call printHeader function
 
 cin >> choice;//enter user choice  
  
  //enter the choice decision structures
  if (choice < 0 || choice > 5)
  {
     cout << "Error! Please enter a number between 0 and 5." << endl;
     cout << "  " << endl;
     cin >> choice;
     }
  if (choice == 0)
  {
   cout << "You have chosen to exit the program." << endl;
   cout << "  " << endl;          
  } 
  if (choice == 1 && selection[0].numDrinks == 0)
    {
    cout << "Sorry, that selection is sold out. Please choose another beverage." << endl;
    cout << "  " << endl;                           
    }
  if (choice == 1 && selection[0].numDrinks != 0)
  {
    cout << "You have chosen to purchase a Cola." << endl;
    cout << "  " << endl;
    cout << "Enter the amount of money you placed in the machine." << endl;
    cout << "  " << endl;
    cin >> payment;
    change = payment - selection[0].drinkCost; 
    
    while (payment < .75 || payment > 1.00)
    {
       cout << "Error! Please enter an amount between .75 and 1.00" << endl;
       cout << "  " << endl;
       cin >> payment; 
       change = payment - selection[0].drinkCost;           
    } 
    if (payment >= .75 && payment <= 1.00)
    {
    cout << "Your change is: " << change << endl;
    cout << "  " << endl;
    totSales = totSales + (payment - change);
    selection[0].numDrinks = selection[0].numDrinks - 1; 
    }          
  }//end choice 1 
  
  if (choice == 2 && selection[1].numDrinks == 0)
    {
    cout << "Sorry, that selection is sold out. Please choose another beverage." << endl;
    cout << "  " << endl;                           
    } 
    if (choice == 2 && selection[1].numDrinks != 0)
  {
    cout << "You have chosen to purchase a Root Beer." << endl;
    cout << "  " << endl;
    cout << "Enter the amount of money you placed in the machine." << endl;
    cout << "  " << endl;
    cin >> payment;
    change = payment - selection[1].drinkCost; 
    
    while (payment < .75 || payment > 1.00)
    {
       cout << "Error! Please enter an amount between .75 and 1.00" << endl;
       cout << "  " << endl;
       cin >> payment;
       change = payment - selection[1].drinkCost;           
    } 
    if (payment >= .75 && payment <= 1.00)
    {
    cout << "Your change is: " << change << endl;
    cout << "  " << endl;
    totSales = totSales + (payment - change); 
    selection[1].numDrinks = selection[1].numDrinks - 1;
    }        
  }//end choice 2
  
  if (choice == 3 && selection[2].numDrinks == 0)
    {
    cout << "Sorry, that selection is sold out. Please choose another beverage." << endl;
    cout << "  " << endl;                           
    }
  if (choice == 3 && selection[2].numDrinks != 0)
  {
    cout << "You have chosen to purchase a Lemon-Lime." << endl;
    cout << "  " << endl;
    cout << "Enter the amount of money you placed in the machine." << endl;
    cout << "  " << endl;
    cin >> payment;
    change = payment - selection[2].drinkCost; 
    
    while (payment < .75 || payment > 1.00)
    {
       cout << "Error! Please enter an amount between .75 and 1.00" << endl;
       cout << "  " << endl;
       cin >> payment; 
       change = payment - selection[2].drinkCost;           
    } 
    if (payment >= .75 && payment <= 1.00)
    {
    cout << "Your change is: " << change << endl;
    cout << "  " << endl;
    totSales = totSales + (payment - change);
    selection[2].numDrinks = selection[2].numDrinks - 1; 
    }        
  }//end choice 3
  
  if (choice == 4 && selection[3].numDrinks == 0)
    {
    cout << "Sorry, that selection is sold out. Please choose another beverage." << endl;
    cout << "  " << endl;                           
    }
  if (choice == 4 && selection[3].numDrinks != 0)
  {
    cout << "You have chosen to purchase a Grape Soda." << endl;
    cout << "  " << endl;
    cout << "Enter the amount of money you placed in the machine." << endl;
    cout << "  " << endl;
    cin >> payment;
    change = payment - selection[3].drinkCost; 
    
    while (payment < .80 || payment > 1.00)
    {
       cout << "Error! Please enter an amount between .80 and 1.00" << endl;
       cout << "  " << endl;
       cin >> payment; 
       change = payment - selection[3].drinkCost;          
    } 
    if (payment >= .80 && payment <= 1.00)
    {
    cout << "Your change is: " << change << endl;
    cout << "  " << endl;
    totSales = totSales + (payment - change);
    selection[3].numDrinks = selection[3].numDrinks - 1; 
    }        
  }//end choice 4
  
  if (choice == 5 && selection[4].numDrinks == 0)
    {
    cout << "Sorry, that selection is sold out. Please choose another beverage." << endl;
    cout << "  " << endl;                           
    }
  if (choice == 5 && selection[4].numDrinks != 0)
  {
    cout << "You have chosen to purchase a Cream Soda." << endl;
    cout << "  " << endl;
    cout << "Enter the amount of money you placed in the machine." << endl;
    cout << "  " << endl;
    cin >> payment;
    change = payment - selection[4].drinkCost;
    
    while (payment < .80 || payment > 1.00)
    {
       cout << "Error! Please enter an amount between .80 and 1.00" << endl;
       cout << "  " << endl;
       cin >> payment; 
       change = payment - selection[4].drinkCost;        
    } 
    if (payment >= .80 && payment <= 1.00)
    {
    cout << "Your change is: " << change << endl;
    cout << "  " << endl;
    totSales = totSales + (payment - change);
    selection[4].numDrinks = selection[4].numDrinks - 1; 
    }        
  }//end choice 5
}//end while main 

//call profitTotal function to display total sales of drink machine
profitTotal(totSales);

system("pause");
return 0;    
}

//define printHeader function to display user choices
void printHeader(void)
{
 cout << "Choose the beverage you wish to purchase." << endl;
 cout << "  " << endl;
 cout << "Enter 0 to exit the program." << endl;
 cout << "Enter 1 for Cola." <<endl;
 cout << "Enter 2 for Root Beer." << endl;
 cout << "Enter 3 for Lemon-Lime." << endl;
 cout << "Enter 4 for Grape Soda." << endl;
 cout << "Enter 5 for Cream Soda." << endl; 
 cout << "  " << endl;
}
//define profitTotal function to display the total sales of the vending machine
void profitTotal(double totSales)
{
   cout << "The total money taken in by the machine is: " << totSales << endl;    
}
