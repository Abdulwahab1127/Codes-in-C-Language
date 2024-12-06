#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "IMRAN KHAN (PTI)"
#define CANDIDATE2 "NAWAZ SHARIF(PMLN)"
#define CANDIDATE3 "BILAWAL BHUTTO(PPP)"
#define CANDIDATE4 "FAZAL UR REHMAN(JUI)"

   int CANDIDATE1Count=0;
	int CANDIDATE2Count=0;
	int CANDIDATE3Count=0;
	int CANDIDATE4Count=0;
	int spoiledvotesCount=0;

void castVote()
{
	int choice;
printf("\n\n ----- Please Choose Your Candidate -----\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "None of These");

printf("\n\n Input Your Choice (1 - 4) : ");
scanf("%d",&choice);


switch(choice)
{
	case 1:
	CANDIDATE1Count++;
	break;
	case 2:
	CANDIDATE2Count++;
	break;
	case 3:
	CANDIDATE3Count++;
	break;
	case 4:
	CANDIDATE4Count++;
	break;
	case 5:
	spoiledvotesCount++;
	break;
	default:
		printf("Wrong Choice!! Try Again");
}
    printf("Thanks for Voting!");
}
void votesCount()
{
	printf("\n\n ----- Voting Statics -----");
printf("\n %s - %d ", CANDIDATE1, CANDIDATE1Count);
printf("\n %s - %d ", CANDIDATE2, CANDIDATE2Count);
printf("\n %s - %d ", CANDIDATE3, CANDIDATE3Count);
printf("\n %s - %d ", CANDIDATE4, CANDIDATE4Count);
printf("\n %s - %d ", "Spoiled Votes", spoiledvotesCount);
}
void getLeadingCandidate()
{
    printf("\n\n  ----- Leading Candiate -----\n\n");
    if(CANDIDATE1Count>CANDIDATE2Count && CANDIDATE1Count>CANDIDATE3Count && CANDIDATE1Count > CANDIDATE4Count)
    printf("[%s]",CANDIDATE1);
    else if (CANDIDATE2Count>CANDIDATE3Count && CANDIDATE2Count>CANDIDATE4Count && CANDIDATE2Count >CANDIDATE1Count)
    printf("[%s]",CANDIDATE2);
    else if(CANDIDATE3Count>CANDIDATE4Count && CANDIDATE3Count>CANDIDATE2Count && CANDIDATE3Count >CANDIDATE1Count)
    printf("[%s]",CANDIDATE3);
    else if(CANDIDATE4Count>CANDIDATE1Count && CANDIDATE4Count>CANDIDATE2Count && CANDIDATE4Count >CANDIDATE3Count)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win Situation----");
}
int main()
{
	int i;
	int choice;
	int num;
	printf("\n\n ----- Welcome to Voting System 2022 -----");
    printf("\n\n 1. Cast the Vote");
    printf("\n 0. To conclude voting");

    printf("\n\n Please enter your choice : ");
    scanf("%d", &choice);

 {
 	switch(choice)
    {
	case 1:
		castVote();
      break;
	case 0:
		printf("\n 2. Find Vote Count");
        printf("\n 3. Find leading Candidate");
        printf("\nEnter your choice:\n");
        scanf("%d",&num);
        break;
    default:
		printf("\n Error: Invalid Choice");
    }
    if(num == 2)
    {
    	votesCount();
    }
    else if(num == 3)
    {
    	getLeadingCandidate();
    }
    else{
		printf("Invalid Choice!!");
    }


 }
}
