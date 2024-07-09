#include "setting.hpp"

void set_game_over() {
    extern ScoreBoard score_board ;
    extern sf::RenderWindow window ;
    extern bool win_game ;
    if (win_game) {
        score_board.game_over.setString("You win!\n") ;
    } else {
        score_board.game_over.setString("Game Over!\n") ;
    }
    score_board.game_over.setFont(score_board.font) ;
    score_board.game_over.setCharacterSize(game_over_size) ;
    score_board.game_over.setFillColor(sf::Color::White) ;
    score_board.game_over.setPosition(game_over_x - score_board.game_over.getLocalBounds().width / 2, game_over_y) ;

    score_board.restart.setFont(score_board.font) ;
    score_board.restart.setString("press Z to restart\n") ;
    score_board.restart.setCharacterSize(restart_size) ;
    score_board.restart.setFillColor(sf::Color::White) ;
    score_board.restart.setPosition(restart_x, restart_y) ;

    for (int i = 0; i <= 3; i++) {
        score_board.sprite[i].setPosition(icon_x - game_over_shift_x, icon_y + i * icon_interval - game_over_shift_y) ;
        window.draw(score_board.sprite[i]) ;
    }

    for (int i = 0; i <= 3; i++) {
        score_board.scores[i].setFillColor(sf::Color::White) ;
        score_board.scores[i].setPosition(score_x - score_board.scores[i].getLocalBounds().width - game_over_shift_x, icon_y + i * icon_interval - 12 - game_over_shift_y) ;
        window.draw(score_board.scores[i]) ;
    }

    window.draw(score_board.game_over) ;
    window.draw(score_board.restart) ;
    window.display() ;
} 

void initiate() {
    extern bool game_running ;
    extern sf::RectangleShape background ;
    extern bool close_window ;
    extern bool win_game ;
    win_game = false ;
    close_window = false ;
    game_running = true ;
    background.setFillColor(background_color) ;
    init_grids() ;
    init_gameboard_frame() ;
    init_python() ;
    init_score_board() ;
    spawn_apple() ;
}

void update() {
    update_python() ;
    update_scoreboard_score() ;
    update_scoreboard() ;
}

void draw() {
    extern sf::RenderWindow window ;
    extern sf::RectangleShape background ;
    extern sf::RectangleShape gameboard_frameline ;
    window.draw(background) ;
    window.draw(gameboard_frameline) ;
    draw_grids() ;
    draw_python() ;
    draw_apple() ;
    draw_scoreboard() ;
    window.display() ;
}

bool start_game() {
    extern sf::RenderWindow window ;
    extern sf::Event event ;
    extern int current_direction ;
    extern bool game_mode ;
    bool to_start = false ;
    if (game_mode == true) {
        auto_mode() ;
        return false ;
    }
    while (!to_start) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close() ;
                return true ;
            }
            
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Up) {
                    current_direction = 1 ;
                } else if (event.key.code == sf::Keyboard::Down) {
                    current_direction = 3 ;
                } else if (event.key.code == sf::Keyboard::Left) {
                    current_direction = 0 ;
                } else if (event.key.code == sf::Keyboard::Right) {
                    current_direction = 2 ;
                } else {
                    continue ;
                }
                to_start = true ;
                break ;
            }

            
        }
    }
    return false ;
}

bool choose_mode() {
    extern sf::RenderWindow window ;
    extern sf::Event event ;
    extern bool game_mode ; 
    extern Menu menu ;
    menu.image.setSmooth(false);
    menu.image.loadFromFile("../images/menu.png") ;
    menu.menu.setTexture(menu.image) ;
    menu.menu.setScale(0.49f, 0.49f) ;
    menu.menu.setOrigin(menu.menu.getLocalBounds().width / 2, menu.menu.getLocalBounds().height / 2) ;
    menu.menu.setPosition(window_width / 2, window_height / 2) ;

    window.draw(menu.menu) ;
    window.display() ;
    while(1) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close() ;
                return true ;
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::X) {
                    game_mode = false ;
                } else if (event.key.code == sf::Keyboard::C) {
                    game_mode = true ;
                } else {
                    continue ;
                }
                window.clear() ;
                return false ;
            }
        }
    }
    return false ;
}