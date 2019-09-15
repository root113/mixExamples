#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

typedef struct rC{
	char *character[5];
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
void delData(event);
void counters();

int main() {

	//Events' setups
	struct e e1;
	strcpy(e1.eventName, "Emperor's Demise");
	strcpy(e1.reward, "Emperor Palpatine");
	e1.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e1.reqChars.character[0], "Ezra Bridger");
	e1.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e1.reqChars.character[1], "Chopper");
	e1.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e1.reqChars.character[2], "Garazeb \"Zeb\" Orrelios");
	e1.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e1.reqChars.character[3], "Hera Syndulla");
	e1.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e1.reqChars.character[4], "Kanan Jarrus");
	e1.reqChars.reqGear = 7;
	e1.reqChars.recGear = 9;
	e1.rotation = 72;
	
	struct e e2;
	strcpy(e2.eventName, "Grandmaster's Training");
	strcpy(e2.reward, "Grandmaster Yoda");
	e2.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e2.reqChars.character[0], "Ezra Bridger");
	e2.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e2.reqChars.character[1], "Kanan Jarrus");
	e2.reqChars.character[2] = (char *)malloc(sizeof(char*)*25);
	strcpy(e2.reqChars.character[2], "Obi-Wan Kenobi (Old Ben)");
	e2.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e2.reqChars.character[3], "Bastilla Shan");
	e2.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e2.reqChars.character[4], "Jolee Bindo");
	e2.reqChars.reqGear = 8;
	e2.reqChars.recGear = 9;
	e2.rotation = 67;
	
	struct e e3;
	strcpy(e3.eventName, "Luke Skywalker Hero's Journey");
	strcpy(e3.reward, "Commander Luke Skywalker");
	e3.reqChars.character[0] = (char *)malloc(sizeof(char*)*24);
	strcpy(e3.reqChars.character[0], "Luke Skywalker (Farmboy)");
	e3.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e3.reqChars.character[1], "Princess Leia");
	e3.reqChars.character[2] = (char *)malloc(sizeof(char*)*24);
	strcpy(e3.reqChars.character[2], "Obi-Wan Kenobi (Old Ben)");
	e3.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e3.reqChars.character[3], "R2-D2");
	e3.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e3.reqChars.character[4], "Stormtrooper Han");
	e3.reqChars.reqGear = 7;
	e3.reqChars.recGear = 9;
	e3.rotation = 102;
	
	struct e e4;
	strcpy(e4.eventName, "Legend of the Old Republic");
	strcpy(e4.reward, "Jedi Knight Revan");
	e4.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e4.reqChars.character[0], "Bastilla Shan");
	e4.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e4.reqChars.character[1], "Jolee Bindo");
	e4.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e4.reqChars.character[2], "Zaalbar");
	e4.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e4.reqChars.character[3], "Mission Vao");
	e4.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e4.reqChars.character[4], "T3-M4");
	e4.reqChars.reqGear = 7;
	e4.reqChars.recGear = 10;
	e4.rotation = 89;
	
	struct e e5;
	strcpy(e5.eventName, "Scourge of the Old Republic");
	strcpy(e5.reward, "Darth Revan");
	e5.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e5.reqChars.character[0], "Carth Onasi");
	e5.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e5.reqChars.character[1], "HK-47");
	e5.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e5.reqChars.character[2], "Juhani");
	e5.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e5.reqChars.character[3], "Canderous Ordo");
	e5.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e5.reqChars.character[4], "Bastilla Shan (Fallen)");
	e5.reqChars.reqGear = 9;
	e5.reqChars.recGear = 10;
	e5.rotation = 80;
	
	struct e e6;
	strcpy(e6.eventName, "Pieces & Plans");
	strcpy(e6.reward, "BB-8");
	e6.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e6.reqChars.character[0], "Kylo Ren");
	e6.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e6.reqChars.character[1], "Kylo Ren (Unmasked)");
	e6.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e6.reqChars.character[2], "First Order TIE Pilot");
	e6.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e6.reqChars.character[3], "First Order Executioner");
	e6.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e6.reqChars.character[4], "First Order Officer");
	e6.reqChars.reqGear = 7;
	e6.reqChars.recGear = 9;
	e6.rotation = 82;
	
	struct e e7;
	strcpy(e7.eventName, "Rey's Hero's Journey");
	strcpy(e7.reward, "Rey (Jedi Training)");
	e7.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e7.reqChars.character[0], "Finn");
	e7.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e7.reqChars.character[1], "Rey (Scavenger)");
	e7.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e7.reqChars.character[2], "BB-8");
	e7.reqChars.character[3] = (char *)malloc(sizeof(char*)*26);
	strcpy(e7.reqChars.character[3], "Veteran Smuggler Chewbacca");
	e7.reqChars.character[4] = (char *)malloc(sizeof(char*)*26);
	strcpy(e7.reqChars.character[4], "Veteran Smuggler Han Solo");
	e7.reqChars.reqGear = 7;
	e7.reqChars.recGear = 9;
	e7.rotation = 97;
	
	struct e e8;
	strcpy(e8.eventName, "Contact Protocol");
	strcpy(e8.reward, "C-3PO");
	e8.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e8.reqChars.character[0], "Chief Chirpa");
	e8.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e8.reqChars.character[1], "Ewok Elder");
	e8.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e8.reqChars.character[2], "Logray");
	e8.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e8.reqChars.character[3], "Wicket");
	e8.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e8.reqChars.character[4], "Paploo");
	e8.reqChars.reqGear = 9;
	e8.reqChars.recGear = 11;
	e8.rotation = 87;
	
	struct e e9;
	strcpy(e9.eventName, "Daring Droid");
	strcpy(e9.reward, "R2-D2");
	e9.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e9.reqChars.character[0], "Emperor Palpatine");
	e9.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e9.reqChars.character[1], "Darth Vader");
	e9.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e9.reqChars.character[2], "Grand Admiral Thrawn");
	e9.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e9.reqChars.character[3], "Grand Moff Tarkin");
	e9.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e9.reqChars.character[4], "Royal Guard");
	e9.reqChars.reqGear = 8;
	e9.reqChars.recGear = 9;
	e9.rotation = 81;
	
	struct e e10;
	strcpy(e10.eventName, "Aggressive Negotiations");
	strcpy(e10.reward, "Padme Amidala");
	e10.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e10.reqChars.character[0], "Count Dooku");
	e10.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e10.reqChars.character[1], "Nute Gunray");
	e10.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e10.reqChars.character[2], "Jango Fett");
	e10.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e10.reqChars.character[3], "Poggle The Lesser");
	e10.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e10.reqChars.character[4], "Sun Fac");
	e10.reqChars.reqGear = 10;
	e10.reqChars.recGear = 12;
	e10.rotation = 97;
	
	struct e e11;
	strcpy(e11.eventName, "Star Forge Showdown");
	strcpy(e11.reward, "Darth Malak");
	e11.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e11.reqChars.character[0], "Darth Revan");
	e11.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e11.reqChars.character[1], "Jedi Knight Revan");
	e11.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e11.reqChars.character[2], "Zaalbar");
	e11.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e11.reqChars.character[3], "Mission Vao");
	e11.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e11.reqChars.character[4], "Bastilla Shan (Fallen)");
	e11.reqChars.reqGear = 9;
	e11.reqChars.recGear = 12;
	e11.rotation = 125;
	
	struct e e12;
	strcpy(e12.eventName, "One Famous Wookiee");
	strcpy(e12.reward, "Chewbacca");
	e12.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e12.reqChars.character[0], "Bossk");
	e12.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e12.reqChars.character[1], "Boba Fett");
	e12.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e12.reqChars.character[2], "Dengar");
	e12.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e12.reqChars.character[3], "Greedo");
	e12.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e12.reqChars.character[4], "Jango Fett");
	e12.reqChars.reqGear = 11;
	e12.reqChars.recGear = 12;
	e12.rotation = 93;

	struct e e13;
	strcpy(e13.eventName, "Atrist of War");
	strcpy(e13.reward, "Grand Admiral Thrawn");
	e13.reqChars.character[0] = (char *)malloc(sizeof(char*));
	strcpy(e13.reqChars.character[0], "Ezra Bridger");
	e13.reqChars.character[1] = (char *)malloc(sizeof(char*));
	strcpy(e13.reqChars.character[1], "Hera Syndulla");
	e13.reqChars.character[2] = (char *)malloc(sizeof(char*));
	strcpy(e13.reqChars.character[2], "Kanan Jarrus");
	e13.reqChars.character[3] = (char *)malloc(sizeof(char*));
	strcpy(e13.reqChars.character[3], "Chopper");
	e13.reqChars.character[4] = (char *)malloc(sizeof(char*));
	strcpy(e13.reqChars.character[4], "Garazeb \"Zeb\" Orrelios");
	e13.reqChars.reqGear = 7;
	e13.reqChars.recGear = 9;
	e13.rotation = 80;
	
	//Operations
	unsigned int operation;
	int loop;
	int choise;
	int op;
	
	while(loop!=-1){
		printf("\n1 - Event Checklist\n2 - Panic Farm\n3 - Counter Teams\n");
		printf("\nChoose operation: ");
		scanf("%d",&operation);
	
		switch(operation){
			case 1:
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
		       		   "12 - One Famous Wookiee\n"
		       		   "13 - Atrist of War\n");
				printf("Choise: ");
				scanf("%d",&choise);

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
           	 	 	        case 13:
                			    eChecklist(e13);
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
		       		   "12 - One Famous Wookiee\n"
		       		   "13 - Atrist of War\n");
				printf("Choise: ");
				scanf("%d",&choise);

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
					case 13:
						pFarm(e13);
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

			case 3:
				counters();
				break;

			default:
				printf("\nInvalid choise! Retry again.\n");
				loop = 0;
				continue;
		}
		
		printf("\nTo continue: 1\n"
			   "Close the app: 0\n");
		printf("Action: ");
		scanf("%d",&op);
		
		if(op==1){
			printf("\n--------------------\n");
			loop = 0;
		}
		else if(op==0)
			loop = -1;
        else{
        	printf("\nWrong choise! Application will be closed.\n\n");
        	loop = -1;
        }
	}
	
	//Deletion of memory after it is used
	delData(e1);
	delData(e2);
	delData(e3);
	delData(e4);
	delData(e5);
	delData(e6);
	delData(e7);
	delData(e8);
	delData(e9);
	delData(e10);
	delData(e11);
	delData(e12);
	delData(e13);
}

