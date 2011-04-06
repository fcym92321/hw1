#include <curses.h>
#include <iostream>

using namespace std;

 int r,c, // current row and column (upper-left is (0,0))

        nrows, // number of rows in window

        ncols; // number of columns in window

int main(){

 WINDOW *wnd;
 wnd = initscr(); // curses call to initialize window
  noecho(); // curses call to set no echoing

      getmaxyx(wnd,nrows,ncols); // curses call to find size of window

      clear(); // curses call to clear screen, send cursor to position (0,0)

      refresh(); // curses call to implement all changes since last refresh

      r = 0; c = 0;

return 0;
}
