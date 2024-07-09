#include "setting.hpp"

void init_score_board() {
    extern ScoreBoard score_board ;
    for (int i = 0; i < 4; i++) score_board.score_num[i] = 0 ;

    score_board.font.loadFromFile("../font/3X5_____.TTF") ;
    score_board.text.setFont(score_board.font) ;
    score_board.text.setString("SCOREBOARD") ;
    score_board.text.setCharacterSize(font_size) ;
    score_board.text.setFillColor(sf::Color::Black) ;
    score_board.text.setPosition(score_board_x, score_board_y) ;

    score_board.images[0].loadFromFile("../images/trophy.png") ;
    score_board.images[1].loadFromFile("../images/apple_red.png") ;
    score_board.images[2].loadFromFile("../images/apple_orange.png") ;
    score_board.images[3].loadFromFile("../images/apple_yellow.png") ;
    for (int i = 0; i <= 3; i++) {
        score_board.sprite[i].setTexture(score_board.images[i]) ;
        score_board.sprite[i].setScale(icon_scale, icon_scale) ;
        score_board.sprite[i].setPosition(icon_x, icon_y + i * icon_interval) ;
    }

    for (int i = 0; i <= 3; i++) {
        score_board.scores[i].setFont(score_board.font) ;
        score_board.scores[i].setString("0") ;
        score_board.scores[i].setCharacterSize(score_size) ;
        score_board.scores[i].setFillColor(sf::Color::Black) ;
        score_board.scores[i].setPosition(score_x - score_board.scores[i].getLocalBounds().width, icon_y + i * icon_interval - 12) ;
    }
}

void update_scoreboard() {
    extern ScoreBoard score_board ;
    for (int i = 0 ; i <= 3; i++) {
        score_board.scores[i].setString(to_string(score_board.score_num[i])) ;
        score_board.scores[i].setPosition(score_x - score_board.scores[i].getLocalBounds().width, icon_y + i * icon_interval - 12) ;
    }
}

void draw_scoreboard() {
    extern ScoreBoard score_board ;
    extern sf::RenderWindow window ;
    window.draw(score_board.text) ;
    for (int i = 0; i <= 3; i++) {
        window.draw(score_board.sprite[i]) ;
        window.draw(score_board.scores[i]) ;
    }
}

void update_scoreboard_score() {
    extern Apple apple ;
    extern Python python ;
    extern ScoreBoard score_board ;

    apple.life_time++ ;
    if (apple.x == python.x[0] && apple.y == python.y[0]) {
        // TODO: Update scoreboard.

        // code here

        spawn_apple() ;
    }
}