void eChecklist(event e){

	printf("\nEvent: %s\n"
	       "Required Characters: %s, %s, %s, %s, %s\n"
	       "Required Gear: Gear %d\n"
	       "Recommended Gear: %d\n"
	       "Reward: %s\n",e.eventName,
		   e.reqChars.character[0],e.reqChars.character[1],
		   e.reqChars.character[2],e.reqChars.character[3],
		   e.reqChars.character[4],e.reqChars.reqGear,
		   e.reqChars.recGear,e.reward);
	printf("\n**Note that some events offer more than 5 characters to use for that event. The ones that are shown here\n"
		   "are the most beneficial and easy farmable 5 characters for the specified event.**.\n");
}

void pFarm(event e){
	
	unsigned int star1,star2,star3,star4,star5;
	unsigned int shard1,shard2,shard3,shard4,shard5;
	unsigned int sLeft1,sLeft2,sLeft3,sLeft4,sLeft5;
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

void delData(event e){

	for(int i=0; i<=4; i++)
		free(e.reqChars.character[i]);
	
}

void counters(){

	unsigned int tier;
	unsigned int team;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;

	printf("\n\n**As a rule of a thumb, higher Tier level squads counter most lower Tier level squads on offense**\n");
	
	while(count1!=1){
		
		printf("\nSelect a Tier: "
		   	   "\nTier 3 = Type 3"
		   	   "\nTier 2 = Type 2"
		   	   "\nTier 1 = Type 1"
		   	   "\nTier Meta = Type 0"
		   	   "\nTier: ");
		scanf("%d",&tier);

		if(tier==0 || tier==1 || tier==2 || tier==3){
			
			switch(tier){
				
				case 0:
					while(count2!=1){
						printf("\nTier Meta Teams List:\n"
						       "1 - Sith Empire\n"
						       "2 - Single Parent Sith Empire\n"
						       "3 - Jedi Knight Revan\n"
						       "Find out counters for team: ");
						scanf("%d",&team);

						if(team==1 || team==2 || team==3){
							
							switch(team){
								case 1:
									printf("\nENEMY\n");
									printf("LEADER    -> Darth Revan\n"
								   	       "OTHERS    -> Darth Malak --- Bastilla Shan (Fallen) --- HK-47\n"
								   	       "OPTIONALS -> Sith Trooper --- Sith Marauder --- Sith Assassin\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Jedi Knight Revan\n"
								           "OTHERS    -> Grandmaster Yoda --- Jolee Bindo --- Grand Admiral Thrawn\n"
								   	       "OPTIONALS -> Hermit Yoda --- Bastilla Shan\n"
								   	       "NOTES     -> Thrawn should be faster than enemy Bastilla Shan (Fallen)\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Padme Amidala\n"
									       "OTHERS    -> Jedi Knight Anakin --- General Kenobi --- Ahsoka Tano --- C-3PO\n"
									       "OPTIONALS -> Barriss Offee\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> IG-88\n"
									       "OTHERS    -> HK-47\n"
									       "OPTIONALS -> General Grievous --- T3-M4 --- BB-8 --- L3-37\n"
									       "NOTES     -> L3-37 can be replaced with Chopper\n");
									break;

								case 2:
									printf("\nENEMY\n");
									printf("LEADER    -> Darth Revan\n"
								   	       "OTHERS    -> Bastilla Shan (Fallen) --- HK-47\n"
								   	       "OPTIONALS -> Sith Trooper --- Sith Marauder --- Sith Assassin --- Grand Admiral Thrawn\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Jedi Knight Revan\n"
								           "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Padme Amidala\n"
									       "OTHERS    -> Jedi Knight Anakin --- General Kenobi --- Ahsoka Tano\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
									       "OTHERS    -> Han Solo --- C-3PO --- Chewbacca\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Darth Traya\n"
										   "OTHERS    -> Darth Sion --- Darth Nihilus --- Grand Admiral Thrawn\n\n");
									break;

								case 3:
									printf("\nENEMY\n");
									printf("LEADER    -> Jedi Knight Revan\n"
								   	       "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n"
								   	       "OPTIONALS -> General Kenobi --- Bastilla Shan --- Hermit Yoda --- Ezra Bridger\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Darth Traya\n"
								           "OTHERS    -> Darth Sion --- Darth Nihilus --- Grand Admiral Thrawn\n"
								   	       "NOTES     -> Be careful with Jedi Knight Revan lead speed bonus\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Padme Amidala\n"
									       "OTHERS    -> Jedi Knight Anakin --- General Kenobi --- Ahsoka Tano --- C-3PO\n"
									       "OPTIONALS -> Barriss Offee\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> General Grievous\n"
									       "OTHERS    -> B1 Battle Droid --- B2 Super Battle Droid --- Droideka\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Mother Talzin\n"
										   "OTHERS    -> Asajj Ventress --- Nightsister Zombie --- Old Daka\n"
										   "OPTIONALS -> Talia --- Nightsister Spirit\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 5\n");
									printf("LEADER    -> Jedi Training Rey\n"
										   "OTHERS    -> BB-8 --- R2-D2 --- Resistance Trooper --- Enfys Nest\n\n");
									break;

								default:
									printf("\n\nInvalid choise! Try again.\n");
									break;
							}

							team = 0;
							count2 = 1;
						}
						else{
							printf("\n\nInvalid choise! Try again.\n");
							count2 = 0;
						}
					}

					count1 = 1;
					break;

				case 1:
					while(count3!=1){
						printf("\nTier 1 Teams List:\n"
						       "1 - Sith Triumvirate\n"
						       "2 - CLS Rebels\n"
						       "3 - Galactic Republic\n"
					       	   "4 - Separatist Droids\n"
						       "Find out counters for team: ");
						scanf("%d",&team);

						if(team==1 || team==2 || team==3 || team==4){
							
							switch(team){
								case 1:
									printf("\nENEMY\n");
									printf("LEADER    -> Darth Traya\n"
								   	       "OTHERS    -> Darth Sion --- Darth Nihilus\n"
								   	       "OPTIONALS -> Any Sith --- Grand Admiral Thrawn\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
								           "OTHERS    -> Han Solo --- Chewbacca --- C-3PO\n"
								   	       "OPTIONALS -> R2-D2\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Jedi Knight Revan\n"
									       "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Jedi Training Rey\n"
									       "OTHERS    -> BB-8 --- Resistance Trooper --- R2-D2\n\n");
									break;

								case 2:
									printf("\nENEMY\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
								   	       "OTHERS    -> Han Solo --- Chewbacca\n"
								   	       "OPTIONALS -> C-3PO --- R2-D2 --- Obi-Wan Kenobi (Old Ben)\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Mother Talzin\n"
								           "OTHERS    -> Asajj Ventress --- Nightsister Zombie --- Old Daka\n"
								   	       "OPTIONALS -> Talia --- Nightsister Spirit\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Bastilla Shan\n"
									       "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n"
									       "OPTIONALS -> Any Jedi\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Darth Traya\n"
									       "OTHERS    -> Darth Sion --- Darth Nihilus\n\n");
									break;

								case 3:
									printf("\nENEMY\n");
									printf("LEADER    -> Padme Amidala\n"
								   	       "OTHERS    -> Jedi Knight Anakin --- Ahsoka Tano --- General Kenobi\n"
								   	       "OPTIONALS -> Barriss Offee --- C-3PO --- Hermit Yoda\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Darth Traya\n"
								           "OTHERS    -> Darth Sion --- Darth Nihilus\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> General Grievous\n"
									       "OTHERS    -> B1 Battle Droid --- B2 Super Battle Droid --- Droideka\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Emperor Palpatine\n"
									       "OTHERS    -> Darth Vader --- Imperial Probe Droid\n"
									       "NOTES     -> Use this team if enemy doesn't have C-3PO\n\n");
									break;

								case 4:
									printf("\nENEMY\n");
									printf("LEADER    -> General Grievous\n"
								   	       "OTHERS    -> Droideka --- B1 Battle Droid --- B2 Super Battle Droid --- IG-100 MagnaGuard\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Padme Amidala\n"
								           "OTHERS    -> Jedi Knight Anakin --- General Kenobi --- Ahsoka Tano\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Jedi Knight Revan\n"
									       "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
									       "OTHERS    -> Han Solo --- Chewbacca --- C-3PO\n"
									       "NOTES     -> Use this team only if enemy General Grievous is not G13\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Mother Talzin\n"
										   "OTHERS    -> Asajj Ventress --- Old Daka --- Nightsister Zombie\n"
										   "NOTES     -> Use this team only if enemy General Grievous is not G13\n\n");
									break;

								default:
									printf("\n\nInvalid choise!. Try again.\n");
									break;
							}

							team = 0;
							count3 = 1;
						}
						else{
							printf("\nInvalid choise! Try again.\n");
							count3 = 0;
						}
					}

					count1 = 1;
					break;

				case 2:
					while(count4!=1){
						printf("\nTier 2 Teams List:\n"
						       "1 - Bounty Hunters\n"
						       "2 - Asajj Nightsisters\n"
						       "3 - Talzin Nightsisters\n"
					   	       "4 - First Order\n"
						       "5 - Old Republic\n"
						       "6 - Empire\n"
						       "7 - Scoundrels\n"
						       "8 - Bastilla Jedi\n"
						       "9 - Geonosians\n"
						       "10 - JTR Resistance\n"
						       "11 - Imperial Troopers\n"
						       "12 - Clone Troopers\n"
						       "Find out counters for team: ");
						scanf("%d",&team);

						if(team==1 || team==2 || team==3 || team==4 || team==5 || team==6 ||
						   team==7 || team==8 || team==9 || team==10 || team==11 || team==12){
							
							switch(team){
								case 1:
									printf("\nENEMY\n");
									printf("LEADER    -> Bossk\n"
								   	       "OTHERS    -> Boba Fett --- Jango Fett --- Dengar\n"
								   	       "OPTIONALS -> Any Bounty Hunter\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Jedi Training Rey\n"
								           "OTHERS    -> BB-8 --- Resistance Trooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
									       "OTHERS    -> Han Solo --- Chewbacca\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> General Veers\n"
									       "OTHERS    -> Range Trooper --- Snowtrooper\n"
									       "OPTIONALS -> Any Imperial Trooper\n"
									       "NOTES     -> Ability block Bossk before he taunts\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Kylo Ren (Unmasked)\n"
										   "OTHERS    -> Kylo Ren --- First Order Officer --- First Order Executioner\n"
										   "NOTES     -> Stun Bossk before he taunts\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 5\n");
									printf("LEADER    -> Emperor Palpatine\n"
										   "OTHERS    -> Darth Vader\n"
										   "OPTIONALS -> Any Sith or Empire\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 6\n");
									printf("LEADER    -> Bastilla Shan\n"
										   "OTHERS    -> Any Jedi\n\n");
									break;

								case 2:
									printf("\nENEMY\n");
									printf("LEADER    -> Asajj Ventress\n"
								   	       "OTHERS    -> Mother Talzin --- Old Daka --- Nightsister Zombie --- Enfys Nest\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Emperor Palpatine\n"
								           "OTHERS    -> Darth Vader --- Grand Moff Tarkin --- Shoretrooper --- TIE Fighter Pilot\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Jango Fett\n"
									       "OTHERS    -> Bossk --- Boba Fett\n"
									       "OPTIONALS -> Any Bounty Hunter\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Bastilla Shan\n"
									       "OTHERS    -> Any Jedi\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> General Grievous\n"
										   "OTHERS    -> B1 Battle Droid --- B2 Super Battle Droid --- Droideka\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 5\n");
									printf("LEADER    -> Darth Traya\n"
										   "OTHERS    -> Darth Sion --- Darth Nihilus\n\n");
									puts("\nCOUNTER 6\n");
									printf("LEADER    -> General Veers\n"
										   "OTHERS    -> Shoretrooper --- Colonel Starck --- Death Trooper --- Range Trooper\n"
										   "NOTES     -> Be careful with Asajj lead speed bonus\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 7\n");
									printf("LEADER    -> Chief Chirpa\n"
										   "OTHERS    -> Ewok Elder\n"
										   "OPTIONALS -> Any Ewok\n"
										   "NOTES     -> Use this team only if enemy doesn't have Enfys Nest\n");
									break;

								case 3:
									printf("\nENEMY\n");
									printf("LEADER    -> Mother Talzin\n"
								   	       "OTHERS    -> Asajj Ventress --- Old Daka --- Nightsister Zombie\n"
								   	       "OPTIONALS -> Talia --- Nightsister Spirit --- Nightsister Acolyte\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Emperor Palpatine\n"
								           "OTHERS    -> Darth Vader --- Grand Moff Tarkin --- Shoretrooper --- TIE Fighter Pilot\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Bossk\n"
									       "OTHERS    -> Jango Fett --- Boba Fett --- Dengar\n"
									       "OPTIONALS -> Any Bounty Hunter\n\n");
									puts("---------------------------------------------------------------------");
									puts("\nCOUNTER 3\n");
									printf("LEADER    -> General Veers\n"
										   "OTHERS    -> Shoretrooper --- Colonel Starck --- Range Trooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Shaak Ti\n"
										   "OTHERS    -> Any Clone Troopers\n\n");
									break;

								case 4:
									printf("\nENEMY\n");
									printf("LEADER    -> Kylo Ren (Unmasked)\n"
								   	       "OTHERS    -> Kylo Ren --- First Order Executioner\n"
								   	       "OPTIONALS -> First Order Officer --- First Order TIE Pilot --- First Order Stormtrooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Chief Chirpa\n"
								           "OTHERS    -> Any Ewok\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Jedi Training Rey\n"
									       "OTHERS    -> BB-8 --- Resistance Trooper\n"
									       "OPTIONALS -> Any Resistance\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> General Veers\n"
										   "OTHERS    -> Shoretrooper --- Colonel Starck --- Range Trooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> CT-7567 \"Rex\"\n"
										   "OTHERS    -> Wampa\n"
										   "OPTIONALS -> Any Clone Trooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 5\n");
									printf("LEADER    -> Mother Talzin\n"
										   "OTHERS    -> Asajj Ventress --- Old Daka --- Nightsister Zombie\n"
										   "OPTIONALS -> Any Nightsister\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 6\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
										   "OTHERS    -> Han Solo --- Chewbacca\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 7\n");
									printf("LEADER    -> General Grievous\n"
										   "OTHERS    -> B1 Battle Droid --- B2 Super Battle Droid --- Droideka\n\n");
								    break;

								case 5:
									printf("\nENEMY\n");
									printf("LEADER    -> Carth Onasi\n"
								   	       "OTHERS    -> Zaalbar --- Mission Vao --- Canderous Ordo --- Juhani\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Bastilla Shan\n"
								           "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n"
								           "OPTIONALS -> Any Jedi\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Jedi Training Rey\n"
									       "OTHERS    -> BB-8\n"
									       "OPTIONALS -> Any Resistance\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Darth Traya\n"
										   "OTHERS    -> Darth Sion --- Darth Nihilus\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Kylo Ren (Unmasked)\n"
										   "OTHERS    -> Kylo Ren --- First Order Executioner --- First Order Officer\n"
										   "OPTIONALS -> Any First Order\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 5\n");
									printf("LEADER    -> CT-7567 \"Rex\"\n"
										   "OTHERS    -> Wampa\n"
										   "OPTIONALS -> Any Clone Trooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 6\n");
									printf("LEADER    -> Emperor Palpatine\n"
										   "OTHERS    -> Darth Vader --- Grand Moff Tarkin --- Grand Admiral Thrawn --- TIE Fighter Pilot\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 7\n");
									printf("LEADER    -> General Veers\n"
										   "OTHERS    -> Range Trooper --- Colonel Starck --- Snowtrooper\n\n");
								    break;

								case 6:
									printf("\nENEMY\n");
									printf("LEADER    -> Emperor Palpatine\n"
								   	       "OTHERS    -> Darth Vader\n"
								   	       "OPTIONALS -> Grand Admiral Thrawn --- Grand Moff Tarkin --- Imperial Probe Droid\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Bastilla Shan\n"
								           "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Jedi Training Rey\n"
									       "OTHERS    -> BB-8 --- Resistance Trooper\n"
									       "OPTIONALS -> Any Resistance\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Mother Talzin\n"
										   "OTHERS    -> Asajj Ventress --- Old Daka --- Nightsister Zombie\n"
										   "OPTIONALS -> Any Nightsister\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
										   "OTHERS    -> Han Solo --- Chewbacca\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 5\n");
									printf("LEADER    -> General Veers\n"
										   "OTHERS    -> Range Trooper --- Snowtrooper\n"
										   "OPTIONALS -> Any Imperial Trooper\n"
										   "NOTES     -> Ability block Darth Vader before he gets a turn\n\n");
									break;

								case 7:
									printf("\nENEMY\n");
									printf("LEADER    -> Qi'ra\n"
								   	       "OTHERS    -> Enfys Nest --- Vandor Chewbacca --- L3-37\n"
								   	       "OPTIONALS -> Zaalbar --- Mission Vao --- Young Han Solo --- Young Lando Calrissian\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Bastilla Shan\n"
								           "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n"
								           "OPTIONALS -> Any Jedi\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Jedi Training Rey\n"
									       "OTHERS    -> BB-8 --- Resistance Trooper\n"
									       "OPTIONALS -> Any Resistance\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Bossk\n"
										   "OTHERS    -> Jango Fett --- Dengar --- Boba Fett\n"
										   "OPTIONALS -> Any Bounty Hunter\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Emperor Palpatine\n"
										   "OTHERS    -> TIE Fighter Pilot --- Grand Moff Tarkin --- Darth Vader\n"
										   "NOTES     -> If the enemy team is faster, add Grand Admiral Thrawn\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 5\n");
									printf("LEADER    -> Darth Traya\n"
										   "OTHERS    -> Darth Sion --- Darth Nihilus\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 6\n");
									printf("LEADER    -> Kylo Ren (Unmasked)\n"
										   "OTHERS    -> Kylo Ren --- First Order Executioner\n"
										   "OPTIONALS -> Any First Order\n\n");
								    break;

								case 8:
									printf("\nENEMY\n");
									printf("LEADER    -> Bastilla Shan\n"
								   	       "OTHERS    -> Grandmaster Yoda --- Jolee Bindo\n"
								   	       "OPTIONALS -> Any Jedi\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Jedi Training Rey\n"
								           "OTHERS    -> BB-8 --- Resistance Trooper\n"
								           "OPTIONALS -> Any Resistance\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Darth Traya\n"
									       "OTHERS    -> Darth Sion --- Darth Nihilus\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Enfys Nest\n"
										   "OTHERS    -> Up to your decision\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Mother Talzin\n"
										   "OTHERS    -> Asajj Ventress --- Old Daka --- Nightsister Zombie\n"
										   "OPTIONALS -> Any Nightsister\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 5\n");
									printf("LEADER    -> Bossk\n"
										   "OTHERS    -> Jango Fett --- Dengar --- Boba Fett\n"
										   "OPTIONALS -> Any Bounty Hunter\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 6\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
										   "OTHERS    -> Han Solo --- Chewbacca\n\n");
								    break;

								case 9:
									printf("\nENEMY\n");
									printf("LEADER    -> Geonosian Brood Alpha\n"
								   	       "OTHERS    -> Sun Fac --- Poggle The Lesser --- Geonosian Soldier --- Geonosian Spy\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Darth Traya\n"
								           "OTHERS    -> Darth Sion --- Darth Nihilus\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Emperor Palpatine\n"
									       "OTHERS    -> Darth Vader\n"
									       "OPTIONALS -> Any Sith or Empire\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Chief Nebit\n"
										   "OTHERS    -> Any Jawa\n"
										   "NOTES     -> Minimum Gear 10 recommended. Avoid using against high DMG Geonosians\n\n");
									break;

								case 10:
									printf("\nENEMY\n");
									printf("LEADER    -> Jedi Training Rey\n"
								   	       "OTHERS    -> BB-8\n"
								   	       "OPTIONALS -> Resistance Trooper --- Rey (Scavenger) --- Finn --- R2-D2 --- C34 --- Amilyn Holdo\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Mother Talzin\n"
								           "OTHERS    -> Asajj Ventress --- Old Daka --- Nightsister Zombie\n"
								           "OPTIONALS -> Any Nightsister\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Darth Traya\n"
									       "OTHERS    -> Darth Sion --- Darth Nihilus\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> General Veers\n"
										   "OTHERS    -> Range Trooper --- Colonel Starck --- Snowtrooper\n"
										   "OPTIONALS -> Any Imperial Trooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Geonosian Brood Alpha\n"
										   "OTHERS    -> Remaining Geonosians\n\n");
								    break;

								case 11:
									printf("\nENEMY\n");
									printf("LEADER    -> General Veers\n"
								   	       "OTHERS    -> Colonel Starck --- Range Trooper --- Snowtrooper\n"
								   	       "OPTIONALS -> Shoretrooper --- Death Trooper --- Stormtrooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> CT-7567 \"Rex\"\n"
								           "OTHERS    -> Wampa\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Jedi Training Rey\n"
									       "OTHERS    -> BB-8 --- Resistance Trooper\n"
									       "OPTIONALS -> Any Resistance\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Commander Luke Skywalker\n"
										   "OTHERS    -> Han Solo --- Chewbacca\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Enfys Nest\n"
										   "NOTES     -> Nest needs high tenacity\n\n");
								    break;

								case 12:
									printf("\nENEMY\n");
									printf("LEADER    -> Shaak Ti\n"
								   	       "OTHERS    -> CC-2224 \"Cody\" --- CT-7567 \"Rex\" --- CT-5555 \"Fives\" --- CT-21-0408 \"Echo\"\n"
								   	       "NOTES     -> Cody can be replaced with Clone Sergeant - Phase 1\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Enfys Nest\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Emperor Palpatine\n"
									       "OTHERS    -> Darth Vader\n"
									       "OPTIONALS -> Any Sith or Empire\n\n");
								    break;

								default:
									printf("\n\nInvalid choise! Try again.\n");
							}

							team = 0;
							count4 = 1;
						}
						else{
							printf("\nInvalid choise! Try again.\n");
							count4 = 0;
						}
					}

					count1 = 1;
					break;

				case 3:
					while(count5!=1){
						printf("\nTier 3 Teams List:\n"
						       "1 - Ewoks\n"
						       "2 - Phoenix\n"
						       "3 - Rogue One\n"
						       "Find out counters for team: ");
						scanf("%d",&team);

						if(team==1 || team==2 || team==3){
							
							switch(team){
								case 1:
									printf("\nENEMY\n");
									printf("LEADER    -> Chief Chirpa\n"
								   	       "OTHERS    -> Ewok Elder --- Logray --- Wicket --- Paploo\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Enfys Nest\n"
								           "NOTES     -> Nest needs tenacity to prevent Logray's daze. Add Qi'ra lead for extra firepower\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Kylo Ren (Unmasked)\n"
									       "OTHERS    -> Kylo Ren --- First Order Executioner\n"
									       "OPTIONALS -> Any First Order\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> General Veers\n"
										   "OTHERS    -> Range Trooper --- Colonel Starck --- Snowtrooper\n"
										   "OPTIONALS -> Any Imperial Trooper\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Emperor Palpatine\n"
										   "OTHERS    -> Darth Vader\n"
										   "OPTIONALS -> Any Sith or Empire\n\n");
								    break;

								case 2:
									printf("\nENEMY\n");
									printf("LEADER    -> Hera Syndulla\n"
								   	       "OTHERS    -> Kanan Jarrus --- Garazeb \"Zeb\" Orrelios\n"
								   	       "OPTIONALS -> Sabine Wren --- Chopper --- Ezra Bridger\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> Wampa\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Enfys Nest\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> Chief Chirpa\n"
										   "OTHERS    -> Any Ewok\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 4\n");
									printf("LEADER    -> Emperor Palpatine\n"
										   "OTHERS    -> Darth Vader\n"
										   "OPTIONALS -> Any Sith or Empire\n\n");
								    break;

								case 3:
									printf("\nENEMY\n");
									printf("LEADER    -> Jyn Erso\n"
								   	       "OTHERS    -> Cassian Andor --- K-2SO\n"
								   	       "OPTIONALS -> Baze Malbus --- Chirrut Imwe --- Scarif Rebel Pathfinder --- Bistan --- Pao\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 1\n");
									printf("LEADER    -> CT-7567 \"Rex\"\n"
								           "OTHERS    -> Wampa\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 2\n");
									printf("LEADER    -> Enfys Nest\n"
									       "NOTES     -> Nest needs high tenacity\n\n");
									puts("---------------------------------------------------------------------");
									printf("\nCOUNTER 3\n");
									printf("LEADER    -> General Veers\n"
										   "OTHERS    -> Range Trooper --- Snowtrooper\n"
										   "OPTIONALS -> Any Imperial Trooper\n"
										   "NOTES     -> Use speed mods\n\n");
								    break;

								default:
									printf("\n\nInvalid choise! Try again.\n");
							}

							team = 0;
							count5 = 1;
						}
						else{
							printf("\nInvalid choise! Try again.\n");
							count5 = 0;
						}
					}

					count1 = 1;
					break;

				default:
					printf("\nInvalid choise! Try again.\n");
					count1 = 0;
					break;
			}
		}
		else{
			printf("\nInvalid choise! Try again.\n");
			count1 = 0;
		}
	}
}