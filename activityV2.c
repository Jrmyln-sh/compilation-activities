#include <stdio.h>
#include <stdlib.h>

void mainMenu();
void varActivity1();
void varActivity2();
void varActivity3();
void varActivity4();
void varActivity5();
void varActivity6();
void varRept();
void varClear();
void type1();
void type2();
void type3();
void chcAct6();

int lastActivity = 0;
char typeAct = '0';

int main() {
  mainMenu();
}

void mainMenu() {

    char choice;
    printf("\n\t==========================================\n");
    printf("\n\tCompilation Of Activities\n");
    printf("\n\t1.) Activity 1");
    printf("\n\t2.) Activity 2");
    printf("\n\t3.) Activity 3");
    printf("\n\t4.) Activity 4");
    printf("\n\t5.) Activity 5");
    printf("\n\t6.) Activity 6");
    printf("\n\t0.) Exit");
    printf("\n\n\t==========================================\n");
    printf("\n\tEnter your choice: \t");
    scanf(" %c",&choice);

    varClear();

    switch (choice) {
    case '1':
        varActivity1();
        varRept();
        break;

    case '2':
        varActivity2();
        varRept();
        break;

    case '3':
        varActivity3();
        varRept();
        break;
    
    case '4':
        varActivity4();
        varRept();
        break;

    case '5':
        varActivity5();
        varRept();
        break;
    
    case '6':
        varActivity6();
        chcAct6();
        break;

    case '0':
        printf("\n\tThank you for using the program!!!");
        exit(0);
        break;

    default:
        printf("\n\tInvalid Choices Please Try Again!!");
        mainMenu();
    }
}

void varActivity1() {
    lastActivity = 1;
    
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

void varActivity2() {
   lastActivity = 2;

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

void varActivity3() {
    lastActivity = 3;

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

void varActivity4() {
   lastActivity = 4;

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

void varActivity5() {
    lastActivity = 56666666666;

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

void varActivity6() {
  //  lastActivity = 6;

   char choice;
   printf("\n\t==========================================\n");
   printf("\n\tChoose The Type of Activity\n");
   printf("\n\t1.) Type 1");
   printf("\n\t2.) TYpe 2");
   printf("\n\t3.) Type 3");
   printf("\n\t0.) Exit this activity\n");
   printf("\n\t==========================================\n");
   printf("\n\tEnter your choice: \t");
   scanf(" %c",&choice);

   varClear();

   switch (choice) {
    case '1':
    typeAct = '1';
    type1();
    break;

    case '2':
    typeAct = '2';
    type2();
    break;

    case '3':
    typeAct = '3';
    type3();
    break;
    
    case '0':
    mainMenu();
    break;
    
    default:
    printf("\n\tInvalid Choices, Please Try Again!!");
    varActivity6();
    break;
   }
   chcAct6();
}

void type1() {
    int i;
    for(i = 1101; i <= 1108; i++) {
        printf("\n\tBSIT %d",i);
    }
}

void type2() {
    int a = 1101;
    int b = 1100;
    printf("\n\tOdd \t\t Even \n");
    for (a; a <= 1118; a+=2) {
         printf("\tBSIT %d \t BSIT %d\n",a,b+=2);
    }
}

void type3() {
    int j, k;
    for (j = 0; j <= 10; j++) {
        for(k = 1; k <= 10; k++) {
            printf("%d x %d = %d\t",j,k,j*k);
        }
        printf("\n");
    }
}

void varRept() {
  char chance;

  printf("\n\t==========================================\n");
  printf("\n\t1.) Try again");
  printf("\n\t2.) Try other activity");
  printf("\n\t0.) Exit");
  printf("\n\n\t==========================================\n");
  printf("\n\tEnter your choice: \t");
  scanf(" %c",&chance);

  varClear();

  switch (chance) {
  case '1':
    switch(lastActivity) {
      case 1:
      varActivity1();
      varRept();
      break;

      case 2:
      varActivity2();
      varRept();
      break;

      case 3:
      varActivity3();
      varRept();
      break;

      case 4:
      varActivity4();
      varRept();
      break;

      case 5:
      varActivity5();
      varRept();
      break;

      // case 6:
      // varActivity6();
      // chcAct6();
      // break;
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    break;

  case '2':
    mainMenu();
    break;

  case '0':
    printf("\n\tThank you for using the program!!!");
    exit(0);
    break;
  
  default:
    printf("\n\tInvalid Choices, Please Try Again!!");
    varRept();
    break;
  }
}

void varClear() {
  system("clear");
}

void chcAct6() {
  
  char chance;
  printf("\n\t==========================================\n");
  printf("\n\t1.) Try again");
  printf("\n\t2.) Try other Type");
  printf("\n\t3.) Try other Activity");
  printf("\n\t0.) Exit");
  printf("\n\n\t==========================================\n");
  printf("\n\tEnter your choice: \t");
  scanf(" %c",&chance);

  varClear();

  switch (chance) {
    case '1':
    switch (typeAct) {
      case '1':
      type1();
      break;

      case '2':
      type2();
      break;

      case '3':
      type3();
      break;
    }
    chcAct6();
    break;

    case '2':
    varActivity6();
    break;

    case '3':
    mainMenu();
    break;

    case '0':
    printf("\n\tThank you for using the program!!!");
    exit(0);
    break;
  
    default:
    printf("\n\tInvalid Choices, Please Try Again!!");
    chcAct6();
    break;
  }
}

