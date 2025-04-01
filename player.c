#include "../header/en-tete.h"
#include "../header/player.h"

void ft_clear(){
	system("clear");
}

void ft_player00(){
	int i = 0;
	int j = 0;

	char player00[4][3] = {
		{' ','o',' '},
		{'<','#','>'},
		{'/',' ','\\'}
	};
	for(i = 0; i < 4; i++){
		printf("\n");
		for(j = 0; j < 3; j++){
			printf("%c", player00[i][j]);
		}
	}
}

void ft_player01(){
	int i = 0;
	int j = 0;

	char player01[4][3] = {
		{' ','o',' '},
		{'<','#','>'},
		{'/','>',' '}
	};
	for(i = 0; i < 4; i++){
		printf("\n");
		for(j = 0; j < 3; j++){
			printf("%c", player01[i][j]);
		}
	}
}

void ft_player02(){
	int i = 0;
	int j = 0;

	char player02[4][3] = {
		{' ','o',' '},
		{'<','#','>'},
		{' ','<','\\'}
	};
	for(i = 0; i < 4; i++){
		printf("\n");
		for(j = 0; j < 3; j++){
			printf("%c", player02[i][j]);
		}
	}
}

void ft_player03(){
	int i = 0;
	int j = 0;

	char player02[4][3] = {
		{' ','o',' '},
		{'<','#','>'},
		{'<',' ','>'}
	};
	for(i = 0; i < 4; i++){
		printf("\n");
		for(j = 0; j < 3; j++){
			printf("%c", player02[i][j]);
		}
	}
}

void ft_annimationPlayerDroite(){
	int i = 0;

	while(i < 1000){
		ft_player00();
		sleep(1);
		ft_clear();
		ft_player01();
		sleep(1);
		ft_clear();
		ft_player00();
		sleep(1);
		ft_clear();
	}i++;
}

void ft_annimationPlayerGauche(){
	int i = 0;

	while(i < 1000){
		ft_player00();
		sleep(1);
		ft_clear();
		ft_player02();
		sleep(1);
		ft_clear();
		ft_player00();
		sleep(1);
		ft_clear();
	}i++;
}

void ft_annimationPlayerSauter(){
	int i = 0;

	while(i < 1000){
		ft_player00();
		sleep(1);
		ft_clear();
		ft_player03();
		sleep(1);
		ft_clear();
		ft_player00();
		sleep(1);
		ft_clear();
	}i++;
}
