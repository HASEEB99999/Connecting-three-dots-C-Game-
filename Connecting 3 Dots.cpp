#include<iostream>   // used for input/output stream
#include<stdlib.h>  // From this header file abort() function is used
#include<ctype.h>  // It contain inbuilt function to handles characters 
#include<conio.h> // getch function is used from this library which read a character input from keyboard
#include<limits> // it limit certain integers to be entered by the user 



using namespace std;

char A ='1' , B ='2' , C ='3' , D ='4' , E ='5' , F ='6' , G ='7' , H='8' , I='9'; //declaring all the positional variables for 3x3 grid
int count=1; // variable for players turn 
int  alot; // variable that store user enter number 
int r; // variable for index of array 
int array[9];


// A function created that define the structure of the game.
void structure(){
	
	              system("Color E4");
	 
  
        cout<< "                                                 " << A << "" <<" |" << " "<<B<< "" <<" |" << " " <<C<<endl;  
	    cout<< "                                                 __|___|__"<<endl;
        cout<< "                                                 " << D << "" <<" |" << " "<<E<< "" <<" |" << " " <<F<<endl;
        cout<< "                                                 __|___|__"<<endl;
        cout<< "                                                 " << G << "" <<" |" << " "<<H<< "" <<" |" << " " <<I<<endl;
        };
        
// Another Function created that check the winning conditions,draw condition (of players), taking input from players,& checking the validity of input values by players.if ((alot==1)&&(alot==2)&&(alot==3)&&(alot==4)&&(alot==5)&&(alot==6)&&(alot==7)&&(alot==8)&&(alot==9)){
void input(int conditions)
{
	
  
    //checking winning condition for player 1
    if((A=='*' && B=='*' && C=='*')||(D=='*' && E=='*' && F=='*')||(G=='*' && H=='*' && I=='*')||(A=='*' && D=='*' && G=='*')||(B=='*' && E=='*' && H=='*')||(C=='*' && F=='*' && I=='*')||(A=='*' && E=='*' && I=='*')||(C=='*' && E=='*' && G=='*')){
                cout<<" "<<endl;
                cout<<"                                     ######################################"<<endl;
                cout<<"                                     #       PLAYER 1 W0N THE GAME        #"<<endl;  
                cout<<"                                     #         CONGRAGULATIONS !!!        #"<<endl;
                cout<<"                                     ######################################"<<endl;
                cout<<" "<<endl;
                 getch();
                abort();
            
}

    //checking winning condition for player 2
    if((A=='X' && B=='X' && C=='X'||D=='X' && E=='X' && F=='X'||G=='X' && H=='X' && I=='X'||A=='X' && D=='X' && G=='X'||B=='X' && E=='X' && H=='X'||C=='X' && F=='X' && I=='X'||A=='X' && E=='X' && I=='X'||C=='X' && E=='X' && G=='X')){
                cout<<" "<<endl;
                cout<<"                                     ######################################"<<endl;
                cout<<"                                     #       PLAYER 2 W0N THE GAME        #"<<endl;  
                cout<<"                                     #         CONGRAGULATIONS !!!        #"<<endl;
                cout<<"                                     ######################################"<<endl;
                
                cout<<" "<<endl;
                 getch();
                abort();
            
            };
    
    //checking draw condition
    if(count==10){
        cout<<" "<<endl;
                cout<<"                                     ######################################"<<endl;
                cout<<"                                     #         THE GAME IS TIE            #"<<endl;  
                cout<<"                                     #       NEITHER PLAYER WINS !!!      #"<<endl;
                cout<<"                                     ######################################"<<endl;
        
        cout<<" "<<endl;
        getch();
        abort();
    };
 

    //players will enter the values
   
	cout<<" "<<endl;
    cout<<"PLAYER "<<conditions<<" TURN: ";
	
    cin>>alot;

    cout<<" "<<endl; 
    
 
     
     
    
 //checking the validity of the input value that the player has entered.


    if (alot>9||alot<1){
                cout<<"ENTER A VALID NUMBER (the grid contain numbers from 1-9): "<<endl;
				count--; // this will turn the count varaible to 0 which was initialised to 1, and this indicates that the valid input turn of the player is restored.
            	
			
	   
			}
			

 
    for(int r;r<count;r++){
                
                //checking if a position entered by player is already taken or not
                if(array[r]==alot){
                    cout<<"THIS POSITION IS ALREADY TAKEN, ENTER THE NUMBER AGAIN: "<<endl;
                    input(conditions);
				
                }
                
                else{
                         
                     array[r]=alot; //putting the input value into the array
                    break;
                }
                
    }
    if (!cin){
    	            cin.clear();
    	            cin.ignore(numeric_limits<streamsize>::max(), '\n');
    	            
	}
    
    }

    


int main(){
	
cout<<" #-------------------------------------------------------------------------------------------------------------------#"<<endl;
cout<<" #                               -----------------------------------------------                                     #"<<endl;                          
cout<<" #                               | NOUGHTS & CROSSES GAME (CONNECTING 3 STARS) |                                     #"<<endl;
cout<<" #                               -----------------------------------------------                                     #"<<endl;
cout<<" #                                                                                                                   #"<<endl;
cout<<" #               ENTER THE NUMBER WHERE YOU WANT TO DISPLAY (  X  ) OR (  *  ) to start the Game.                    #"<<endl;
cout<<" #                                                                                                                   #"<<endl;
cout<<" #                                                                                                                   #"<<endl;
cout<<" #                    NOTE:     PLAYER 1 Mark is  --->  *   &   PLAYER 2 Mark is --->  X                             #"<<endl;
cout<<" #-------------------------------------------------------------------------------------------------------------------#"<<endl;
cout<<"                                                                                                                      "<<endl;

structure();



while(count<=10){
        if(count%2==0){ // player 2 taking his turn on even count 2,4,6,8
            input(2); // function called.
            count++; // count increase for player 1 turn.
           
            //using switch statement to replace the values 1-9 by X in the game grid for player 2.
            switch(alot){
            case 1:
            A='X';
            structure();
            break;
            
            case 2:
            B='X';
            structure();
            break;
            
            case 3:
            C='X';
            structure();
            break;
            
            case 4:
            D='X';
            structure();
            break;
            
            case 5:
            E='X';
            structure();
            break;
            
            case 6:
            F='X';
            structure();
            break;
            
            case 7:
            G='X';
            structure();
            break;
            
            case 8:
            H='X';
            structure(); 
            break;
            
            case 9:
            I='X';
            structure();
            break;
            }
        }
             else {
            input(1);
            count++;
           
            //using switch statement to replace the values of positional variable by 0 in the structure for player 1
            switch(alot){
            case 1:
            A='*';
            structure();
            break;
           
            case 2:
            B='*';
            structure();
            break;
            
            case 3:
            C='*';
            structure();
            break;
            
            case 4:
            D='*';
            structure();
            break;
            
            case 5:
            E='*';
            structure();
            break;
            
            case 6:
            F='*';
            structure();
            break;
           
            case 7:
            G='*';
            structure();
            break;
            
            case 8:
            H='*';
            structure();
            break;
           
            case 9:
            I='*';
            structure();
            break;
            
        }
        }
         



}
  return 0;
}

