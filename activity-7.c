#include <stdio.h>
#include <stdlib.h>

void myHome();
void myActivity1();
void myActivity2();
void myActivity3();
void myActivity4();
void myActivity5();
void myActivity6();
void chance();
void clrscrn();

int main() {
	
	myHome();
	
	return 0;
}


void myHome() {
	
	char choices;
	
	printf ("\n\tMy Activities Compilations\n\n");
	printf("\tProperty of: Jeremy Malana\n\n");
    printf("\ta.) Activity 1\n");
    printf("\tb.) Activity 2\n");
    printf("\tc.) Activity 3\n");
    printf("\td.) Activity 4\n");
    printf("\te.) Activity 5\n");
    printf("\tf.) Activity 6\n");
    printf("\t0.) Exit\n");
    printf("\n\tEnter your choice: \t");
    scanf("%c",&choices);
    
    clrscrn();
    
    switch(choices){
        case 'a':
        case 'A':
        myActivity1();
        break;
        case 'b':
        case 'B':
        myActivity2();
        break;
        case 'c':
        case 'C':
        myActivity3();
        break;
        case 'd':
        case 'D':
        myActivity4();
        break;
        case 'e':
        case 'E':
        myActivity5();
        break;
        case 'f':
        case 'F':
        myActivity6();
        break;
        case '0':
        printf("\n\tThank you so mcuh!!");
        exit(0);
        break;
        default:
        printf("\n\tInvalid Choice!! Please Try again!!");
        myHome();
    }
    chance();
}

void myActivity1() {
	
	char fName[100];
    char mName[100];
    char lName[100];
    char mmWor[25], dd[5];
    int  yyyy;
    char fbAcc[100];
    char email[100];
    int contact;
    char prog[100];
    int sec;
    
    printf("\n\n\t\tUser Display Information\t\t\n\n");
    
    printf("\tFirstname:\tJeremy\n");
    printf("\tMiddlename:\tLerio\n");
    printf("\tLastname:\tMalana\n");
    printf("\tBirthdate \t'mm/dd/yyyy'\n");
    printf("\tBirthdate:\tAug. 06, 2006\n");
    printf("\tFacebook Accnt:\tjrmy\n");
    printf("\tEmail:\t\tjrmy@gmail.com\n");
    printf("\tContact:\t09085744362\n");
    printf("\tProgram:\tBSIT\n");
    printf("\tSection:\t1106\n");
    
}

void myActivity2() {

	char firstName[20];
	char middleName[20];
	char lastName[20];
	char birthdate[50] = "'mm/dd/yyyy'";
	char mm[20], dd[20];
	int yyyy;
	int age;
	char facebookAcct[20];
	char email[50];
	char contactNum[20];
	char program[20];
	int section;
	
	printf("\n\n\t\tDisplay User Information\n");
	
	printf("\n\tFirst name: \t");
	scanf("%s",&firstName);
	
	printf("\n\tMidlle name: \t");
	scanf("%s",&middleName);
	
	printf("\n\tLast name \t");
	scanf("%s",&lastName);
	
	printf("\n\tBirthdate: \t%s",birthdate);
	
	printf("\n\tBirthdate: \t");
	scanf("%s%s%d",&mm,&dd,&yyyy);
	
	printf("\n\tFacebook Acct: \t");
	scanf("%s",&facebookAcct);
	
	printf("\n\tEmail: \t\t");
	scanf("%s",&email);
	
	printf("\n\tContact: \t");
	scanf("%s",&contactNum);
	
	printf("\n\tProgram: \t");
	scanf("%s",&program);
	
	printf("\n\tSection: \t");
	scanf("%d",&section);
	
	age = 2025 - yyyy;
	
	printf("\n\n\tYour Fullname: \t\t%s %s %s", firstName,middleName,lastName);
	printf("\n\tYour Birthdate: \t%s %s %d", mm, dd, yyyy);
	printf("\n\tYour Age: \t\t%d",age);
	printf("\n\tYour Facebook Acct: \t%s",facebookAcct);
	printf("\n\tYour Email: \t\t%s",email);
	printf("\n\tYour Contact: \t\t%s", contactNum);
	printf("\n\tYour Program: \t\t%s",program);
	printf("\n\tYour Section: \t\t%d",section);		
}

