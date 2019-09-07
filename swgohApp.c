#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

typedef struct rC{
	char character[SIZE];
	int reqGear;
	int recGear;
} req;

typedef struct e{
	char eventName[SIZE];
	char reward[SIZE];
	int lastDate;
	int rotation;
	req reqChars;
} event;

void eChecklist(event);
void pFarm(event);

int main() {
	
	//Events' setups
	struct e e1;
	strcpy(e1.eventName, "Emperor's Demise");
	strcpy(e1.reward, "Emperor Palpatine");
	e1.rotation = 72;
	
	struct e e2;
	strcpy(e2.eventName, "Grandmaster's Training");
	strcpy(e2.reward, "Grandmaster Yoda");
	e2.rotation = 67;
	
	struct e e3;
	strcpy(e3.eventName, "Luke Skywalker Hero's Journey");
	strcpy(e3.reward, "Commander Luke Skywalker");
	e3.rotation = 102;
	
	struct e e4;
	strcpy(e4.eventName, "Legend of the Old Republic");
	strcpy(e4.reward, "Jedi Knight Revan");
	e4.rotation = 89;
	
	struct e e5;
	strcpy(e5.eventName, "Scourge of the Old Republic");
	strcpy(e5.reward, "Darth Revan");
	e5.rotation = 80;
	
	struct e e6;
	strcpy(e6.eventName, "Pieces & Plans");
	strcpy(e6.reward, "BB-8");
	e6.rotation = 82;
	
	struct e e7;
	strcpy(e7.eventName, "Rey's Hero's Journey");
	strcpy(e7.reward, "Rey (Jedi Training)");
	e7.rotation = 97;
	
	struct e e8;
	strcpy(e8.eventName, "Contact Protocol");
	strcpy(e8.reward, "C-3PO");
	e8.rotation = 87;
	
	struct e e9;
	strcpy(e9.eventName, "Daring Droid");
	strcpy(e9.reward, "R2-D2");
	e9.rotation = 81;
	
	struct e e10;
	strcpy(e10.eventName, "Aggressive Negotiations");
	strcpy(e10.reward, "Padme Amidala");
	e10.rotation = 97;
	
	struct e e11;
	strcpy(e11.eventName, "Star Forge Showdown");
	strcpy(e11.reward, "Darth Malak");
	e11.rotation = 125;
	
	struct e e12;
	strcpy(e12.eventName, "One Famous Wookiee");
	strcpy(e12.reward, "Chewbacca");
	e12.rotation = 93;
	
	//Operations
	unsigned int operation;
	int loop;
	int choise;
	int op;
	
	while(loop!=-1){
		printf("\n1 - Event Checklist\n2 - Panic Farm\n");
		printf("Choose operation: ");
		scanf("%d",&operation);

		printf("\nChoose an event below:\n"
	       	       "1 - Emperor's Demise\n"
   	   	       "2 - Grandmaster's Training\n"
		       "3 - Luke Skywalker Hero's Journey\n"
		       "4 - Legend of the Old Republic\n"
                       "5 - Scourge of the Old Republic\n"
		       "6 - Pieces & Plans\n"
		       "7 - Rey's Hero's Journey\n"
		       "8 - Contact Protocol\n"
		       "9 - Daring Droid\n"
		       "10 - Aggressive Negotiations\n"
		       "11 - Star Forge Showdown\n"
		       "12 - One Famous Wookiee\n");
		printf("Choise: ");
		scanf("%d",&choise);
	
		switch(operation){
			case 1:
                		switch(choise){
                   			case 1:
                   				eChecklist(e1);
                   				break;
                   			case 2:
                   				eChecklist(e2);
                   				break;
                   			case 3:
                   				eChecklist(e3);
                   				break;
                   			case 4:
                   				eChecklist(e4);
                   				break;
                   			case 5:
                      		 		eChecklist(e5);
                      		 		break;
                  	        	case 6:
                       				eChecklist(e6);
                       				break;
                   			case 7:
                       				eChecklist(e7);
                     		  		break;
          		        	case 8:
                       				eChecklist(e8);
                       				break;
                    			case 9:
                       				eChecklist(e9);
                       				break;
                    			case 10:
                       				eChecklist(e10);
                       				break;
                    			case 11:
                       				eChecklist(e11);
                       				break;
                    			case 12:
                       				eChecklist(e12);
                       				break;
                    			default:
                       				printf("\nInvalid choise! Retry again.\n");
                       				loop = 0;
                       				break;
                		}

				//Checking nested switch-case statement's default case
				if(loop==0)
					loop = 0;
				else
					loop = -1;
				break;

			case 2:
				switch(choise){
					case 1:
						pFarm(e1);
						break;
					case 2:
						pFarm(e2);
						break;
					case 3:
						pFarm(e3);
						break;
					case 4:
						pFarm(e4);
						break;
					case 5:
						pFarm(e5);
						break;
					case 6:
						pFarm(e6);
						break;
					case 7:
						pFarm(e7);
						break;
					case 8:
						pFarm(e8);
						break;
					case 9:
						pFarm(e9);
						break;
					case 10:
						pFarm(e10);
						break;
					case 11:
						pFarm(e11);
						break;
					case 12:
						pFarm(e12);
						break;
					default:
						printf("\nInvalid choise! Retry again.\n");
						loop = 0;
						break;
				}
				
				//Checking nested switch-case statement's default case
				if(loop==0)
					loop = 0;
				else
					loop = -1;
				break;

			default:
				printf("\nInvalid choise! Retry again.\n");
				loop = 0;
				break;
		}
		printf("\nTo continue: 1\n"
			   "Close the app: 0\n");
		printf("Action: ");
		scanf("%d",&op);
		if(op==1)
			loop = 0;
		else if(op==0)
			loop = -1;
        else{
        	printf("\nWrong choise! Application will be closed.\n\n");
        	loop = -1;
        }

	}
}

