// ATLAS Hybrid Bonding.cpp : Defines the entry point for the console application.
// V3
// reads wires from seperate header files
// header file determined by user pre-compliation


#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h> 
#include <ctype.h>
#include <conio.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include <algorithm>
#include "time.h"
#include "sys\stat.h"
//#include "barrel250.h"
//include "endcap250.h"
#include "barrel130.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *file;
	printf("__________________________________________\n ATLAS Strip Wire Bonding Program V3 \n Andy Blue \n March 2014\n__________________________________________\n");

	char bonder[32];
    char panel_n[256];
    string hybrid;
	char filen[1024];
	char x;
	int wire = 0; 
	char wired[104];
	char err[5];
	char comm[1000];
	char hybrid_n[235];
	char symmetry[10];
	char HCC[10];
	
	cout << "Version: " << atlas[0] << "\n" << endl;


	cout << "Please Enter Bonder username: ";
	cin >> bonder;


while (1) {
         cout << "Please enter the Panel number: ";
         cin >> panel_n;
		 int qq = atoi(panel_n);
		 if (qq>0) {
		 break;
		         }
		 
		else     {
				cout << "Not an Number... " << panel_n << endl;
				 }
		  }


while (1) {
	         cout << "\nEnter the hybrid number (0-7): "; // << endl; 
             cin >> hybrid;
       
             int ww= atoi(hybrid.c_str());

  
           //  cout << "Then You entered: " << hybrid << endl;
            if (hybrid.find("0", 0, 1)!= (string::npos)) 
			{
            break;
		    }     

			else if (ww <=7 && ww>0)
        {
				
			    break;
		         }


		    else if (ww>7) 
			    {
                cout << "You entered " << ww << endl;
                 cout << ww << " is not between 0 & 7" << endl;
				 }
	        else     
			     {
			     cout << "Not an valid number... " << hybrid_n << endl;
			      }
		  }

         
         cout << "Please enter if Left or Right Handed Panel (L or R) ";
         cin >> symmetry;
         cout << "Please enter if HCC or nHCC ";
         cin >> HCC;




	  cout << "\nSaving as Panel " << panel_n << " Hybrid_" << symmetry << hybrid.c_str() <<".txt\n";
      sprintf_s(filen, "Panel %s Hybrid_%s%s.txt",panel_n, symmetry, hybrid.c_str());
	  file = fopen(filen, "a+"); 
	  fprintf(file, "Wire Bonder: %s\n\n", bonder);
      fprintf(file, "Hybrid Type: %s %s\n\n", symmetry, HCC);
	  fprintf(file, "Issues: \n");


	while (1) {
		cout << "\nYou can perform the following tasks:\n";
		cout << "(w) Enter Wire bonds\n";
		cout<< "(c) Enter comments\n";
		cout << "(q) Quit\n";
		cout << "Please Select one... ";
		cin >> x;
        if (x == 'w' || x == 'W') 
		        {

                 printf("\n Enter a wire bond number ");
				 scanf(" %[^\n]s",wired);
                 int qq = atoi(wired);


				 if (qq<=0)
				 {
                 cout << "Invalid wire bond number. Please try again." << endl;
				 continue;
				 }
				 
				 else if (qq>=1715){
               
                 cout << "Invalid wire bond number. Please try again." << endl;
				 continue;
				 }

	       // cout << "Wire bond " << qq << endl;
		   // cout << "Corresponds to Pad No. " << pad[qq-1] <<  " Chip " << wirex[qq-1] << " Which bonds to " << wirem[qq-1] << endl;
           // cout << "Wire bond " << qq << endl;
			cout << "Wire bond " << qq << " corresponds to Pad No. " << pad[qq-1] <<  " on chip " << wirep[qq-1] << ", which bonds " << wirex[qq-1] << " to " << wirem[qq-1] << "\n" << endl;
              
				 
				 printf("Enter R for Re-work, F for Failed bond or C if check needed ");
			     scanf("%s", err);
				 fprintf(file, "Wire %s ", wired); 
                 fprintf(file, "Pad No %d ", pad[qq-1]);
				 fprintf(file, "Chip No %s ", wirep[qq-1]);
                 fprintf(file, "Wire bond from %s ", wirex[qq-1]);
				 fprintf(file, "to %s ", wirem[qq-1]);
                 fprintf(file, "Error %s \n", err); 
				continue;
				 }
	           
	     else if (x == 'q' || x == 'Q')
			     {
			     cout << "Thanks for using my program, goodbye! \n";
				 fclose(file); 
			     break;
                 }
		else if (x == 'c' || x == 'C')
			     {
                 cout << "\n Enter comments." << endl;
				 scanf(" %[^\n]s",comm);
				 fprintf(file, "Comment: %s \n", comm); 
			     continue;
                 }
		 else 

		         {
			     cout << "Bad choice! Try again\n";
		         }

             } // end of while loop
	
	cout << "Thats us out if the loop \n";
	return 0;

}