void myActivity3() {
	
	int score = 0;
    char answer;
    char name[50];

    printf("\n\n\t\tWelcome To C Quiz!!");
    printf("\n\t\tHistory of Philippines\n");

    printf("\n\tEnter your name: \t");
    scanf("%s",&name);

    printf("\n\t1. Sino ang kinikilalang pambansang bayani ng Pilipinas?");
    printf("\n\t\tA. Emilio Aguinaldo");
    printf("\n\t\tB. Andres Bonifacio");
    printf("\n\t\tC. Jose Rizal");
    printf("\n\n\tYour answer: \t");
    scanf(" %c",&answer);

    if (answer == 'C' || answer == 'c') {
        printf("\n\tYou are correct!\n");
        score++;
    } else {
        printf("\n\tThe correct answer is C\n");
    }
    
    printf("\n\t2. Kailan idineklara ang Kalayaan ng Pilipinas mula sa Espanya?");
    printf("\n\t\tA. Hunyo 12, 1898");
    printf("\n\t\tB. Agosto 30, 1896");
    printf("\n\t\tC. Hulyo 4, 1946");
    printf("\n\n\tYour answer: \t");
    scanf(" %c",&answer);

    if (answer == 'A' || answer == 'a') {
        printf("\n\tYou are correct!\n");
        score++;
    } else {
        printf("\n\tThe correct answer is A\n");
    }

    printf("\n\t3. Sino ang unang Pangulo ng Pilipinas?");
    printf("\n\t\tA. Manuel L. Quezon");
    printf("\n\t\tB. Emilio Aguinaldo");
    printf("\n\t\tC. Sergio Osmena");
    printf("\n\n\tYour answer: \t");
    scanf(" %c",&answer);

    if (answer == 'B' || answer == 'b') {
        printf("\n\tYou are correct!\n");
        score++;
    } else {
        printf("\n\tThe correct answer is B\n");
    }

    printf("\n\t4. Anong organisasyon ang itinatag ni Andres Bonifacio upang ipaglaban ang kalayaan?");
    printf("\n\t\tA. La Liga Filipina");
    printf("\n\t\tB. Katipunan (K.K.K.)");
    printf("\n\t\tC. Propaganda Movement");
    printf("\n\n\tYour answer: \t");
    scanf(" %c",&answer);

    if (answer == 'B' || answer == 'b') {
        printf("\n\tYou are correct!\n");
        score++;
    } else {
        printf("\n\tThe correct answer is B\n");
    }

    printf("\n\t5. Saan pinatapon si Jose Rizal bago siya binaril sa Bagumbayan?");
    printf("\n\t\tA. Cebu");
    printf("\n\t\tB. Dapitan");
    printf("\n\t\tC. Cavite");
    printf("\n\n\tYour answer: \t");
    scanf(" %c",&answer);

    if (answer == 'B' || answer == 'b') {
        printf("\n\tYou are correct!\n");
        score++;
    } else {
        printf("\n\tThe correct answer is B\n");
    }

    printf("\n\tYour name: \t%s",name);
    printf("\n\tYour score: \t%d",score);

    if (score > 5) {
        printf("\n\n\t\tPASSED!");
    } else {
        printf("\n\n\t\tFAILED!");
    }
}

void myActivity4() {
	    
	char ans;
    int score = 0;
    char name[50];

    printf("\n\n\t\tWelcome To C-Quiz");
    printf("\n\t\tAraling Panlipunan\n");

    printf("\n\t\tEnter Your name: \t");
    gets(name);

    printf("\n\t\t1. Sino ang kinikilalang pambansang bayani ng Pilipinas?");
    printf("\n\t\tA. Emilio Aguinaldo");
    printf("\n\t\tB. Andres Bonifacio");
    printf("\n\t\tC. Jose Rizal");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'C') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is C\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t2. Kailan idineklara ang Kalayaan ng Pilipinas mula sa Espanya?");
    printf("\n\t\tA. Hunyo 12, 1898");
    printf("\n\t\tB. Agosto 30, 1896");
    printf("\n\t\tC. Hulyo 4, 1946");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'A') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is A\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t3. Sino ang unang Pangulo ng Pilipinas?");
    printf("\n\t\tA. Manuel L. Quezon");
    printf("\n\t\tB. Emilio Aguinaldo");
    printf("\n\t\tC. Sergio Osmena");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t4. Anong organisasyon ang itinatag ni Andres Bonifacio upang ipaglaban ang kalayaan?");
    printf("\n\t\tA. La Liga Filipina");
    printf("\n\t\tB. Katipunan (K.K.K.)");
    printf("\n\t\tC. Propaganda Movement");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t5. Saan pinatapon si Jose Rizal bago siya binaril sa Bagumbayan?");
    printf("\n\t\tA. Cebu");
    printf("\n\t\tB. Dapitan");
    printf("\n\t\tC. Cavite");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    if (score > 3) {
        printf("\n\t\tYour name: \t%s",name);
        printf("\n\t\tYour score: \t%d",score);
        printf("\n\t\tRemarks: \tPASSED!");
    } else {
        printf("\n\t\tYour name: \t%s",name);
        printf("\n\t\tYour score: \t%d",score);
        printf("\n\t\tRemarks: FAILED!");
    }
}

