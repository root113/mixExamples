#include <stdio.h>

struct clientData
{
	unsigned int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
};

unsigned int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);

int main (void) {
	FILE *cfPtr;
	unsigned int choice;
	
	if ((cfPtr = fopen("credit.dat","rb+"))==NULL) {
		puts("File could not be opened.\n");
	}
	else {
		while ((choice = enterChoice()) != 5) {
			switch (choice) {
				case 1:
					textFile(cfPtr);
					break;
				case 2:
					updateRecord(cfPtr);
					break;
				case 3:
					newRecord(cfPtr);
					break;
				case 4:
					deleteRecord(cfPtr);
					break;
				default:
					puts("Incorrect choice.\n");
					break;
			}
		}
		fclose(cfPtr);
	}
}

void textFile(FILE *readPtr) {
	FILE *writePtr;
	int result;
	
	struct clientData client = {0,"","",0.0};
	
	if ((writePtr = fopen("accounts.txt","w"))==NULL) {
		puts("File could not be opened.\n");
	}
	else {
		rewind(readPtr);
		fprintf(writePtr,"%-6s%-16s%-11s%10s\n","Account","Lastname","Firstname","Balance");
		
		while (!feof(readPtr)) {
			result = fread(&client, sizeof(struct clientData),1,readPtr);
			
			if (result != 0 && client.acctNum != 0) {
				fprintf(writePtr,"%-6d%-16s%-11s%10.2f\n",client.acctNum,client.lastName,client.firstName,client.balance);
			}
		}
		fclose(writePtr);
	}
}

void updateRecord(FILE *fPtr) {
	unsigned int account;
	double transaction;
	
	struct clientData client = {0,"","",0.0};
	
	printf("%s","Enter account to update (1-100): ");
	scanf("%d",&account);
	
	fseek(fPtr,(account -1) * sizeof(struct clientData),SEEK_SET);
	
	fread(&client, sizeof(struct clientData),1,fPtr);
	
	if (client.acctNum == 0) {
		printf("Account #%d does not contain any data.\n",account);
	}
	else {
		printf("%-6d%-16s%-11s%10.2f\n\n",client.acctNum,client.lastName,client.firstName,client.balance);
		
		printf("%s","Enter charge (+) or payment (-): ");
		scanf("%lf",&transaction);
		
		client.balance += transaction;
		
		printf("%-6d%-16s%-11s%10.2f\n",client.acctNum,client.lastName,client.firstName,client.balance);
		
		fseek(fPtr,(account-1) * sizeof(struct clientData),SEEK_SET);
		fwrite(&client, sizeof(struct clientData),1,fPtr);
	}
}

void deleteRecord(FILE *fPtr) {
	struct clientData client;
	struct clientData blankClient = {0,"","",0};
	
	unsigned int accountNum;
	
	printf("%s","Enter account number to delete (1-100): ");
	scanf("%d",&accountNum);
	
	fseek(fPtr,(accountNum-1) * sizeof(struct clientData),SEEK_SET);
	fread(&client, sizeof(struct clientData),1,fPtr);
	
	if (client.acctNum == 0) {
		printf("Account %d does not exist.\n",accountNum);
	}
	else {
		fseek(fPtr,(accountNum-1) * sizeof(struct clientData),SEEK_SET);
		fwrite(&blankClient,sizeof(struct clientData),1,fPtr);
	}
}

void newRecord(FILE *fPtr) {
	struct clientData client = {0,"","",0.0};
	
	unsigned int accountNum;
	
	printf("%s","Enter new account number (1-100): ");
	scanf("%d",&accountNum);
	
	fseek(fPtr,(accountNum-1) * sizeof(struct clientData),SEEK_SET);
	fread(&client,sizeof(struct clientData),1,fPtr);
	
	if (client.acctNum != 0) {
		printf("Account #%d already contains information.\n",client.acctNum);
	}
	else {
		printf("%s","Enter lastname, firstname, balance\n? ");
		scanf("%14s%9s%lf",&client.lastName,&client.firstName,&client.balance);
		
		client.acctNum =  accountNum;
		
		fseek(fPtr,(client.acctNum-1) * sizeof(struct clientData),SEEK_SET);
		fwrite(&client,sizeof(struct clientData),1,fPtr);
	}
}

unsigned int enterChoice(void) {
	unsigned int menuChoice;
	
	printf("%s","\nEnter your choice\n"
			"1 - store a formatted text file of accounts called\n"
			"	 \"accounts.txt\" for printing\n"
			"2 - update an account\n"
			"3 - add a new account\n"
			"4 - delete an account\n"
			"5 - end program\n? ");
	scanf("%u",&menuChoice);
	return menuChoice;
}
