#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
struct Steve{//CREATES USER INVENTORY
	int **inventory;
};
struct Steve user;
int wood_time = 5;//DEFINES TIMES FOR DIFFERENT ITEM TYPES
int stone_time = 4;
int iron_time = 3;
int diamond_time = 2;
int fist_time = 6;
int wood_dur = 15;//DEFINES DURABILITIES FOR ITEM TYPES
int stone_dur = 25;
int iron_dur = 35;
int diamond_dur = 50;
void memory_loc(void){//ALLOCATES MEMORY FOR INVENTORY
	int i;
	user.inventory = (int**)malloc(sizeof(int*) * 36);
	for(i = 0; i < 36; i++){
		user.inventory[i] = (int*)malloc(sizeof(int) * 3);
	}
}
void free_loc(void){//FREES THE ALLOCATED MEMORY
	int i;
	free(user.inventory);
	for(i = 0; i < 36; i++){
		free(user.inventory[i]);
	}
}
// action functions
void skull(){
	char skull[]="                                                                                                                           ";
char skull1[]="	                      .,od88888888888bo,.                                                                        ";
char skull2[]="                           .d88888888888888888888888b.                                                                    ";
char skull3[]="                         .d88888888888888888888888888888b.                                                                ";
char skull4[]="                       .d888888888888888888888888888888888b.                                                              ";
char skull5[]="                     .d8888888888888888888888888888888888888b.                                                            ";
char skull6[]="                    d88888888888888888888888888888888888888888b                                                           ";
char skull7[]="                   d8888888888888888888888888888888888888888888b                                                          ";
char skull8[]="                  d888888888888888888888888888888888888888888888                                                          ";
char skull9[]="                  8888888888888888888888888888888888888888888888                                                          ";
char skull10[]="                  8888888888888888888888888888888888888888888888                                                          ";
char skull31[]="                  8888888888888888888888888888888888888888888888                                                          ";
char skull32[]="                  Y88888888888888888888888888888888888888888888P                                                          ";
char skull33[]="                  \"8888888888P'   \"Y8888888888P\"    \"Y888888888\"                                                     ";
char skull35[]="                   88888888P        Y88888888P        Y88888888                                                           ";
char skull36[]="                   Y8888888          ]888888P          8888888P                                                           ";
char skull37[]="                    Y888888          d888888b          888888P                                                            ";
char skull38[]="                     Y88888b        d88888888b        d88888P                                                             ";
char skull39[]="                      Y888888b.   .d88888888888b.   .d888888                                                              ";
char skull30[]="                       Y8888888888888888P Y8888888888888888                                                               ";
char skull311[]="                        888888888888888P   Y88888888888888                                                                ";
char skull312[]="                        \"8888888888888[     ]888888888888\"                                                              ";
char skull313[]="                           \"Y888888888888888888888888P\"                                                                 ";
char skull314[]="                                \"Y88888888888888P\"                                                                      ";
char skull315[]="                             888b  Y8888888888P  d888                                                                     ";
char skull316[]="                             \"888b              d888\"                                                                   ";
char skull317[]="                              Y888bo.        .od888P                                                                      ";
char skull318[]="                               Y888888888888888888P                                                                       ";
char skull319[]="                                \"Y88888888888888P\"                                                                      ";
char skull3110[]="                                  \"Y8888888888P\"                                                                        ";
char skull3111[]="          d8888bo.                  \"Y888888P\"                  .od888b                                                 ";
char skull3112[]="         888888888bo.                  \"\"\"\"                  .od8888888                                               ";
char skull3113[]="         \"88888888888b.                                   .od888888888[                                                  ";
char skull3114[]="         d8888888888888bo.                              .od888888888888                                                   ";
char skull3115[]="       d88888888888888888888bo.                     .od8888888888888888b                                                  ";
char skull3116[]="       ]888888888888888888888888bo.            .od8888888888888888888888b=                                                ";
char skull3117[]="       888888888P\" \"Y888888888888888bo.     .od88888888888888P\" \"Y888888P=                                            ";
char skull3118[]="        Y8888P\"           \"Y888888888888bd888888888888P\"            \"Y8P                                              ";
char skull3119[]="          \"\"                   \"Y8888888888888888P\"                                                                   ";
char skull31110[]="                                 .od8888888888bo.                                                                         ";
char skull31111[]="                             .od888888888888888888bo.                                                                     ";
char skull31112[]="                         .od8888888888P\"  \"Y8888888888bo.                                                               ";
char skull31113[]="                      .od8888888888P\"        \"Y8888888888bo.                                                            ";
char skull31114[]="                  .od88888888888P\"              \"Y88888888888bo.                                                        ";
char skull31115[]="        .od888888888888888888P\"                    \"Y8888888888888888bo.                                                ";
char skull31116[]="       Y8888888888888888888P\"                         \"Y8888888888888888b=                                              ";
char skull31117[]="       888888888888888888P\"                            \"Y8888888888888888=                                              ";
char skull31118[]="        \"Y888888888888888      					         \"Y88888888888888P=                                          ";
char skull31119[]="             \"\"Y8888888P                                  \"Y888888P\"                                                 ";
char skull311110[]="                \"Y8888P                                     Y888P\"                                                      ";
char skull311111[]="                   \"\"                                        \"\"\"                                                ";
char skull311112[]="                                                                                                                          ";
printf("\n%s\n", skull);
printf("\n%s\n", skull1);
printf("\n%s\n", skull2);
printf("\n%s\n", skull3);
printf("\n%s\n", skull4);
printf("\n%s\n", skull5);
printf("\n%s\n", skull6);
printf("\n%s\n", skull7);
printf("\n%s\n", skull8);
printf("\n%s\n", skull9);
printf("\n%s\n", skull10);
printf("\n%s\n", skull31);
printf("\n%s\n", skull32);
printf("\n%s\n", skull33);
printf("\n%s\n", skull35);
printf("\n%s\n", skull36);
printf("\n%s\n", skull37);
printf("\n%s\n", skull38);
printf("\n%s\n", skull39);
printf("\n%s\n", skull30);
printf("\n%s\n", skull311);
printf("\n%s\n", skull312);
printf("\n%s\n", skull313);
printf("\n%s\n", skull314);
printf("\n%s\n", skull315);
printf("\n%s\n", skull316);
printf("\n%s\n", skull317);
printf("\n%s\n", skull318);
printf("\n%s\n", skull319);
printf("\n%s\n", skull3110);
printf("\n%s\n", skull3111);
printf("\n%s\n", skull3112);
printf("\n%s\n", skull3113);
printf("\n%s\n", skull3114);
printf("\n%s\n", skull3115);
printf("\n%s\n", skull3116);
printf("\n%s\n", skull3117);
printf("\n%s\n", skull3118);
printf("\n%s\n", skull3119);
printf("\n%s\n", skull31110);
printf("\n%s\n", skull31111);
printf("\n%s\n", skull31112);
printf("\n%s\n", skull31113);
printf("\n%s\n", skull31114);
printf("\n%s\n", skull31115);
printf("\n%s\n", skull31116);
printf("\n%s\n", skull31117);
printf("\n%s\n", skull31118);
printf("\n%s\n", skull31119);
printf("\n%s\n", skull311110);
printf("\n%s\n", skull311111);
printf("\n%s\n", skull311112);
}
void choicess();
struct Steve open_inventory(struct Steve inventory){//OPENS THE INVENTORY OF USER
	int i;
	int x;
	for(i = 0; i < 36; i++){
		x = inventory.inventory[i][0];
		switch(x){
			case 1 :
				printf("Inventory at %d item is wood and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 2 :
				printf("Inventory at %d item is stone and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 3 :
				printf("Inventory at %d item is dirt and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 4 :
				printf("Inventory at %d item is wood planks and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
		 	case 5 :
				printf("Inventory at %d item is sticks and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
		 	case 6 :
				printf("Inventory at %d item is crafting bench and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;		 
			case 7 :
				printf("Inventory at %d item is chest and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 8 :
				printf("Inventory at %d item is wood pickaxe and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 9 :
				printf("Inventory at %d item is wood shovel and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 10 :
				printf("Inventory at %d item is wood axe and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 11 :
				printf("Inventory at %d item is wood sword and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 12 :
				printf("Inventory at %d item is stone pickaxe and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 13 :
				printf("Inventory at %d item is stone shovel and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 14 :
				printf("Inventory at %d item is stone axe and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 15 :
				printf("Inventory at %d item is stone sword and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 16 :
				printf("Inventory at %d item is iron ore and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 17 :
				printf("Inventory at %d item is iron ingot and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 18 :
				printf("Inventory at %d item is furnace and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 19 :
				printf("Inventory at %d item is iron pickaxe and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 20 :
				printf("Inventory at %d item is iron shovel and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 21 :
				printf("Inventory at %d item is iron axe and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 22 :
				printf("Inventory at %d item is iron sword and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 23 :
				printf("Inventory at %d item is diamond pickaxe and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 24 :
				printf("Inventory at %d item is diamond shovel and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 25 :
				printf("Inventory at %d item is diamond axe and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 26 :
				printf("Inventory at %d item is diamond sword and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 27 :
				printf("Inventory at %d item is diamonds and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 28 :
				printf("Inventory at %d item is wool and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 29 :
				printf("Inventory at %d item is coal and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 30 :
				printf("Inventory at %d item is bed and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 31 :
				printf("Inventory at %d item is apple there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 32 :
				printf("Inventory at %d item is raw steak and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 33 :
				printf("Inventory at %d item is steak and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 34 :
				printf("Inventory at %d item is raw chicken and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 35 :
				printf("Inventory at %d item is chicken and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 36 :
				printf("Inventory at %d item is bucket and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 37 :
				printf("Inventory at %d item is obsidian and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;	
			case 38 :
				printf("Inventory at %d item is sand and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;	
			case 39 :
				printf("Inventory at %d item is raw fish and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 40 :
				printf("Inventory at %d item is cooked fish and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 41 :
				printf("Inventory at %d item is water bucket and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 42 :
				printf("Inventory at %d item is lava bucket and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 43 :
				printf("Inventory at %d item is lava fish and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 44 :
				printf("Inventory at %d item is netherrack and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;			
			case 45 :
				printf("Inventory at %d item is fishing rod and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 46 :
				printf("Inventory at %d item is string and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			case 47 :
				printf("Inventory at %d item is torch and there are %d of them.\n", i,inventory.inventory[i][1]);
				break;
			default:
				printf("Inventory at %d item is %d and there are %d of them.\n", i,inventory.inventory[i][0], inventory.inventory[i][1]);
		}
	}
}

void DEATH(){//FUNCTION FOR WHEN YOU DIE
	skull();
	printf("\nYOU DIED!!!!!!\n");
	printf("\nThis was your inventory at time of death\n");
    open_inventory(user);
	printf("\nGAME OVER\nHope You Saved\nHope You Enjoyed\nCredits:\n\tPreston Scibek\n\tNick Kerns\n");
	free_loc();
	exit(0);
}
void crafting(){//CRAFTING FUNCTION THAT CRAFTS ITEMS
	int i;
	int x;
	int j;
	int crafting_bench;
	int sticks=0;
	int wood=0;
	int diamond=0;
	int wool = 0;
	int stone=0;
	int iron=0;
	int furnace;
	int string = 0;
	int iron_ore=0;
	int coal = 0;
	int raw_steak;
	int raw_chicken;
	int raw_fish;
	printf("Do you want to craft wood planks(1), sticks(2), crafting bench(3),\n chest(4), wood pickaxe(5), wood shovel(6),\n wood axe(7), wood sword(8), stone pickaxe(9),\n stone shovel(10), stone axe(11), stone sword(12),\n iron ingot(13), furnace(14), iron pickaxe(15),\n iron shovel(16), iron axe(17), iron sword(18),\n diamond pickaxe(19), diamond shovel(20), diamond axe(21),\n diamond sword(22), bed(23), steak(24),\n chicken(25), bucket(26), fish(27), fishing rod(28),\n or string(29), torch(30)\n");
	scanf("%d", &x);
	switch(x){
		case 1 ://wood planks
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==1 && user.inventory[j][1]>=1){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==4 && user.inventory[i][1]<=60){
							user.inventory[i][1]+=4;
							user.inventory[j][1]-=1;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=4;
							user.inventory[i][1]+=4;
							user.inventory[j][1]-=1;							
							break;
						}
					}
					break;
				}
			}
			break;
		case 2 ://sticks
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==4 && user.inventory[j][1]>=2){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==5 && user.inventory[i][1]<=60){
							user.inventory[i][1]+=4;
							user.inventory[j][1]-=2;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=5;
							user.inventory[i][1]+=4;
							user.inventory[j][1]-=2;							
							break;
						}
					}
					break;
				}
			}
			break;
		case 3 ://crafting bench
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==4 && user.inventory[j][1]>=4){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==6 && user.inventory[i][1]<64){
							user.inventory[i][1]+=1;
							user.inventory[j][1]-=4;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=6;
							user.inventory[i][1]+=1;
							user.inventory[j][1]-=4;							
							break;
						}
					}
					break;
				}
			}
			break;	
		case 4 ://chest
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==4 && user.inventory[j][1]>=8){
					wood=j;
				}
				if(wood!=0&&crafting_bench==1){
					for(i=0;i<36;i++){
							if(user.inventory[i][0]==7 && user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=8;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=7;
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=8;							
								break;
							}
						}
					}
					break;
				}
			break;	
		case 5 ://wood pickaxe
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==4 && user.inventory[j][1]>=3){
					wood=j;
				}
				if(crafting_bench==1 && sticks!=0 && wood!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==8 && user.inventory[i][1]<1){
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=3;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=8;
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=3;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=wood_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 6 ://wood shovel
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==4 && user.inventory[j][1]>=1){
					wood=j;
				}
				if(crafting_bench==1 && sticks!=0 && wood!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==9 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=1;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=9;
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=1;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=wood_dur;
								break;
							}
						}
					break;
				}
			}
			break;	
		case 7 ://wood axe
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==4 && user.inventory[j][1]>=3){
					wood=j;
				}
				if(crafting_bench==1 && sticks!=0 && wood!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==10 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=3;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=10;
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=3;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=wood_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 8 ://wood sword
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=1){
					sticks=j;
				}
				if(user.inventory[j][0]==4 && user.inventory[j][1]>=2){
					wood=j;
				}
				if(crafting_bench==1 && sticks!=0 && wood!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==11 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=2;
								user.inventory[sticks][1]-=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=11;
								user.inventory[i][1]+=1;
								user.inventory[wood][1]-=2;
								user.inventory[sticks][1]-=1;
								user.inventory[i][2]=wood_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 9 ://stone pickaxe
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==2 && user.inventory[j][1]>=3){
					stone=j;
				}
				if(crafting_bench==1 && sticks!=0 && stone!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==12 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[stone][1]-=3;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=12;
								user.inventory[i][1]+=1;
								user.inventory[stone][1]-=3;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=stone_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 10 ://stone shovel
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==2 && user.inventory[j][1]>=1){
					stone=j;
				}
				if(crafting_bench==1 && sticks!=0 && stone!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==13 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[stone][1]-=1;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=13;
								user.inventory[i][1]+=1;
								user.inventory[stone][1]-=1;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=stone_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 11 ://stone axe
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==2 && user.inventory[j][1]>=3){
					stone=j;
				}
				if(crafting_bench==1 && sticks!=0 && stone!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==14 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[stone][1]-=3;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=14;
								user.inventory[i][1]+=1;
								user.inventory[stone][1]-=3;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=stone_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 12 ://stone sword
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=1){
					sticks=j;
				}
				if(user.inventory[j][0]==2 && user.inventory[j][1]>=2){
					stone=j;
				}
				if(crafting_bench==1 && sticks!=0 && stone!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==15 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[stone][1]-=2;
								user.inventory[sticks][1]-=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=15;
								user.inventory[i][1]+=1;
								user.inventory[stone][1]-=2;
								user.inventory[sticks][1]-=1;
								user.inventory[i][2]=stone_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 13 ://iron ingot 17
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==18){
					furnace = 1;;
				}
				if(user.inventory[j][0]==16&&user.inventory[j][1]>=1){
					iron_ore=j;
				}
				if(user.inventory[j][0]==29){
					coal=j;
				}
				if(furnace==1 && iron_ore!=0 && coal !=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==17 && user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								user.inventory[iron_ore][1]-=1;
								user.inventory[coal] [1]-=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=17;
								user.inventory[i][1]+=1;
								user.inventory[iron_ore][1]-=1;
								user.inventory[coal][1]-=1;
								break;
							}
						}
					break;
					}
				}
			break;
		case 14 ://furnace 18
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==2 && user.inventory[j][1]>=8){
					stone=j;
				}
				if(crafting_bench==1 && stone!=0){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==18 && user.inventory[i][1]<64){
							user.inventory[i][1]+=1;
							user.inventory[stone][1]-=8;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=18;
							user.inventory[i][1]+=1;
							user.inventory[stone][1]-=8;							
							break;
						}
					}
					break;
				}
			}
			break;	
		case 15 ://iron pickaxe
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==17 && user.inventory[j][1]>=3){
					iron=j;
				}
				if(crafting_bench==1 && sticks!=0 && iron!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==19 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[iron][1]-=3;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=19;
								user.inventory[i][1]+=1;
								user.inventory[iron][1]-=3;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=iron_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 16 ://iron shovel
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==17 && user.inventory[j][1]>=1){
					iron=j;
				}
				if(crafting_bench==1 && sticks!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==20 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[iron][1]-=1;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=20;
								user.inventory[i][1]+=1;
								user.inventory[iron][1]-=1;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=iron_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 17 ://iron axe
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==17 && user.inventory[j][1]>=3){
					iron=j;
				}
				if(crafting_bench==1 && sticks!=0 && iron!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==21 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[iron][1]-=3;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=21;
								user.inventory[i][1]+=1;
								user.inventory[iron][1]-=3;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=iron_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 18 ://iron sword
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=1){
					sticks=j;
				}
				if(user.inventory[j][0]==17 && user.inventory[j][1]>=2){
					iron=j;
				}
				if(crafting_bench==1 && sticks!=0 && iron!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==22 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[iron][1]-=2;
								user.inventory[sticks][1]-=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=22;
								user.inventory[i][1]+=1;
								user.inventory[iron][1]-=2;
								user.inventory[sticks][1]-=1;
								user.inventory[i][2]=iron_dur;
								break;
							}
						}
					break;
					}
				}
			break;						
		case 19 ://diamond pickaxe
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==27 && user.inventory[j][1]>=3){
					diamond=j;
				}
				if(crafting_bench==1 && sticks!=0 && diamond!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==23 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[diamond][1]-=3;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=23;
								user.inventory[i][1]+=1;
								user.inventory[diamond][1]-=3;
								user.inventory[i][2]=diamond_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 20 ://diamond shovel
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==27 && user.inventory[j][1]>=1){
					diamond=j;
				}
				if(crafting_bench==1 && sticks!=0 && diamond!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==24 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[diamond][1]-=1;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=24;
								user.inventory[i][1]+=1;
								user.inventory[diamond][1]-=1;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=diamond_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 21 ://diamond axe
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=2){
					sticks=j;
				}
				if(user.inventory[j][0]==27 && user.inventory[j][1]>=3){
					diamond=j;
				}
				if(crafting_bench==1 && sticks!=0 && diamond!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==25 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[diamond][1]-=3;
								user.inventory[sticks][1]-=2;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=25;
								user.inventory[i][1]+=1;
								user.inventory[diamond][1]-=3;
								user.inventory[sticks][1]-=2;
								user.inventory[i][2]=diamond_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 22 ://diamond sword
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=1){
					sticks=j;
				}
				if(user.inventory[j][0]==27 && user.inventory[j][1]>=2){
					diamond=j;
				}
				if(crafting_bench==1 && sticks!=0 && diamond!=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==26 && user.inventory[i][1]==1){
								user.inventory[i][1]+=1;
								user.inventory[diamond][1]-=2;
								user.inventory[sticks][1]-=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=26;
								user.inventory[i][1]+=1;
								user.inventory[diamond][1]-=2;
								user.inventory[sticks][1]-=1;
								user.inventory[i][2]=diamond_dur;
								break;
							}
						}
					break;
					}
				}
			break;	
		case 23 ://bed
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==1&&user.inventory[j][1]>=3){
					wood=j;
				}
				if(user.inventory[j][0]==28 && user.inventory[j][1]>=3){
					wool = j;
				}
				if(wool!=0 &&crafting_bench==1&&wood!=0){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==30 && user.inventory[i][1]<64){
							user.inventory[i][1]+=1;
							user.inventory[wool][1]-=3;
							user.inventory[wood][1]-=3;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=30;
							user.inventory[wool][1]+=1;
							user.inventory[wood][1]-=3;						
							break;
						}
					}
				}
				break;
			}
			break;
		case 24 ://steak
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==18){
					furnace = 1;;
				}
				if(user.inventory[j][0]==32&&user.inventory[j][1]>=1){
					raw_steak=j;
				}
				if(user.inventory[j][0]==29){
					coal=j;
				}
				if(furnace==1 && raw_steak!=0 && coal !=0){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==33&& user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								user.inventory[raw_steak][1]-=1;
								user.inventory[coal]-=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=33;
								user.inventory[i][1]+=1;
								user.inventory[raw_steak][1]-=1;
								user.inventory[coal][1]-=1;
								break;
							}
						}
					break;
					}
				}
			break;
		case 25 ://chicken
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==18){
					furnace = 1;;
				}
				if(user.inventory[j][0]==34&&user.inventory[j][1]>=1){
					raw_chicken=j;
				}
				if(user.inventory[j][0]==29){
					coal=j;
				}
				if(furnace==1 && raw_chicken!=0 && coal !=0){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==35&& user.inventory[i][1]<64){
							user.inventory[i][1]+=1;
							user.inventory[raw_chicken][1]-=1;
							user.inventory[coal]-=1;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=35;
							user.inventory[i][1]+=1;
							user.inventory[raw_chicken][1]-=1;
							user.inventory[coal][1]-=1;
							break;
						}
					}
				break;
				}
			}
			break;	
		case 26 ://bucket
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==17 && user.inventory[j][1]>=3){
					iron=j;
				}
				if(crafting_bench==1 && iron!=0){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==41 && user.inventory[i][1]<64){
							user.inventory[i][1]+=1;
							user.inventory[iron][1]-=3;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=41;
							user.inventory[i][1]+=1;
							user.inventory[iron][1]-=3;						
							break;
						}
					}
				}
				break;
			}
			break;
		case 27 ://fish
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==18){
					furnace = 1;
				}
				if(user.inventory[j][0]==39&&user.inventory[j][1]>=1){
					raw_fish=j;
				}
				if(user.inventory[j][0]==29){
					coal=j;
				}
				if(furnace==1 && raw_fish!=0 && coal !=0){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==40&& user.inventory[i][1]<64){
							user.inventory[i][1]+=1;
							user.inventory[raw_fish][1]-=1;
							user.inventory[coal][1]-=1;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=40;
							user.inventory[i][1]+=1;
							user.inventory[raw_fish][1]-=1;
							user.inventory[coal][1]-=1;
							break;
						}
					}
				break;
				}
			}
			break;	
		case 28 ://fishing rod
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==5&&user.inventory[j][1]>=3){
					sticks=j;
				}				
				if(user.inventory[j][0]==46 && user.inventory[j][1]>=2){
					string = j;
				}
				if(crafting_bench==1&&sticks!=0 && string!=0){
					for(i=0;i<36;i++){
							if(user.inventory[i][0]==45 && user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								user.inventory[string][1]-=2;
								user.inventory[sticks][1]-=3;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=45;
								user.inventory[i][1]+=1;
								user.inventory[string][1]-=2;
								user.inventory[sticks][1]-=3;
								user.inventory[i][2]=stone_dur;								
								break;
							}
						}
					break;
				}
			}
			break;
		case 29 ://string
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==6){
					crafting_bench=1;
				}
				if(user.inventory[j][0]==28 && user.inventory[j][1]>=1){
					wool=j;
				}
				if(crafting_bench==1&&wool!=0){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==46 && user.inventory[i][1]<64){
							user.inventory[i][1]+=4;
							user.inventory[wool][1]-=1;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=46;
							user.inventory[i][1]+=4;
							user.inventory[wool][1]-=1;						
							break;
						}
					}
				break;
				}
			}
			break;
		case 30 ://torch
			for(j=0;j<36;j++){
				if(user.inventory[j][0]==5 && user.inventory[j][1]>=1){
					sticks=j;
				}
				if(user.inventory[j][0]==29 && user.inventory[j][1]>=1){
					coal=j;
				}
				if(coal!=0 && sticks !=0){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==27 && user.inventory[i][1]<=60){
							user.inventory[i][1]+=4;
							user.inventory[coal][1]-=1;
							user.inventory[sticks][1]-=1;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=47;
							user.inventory[i][1]+=4;
							user.inventory[coal][1]-=1;
							user.inventory[sticks][1]-=1;
							break;
						}
					}
					break;
				}
			}
			break;
		default :
			break;
	}	
}
void edit_house(){//NOT IMPLEMENTED
	// edit house 
	// use ascii
	// pull up current layout
	// ask which layer they want to edit
	// store each layer in an array
	// store eadh side in an array
	// ask which item like to use
	// can enter house and open chests
	// can sleep in house
	// place torches to prevent mobs spawning
	// if creeper spsawn while editing possibilty of house destory
	// do at end of stuff
}
void mob_spawn(){//FUNCTION FOR SPAWNING MOBS
	int creeper = 1;
	int zombie = 2;
	int spider = 3;
	int chances = 0;
	int torch = 0;
	int torch_loc = 0;
	int i;
	int steve_health = 10;
	int creeper_power = 10;
	int zombie_power = 2;
	int spider_power = 3;
	int steve_power = 1;
	int mob_health=10;
	int turn;
	int run_away = 0;
	int wep_loc = 0;
	for(i=0;i<36;i++){
		if(user.inventory[i][0]==47 && user.inventory[i][1]!=0){
			torch += user.inventory[i][1];
			torch_loc=i;
			break;
		}
	}
	int j;
	chances = rand() % 16;
	if(chances>=0&&chances<=8){
		return;
	}
	if(chances!=0&&torch!=0){
		user.inventory[torch_loc][1]-=1;
		return;
	}
	if(chances>8&&chances<=10){
		printf("\nSSSSSSSSSSSSSSSSSSSSSSSSSSSSS\n");
		printf("\nA creeper has snuck up on you!!!\n");
		for(i=0;i<36;i++){
			if(user.inventory[i][0]==41&&user.inventory[i][1]!=0){
				printf("\nYou got lucky, the explosion was muffled by your water bucket.\n");
				return;
			}
		}	
		printf("\nYou are battling a creeper");
		printf("\nRun away? Yes(1) No(0)\n");
		scanf("%d", &run_away);
		if(run_away==1 && rand() % 1 ==1){
			return;
		}
		else{
			printf("\nRun away failed\n");
			for(j=0;j<36;j++){
				if((user.inventory[j][0]==11 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 15) || (user.inventory[j][2]==00&& user.inventory[j][0]==22) ||(user.inventory[j][2]==00&& user.inventory[j][0]==26)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Sword\n");
				}
				if(user.inventory[j][0]==26){
					steve_power+=4;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0]==22){
					steve_power+=3;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0] == 15){
					steve_power+=2;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0]==11){
					steve_power+=1;
					wep_loc = j;
					break;
				}
			}
			while(steve_health!=0){
				turn = rand() % 3 + 1;
				if(turn == 1 ){
					printf("\nKKKKKKKKAAAAAAAAAABBBBBBBBBBBBBBBOOOOOOOOOOOOOOMMMMMMMMMMMMMMM\n");
					DEATH();
				}
				if(turn!=1){
					mob_health-=steve_power;
					user.inventory[wep_loc][3]-=1;
				}
				if(mob_health<=0){
					printf("\nYou killed the creeper\n");
					return;
				}
			}
		}
	}
	if(chances>10&&chances<=13){
		printf("\nRRAARRGH\n");
		printf("\nA zombie has snuck up on you!!!\n");
		printf("\nRun away? Yes(1) No(0)\n");
		scanf("%d", &run_away);
		if(run_away==1 && rand() % 1 ==1){
			return;
		}
		else{
			printf("\nRun away failed\n");
			printf("\nYou are battling a zombie");
			for(j=0;j<36;j++){
				if((user.inventory[j][0]==11 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 15) || (user.inventory[j][2]==00&& user.inventory[j][0]==22) ||(user.inventory[j][2]==00&& user.inventory[j][0]==26)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Sword\n");
				}
				if(user.inventory[j][0]==26){
					steve_power+=4;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0]==22){
					steve_power+=3;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0] == 15){
					steve_power+=2;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0]==11){
					steve_power+=1;
					wep_loc = j;
					break;
				}
			}
			while(steve_health!=0){
				turn = rand() % 3 + 1;
				if(turn == 1 ){
					printf("\nOUCH\n");
					printf("\nThe Zombie Hit You\n");
					steve_health-=zombie_power;
				}
				if(turn!=1){
					mob_health-=steve_power;
					user.inventory[wep_loc][3]-=1;
				}
				if(mob_health<=0){
					printf("\nYou killed the zombie\n");
					return;
				}
				if(steve_health==0){
					printf("\nA Zombie Killed You\n");
					DEATH();
				}
			}
		}
	}
	if(chances>13&&chances<=16){
		printf("\nA spider has snuck up on you!!!\n");
		printf("\nRun away? Yes(1) No(0)\n");
		scanf("%d", &run_away);
		if(run_away==1 && rand() % 1 ==1){
			return;
		}
		else{
			printf("\nRun away failed\n");
			printf("\nYou are battling a spider");
			for(j=0;j<36;j++){
				if((user.inventory[j][0]==11 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 15) || (user.inventory[j][2]==00&& user.inventory[j][0]==22) ||(user.inventory[j][2]==00&& user.inventory[j][0]==26)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Sword\n");
				}
				if(user.inventory[j][0]==26){
					steve_power+=4;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0]==22){
					steve_power+=3;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0] == 15){
					steve_power+=2;
					wep_loc = j;
					break;
				}
				if(user.inventory[j][0]==11){
					steve_power+=1;
					wep_loc = j;
					break;
				}
			}
			while(steve_health!=0){
				turn = rand() % 3 + 1;
				if(turn == 1 ){
					steve_health-=spider_power;
					printf("\nThe Spider Bit You\n");
				}
				if(turn!=1){
					user.inventory[wep_loc][3]-=1;
					mob_health-=steve_power;
				}
				if(mob_health<=0){
					printf("\nYou killed the spider\n");
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==46 && user.inventory[i][1]<64){
							user.inventory[i][1]+=rand() %1+1;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=46;
							user.inventory[i][1]+=rand() %1+1;
							break;
						}
					}
					return;
				}
			}
		}
	}
}
void go_mine(){//FUNCTION FOR MINING OBJECTS
	int dirc = 2;
	int choice;
	int initial_rando;
	int i = 0;
	int xx = 0;//var for when choosing up or down
	int j;
	int ii = 64;
	for(ii=64; ii>0; ii+=0){
		printf("On level %d", ii);
		mob_spawn();
		initial_rando = rand() % 21 + 1;
		if(initial_rando==1&& ii<12){//diamond
			for(j=0; j<36;j++){
				if((user.inventory[j][0]==19 &&user.inventory[j][2]==0) || (user.inventory[j][2]==0&&user.inventory[j][0]==23)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Pick\n");
				}
				if((user.inventory[j][0]==19 &&user.inventory[j][2]!=0) || (user.inventory[j][2]!=0&&user.inventory[j][0]==23)){
					printf("\nYOU FOUND DIAMONDS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
					printf("\nMine Yes(1) No(0)\n");
					scanf("%d", &choice);
					if(choice==1){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==27 && user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=27;
								user.inventory[i][1]+=1;
								break;
							}
						}
						if(user.inventory[j][0]==19){
							sleep(iron_time);
							user.inventory[j][2]-=1;
						}
						else{
							sleep(diamond_time);
							user.inventory[j][2]-=1;
						}
						break;
					}
					else{
						break;
					}
				}
			}
		}
		if(initial_rando>=2 && initial_rando<12){//stone
			for(j=0; j<36;j++){
				if((user.inventory[j][0]==8 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 12) || (user.inventory[j][2]==00&& user.inventory[j][0]==19) ||(user.inventory[j][2]==00&& user.inventory[j][0]==23)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Pick\n");
				}
				if((user.inventory[j][0]==8 && user.inventory[j][2]!=0) || (user.inventory[j][2]!=0&& user.inventory[j][0] == 12) || (user.inventory[j][2]!=0&& user.inventory[j][0]==19) ||(user.inventory[j][2]!=0&& user.inventory[j][0]==23)){
					printf("\nYou found stone\n");
					printf("\nMine Yes(1) No(0)\n");
					scanf("%d", &choice);
					if(choice==1){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==2 && user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=2;
								user.inventory[i][1]+=1;
								break;
							}
						}
						if(user.inventory[j][0]==8){
							sleep(wood_time);
							user.inventory[j][2]-=1;
						}
						if(user.inventory[j][0]==12){
							sleep(stone_time);
							user.inventory[j][2]-=1;
						}
						if(user.inventory[j][0]==19){
							sleep(iron_time);
							user.inventory[j][2]-=1;
						}
						if(user.inventory[j][0]==23){
							sleep(diamond_time);
							user.inventory[j][2]-=1;
						}
						break;
					}
					else{
						break;
					}
				}
			}
		}
		if((initial_rando>=13 && initial_rando<17) || (initial_rando==1 && ii >=12)){//coal
			for(j=0; j<36;j++){
				if((user.inventory[j][0]==8 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 12) || (user.inventory[j][2]==00&& user.inventory[j][0]==19) ||(user.inventory[j][2]==00&& user.inventory[j][0]==23)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Pick\n");
				}
				if((user.inventory[j][0]==8 && user.inventory[j][2]!=0) || (user.inventory[j][2]!=0&& user.inventory[j][0] == 12) || (user.inventory[j][2]!=0&& user.inventory[j][0]==19) ||(user.inventory[j][2]!=0&& user.inventory[j][0]==23)){
					printf("\nYou found coal\n");
					printf("\nMine Yes(1) No(0)\n");
					scanf("%d", &choice);
					if(choice==1){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==29 && user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=29;
								user.inventory[i][1]+=1;
								break;
							}
						}
					if(user.inventory[j][0]==8){
							sleep(wood_time);
							user.inventory[j][2]-=1;
						}
						if(user.inventory[j][0]==12){
							sleep(stone_time);
							user.inventory[j][2]-=1;
						}
						if(user.inventory[j][0]==19){
							sleep(iron_time);
							user.inventory[j][2]-=1;
						}
						if(user.inventory[j][0]==23){
							sleep(diamond_time);
							user.inventory[j][2]-=1;
						}
						break;
					}
					else{
						break;
					}
				}
			}
		}
		if(initial_rando>=17){//iron
			for(j=0; j<36;j++){
				if((user.inventory[j][2]==00&& user.inventory[j][0] == 12) || (user.inventory[j][2]==00&& user.inventory[j][0]==19) ||(user.inventory[j][2]==00&& user.inventory[j][0]==23)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Pick\n");
				}
				if((user.inventory[j][2]!=0&& user.inventory[j][0] == 12) || (user.inventory[j][2]!=0&& user.inventory[j][0]==19) ||(user.inventory[j][2]!=0&& user.inventory[j][0]==23)){
					printf("\nYou found iron\n");
					printf("\nMine Yes(1) No(0)\n");
					scanf("%d", &choice);
					if(choice==1){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==16 && user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=16;
								user.inventory[i][1]+=1;
								break;
							}
						}
						if(user.inventory[j][0]==12){
							sleep(stone_time);
							user.inventory[j][2]-=1;
						}
						if(user.inventory[j][0]==19){
							sleep(iron_time);
							user.inventory[j][2]-=1;
						}
						else{
							sleep(diamond_time);
							user.inventory[j][2]-=1;
						}
						break;
					}
					else{
						break;
					}
				}
			}
		}
		printf("\n0 for vertical 1 to stop mining 2 for sideways\n");
		scanf("%d", &dirc);
		while(dirc==2){
			printf("On level %d", ii);
			mob_spawn();
			initial_rando = rand() % 21 + 1;
			if(initial_rando==1&&ii<12){//diamond
				for(j=0; j<36;j++){
					if((user.inventory[j][2]==00&& user.inventory[j][0]==19) ||(user.inventory[j][2]==00&& user.inventory[j][0]==23)){
						user.inventory[j][1]=0;
						user.inventory[j][0]=0;
						printf("\nYou Broke Your Pick\n");
					}
					if((user.inventory[j][2]!=0&& user.inventory[j][0]==19) ||(user.inventory[j][2]!=0&& user.inventory[j][0]==23)){
						printf("\nYOU FOUND DIAMONDS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
						printf("\nMine Yes(1) No(0)\n");
						scanf("%d", &choice);
						if(choice==1){
							for(i=0;i<36;i++){
								if(user.inventory[i][0]==27 && user.inventory[i][1]<64){
									user.inventory[i][1]+=1;
									break;
								}
								if(user.inventory[i][1]==0){
									user.inventory[i][0]=27;
									user.inventory[i][1]+=1;
									break;
								}
							}
							if(user.inventory[j][0]==19){
								sleep(iron_time);
								user.inventory[j][2]-=1;
							}
							else{
								sleep(diamond_time);
								user.inventory[j][2]-=1;
							}
							break;
						}
						else{
							break;
						}
					}
				}
			}
			if(initial_rando>=2 && initial_rando<12){//stone
				for(j=0; j<36;j++){
					if((user.inventory[j][0]==8 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 12) || (user.inventory[j][2]==00&& user.inventory[j][0]==19) ||(user.inventory[j][2]==00&& user.inventory[j][0]==23)){
						user.inventory[j][1]=0;
						user.inventory[j][0]=0;
						printf("\nYou Broke Your Pick\n");
					}
					if((user.inventory[j][0]==8 && user.inventory[j][2]!=0) || (user.inventory[j][2]!=0&& user.inventory[j][0] == 12) || (user.inventory[j][2]!=0&& user.inventory[j][0]==19) ||(user.inventory[j][2]!=0&& user.inventory[j][0]==23)){
						printf("\nYou found stone\n");
						printf("\nMine Yes(1) No(0)\n");
						scanf("%d", &choice);
						if(choice==1){
							for(i=0;i<36;i++){
								if(user.inventory[i][0]==2 && user.inventory[i][1]<64){
									user.inventory[i][1]+=1;
									break;
								}
								if(user.inventory[i][1]==0){
									user.inventory[i][0]=2;
									user.inventory[i][1]+=1;
									break;
								}
							}
							if(user.inventory[j][0]==8){
								sleep(wood_time);
								user.inventory[j][2]-=1;
							}
							if(user.inventory[j][0]==12){
								sleep(stone_time);
								user.inventory[j][2]-=1;
							}
							if(user.inventory[j][0]==19){
								sleep(iron_time);
								user.inventory[j][2]-=1;
							}
							if(user.inventory[j][0]==23){
								sleep(diamond_time);
								user.inventory[j][2]-=1;
							}
							break;
						}
						else{
							break;
						}
					}
				}
			}
			if(initial_rando>=12 && initial_rando<17){//coal
				for(j=0; j<36;j++){
					if((user.inventory[j][0]==8 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 12) || (user.inventory[j][2]==00&& user.inventory[j][0]==19) ||(user.inventory[j][2]==00&& user.inventory[j][0]==23)){
						user.inventory[j][1]=0;
						user.inventory[j][0]=0;
						printf("\nYou Broke Your Pick\n");
					}
					if((user.inventory[j][0]==8 && user.inventory[j][2]!=0) || (user.inventory[j][2]!=0&& user.inventory[j][0] == 12) || (user.inventory[j][2]!=0&& user.inventory[j][0]==19) ||(user.inventory[j][2]!=0&& user.inventory[j][0]==23)){
						printf("\nYou found coal\n");
						printf("\nMine Yes(1) No(0)\n");
						scanf("%d", &choice);
						if(choice==1){
							for(i=0;i<36;i++){
								if(user.inventory[i][0]==29 && user.inventory[i][1]<64){
									user.inventory[i][1]+=1;
									break;
								}
								if(user.inventory[i][1]==0){
									user.inventory[i][0]=29;
									user.inventory[i][1]+=1;
									break;
								}
							}
							if(user.inventory[j][0]==8){
								sleep(wood_time);
								user.inventory[j][2]-=1;
							}
							if(user.inventory[j][0]==12){
								sleep(stone_time);
								user.inventory[j][2]-=1;
							}
							if(user.inventory[j][0]==19){
								sleep(iron_time);
								user.inventory[j][2]-=1;
							}
							if(user.inventory[j][0]==23){
								sleep(diamond_time);
								user.inventory[j][2]-=1;
							}
							break;
						}
						else{
							break;
						}
					}
				}
			}
			if(initial_rando>=21){//iron
				for(j=0; j<36;j++){
					if((user.inventory[j][2]==00&& user.inventory[j][0] == 12) || (user.inventory[j][2]==00&& user.inventory[j][0]==19) ||(user.inventory[j][2]==00&& user.inventory[j][0]==23)){
						user.inventory[j][1]=0;
						user.inventory[j][0]=0;
						printf("\nYou Broke Your Pick\n");
					}
					if((user.inventory[j][2]!=0&& user.inventory[j][0] == 12) || (user.inventory[j][2]!=0&& user.inventory[j][0]==19) ||(user.inventory[j][2]!=0&& user.inventory[j][0]==23)){
						printf("\nYou found iron\n");
						printf("\nMine Yes(1) No(0)\n");
						scanf("%d", &choice);
						if(choice==1){
							for(i=0;i<36;i++){
								if(user.inventory[i][0]==16 && user.inventory[i][1]<64){
									user.inventory[i][1]+=1;
									break;
								}
								if(user.inventory[i][1]==0){
									user.inventory[i][0]=16;
									user.inventory[i][1]+=1;
									break;
								}
							}
							if(user.inventory[j][0]==12){
								sleep(stone_time);
								user.inventory[j][2]-=1;
							}
							if(user.inventory[j][0]==19){
								sleep(iron_time);
								user.inventory[j][2]-=1;
							}
							else{
								sleep(diamond_time);
								user.inventory[j][2]-=1;
							}
							break;
						}
						else{
							break;
						}
					}
				}
			}
			printf("\n0 for Vertical 1 for choices 2 for sideways\n");
			scanf("%d", &dirc);
			if(dirc==1){
				choicess();
				break;
			}
			if(dirc == 0){
				break;
			}
		}		
		if(dirc == 0){//vertical
			printf("\nGoUp(1)GoDown(2)\n");
			scanf("%d", &xx);
			if(xx==1 && ii!=64){
				ii+=1;
			}
			if(xx==1 && ii==64){
				break;
			}
			if(xx==2){
				ii-=1;
			}
		}
		if(dirc==1){//end mining
			break;
		}
	}
}
void wood(int *total_trees){//WOOD FUNCTION
	int wood = 1;
	int i;
	int j;
	printf("\nPunch Wood Yes(1) No(0)\n");
	scanf("%d", &wood);
	while(wood==1 && *total_trees!=0){
		for(j=0; j<36;j++){
			if((user.inventory[j][0]==10 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 14) || (user.inventory[j][2]==00&& user.inventory[j][0]==21) ||(user.inventory[j][2]==00&& user.inventory[j][0]==25)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Axe\n");
				}
			if(user.inventory[j][0]==10 || user.inventory[j][0] == 14 ||  user.inventory[j][0]==21 || user.inventory[j][0]==25){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==1 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=1;
						user.inventory[i][1]+=1;
						break;
					}
				}
				*total_trees-=1;
				if(user.inventory[j][0]==10){
					sleep(wood_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==14){
					sleep(stone_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==21){
					sleep(iron_time);
					user.inventory[j][2]-=1;
				}
				else{
					sleep(diamond_time);
					user.inventory[j][2]-=1;
				}
				printf("\nPunch Wood Yes(1) No(0)\n");
				scanf("%d", &wood);
				break;
			}
			else{
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==1 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=1;
						user.inventory[i][1]+=1;
						break;
					}
				}
				*total_trees-=1;
				sleep(fist_time);
				printf("\nPunch Wood Yes(1) No(0)\n");
				scanf("%d", &wood);
				break;
			}
		}
	}
}
void chicken(int *total_chickens){//KILLING CHICKEN FUNCTION
	int i;
	int chicken = 1; 
	int j;
	printf("\nPunch chicken Yes(1) No(0)\n");
	scanf("%d", &chicken);
	while(chicken==1 && *total_chickens!=0){
		for(j=0; j<36;j++){
			if((user.inventory[j][0]==11 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 15) || (user.inventory[j][2]==00&& user.inventory[j][0]==22) ||(user.inventory[j][2]==00&& user.inventory[j][0]==26)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Sword\n");
				}
			if(user.inventory[j][0]==11 || user.inventory[j][0] == 15 ||  user.inventory[j][0]==22 || user.inventory[j][0]==26){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==34 && user.inventory[i][1]<64){
						user.inventory[i][1]+=2;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=34;
						user.inventory[i][1]+=2;
						break;
					}
				}
				*total_chickens-=1;
				if(user.inventory[j][0]==11){
					sleep(wood_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==15){
					sleep(stone_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==22){
					sleep(iron_time);
					user.inventory[j][2]-=1;
				}
				else{
					sleep(diamond_time);
					user.inventory[j][2]-=1;
				}
				printf("\nPunch chicken Yes(1) No(0)\n");
				scanf("%d", &chicken);
				break;
			}
			else{
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==34 && user.inventory[i][1]<64){
						user.inventory[i][1]+=2;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=34;
						user.inventory[i][1]+=2;
						break;
					}
				}
				*total_chickens-=1;
				sleep(fist_time);
				printf("\nPunch chicken Yes(1) No(0)\n");
				scanf("%d", &chicken);				
				break;
			}
		}
	}
}
void forest_wood(int *total_trees){//KILLING FOREST WOOD FUNCTION
	int wood = 1;
	int i;
	int j;
	int apple = 1;
	printf("\nPunch Wood Yes(1) No(0)\n");
	scanf("%d", &wood);
	while(wood==1 && *total_trees!=0){
		for(j=0; j<36;j++){
			if((user.inventory[j][0]==10 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 14) || (user.inventory[j][2]==00&& user.inventory[j][0]==21) ||(user.inventory[j][2]==00&& user.inventory[j][0]==25)){
					user.inventory[j][1]=0;
					user.inventory[j][0]=0;
					printf("\nYou Broke Your Axe\n");
				}
			if(user.inventory[j][0]==10 || user.inventory[j][0] == 14 ||  user.inventory[j][0]==21 || user.inventory[j][0]==25){
				apple = rand() % 1 + 1;
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==1 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=1;
						user.inventory[i][1]+=1;
						break;
					}
				}
				for(i=0; i<36; i++){
					if(user.inventory[i][0]==31 && user.inventory[i][1]<64 && apple == 1){
						user.inventory[i][1]+=1;
						break;
					}
					if(user.inventory[i][1]==0 && apple == 1){
						user.inventory[i][0]=31;
						user.inventory[i][1]+=1;
						break;
					}
				}
				*total_trees-=1;
				if(user.inventory[j][0]==10){
					sleep(wood_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==14){
					sleep(stone_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==21){
					sleep(iron_time);
					user.inventory[j][2]-=1;
				}
				else{
					sleep(diamond_time);
					user.inventory[j][2]-=1;
				}
				printf("\nPunch Wood Yes(1) No(0)\n");
				scanf("%d", &wood);
				break;
			}
			else{
				apple = rand() % 1 + 1;
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==1 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=1;
						user.inventory[i][1]+=1;
						break;
					}
				}
				for(i=0; i<36; i++){
					if(user.inventory[i][0]==31 && user.inventory[i][1]<64 && apple == 1){
						user.inventory[i][1]+=1;
						break;
					}	
					if(user.inventory[i][1]==0 && apple == 1){
						user.inventory[i][0]=31;
						user.inventory[i][1]+=1;
						break;
					}	
				}
				*total_trees-=1;
				sleep(fist_time);
				printf("\nPunch Wood Yes(1) No(0)\n");
				scanf("%d", &wood);
				break;
			}
		}
	}
}
void cow(int *total_cows){//KILLING COW FUNCTION
	int cows = 1;
	int i;
	int j;
	printf("\nPunch cows Yes(1) No(0)\n");
	while(cows==1 && *total_cows!=0){
		for(j=0; j<36;j++){
			if((user.inventory[j][0]==11 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 15) || (user.inventory[j][2]==00&& user.inventory[j][0]==22) ||(user.inventory[j][2]==00&& user.inventory[j][0]==26)){
				user.inventory[j][1]=0;
				user.inventory[j][0]=0;
				printf("\nYou Broke Your Sword\n");
			}
			if(user.inventory[j][0]==11 || user.inventory[j][0] == 15 ||  user.inventory[j][0]==22 || user.inventory[j][0]==26){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==32 && user.inventory[i][1]<64){
						user.inventory[i][1]+=rand() %1+1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=32;
						user.inventory[i][1]+=rand() %1+1;
						break;
					}
				}
				*total_cows-=1;
				if(user.inventory[j][0]==11){
					sleep(wood_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==15){
					sleep(stone_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==22){
					sleep(iron_time);
					user.inventory[j][2]-=1;
				}
				else{
					sleep(diamond_time);
					user.inventory[j][2]-=1;
				}
				printf("\nPunch cows Yes(1) No(0)\n");
				scanf("%d", &cows);
				break;
			}
			else{
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==32 && user.inventory[i][1]<64){
						user.inventory[i][1]+=rand() %1+1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=32;
						user.inventory[i][1]+=rand() %1+1;
						break;
					}
				}
				*total_cows-=1;
				sleep(fist_time);
				printf("\nPunch cows Yes(1) No(0)\n");
				scanf("%d", &cows);
				break;
			}
		}
	}
}
void sheep(int *sheep_number){//KILLING SHEEP FUNCTION
	int sheep = 1;
	int i;
	int j;
	printf("\nPunch sheep Yes(1) No(0)\n");
	while(sheep==1 && *sheep_number!=0){
		for(j=0; j<36;j++){
			if((user.inventory[j][0]==11 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 15) || (user.inventory[j][2]==00&& user.inventory[j][0]==22) ||(user.inventory[j][2]==00&& user.inventory[j][0]==26)){
				user.inventory[j][1]=0;
				user.inventory[j][0]=0;
				printf("\nYou Broke Your Sword\n");
			}
			if(user.inventory[j][0]==11 || user.inventory[j][0] == 15 || user.inventory[j][0]==22 || user.inventory[j][0]==26){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==28 && user.inventory[i][1]<64){
						user.inventory[i][1]+=rand() %1+1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=28;
						user.inventory[i][1]+=rand() %1+1;
						break;
					}
				}
				*sheep_number-=1;
				if(user.inventory[j][0]==11){
					sleep(wood_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==15){
					sleep(stone_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==22){
					sleep(iron_time);
					user.inventory[j][2]-=1;
				}
				else{
					sleep(diamond_time);
					user.inventory[j][2]-=1;
				}
				printf("\nPunch sheep Yes(1) No(0)\n");
				scanf("%d", &sheep);
				break;
			}
			else{
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==28 && user.inventory[i][1]<64){
						user.inventory[i][1]+=rand() %1+1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=28;
						user.inventory[i][1]+=rand() %1+1;
						break;
					}
				}
				*sheep_number-=1;
				sleep(fist_time);
				printf("\nPunch sheep Yes(1) No(0)\n");
				scanf("%d", &sheep);
				break;
			}
		}
	}
}
			