void myActivity5() {
	
	char ans;
    int score = 0;
    char name[50];
    float average;

    printf("\n\n\t\tWelcome To C-Quiz");
    printf("\n\t\tAraling Panlipunan\n");

    printf("\n\t\tEnter Your name: \t");
    gets(name);

    printf("\n\t\t1. Sino ang kinikilalang pambansang bayani ng Pilipinas?");
    printf("\n\t\tA. Emilio Aguinaldo");
    printf("\n\t\tB. Andres Bonifacio");
    printf("\n\t\tC. Jose Rizal");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'C') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is C\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t2. Kailan idineklara ang Kalayaan ng Pilipinas mula sa Espanya?");
    printf("\n\t\tA. Hunyo 12, 1898");
    printf("\n\t\tB. Agosto 30, 1896");
    printf("\n\t\tC. Hulyo 4, 1946");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'A') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is A\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t3. Sino ang unang Pangulo ng Pilipinas?");
    printf("\n\t\tA. Manuel L. Quezon");
    printf("\n\t\tB. Emilio Aguinaldo");
    printf("\n\t\tC. Sergio Osmena");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t4. Anong organisasyon ang itinatag ni Andres Bonifacio upang ipaglaban ang kalayaan?");
    printf("\n\t\tA. La Liga Filipina");
    printf("\n\t\tB. Katipunan (K.K.K.)");
    printf("\n\t\tC. Propaganda Movement");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t5. Saan pinatapon si Jose Rizal bago siya binaril sa Bagumbayan?");
    printf("\n\t\tA. Cebu");
    printf("\n\t\tB. Dapitan");
    printf("\n\t\tC. Cavite");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    average = ((float)score /5) * 50 + 50;

    printf("\n\t\t%s Your Score is %d", name, score);
    printf("\n\t\tYour average is %.2f", average);
    
    if (average >= 91 && average <= 100) {
        printf("\n\n\t\tExcellent");
    } else if (average >= 81 && average <= 90) {
        printf("\n\n\t\tSatisfactory");
    } else if (average >= 71 && average <= 80) {
        printf("\n\n\t\tVery Good");
    } else if (average >= 61 && average <= 70) {
        printf("\n\n\t\tGood");
    } else if (average >= 51 && average <= 60) {
        printf("\n\n\t\tFair");
    } else {
        printf("\n\n\t\tFailed");
    }

    printf("\n\n\t\tQuiz v3");
}

void myActivity6() {
	int a = 1101;
    int b = 1100;


    printf("\n\tOdd \t\t Even \n");

    for(a; a <= 1118; a+=2) {
        printf("\tBSIT %d \t BSIT %d\n",a,b+=2);
    }
    
    int i;
    for(i = 1101; i <= 1108; i++) {
        printf("\n\tBSIT %d",i);
    }
    
    int j;
    int k;
	
	printf("\n");
	
    for (j = 0; j <= 10; j++) {
        for(k = 1; k <= 10; k++) {
            printf("%d x %d = %d\t",j,k,j*k);
        }
        printf("\n");
    }
}

void chance() {
	
	char choices;
    printf("\n\tDo you want to continue? press n/y \t");
    scanf(" %c",&choices);
    
    clrscrn();
    
    if(choices == 'y'){
        myHome();
    
    } else {
    	printf("\n\tThank for using me!!");
    	exit(0); 
    }
}

void clrscrn() {
	system("cls");
}