void eChecklist(event e){
	//Code
}

void pFarm(event e){
	
	unsigned int star1,star2,star3,star4,star5;
	unsigned int shard1,shard2,shard3,shard4,shard5;
	int sLeft1,sLeft2,sLeft3,sLeft4,sLeft5;
	float dBasis1,dBasis2,dBasis3,dBasis4,dBasis5;
	int days;
	
	printf("\nEvent name: %s\nReward: %s\nAverage rotation: %d\n",e.eventName,e.reward,e.rotation);
	printf("When was the event last launched?\nDays: ");
	scanf("%d",&e.lastDate);
	
	//Stars
	printf("\nHow many stars do you have on your characters?\n");
	printf("1st Character: ");
	scanf("%d",&star1);
	printf("2nd Character: ");
	scanf("%d",&star2);
	printf("3rd Character: ");
	scanf("%d",&star3);
	printf("4th Character: ");
	scanf("%d",&star4);
	printf("5th Character: ");
	scanf("%d",&star5);
	
	//Shards
	printf("\nHow many shards do you have on your characters?\n");
	printf("1st Character: ");
	scanf("%d",&shard1);
	printf("2nd Character: ");
	scanf("%d",&shard2);
	printf("3rd Character: ");
	scanf("%d",&shard3);
	printf("4th Character: ");
	scanf("%d",&shard4);
	printf("5th Character: ");
	scanf("%d",&shard5);
		
	//1st Character
	switch(star1){
		case 1:
			sLeft1 = 320;
			break;
		case 2:
			sLeft1 = 305;
			break;
		case 3:
			sLeft1 = 280;
			break;
		case 4:
			sLeft1 = 250;
			break;
		case 5:
			sLeft1 = 185;
			break;
		case 6:
			sLeft1 = 100;
			break;
		default:
			sLeft1 = 0;
			break;
	}
	sLeft1 -= shard1;
	
	//2nd Character
	switch(star2){
		case 1:
			sLeft2 = 320;
			break;
		case 2:
			sLeft2 = 305;
			break;
		case 3:
			sLeft2 = 280;
			break;
		case 4:
			sLeft2 = 250;
			break;
		case 5:
			sLeft2 = 185;
			break;
		case 6:
			sLeft2 = 100;
			break;
		default:
			sLeft2 = 0;
			break;
	}
	sLeft2 -= shard2;
	
	//3rd Character
	switch(star3){
		case 1:
			sLeft3 = 320;
			break;
		case 2:
			sLeft3 = 305;
			break;
		case 3:
			sLeft3 = 280;
			break;
		case 4:
			sLeft3 = 250;
			break;
		case 5:
			sLeft3 = 185;
			break;
		case 6:
			sLeft3 = 100;
			break;
		default:
			sLeft3 = 0;
			break;
	}
	sLeft3 -= shard3;
	
	//4th Character
	switch(star4){
		case 1:
			sLeft4 = 320;
			break;
		case 2:
			sLeft4 = 305;
			break;
		case 3:
			sLeft4 = 280;
			break;
		case 4:
			sLeft4 = 250;
			break;
		case 5:
			sLeft4 = 185;
			break;
		case 6:
			sLeft4 = 100;
			break;
		default:
			sLeft4 = 0;
			break;
	}
	sLeft4 -= shard4;
	
	//5th Character
	switch(star5){
		case 1:
			sLeft5 = 320;
			break;
		case 2:
			sLeft5 = 305;
			break;
		case 3:
			sLeft5 = 280;
			break;
		case 4:
			sLeft5 = 250;
			break;
		case 5:
			sLeft5 = 185;
			break;
		case 6:
			sLeft5 = 100;
			break;
		default:
			sLeft5 = 0;
			break;
	}
	sLeft5 -= shard5;
	
	//Time approximation
	if(e.rotation >= e.lastDate)
		days = (e.rotation - e.lastDate) + 7;
	else
		days = 0;
		
	if(days > 0)
		printf("\n\n%s event will start around %d days later. You have %d days to farm.\n",e.eventName,days-7,days);
	else
		printf("\n\n%s event has already exceeded its average rotation time. It should launch soon.\n",e.eventName);
		
	dBasis1 = (float) sLeft1 / days;
	dBasis2 = (float) sLeft2 / days;
	dBasis3 = (float) sLeft3 / days;
	dBasis4 = (float) sLeft4 / days;
	dBasis5 = (float) sLeft5 / days;
		
	printf("Your shard requirements on daily basis are:\n");
	printf("1st Character: %.2f\n"
	       "2nd Character: %.2f\n"
	       "3rd Character: %.2f\n"
	       "4th Character: %.2f\n"
	       "5th Character: %.2f\n",dBasis1,dBasis2,dBasis3,dBasis4,dBasis5);
}
