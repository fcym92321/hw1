#include <iostream>
#include <curses.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

 int r,c, // current row and column (upper-left is (0,0))

        nrows, // number of rows in window

        ncols; // number of columns in window


// The function
//   First parameter:  The base to convert to
//   Second parameter: The number to be converted
int DecToBin(int iNumber)
{
	
	int iResult = iNumber % 2;
	int iMultiplier = 10;
	
	while((iNumber /= 2) > 0)
	{	
		iResult = (iNumber % 2) * iMultiplier + iResult;
		iMultiplier *= 10;
	}

	return iResult;
}



int main(){
vector< vector<int> > vec;
vec.push_back(vector<int>(3,0));
vec.push_back(vector<int>(3,1));

//display the matrix
/*
for(int i=0;i<vec.size();i++){
	for(int j=0;j<vec[i].size();j++){
		cout<<vec[i][j]<<" ";
	}
	cout<<endl;
}
*/

//Window initialization

 WINDOW *wnd;
 wnd = initscr(); // curses call to initialize window
  noecho(); // curses call to set no echoing
      getmaxyx(wnd,nrows,ncols); // curses call to find size of window
      clear(); // curses call to clear screen, send cursor to position (0,0)
      refresh(); // curses call to implement all changes since last refresh
      r = 0; c = 0;


//string instr;
char d,*str;
//  while ((d = getch())!='\n') {
while(1){
//getline (cin,instr);

move(r,c);
scanw("%s",str);

printw("input: %s",str);

/*
for(int i = 0; i<instr.length(); i++){
	insch(instr[i]);
}
*/
//addch(d);
refresh();

 c++; // go to next row

      // check for need to shift right or wrap around

      if (c == ncols) {
          break;
	}
}

return 0;
}
