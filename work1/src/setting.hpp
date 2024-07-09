#ifndef SETTING_H
#define SETTING_H

// Time
#define frame_rate 5.0f // per second

// Game board design
#define window_width 1050
#define window_height 650
#define game_name "Sprouthon"
#define board_top 25
#define board_left 25
#define col_num 16
#define row_num 15
#define grid_length 40
#define gameboard_thick 5
#define gameboard_width (col_num * grid_length)
#define gameboard_height (row_num * grid_length)

// Python Design
#define python_head_size 32.0f
#define python_body_size 26.0f
#define python_init_x 7
#define python_init_y 7
#define PYTHON_MAX_LENGTH (col_num * row_num)
#define init_direction 0

// Apple Design
#define red_duration 15
#define orange_duration 30

// Scoreboard Design
#define score_board_x 700
#define score_board_y 25
#define font_size 60
#define icon_x (score_board_x + 20)
#define icon_y (score_board_y + 120)
#define icon_interval 80
#define icon_scale 1.3f
#define score_size 60
#define score_x (score_board_x + 300)

// Game Over Design
#define game_over_x (window_width / 2)
#define game_over_y 50
#define game_over_size 100
#define restart_x 700
#define restart_y 600
#define restart_size 36
#define game_over_shift_x 330
#define game_over_shift_y - 50

// Colors
#define light_grey sf::Color(120, 120, 120)
#define dark_grey sf::Color(70, 70, 70)
#define dark_dark_green sf::Color(60, 100, 41)
#define dark_green sf::Color(157, 173, 85)
#define medium_green sf::Color(180, 192, 116)
#define light_green sf::Color(203, 211, 148)
#define background_color sf::Color(255, 255, 255)
#define board_frameline_green sf::Color(142, 147, 103)
#define python_blue sf::Color(0, 0, 55)
#define apple_red sf::Color(237, 23, 23)
#define apple_orange sf::Color(246, 131, 12)
#define apple_yellow sf::Color(255, 238, 0)

// Header Files
#include <iostream>
#include <random>
#include <ctime>
#include <string>
#include <SFML/Graphics.hpp>
using namespace std ;

// function prototypes
void init_score_board() ;
void update_scoreboard() ;
void draw_scoreboard() ;
void init_python() ;
void update_python() ;
void draw_python() ;
void init_grids() ;
void draw_grids() ;
void init_gameboard_frame() ;
bool start_game() ;
void set_game_over() ;
void initiate() ;
void update() ;
void draw() ;
void auto_mode() ;
bool choose_mode() ;
void spawn_apple() ;
void update_scoreboard_score() ;
void draw_apple() ;


struct GameGrid {
    sf::Color grid_color[col_num][row_num] ;
    sf::RectangleShape rectangles[col_num][row_num] ;
    int x[col_num][row_num], y[col_num][row_num] ;
} ;

struct Python {
    sf::Sprite sprites[PYTHON_MAX_LENGTH] ;
    sf::Texture body_images[3] ;
    sf::Texture head ;
    int length, x[PYTHON_MAX_LENGTH], y[PYTHON_MAX_LENGTH], direction[PYTHON_MAX_LENGTH], colors[PYTHON_MAX_LENGTH] ;
    bool board_occupied[col_num][row_num] ;
} ;

struct Apple {
    sf::Texture images[3] ;
    sf::Sprite sprite ;
    int life_time, x, y, color ;
} ;

struct ScoreBoard {
    sf::Font font ;
    sf::Text text ;
    sf::Texture images[4] ;
    sf::Sprite sprite[4] ;
    sf::Text scores[4] ;
    sf::Text game_over ;
    sf::Text restart ;
    int score_num[4] ;
} ;

struct Menu {
    sf::Texture image ;
    sf::Sprite menu ;
} ;

#endif