void dirt(int *dirt_number){//KILLING DIRT FUNCTION
	int dirt = 1;
	int i;
	int j;
	printf("\nPunch dirt Yes(1) No(0)\n");
	while(dirt==1 && *dirt_number!=0){
		for(j=0;j<36;j++){
			if((user.inventory[j][0]==9 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 13) || (user.inventory[j][2]==00&& user.inventory[j][0]==20) ||(user.inventory[j][2]==00&& user.inventory[j][0]==24)){
				user.inventory[j][1]=0;
				user.inventory[j][0]=0;
				printf("\nYou Broke Your Shovel\n");
			}
			if(user.inventory[j][0]==9 || user.inventory[j][0]==13 || user.inventory[j][0]==20 || user.inventory[j][0]==24){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==3 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=3;
						user.inventory[i][1]+=1;
						break;
					}
				}
			}
			*dirt_number-=1;
			if(user.inventory[j][0]==9){
				sleep(wood_time);
				user.inventory[j][2]-=1;
				break;
			}
			if(user.inventory[j][0]==13){
				sleep(stone_time);
				user.inventory[j][2]-=1;
				break;
			}
			if(user.inventory[j][0]==20){
				sleep(iron_time);
				user.inventory[j][2]-=1;
				break;
			}
			if(user.inventory[j][0]==24){
				sleep(diamond_time);
				user.inventory[j][2]-=1;
				break;
			}
			else{
				sleep(fist_time);
				break;
			}
		}
		printf("\nPunch dirt Yes(1) No(0)\n");
		scanf("%d", &dirt);
	}
}
void sand(int *sand_number){//KILLING SAND FUNCTION
	int sand = 1;
	int i;
	int j;
	printf("\nPunch sand Yes(1) No(0)\n");
	while(sand==1 && *sand_number!=0){
		for(j=0; j<36;j++){
			if((user.inventory[j][0]==9 && user.inventory[j][2]==00) || (user.inventory[j][2]==00&& user.inventory[j][0] == 13) || (user.inventory[j][2]==00&& user.inventory[j][0]==20) ||(user.inventory[j][2]==00&& user.inventory[j][0]==24)){
				user.inventory[j][1]=0;
				user.inventory[j][0]=0;
				printf("\nYou Broke Your Shovel\n");
			}
			if(user.inventory[j][0]==9 || user.inventory[j][0]==13 || user.inventory[j][0]==20 || user.inventory[j][0]==24){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==38 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=38;
						user.inventory[i][1]+=1;
						break;
					}
				}
				*sand_number-=1;
				if(user.inventory[j][0]==9){
					sleep(wood_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==13){
					sleep(stone_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==20){
					sleep(iron_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==24){
					sleep(diamond_time);
					user.inventory[j][2]-=1;
				}
				else{
					sleep(fist_time);
				}
				printf("\nPunch sand Yes(1) No(0)\n");
				scanf("%d", &sand);
				break;
			}
		}
	}
}
void fish(int *total_fish){//CATCHING FISH FUNCTION
	int fish = rand() % 3 + 1;
	int fishs = 1;
	int i;
	int j;
	int time = 0;
	printf("\nFish Yes(1) No(0)\n");
	scanf("%d", &fishs);
	while(fishs==1 && *total_fish!=0){
		for(j=0; j<36;j++){
			if((user.inventory[j][2]==0&& user.inventory[j][0]==45)){
				user.inventory[j][1]=0;
				user.inventory[j][0]=0;
				printf("\nYou Broke Your Fishing Rod\n");
			}
			if(user.inventory[j][0]==9 || user.inventory[j][0]==13 || user.inventory[j][0]==20 || user.inventory[j][0]==24){
				if(user.inventory[j][0]==45){
					if(fish==1){
						for(i=0;i<36;i++){
							if(user.inventory[i][0]==39 && user.inventory[i][1]<64){
								user.inventory[i][1]+=1;
								break;
							}
							if(user.inventory[i][1]==0){
								user.inventory[i][0]=39;
								user.inventory[i][1]+=1;
								break;
							}
						}
						*total_fish-=1;
						time = rand() % 5 + 1;
						sleep(time);
						user.inventory[j][2]-=1;
						printf("\nFish Yes(1) No(0)\n");
						scanf("%d", &fishs);
						fish = rand() % 3 + 1;
						break;
					}
					else{
						time = rand() % 5 + 1;
						sleep(time);
						user.inventory[j][2]-=1;
						printf("\nNo fish\n Try Again\n");
						printf("\nFish Yes(1) No(0)\n");
						scanf("%d", &fishs);
						fish = rand() % 3 + 1;
						break;
					}
				}
			}
		}
	}
}
void water(int *total_water){//GETTING WATER FUNCTION
	int water = 1;
	int i;
	int j;
	printf("\nCollect Water Yes(1) No(0)\n");
	while(water==1 && *total_water!=0){
		for(j=0; j<36;j++){
			if(user.inventory[j][0]==36){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==41 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						user.inventory[j][1]-=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=41;
						user.inventory[i][1]+=1;
						user.inventory[j][1]-=1;
						break;
					}
				}
				break;
			}
		}
		*total_water -=1;
		printf("\nGet waterYes(1) No(0)\n");
		scanf("%d", &water);
	}
}
void lava_fish(int *lava_fish){//CATCHING LAVA FISH FUNCITON
	int lavaa_fish = rand() % 3 + 1;
	int fishs = 1;
	int i;
	int j;
	int time = 0;
	printf("\nFish Yes(1) No(0)\n");
	while(fishs==1 && *lava_fish!=0){
		for(j=0; j<36;j++){
			if(user.inventory[j][0]==45){
				if(lavaa_fish==1){
					for(i=0;i<36;i++){
						if(user.inventory[i][0]==43 && user.inventory[i][1]<64){
							user.inventory[i][1]+=1;
							break;
						}
						if(user.inventory[i][1]==0){
							user.inventory[i][0]=43;
							user.inventory[i][1]+=1;
							break;
						}
					}
					*lava_fish-=1;
					time = rand() % 5 + 1;
					sleep(time);
					user.inventory[j][2]-=1;
					printf("\nFish Yes(1) No(0)\n");
					scanf("%d", &fishs);
					lavaa_fish = rand() % 3 + 1;
					break;
				}
				else{
					time = rand() % 5 + 1;
					sleep(time);
					user.inventory[j][2]-=1;
					printf("\nNo fish\n Try Again\n");
					printf("\nFish Yes(1) No(0)\n");
					scanf("%d", &fishs);
					lavaa_fish = rand() % 3 + 1;
					break;
				}
			}
		}
	}
}
void lava(int *total_lava){//GETTING LAVA FUNCTION
	int lava = 1;
	int i;
	int j;
	printf("\nCollect lava Yes(1) No(0)\n");
	while(lava==1 && *total_lava!=0){
		for(j=0; j<36;j++){
			if(user.inventory[j][0]==36){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==42 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						user.inventory[j][1]-=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=42;
						user.inventory[i][1]+=1;
						user.inventory[j][1]-=1;
						break;
					}
				}
				break;
			}
		}
		*total_lava -=1;
		printf("\nGet lava Yes(1) No(0)\n");
		scanf("%d", &lava);
	}
}
void obsidian(int *obsidian_number){//PUNCHING OBSIDIAN FUNCTION
	int obsidian = 1;
	int i;
	int check = 0;
	int j;
	int timer = 30;
	printf("\nPunch obsidian Yes(1) No(0)\n");
	scanf("%d", &obsidian);
	if(obsidian==1){
		printf("\nReally??? You would \"Punch\" obsidian!\n");
		obsidian = 0;
		printf("\nDo you want to mine obsidian? Yes(1) No(0)\n");
		scanf("%d", &obsidian);
	}
	while(obsidian==1 && *obsidian_number!=0){
		for(j=0;j<36;j++){
			if(user.inventory[j][0]==23){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==37 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						sleep(8);
						user.inventory[j][2]-=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=37;
						user.inventory[i][1]+=1;
						sleep(8);
						user.inventory[j][2]-=1;
						break;
					}
				}
				*obsidian_number-=1;
				obsidian = 0;
				printf("\nPunch obsidian Yes(1) No(0)\n");
				scanf("%d", &obsidian);
				if(obsidian==1){
					printf("\nReally??? You would still \"Punch\" obsidian!\n");
					obsidian = 0;
					printf("\nDo you want to mine obsidian? Yes(1) No(0)\n");
					scanf("%d", &obsidian);
				}
				break;
			}
			if(j==35){
				while(timer!=480 && check!=0){
					printf("\nYou are %f of the way there. Continue mining? Yes(1)No(0)\n", 480/timer);
					scanf("&d", &check);
					if(check==1){
						timer+=30;
						sleep(timer);
					}
					else{
						break;
					}
				}
			}
		}
	}
}
void netherrack(int *netherrack_number){//MINING NETHERRACK FUNCTION
	int netherrack = 1;
	int i;
	int j;
	printf("\nPunch netherrack Yes(1) No(0)\n");
	scanf("%d", &netherrack);
	while(netherrack==1 && *netherrack_number!=0){
		for(j=0; j<36;j++){
			if(user.inventory[j][0]==8 || user.inventory[j][0]==12 || user.inventory[j][0]==19 || user.inventory[j][0]==23){
				for(i=0;i<36;i++){
					if(user.inventory[i][0]==44 && user.inventory[i][1]<64){
						user.inventory[i][1]+=1;
						break;
					}
					if(user.inventory[i][1]==0){
						user.inventory[i][0]=44;
						user.inventory[i][1]+=1;
						break;
					}
				}
				*netherrack_number-=1;
				if(user.inventory[j][0]==8){
					sleep(wood_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==12){
					sleep(stone_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==19){
					sleep(iron_time);
					user.inventory[j][2]-=1;
				}
				if(user.inventory[j][0]==23){
					sleep(diamond_time);
					user.inventory[j][2]-=1;
				}
				printf("\nPunch netherrack Yes(1) No(0)\n");
				scanf("%d", &netherrack);
				break;
			}
		}
	}
}

void plains(){//EXPLORING PLAINS FUNCTION
	int i;
	int rando = 0;
	int total_trees = 0;
	int total_cows = 0;
	int total_chickens = 0;
	int initial_rando = 0;
	int total_dirt = 0;
	int sheep_number = 0;
	printf("\nYou are exploring a plains biome\n");
	initial_rando = rand() % 5 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_trees+=rando;
	}
	initial_rando = rand() % 7 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_cows+=rando;
	}
	initial_rando = rand() % 7 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
	total_chickens+=rando;
	}
	initial_rando = rand() % 25 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
	total_dirt+=rando;
	}
	initial_rando = rand() % 7 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		sheep_number+=rando;
	}
	int choice;
	while(1){
		printf("\nThere are %d chickens in your surrounding area\n", total_chickens);
		printf("\nThere are %d cows in your surrounding area\n", total_cows);
		printf("\nThere are %d trees in your surrounding area\n", total_trees);
		printf("\nThere are %d sheep in your surrounding area\n", sheep_number);
		printf("\n Do you Wanna Punch Dirt(4) Punch Wood(1), Punch Chicken(2), or Punch Cows(3), or Leave the Plains(0), or Punch Sheep(5)\n");
		scanf("%d", &choice);
		if(choice==1){
			wood(&total_trees);
		}
		if(choice==2){
			chicken(&total_chickens);
			printf("%d",total_chickens);
		}
		if(choice==3){
			cow(&total_cows);
		}
		if(choice == 0){
			break;
		}
		if(choice == 4){
			dirt(&total_dirt);
		}
		if(choice==5){
			sheep(&sheep_number);
		}
	}
}
void forest(){//EXPLORING FOREST FUNCTION
	int i;
	int rando = 0;
	int total_trees = 0;
	int total_cows = 0;
	int total_chickens = 0;
	int initial_rando = 0;
	printf("\nYou are exploring a forest biome\n");
	initial_rando = rand() % 20 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_trees+=rando;
	}
	initial_rando = rand() % 4 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_cows+=rando;
	}
	initial_rando = rand() % 5 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_chickens+=rando;
	}
	int choice;
	while(1){
		printf("\nThere are %d chickens in your surrounding area\n", total_chickens);
		printf("\nThere are %d cows in your surrounding area\n", total_cows);
		printf("\nThere are %d trees in your surrounding area\n", total_trees);
		printf("\n Do you Wanna Punch Wood(1), Punch Chicken(2), or Punch Cows(3), or Leave the Forest(0)\n");
		scanf("%d", &choice);
		if(choice==1){
			forest_wood(&total_trees);
		}
		if(choice==2){
			chicken(&total_chickens);
			printf("%d",total_chickens);
		}
		if(choice==3){
			cow(&total_cows);
		}
		if(choice==4 || choice == 0){
			break;
		}
	}
}
void beach(){//EXPLORING BEACH FUNCTION
	int i;
	int rando = 0;
	int total_sand = 0;
	int total_fish = 0;
	int total_water = 10000;
	int initial_rando = 0;
	printf("\nYou are exploring a beach biome\n");
	initial_rando = rand() % 20 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_sand+=rando;
	}
	initial_rando = rand() % 4 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_fish+=rando;
	}
	int choice;
	while(1){
		printf("\nThere are %d sand in your surrounding area\n", total_sand);
		printf("\nThere are %d fish in your surrounding area\n", total_fish);
		printf("\n Do you Wanna Punch Sand(1), Go Fishing(2), or Get Water(3), or Leave the Beach(0)\n");
		scanf("%d", &choice);
		if(choice==1){
			sand(&total_sand);
		}
		if(choice==2){
			fish(&total_fish);
		}
		if(choice==3){
			water(&total_water);
		}
		if(choice==4 || choice == 0){
			break;
		}
	}
}
void volcanoe(){//EXPLORING VOLCANOE FUNCTION
	int i;
	int rando = 0;
	int total_obsidian = 0;
	int total_lava_fish = 0;
	int total_lava = 10000;
	int initial_rando = 0;
	printf("\nYou are exploring a volcanoe biome\n");
	initial_rando = rand() % 20 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_obsidian+=rando;
	}
	initial_rando = rand() % 4 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_lava_fish+=rando;
	}
	int choice;
	while(1){
		printf("\nThere are %d obsidian in your surrounding area\n", total_obsidian);
		printf("\nThere are %d  lava fish in your surrounding area\n", total_lava_fish);
		printf("\n Do you Wanna Punch Obsidian(1), Go Fishing(2), or Get Lava(3), or Leave(0)\n");
		scanf("%d", &choice);
		if(choice==1){
			obsidian(&total_obsidian);
		}
		if(choice==2){
			lava_fish(&total_lava_fish);
		}
		if(choice==3){
			lava(&total_lava);
		}
		if(choice==4 || choice == 0){
			break;
		}
	}
}
void nether(){//EXPLORING NETHER FUNCTION
	int i;
	int rando = 0;
	int total_netherrack = 0;
	int total_lava_fish = 0;
	int total_lava = 10000;
	int initial_rando = 0;
	printf("\nYou are exploring the nether\n");
	initial_rando = rand() % 20 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_netherrack+=rando;
	}
	initial_rando = rand() % 4 + 5;
	for(i=1; i<5; i++){
		rando = rand() % i + initial_rando;
		total_lava_fish+=rando;
	}
	int choice;
	while(1){
		printf("\nThere are %d netherrack in your surrounding area\n", total_netherrack);
		printf("\nThere are %d  lava fish in your surrounding area\n", total_lava_fish);
		printf("\n Do you Wanna Punch Netherrack(1), Go Fishing(2), or Get Lava(3), or Leave(0)\n");
		scanf("%d", &choice);
		if(choice==1){
			netherrack(&total_netherrack);
		}
		if(choice==2){
			lava_fish(&total_lava_fish);
		}
		if(choice==3){
			lava(&total_lava);
		}
		if(choice==4 || choice == 0){
			break;
		}
	}
}

