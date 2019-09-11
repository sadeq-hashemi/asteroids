
#include "asteroid.h"

/*
** Asteroid bitmaps for different sized asteroids
*/
const uint8_t asteroidCanvas[] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t asteroidBitmaps[] =
{
	//7x50
	0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, //                            #######                
	0x00, 0x00, 0x00, 0xBE, 0xEA, 0x00, 0x00, //                         # ##### ### # #           
	0x00, 0x00, 0x00, 0xFC, 0x7E, 0x00, 0x00, //                         ######   ######           
	0x00, 0x00, 0x03, 0xC0, 0x07, 0xC0, 0x00, //                       ####           #####        
	0x00, 0x00, 0x07, 0xC0, 0x07, 0xC0, 0x00, //                      #####           #####        
	0x00, 0x00, 0x07, 0x00, 0x00, 0xC0, 0x00, //                      ###                ##        
	0x00, 0x07, 0xC7, 0x00, 0x00, 0x70, 0x00, //              #####   ###                 ###      
	0x00, 0x07, 0x86, 0x00, 0x00, 0x20, 0x00, //              ####    ##                   #       
	0x00, 0xFF, 0x7E, 0x00, 0x00, 0x7C, 0x00, //         ######## ######                  #####    
	0x02, 0xFA, 0x3A, 0x00, 0x00, 0x38, 0x00, //       # ##### #   ### #                   ###     
	0x03, 0xC0, 0x00, 0x00, 0x00, 0x1C, 0x00, //       ####                                 ###    
	0x0B, 0x80, 0x00, 0x00, 0x00, 0x0E, 0x00, //     # ###                                   ###   
	0x5F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, //  # #####                                   #####  
	0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, //   ###                                        #### 
	0x78, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, //  ####                                        ###  
	0x20, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, //   #                                            ## 
	0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ####                                           #  
	0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, // ###                                           ### 
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, // ##                                           ###  
	0x80, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // #                                            ##   
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // ##                                           ##   
	0x80, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // #                                            ##   
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // ##                                           ##   
	0x80, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // #                                            ##   
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // ##                                           ##   
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // ##                                           ##   
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, // ##                                           ###  
	0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, // #                                             ### 
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ##                                             #  
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, // ##                                             ###
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, // ##                                             ###
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, // #                                               ##
	0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, // #####                                           ##
	0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, // #####                                           ##
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, //    ##                                           ##
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, //    ##                                           ##
	0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, //    ###                                          ##
	0x0E, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, //     ###                                        ###
	0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, //      ###                                       ###
	0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, //      ###                                       ## 
	0x07, 0xC0, 0x00, 0x00, 0x7F, 0xFF, 0x00, //      #####                       ###############  
	0x03, 0xC0, 0x00, 0x00, 0x3F, 0xFF, 0x80, //       ####                        ############### 
	0x00, 0xF0, 0x00, 0x00, 0x70, 0x00, 0x00, //         ####                     ###              
	0x00, 0xF8, 0x00, 0x00, 0x20, 0x00, 0x00, //         #####                     #               
	0x00, 0x78, 0x00, 0x00, 0x70, 0x00, 0x00, //          ####                    ###              
	0x00, 0x1E, 0x00, 0x00, 0xE0, 0x00, 0x00, //            ####                 ###               
	0x00, 0x1F, 0x50, 0x00, 0xF0, 0x00, 0x00, //            ##### # #            ####              
	0x00, 0x07, 0xE0, 0x00, 0xC0, 0x00, 0x00, //              ######             ##                
	0x00, 0x07, 0x7F, 0xFF, 0xC0, 0x00, 0x00, //              ### #################                
	0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, //                   ################                                  
	
	//4x25
	0x00, 0xBF, 0xF8, 0x00, //         # ###########    
	0x07, 0xFF, 0x0F, 0x00, //      ###########    #### 
	0x0E, 0x00, 0x03, 0x00, //     ###               ## 
	0x78, 0x00, 0x01, 0x00, //  ####                  # 
	0x20, 0x00, 0x01, 0x00, //   #                    # 
	0x60, 0x00, 0x07, 0x00, //  ##                  ### 
	0x60, 0x00, 0x0E, 0x00, //  ##                 ###  
	0x40, 0x00, 0x1C, 0x00, //  #                 ###   
	0xC0, 0x00, 0x1A, 0x00, // ##                 ## #  
	0xC0, 0x00, 0x3F, 0x80, // ##                #######
	0x80, 0x00, 0x20, 0x80, // #                 #     #
	0x80, 0x00, 0x00, 0x80, // #                       #
	0x80, 0x00, 0x00, 0x80, // #                       #
	0x80, 0x00, 0x00, 0x80, // #                       #
	0x80, 0x00, 0x00, 0x80, // #                       #
	0x80, 0x00, 0x00, 0x80, // #                       #
	0x80, 0x00, 0x00, 0x80, // #                       #
	0xC0, 0x00, 0x00, 0x80, // ##                      #
	0xC0, 0x00, 0x00, 0x80, // ##                      #
	0x60, 0x00, 0x01, 0x00, //  ##                    # 
	0x20, 0x00, 0x03, 0x00, //   #                   ## 
	0x70, 0x00, 0x03, 0x00, //  ###                  ## 
	0x38, 0x00, 0x0E, 0x00, //   ###               ###  
	0x1C, 0x00, 0x1C, 0x00, //    ###             ###   
	0x0B, 0xFF, 0xF8, 0x00, //     # ###############    
 

	//2x13
	0x3F, 0xF0, //   ########## 
	0x20, 0x20, //   #       #  
	0x60, 0x30, //  ##       ## 
	0x40, 0x10, //  #         # 
	0xC0, 0x10, // ##         # 
	0x80, 0x18, // #          ##
	0x80, 0x18, // #          ##
	0x80, 0x08, // #           #
	0x80, 0x78, // #        ####
	0x80, 0xF8, // #       #####
	0x60, 0xD0, //  ##     ## # 
	0x38, 0x80, //   ###   #    
	0x5F, 0xC0, //  # #######     

};

