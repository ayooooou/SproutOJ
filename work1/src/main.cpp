#include "setting.hpp"

// Global Variables
sf::RenderWindow window(sf::VideoMode(window_width, window_height), game_name) ;
sf::RectangleShape background(sf::Vector2f(window_width, window_height)) ;
sf::RectangleShape gameboard_frameline(sf::Vector2f(gameboard_width, gameboard_height)) ;
sf::Clock game_clock;
sf::Time updateTime = sf::seconds(1.0f / frame_rate) ;
sf::Color color_list[3] = {dark_green, medium_green, light_green} ;
sf::Event event ;
Menu menu ;
GameGrid grids ;
Python python ;
Apple apple ;
ScoreBoard score_board ;
int current_direction = init_direction ;
bool win_game ;
bool game_running ;
bool game_mode ;
bool close_window ;

int main() {
    while (window.isOpen()) {
            close_window = choose_mode() ;
            if (close_window == true) return 0 ;
            initiate() ;
            draw() ;
            close_window = start_game() ;
            if (close_window == true) return 0 ;
        while (game_running) {
            if (game_mode == true) {
                auto_mode() ;
            } 
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close() ;
                    return 0 ;
                }
                if (game_mode == false && event.type == sf::Event::KeyPressed) {
                    if (event.key.code == sf::Keyboard::Up) {
                        current_direction = 1 ;
                    } else if (event.key.code == sf::Keyboard::Down) {
                        current_direction = 3 ;
                    } else if (event.key.code == sf::Keyboard::Left) {
                        current_direction = 0 ;
                    } else if (event.key.code == sf::Keyboard::Right) {
                        current_direction = 2 ;
                    }
                }

                if (game_clock.getElapsedTime() >= updateTime) break ;
            }
            if (game_clock.getElapsedTime() >= updateTime) {
                game_clock.restart() ;
                window.clear() ;
                update() ;
                if (!game_running) break ;
                draw() ;
            } else {
                sf::sleep(updateTime - game_clock.getElapsedTime()) ;
            }
        }
        set_game_over() ;
        while (!game_running && window.isOpen()) {
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close() ;
                    return 0 ;
                } else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Z) {
                    game_running = true ;
                }
            }
        }
        window.clear() ;
    }
}