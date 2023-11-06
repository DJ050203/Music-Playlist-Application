#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
#include<time.h>
#include<conio.h>


struct node
{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* start = NULL;
struct node* current = NULL;
struct node* pointer = NULL;
void PLAYLIST()
{
    system("color 70");
    printf("\nSong 1:KGF\nSong 2:Believer\nSong 3:Bones\nSong 4:Dr Dre\nSong 5:Avengers\n");
}
void PLAYLIST_NAMES(int n)
{
    if(n==1)
    {
        printf("song 1:KGF\n");

    }
   else if(n==2)
    {
        printf("song 2:Believer\n");

    }
    else if(n==3)
    {
        printf("song 3:Bones\n");

    }
    else if(n==4)
    {
        printf("song 4:Dr Dre\n");

    }
    else if(n==5)
    {
        printf("song 5:Avengers\n");

    }
    else{

    }
    printf("\n");
}
void play_songs(int n)
{
    if(n==1)
    { char phrase[100]="NOW PLAYING K G F ";
  char charCommand[100];
  strcpy(charCommand,"espeak \"");
  strcat(charCommand,phrase);
  strcat(charCommand,"\"");

  system(charCommand);
  sleep(2);
        printf("Playing song 1:KGF\n");
        PlaySound(TEXT("kgf.wav"),NULL,SND_ASYNC);
        system("color 12");
        sleep(1);
        system("color 20");
           sleep(1);
        system("color 30");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        system("color 20");
        sleep(1);
       system("color 70");


    }
   else if(n==2)
    { char phrase[100]="NOW PLAYING  BELIEVER";
  char charCommand[100];
  strcpy(charCommand,"espeak \"");
  strcat(charCommand,phrase);
  strcat(charCommand,"\"");

  system(charCommand);
  sleep(2);
        printf("Playing song 2:Believer\n");
        PlaySound(TEXT("believer.wav"),NULL,SND_ASYNC);
        system("color 12");
        sleep(1);
        system("color 20");
           sleep(1);
        system("color 30");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        system("color 20");
        sleep(1);
        system("color 70");

    }
    else if(n==3)
    { char phrase[100]="NOW PLAYING BONES";
  char charCommand[100];
  strcpy(charCommand,"espeak \"");
  strcat(charCommand,phrase);
  strcat(charCommand,"\"");

  system(charCommand);
  sleep(2);
        printf("Playing song 3:Bones\n");
        PlaySound(TEXT("bones.wav"),NULL,SND_ASYNC);
        system("color 12");
        sleep(1);
        system("color 20");
           sleep(1);
        system("color 30");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        system("color 20");
        sleep(1);
        system("color 70");

    }
    else if(n==4)
    { char phrase[100]="NOW PLAYING DOCTOR D R E";
  char charCommand[100];
  strcpy(charCommand,"espeak \"");
  strcat(charCommand,phrase);
  strcat(charCommand,"\"");

  system(charCommand);
  sleep(2);
        printf("Playing song 4:Dr Dre\n");
        PlaySound(TEXT("dr-dre.wav"),NULL,SND_ASYNC);
        system("color 12");
        sleep(1);
        system("color 20");
           sleep(1);
        system("color 30");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        system("color 20");
        sleep(1);
        system("color 70");

    }
    else if(n==5)
    { char phrase[100]="NOW PLAYING AVENGER THEME MUSIC";
  char charCommand[100];
  strcpy(charCommand,"espeak \"");
  strcat(charCommand,phrase);
  strcat(charCommand,"\"");

  system(charCommand);
  sleep(2);
        printf("Playing song 5:Avengers\n");
        PlaySound(TEXT("avengers.wav"),NULL,SND_ASYNC);
        system("color 12");
        sleep(1);
        system("color 20");
           sleep(1);
        system("color 30");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        sleep(1);
        system("color 50");
        sleep(1);
        system("color 30");
        sleep(1);
        system("color 12");
        sleep(1);
        system("color 20");
        sleep(1);
        system("color 70");

    }
    else{

    }
    printf("\n");
}

void create_ddl()
{
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;
	PLAYLIST();
    printf("Enter Song ID to be added to the playlist from the list of songs above:\n");
	scanf("%d", &newnode->data);
	if (start == NULL)
	{
		start = newnode;
		current = newnode;
		pointer = newnode;
		printf("\nYour new MUSIC Playlist is created.\nSong has been added.");

	}
	else
	{
		current->next = newnode;
		newnode->prev = current;
		current = newnode;
		printf("\nNew Song is added at the End.\n");
	}
}

void createAtBegining()
{
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;
	PLAYLIST();
    printf("Enter Song ID to be added to the playlist from the list of songs above:\n");
	scanf("%d", &newnode->data);
	if (start == NULL)
	{
		start = newnode;
		current = newnode;
		pointer = newnode;
	}
	else
	{
		newnode->next = start;
		start->prev = newnode;
		start = newnode;
	}
}

void createAtPosition()
{
	int pos, i;
	struct node* temp = start;
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;
	printf("\nEnter Position to insert element: ");
		scanf_s("%d", &pos);
	if (start == NULL)
	{
		start = newnode;
		current = newnode;
        pointer = newnode;
	}
	else
	{
		for (i = 0; i != pos - 2;i++)
		{
			temp = temp->next;
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next->prev = newnode;
		temp->next = newnode;
		printf("Enter Song ID to be added to the playlist from the list of songs above:\n ");
		scanf("%d", &newnode->data);
		printf("\nSong is inserted at the position = %d", pos);
	}
}

void deleteAtBegining()
{
	struct node* temp = start;
	if (start == NULL)
	{
		printf("List is Empty.\n");
	}
	else
	{
		start = start->next;
		start->prev = NULL;
		printf("\nSong is deleted at the beginning.\n");
		free(temp);
	}
}
void deleteAtEnd()
{
	struct node* temp = current;
	if (start == NULL)
	{
		printf("\nList is Empty.\n");
	}
	else
	{
		current = current->prev;
		current->next = NULL;
		free(temp);
		printf("\nSong is Deleted at the End.");
	}
}

void deleteAtPosition()
{
	int pos, i;
	struct node* temp = start;
	struct node* temp1 = NULL;
	if (start == NULL)
	{
		printf("\nList is Empty.");
	}
	else
	{
		printf("\nEnter position to delete a Node: ");
		scanf_s("%d", &pos);
		for (i = 0;i <= pos-2;i++)
		{
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next = temp->next;
		temp->next->prev = temp1;
		printf("\nSong is deleted at the pos = %d", pos);
		free(temp1);
		free(temp);
	}
}

void display()
{
    if(start==NULL&&current==NULL)
        printf("No songs present in your playlist.\n");
    else{


    printf("\nSONGS PRESENT IN YOUR PLAYLIST ARE:\n");

	struct node *temp = start;
	while (temp->next != NULL)
	{
		printf("SONG %d*\n", temp->data);
		PLAYLIST_NAMES(temp->data);
		temp = temp->next;
	}
	printf("SONG %d*\n", temp->data);
	PLAYLIST_NAMES(temp->data);
    }
}
void play()
{
    printf("NOW PLAYING SONGS FROM YOUR PLAYLIST:\n");
    struct node *temp = start;
    while(temp->next!=NULL)
    {
        play_songs(temp->data);

        temp=temp->next;
    }
    play_songs(temp->data);

    temp=temp->next;
}
void play_first_only()
{
    if(start==NULL&&current==NULL)
        printf("Playlist is empty.\n");
    else
    {
        struct node *temp = start;
        play_songs(temp->data);
        sleep(14);
        pointer = temp;
    }
}
void play_last_only()
{
    if(start==NULL&&current==NULL)
        printf("Playlist is empty.\n");
    else
    {
        struct node *temp = current;
        play_songs(temp->data);
        sleep(14);
        pointer = temp;
    }
}
void play_specific(int n)
{
    struct node *temp = start;
    int i,c=0;
    if(start==NULL&&current==NULL)
        printf("Playlist is empty.\n");
    else
    {
        while(temp!=NULL)
        {
            if(n==temp->data)
            {
                c++;
                break;
            }
            temp=temp->next;
        }
    }
    if(c==1)
    {
        play_songs(n);
        sleep(15);
        pointer = temp;
    }
    else
    {
        printf("Song not present in your PLAYLIST.\n");
    }
}
void play_next()
{
    if(start==NULL&&current==NULL)
        printf("Playlist is empty.\n");
    else
    {
        if(pointer->next==NULL)
        {
            printf("No next song\n");
        }
        else
        {
            pointer=pointer->next;
            play_songs(pointer->data);
            sleep(12);
        }
    }
}
void play_previous()
{
    if(start==NULL&&current==NULL)
        printf("Playlist is empty.\n");
    else
    {
        if(pointer->prev==NULL)
        {
            printf("No previous song\n");
        }
        else
        {
            pointer=pointer->prev;
            play_songs(pointer->data);
            sleep(12);
        }

    }
}
int main()
{ char phrase[100]="WELCOME TO MUSIC PLAYLIST APPLICATION";
  char charCommand[100];
  strcpy(charCommand,"espeak -ven-us+f4 -a50 -p50 -s175 \"");
  strcat(charCommand,phrase);
  strcat(charCommand,"\"");

  system(charCommand);
  printf("LOADING...............................\n");

  sleep(3);
  system("cls");
    printf("_WELCOME TO MUSIC PLAYLIST APPLICATION_");
    time_t t = time(NULL);
    printf("\t\tCurrent date and time is : %s\n\n", ctime(&t));
	int choice,p;

	do
	{
	    printf("\n");

	printf("1. Insert the song\n");
	printf("2. Insert new song at beginning\n");
	printf("3. Insert new song at end\n");
	printf("4. Insert new song at any valid position\n");
	printf("5. Delete song at beginning\n");
	printf("6. Delete song at end\n");
	printf("7. Delete song at a position\n");
	printf("8. Display your PLAYLIST\n");
	printf("9. To start playing all songs from beginning of playlist.\n");
	printf("10. To play the first song in the playlist.\n");
	printf("11. To play last song in the playlist.\n");
	printf("12. To play a specific song in the playlist.\n");
	printf("13. To play next song in the playlist.\n");
	printf("14. To play previous song in the playlist.\n");
	printf("15. Exit\n");
	printf("\n");
		printf("Enter your choice : \n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			create_ddl();
			break;
		case 2:
			createAtBegining();
			break;
		case 3:
			create_ddl();
			break;
		case 4:
			createAtPosition();
			break;
		case 5:
			deleteAtBegining();
			break;
		case 6:
			deleteAtEnd();
			break;
		case 7:
			deleteAtPosition();
			break;
		case 8:
			display();
			break;
        case 9:
			play();
			break;
        case 10:
			play_first_only();
			break;
        case 11:
			play_last_only();
			break;
        case 12:
            printf("Enter the song ID:\t\n");
            scanf("%d",&p);
            play_specific(p);
            break;
        case 13:
            play_next();
            break;
        case 14:
            play_previous();
            break;
        case 15:
			exit(0);
			break;
		default:
			printf("Invalid choice\n");
			break;
		}
	} while (choice != 15);

	return 0;
}