void explore(){//EXPLORE FUNCTION
	int x; 
	int i;
	int rando = 0;
	x = rand() % 6+1;//random number that chooses where the user will explore
	switch(x){
		case 1 :
			plains();
			break;
		case 2 :
			printf("\nYou are exploring a cave\n");//user is exploring a cave and calls the go mine function
			go_mine();			
			break;
		case 3 :
			beach();
			break;
		case 4 :
			forest();
			break;
		case 5 :
			volcanoe();
			break;
		case 6 :
			for(i = 0; i < 36; i++){
				if(user.inventory[i][0] == 37 && user.inventory[i][1] >= 8){
					nether();//checks to see if the user has the required materials to go to the nether and if so sends them to the nether
					break;
				}
			}
		default :
			break;
	}
}

void save_game(){//FUNCTION TO SAVE GAME
	FILE *fp;
	char filele[101];
	scanf("%s", &filele);//gets the filename from the user
	filele[100]='a';
	filele[99]='t';
	filele[98]='a';
	filele[97]='d';
	filele[96]='.';
	filele[101]='\0';
	fp = fopen(filele, "wb");//opens the file with the name specifed by the user
	int i;
	int j;
	for(i = 0; i < 36; i++){
        for(j=0;j<2;j++){
			fwrite(&user.inventory[i][j], sizeof(int), 1, fp);//writees to the file each item saved in the user inventory at the corresponing spot
        }
	}
	fclose(fp);
}

