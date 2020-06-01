# include <stdio.h>
# include <stdlib.h>
# include <string.h>
void adduser () { //fn add user #option1
		char user [20];
		printf("Enter the user : \t");
		scanf("%s",user);
		char command [40]="sudo adduser\t";
		strcat(command,user);
		system (command);
	}//end 1
	void userdel () { //fn delete user #option2
			char user [20];
			printf("Enter the user :\t");
			scanf("%s",user);
			char command [40]="sudo userdel\t";
			strcat(command,user);
			system (command);
		}//end2
		void addgroup () { //fn add group #option3
				char group [20];
				printf("Enter the group : \t");
				scanf("%s",group);
				char command [40]="sudo addgroup\t";
				strcat(command,group);
				system (command);
			}//end3
			void groupdel () { //fn delete group #option4
					char group [20];
					printf("Enter the group : \t");
					scanf("%s",group);
					char command [40]="sudo groupdel\t";
					strcat(command,group);
					system (command);
				}//end4

				void changeInfo () { //fn change the user information #option5
						char user [30];
						printf("Enter the user : \t");
						scanf("%s",user);
						char command [50]="sudo chfn\t";
						strcat(command,user);
						system (command);
					}//end5
					void assigning () { //fn assign user to group group #option7
							char group [100];
								printf("Enter the group : \t");
									scanf("%s",group);
							strcat(group," ");
							char user [30];
								printf("Enter the user : \t");
									scanf("%s",user);
							strcat(group,user);
							char command [600]="sudo usermod -a -G ";
							
							strcat(command,group);
							
							system(command);

						}//end 7

//sub function for option 6
	void accountexpire(){ //#1.6
		char date [100];
			printf("Enter the date : \t");
				scanf("%s",date);
		strcat(date," ");
		char user [30];
			printf("Enter the user : \t");
				scanf("%s",user);
		strcat(date,user);
		char command [600]=" sudo chage -E \t ";
							
		strcat(command,date);
		
		system(command);
		}
			void inactivedays() {//#2.6
			char days[50]  ;
				printf("Enter the days before inactive : \t");
					scanf("%s",days);
			strcat(days," ");
			char user [30];
				printf("Enter the user : \t");
					scanf("%s",user);
			strcat(days,user);
			char command [600]="sudo chage -I \t ";
								
			strcat(command,days);
			
			system(command);
			}
				void minDays(){//#3.6
				char days[50]  ;
				printf("Enter the minimum days : \t");
					scanf("%s",days);
				strcat(days," ");
				char user [30];
					printf("Enter the user : \t");
						scanf("%s",user);
				strcat(days,user);
				char command [600]="sudo chage -m \t ";
									
				strcat(command,days);
				
				system(command);
		               	 }
					void maxdays(){//#4.6
					char days[50]  ;
					     printf("Enter maximum days : \t");
						scanf("%s",days);
					     strcat(days," ");
					char user [30];
						printf("Enter the user : \t");
							scanf("%s",user);
					strcat(days,user);
					char command [600]="sudo chage -M \t ";
										
					strcat(command,days);
					
					system(command);
					}
						void warnning(){//#5.6
						char days[50]  ;
						printf("Enter the number of days before warnning : \t");
						scanf("%s",days);
						strcat(days," ");
						char user [30];
							printf("sudo Enter the user : \t");
								scanf("%s",user);
						strcat(days,user);
						char command [600]="sudo chage -W \t ";
											
						strcat(command,days);
						
						system(command);
						}
							void showchanges(){
							char user [30];
							printf("Enter the user : \t");
							scanf("%s",user);
							char command [600]="sudo chage -l \t ";
															
							strcat(command,user);
							system(command);
							}


void changeAccoutInfo(){ // fn which change the account user information #option6
	int option ;
do{
	printf ("\n 0- exit \n 1- #E specific date on whcih account is locked\n 2- #I the number days until the password inactive\n 3- #m the minimum days between which user must change the password\n4- #M maximum number days which password is valid\n5- #W the number days before warnning user \n 6- show list");
	printf("Enter the option:\n");
	scanf("%d",&option);
	switch(option) {
			  case 1:
			    accountexpire();
			    break;
			  case 2:
			    inactivedays();
			    break;
			  case 3:
			   minDays();
			    break;
			  case 4:
			   maxdays();
			    break;
			  case 5:
			   warnning();
			    break;
			   case 6:
			   showchanges();
			    break;
			  case 0:
				exit(0);
			}

	}while (option !=0);
}//end6

int main (){
	int option ;
do{
	printf ("\n option (1) adduser \n option(2) delete user\n option (3)add group \n option (4) delete group \n option (5) Change information of specific user \n option (6) Change accout information \n option (7) assign specific user to specific group \noption (0) exit \n");
	printf("Enter the option:\n");
	scanf("%d",&option);
	switch(option) {
			  case 1:
			    adduser();
			    break;
			  case 2:
			    userdel();
			    break;
			  case 3:
			   addgroup();
			    break;
			  case 4:
			   groupdel();
			    break;
			  case 5:
			   changeInfo();
			    break;
		          case 6:
			  changeAccoutInfo();
			    break;
			  case 7:
			    assigning();
			    break;
			  case 0:
				exit(0);
			}

	}while (option !=0);
return 0;
}
