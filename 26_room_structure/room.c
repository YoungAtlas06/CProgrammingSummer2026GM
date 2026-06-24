#include <stdio.h>

#define MAX_WALLS 10

//-------------Structures------------------
//Create a rectangle structure
typedef struct {
    double width, height;
}Rectangle;

//Create a room structure
typedef struct{
    Rectangle walls[MAX_WALLS];
    int wall_count;
} Room;

//------------------Prototypes-------------------
Rectangle Rectangle_create(double w, double h);
double Rectangle_getPerimeter(const Rectangle* r);
void Rectangle_print(const Rectangle* r);
Room Room_create(void);
void Room_addWall(Room* r, double w, double h);
void Room_print(const Room* r);
//ToDo
double Room_getWallsPerimeter(const Room* r);
void Room_printIntiFile(const Room* r, const char* file_name);

int main(void){
    Rectangle r = Rectangle_create(12.5, 10.3);
    Rectangle_print(&r);

    Room living_room = Room_create();
    Room_addWall(&living_room, 10.6, 23.4);
    Room_addWall(&living_room, 11.6, 22.4);
    Room_addWall(&living_room, 12.6, 21.4);
    Room_addWall(&living_room, 13.6, 20.4);

    Room_print(&living_room);

    return 0;
}

Rectangle Rectangle_create(double w, double h){
    Rectangle r = {w, h};

    return r;
}

double Rectangle_getPerimeter(const Rectangle* r){
    return 2 * (r->width + r->height);
}

void Rectangle_print(const Rectangle* r){
    double perim = Rectangle_getPerimeter(r);
    printf("[%.2lfx%.2lf, %.2lf]\n", r->width, r->height, perim);
}

Room Room_create(void){
    Room room = {.wall_count = 0};

    return room;
}

void Room_addWall(Room* r, double w, double h){
    if (r->wall_count >= MAX_WALLS){
        printf("Cannot have more that %d walls\n", MAX_WALLS);
    }
    else{
            Rectangle wall = Rectangle_create(w,h);
            r->walls[r->wall_count] = wall;
            r->wall_count++;
        }
}

void Room_print(const Room* r){
    printf("There's %d walls\n", r->wall_count);
    for(int i = 0; i < r->wall_count; i++){
        printf("Wall %d:", i);
        Rectangle_print(r->walls + i);
    }
}