void load_save(){//FUNCTION TO LOAD GAME
	FILE *fp;	
	char filele[101];
	scanf("%s", &filele);//gets the filename from the user
	filele[100]='a';
	filele[99]='t';
	filele[98]='a';
	filele[97]='d';
	filele[96]='.';
	filele[101]='\0';
	fp = fopen(filele, "rb");// opens the file with the name specified by the user
	int i;
	int j;
	for(i = 0; i < 36; i++){
        for(j=0;j<2;j++){
			fread(&user.inventory[i][j], sizeof(int), 1, fp);//reads each item in the save file to the user inventory at the corresponding spot
        }
	}
	fclose(fp);
}
void choicess(){//CHOICES FUNCTION THAT CONTAINS INFINTE LOOP
	int x;
	int y = 1;
	plains();//calls the plains function, is the location where one spawns, also where one appears after exiting a mine by going vertical on lvl 64
	while(y==1){
		printf("\n1)Open_inventory\n2)explore\n4)go_mine\n5)save\n6)load\n7)craft\n0)break\n");
		scanf("%d", &x);
		switch(x){//switch case that asks the user which choice they want to make
			case 1 :
				open_inventory(user);
				break;
			case 2 :
				explore();
				break;
			case 3 :
				edit_house();
				break;
			case 4 :
				go_mine();
				break;
			case 5 :
				save_game();
				break;
			case 6 :
				load_save();
				break;
			case 7 :
				crafting();
				break;
			default:
				y = 0;//default is when incorrect choice or misspelt choice or when want to end, sets y equal to 0 ending the infinte loop and ending the game leading to free loc being called in the main function which then leads to the end of the program is in place to prevent the game from glitching out due to a mispelt word or something of the likes
				break;
		}
	}	
}
// start game
void run_game(){
	choicess();// calls the choices function
}
// loads game and necessary functions
void load_game(){
	printf("LOADED\n");
	memory_loc();//runs the allocate memory function which allocates memory for the user inventory
	int j;
	int i;
	for(i = 0; i < 36; i++){
		for(j = 0; j < 3; j++){
			user.inventory[i][j] = 0;// for loop that sets the user inventory to nothing
		}
	}
	run_game();//calls the run game function
}
//welcome screen
void welcome(void){// welcomes the user, gives tips, rules,
	printf("\t\t WELCOME TO PNCRAFT \t\t \n How to play ... \n \t\t Rules \t\t \n Rule 1) 1 = Yes 0 = No \n");
	printf("\n \t\t Tips \n");
	printf("\n \t\t Tip 1\n");
	printf("\n \t\t Be sure to have torches when exploring caves\n");
	printf("\n \t\t Tip 2\n");
	printf("\n \t\t Be sure to save your progress\n");
	printf("\n \t\t Tip 3\n");
	printf("\n \t\t Iron is more efficient then Stone\n");
	printf("\n \t\t Diamond is more efficient then Iron\n");
	printf("\nWhen ready to start type 'start': ");
	char start[5];
	scanf("%s", &start);
	if(strcmp(start, "start")==0){//compares the user entered phrase to the word start, when start is typed it loads the game
		load_game();//calls the load game function
	}
}

int main(void){
	srand(time(NULL));//seeds the random number generator that will be used throughout the game
	welcome();//runs the welcome function which welcoms the user
	free_loc();//If somehow code hits here, frees the allocated memory just to be safe
}