Asteroid* new_asteroid(Vector pos, Vector vel, uint8_t size) {
	Asteroid *asteroid;
	asteroid = (Asteroid*) malloc(sizeof(Asteroid));
	asteroid->position = pos;
	vel.x += BASE_VELOCITY + (size * SIZE_VELOCITY_FACTOR); //when splitting asteroid; only need new velocity & decrement size
	vel.y += BASE_VELOCITY + (size * SIZE_VELOCITY_FACTOR);
	asteroid->velocity = vel;
	asteroid->size = size;
	return asteroid;
};

Asteroid_list* new_asteroid_list(void) {
	Asteroid_list* list;
	list = malloc(sizeof(Asteroid_list));
	list->list_size = ASTEROIDS_LIST_SIZE;
	list->start_index = 0;
	list->end_index = 0;
	list->num_asteroids = 0;
	return list;
};

void add_asteroid(Asteroid_list* list, Asteroid *asteroid) {
	asteroid->index = list->end_index;
	list->asteroids[list->end_index] = asteroid;
	list->end_index++;
	list->num_asteroids++;
	return;
}

void delete_asteroid_list(Asteroid_list*list) {
	uint8_t i;
	for(i = 0; i < list->end_index; i++) {
		free(list->asteroids[i]);
	}
	free(list);
}
void remove_asteroid(Asteroid_list* list, Asteroid* asteroid) {
	(*list->asteroids[asteroid->index]).index = -1;
	list->num_asteroids--;
	return;
};

// split asteroid
void split_asteroid(Asteroid_list * list, Asteroid * asteroid){
	if(asteroid->size < 2) { //if asteroid is Large or medium
		Asteroid *ast1 = new_asteroid(asteroid->position,asteroid->velocity,asteroid->size+1); //make 2 new asteroids
		Asteroid *ast2 = new_asteroid(asteroid->position,asteroid->velocity,asteroid->size+1);
		Vector split_vel = new_vector();
		add_asteroid(list, ast1); 	//first asteroid continues in same direction
		split_vel.x = asteroid->velocity.y;
		split_vel.y = asteroid->velocity.x;
		ast2->velocity = split_vel;
		add_asteroid(list,ast2); //second asteroid continues in opposite direction
	}
	draw_canvas_asteroid(asteroid);
	remove_asteroid(list, asteroid);
	return;
}

int count_asteroid(Asteroid_list* list) {
	return list->num_asteroids;
}
	
void update_asteroids(Asteroid_list* list) {
	uint8_t i;
	Asteroid* a;
	for(i = list->start_index; i < list->end_index; i++) {
		a = list->asteroids[i];
		if (a->index < 0)
			continue;
		a->position = add(a->position, a->velocity);
		wrap(&a->position);
	}
};

void draw_canvas_asteroid(Asteroid* a) {
	uint16_t prev_posX, prev_posY;
	uint8_t canvas_height, canvas_width;
		prev_posX = a->position.x - a->velocity.x - 5;
		prev_posY = a->position.y - a->velocity.y - 5;
		switch (a->size) {
			case 0: //large
				//calculate to index into bitmap array (for all three cases)
					canvas_height = LARGE_CANVAS_HEIGHT;
					canvas_width = LARGE_CANVAS_WIDTH;
					break;
			case 1: //medium
					canvas_height = MEDIUM_CANVAS_HEIGHT;
					canvas_width = MEDIUM_CANVAS_HEIGHT;
					break;
			case 2: //small
					canvas_height = SMALL_CANVAS_HEIGHT;
					canvas_width = SMALL_CANVAS_WIDTH;
		}
		lcd_draw_image(prev_posX, canvas_width, prev_posY, canvas_height, asteroidCanvas, BACKGROUND_COLOR, BACKGROUND_COLOR);
	
}

void draw_asteroids(Asteroid_list* list){
	uint8_t i, asteroid_width, asteroid_height, canvas_height, canvas_width;
	Asteroid* a;
	uint16_t prev_posX, prev_posY;
	int img_index = 0;
	for(i = list->start_index; i < list->end_index; i++) {
		a = list->asteroids[i];
		if (a->index < 0)
			continue;
		switch (a->size) {
			case 0: //large
				//calculate to index into bitmap array (for all three cases)
					asteroid_width = LARGE_ASTEROID_WIDTH;
					asteroid_height = LARGE_ASTEROID_HEIGHT;
					break;
			case 1: //medium
					asteroid_width = MEDIUM_ASTEROID_WIDTH;
					asteroid_height = MEDIUM_ASTEROID_HEIGHT;
					img_index = MEDIUM_BITMASK_ADDRESS;
					break;
			case 2: //small
					asteroid_width = SMALL_ASTEROID_WIDTH;
					asteroid_height = SMALL_ASTEROID_HEIGHT;
					img_index = SMALL_BITMASK_ADDRESS;
		}
		draw_canvas_asteroid(a);
		if ((a->position.x > LCD_DRAW_MIN && a->position.x < LCD_DRAW_MAX_X) && (a->position.y > LCD_DRAW_MIN && a->position.y < LCD_DRAW_MAX_Y))
			lcd_draw_image(a->position.x,asteroid_width,a->position.y,asteroid_height, &asteroidBitmaps[img_index],ASTEROID_COLOR, BACKGROUND_COLOR);
	}
	return;
};	

