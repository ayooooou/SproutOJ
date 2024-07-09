#include "setting.hpp"

void init_grids() {
    extern GameGrid grids ;
    extern sf::Color color_list[3] ;

    for (int i = 0; i < col_num; i++) {
        for (int j = 0; j < row_num; j++) {
            grids.x[i][j] = board_left + grid_length * i ;
            grids.y[i][j] = board_top + grid_length * j ;
            grids.grid_color[i][j] = color_list[(i + j) % 3] ;

        }
    }
}

void draw_grids() {
    extern GameGrid grids ;
    extern sf::RenderWindow window ;

    for (int i = 0; i < col_num; i++) {
        for (int j = 0; j < row_num; j++) {
            grids.rectangles[i][j].setSize(sf::Vector2f(grid_length, grid_length)) ;
            grids.rectangles[i][j].setPosition(grids.x[i][j], grids.y[i][j]) ;
            grids.rectangles[i][j].setFillColor(grids.grid_color[i][j]) ;
            window.draw(grids.rectangles[i][j]) ;
        }
    }
}

void init_gameboard_frame() {
    extern sf::RectangleShape gameboard_frameline ;
    gameboard_frameline.setOutlineThickness(gameboard_thick) ;
    gameboard_frameline.setPosition(board_left, board_top) ;
    gameboard_frameline.setOutlineColor(board_frameline_green) ;
}