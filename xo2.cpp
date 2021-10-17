#include <iostream>
class Game
{
private:
char n;
public:
void matrix();
void Print();
bool is_legal_x(int&, char&);
bool is_legal_o(int&, char&);
bool is_victory(int&);
bool is_victory_o(int&);
};
char arr[3][3];
int check = 0;

void Game::Print(){

int m = 0;
int n = 0;
for(int i = 0; i < 1; ++i){
for(int i = 0; i < 1; ++i)
 std::cout << "__________________" << std::endl;
 for(int i = 0; i < 3; ++i){
if(i == 1){
m = 1;
n = 0;}
if(i == 2){
m = 2;
n = 0;
}
  std::cout << "|" << arr[m][n] << "    " << "|" << arr[m][++n] << "    " << "|" << arr[m][++n] << "   " << "|" << std::endl;

  

 std::cout << "|" << "     " << "|" << "     " << "|" << "    " << "|" << std::endl;


 std::cout << "__________________" << std::endl;
}
 }
}

void Game::matrix(){

for(int i = 0; i < 3; ++i){
 for(int j = 0; j < 3; ++j){
arr[i][j] = 'n';
 }
}
}



bool Game::is_victory_o(int& n)

{
if((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') || (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') || (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') || (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') || (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') || (arr[0][2]== 'O' && arr[1][1] == 'O' && arr[2][0] == 'O') || (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' || arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')){

check = 123;

return true;
}

return false;

}




bool Game::is_victory(int & n)
{
	
if((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') || (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') || (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') || (arr[0][2]== 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') || arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' || (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')){


check = 123;

return true;
}

return false;

}


bool Game::is_legal_x(int& n, char& str){
Game p;


if(!is_victory(n)){

if(n == 1)
{

 if(arr[0][0] == 'n')
 {
  arr[0][0] = 'X';
 }
  else {return false;}

}



if(n == 2)
{
 if(arr[0][1] == 'n')
 {
  arr[0][1] = 'X';
 }
  else {return false;}

}



if(n == 3)
{
 if(arr[0][2] == 'n')
 {
  arr[0][2] = 'X';
 }
  else {return false;}

}



if(n == 4)
{
 if(arr[1][0] == 'n')
 {
  arr[1][0] = 'X';
 }
  else {return false;}

}




if(n == 5)
{
 if(arr[1][1] == 'n')
 {
  arr[1][1] = 'X';
 }
  else {return false;}

}



if(n == 6)
{
 if(arr[1][2] == 'n')
 {
  arr[1][2] = 'X';
 }
  else {return false;};

}



if(n == 7)
{
 if(arr[2][0] == 'n')
 {
  arr[2][0] = 'X';
 }
  else {return false;}

}



if(n == 8)
{
 if(arr[2][1] == 'n')
 {
arr[2][1] = 'X';
}
 else {return false;}

}



if(n == 9)
{
 if(arr[2][2] == 'n')
 {
  arr[2][2] = 'X';
 }
  else {return false;}

}


}
if(is_victory(n)){
check = 123;
str = 'X';
}


if(!is_victory(n)){
str = 'O';
}

return true;
}


bool Game::is_legal_o(int& n, char& str){

if(str != 'O'){return false;}

if(!is_victory_o(n)){

if(n == 1)
{
 if(arr[0][0] == 'n')
 {
  arr[0][0] = 'O';
 }
 else {return false;}
}

if(n == 2)
{
 if(arr[0][1] == 'n')
 {
  arr[0][1] = 'O';
 }
 else {return false;}
}

if(n == 3)
{
 if(arr[0][2] == 'n')
 {
  arr[0][2] = 'O';
 }
 else{return false;}
}

if(n == 4)
{
 if(arr[1][0] == 'n')
 {
  arr[1][0] = 'O';
 }
 else{ return false;}
}

if(n == 5)
{
 if(arr[1][1] == 'n')
 {
  arr[1][1] = 'O';
 }
 else {return false;}
}


if(n == 6)
{
 if(arr[1][2] == 'n')
 {
  arr[1][2] = 'O';
 }
 else{
 return false;}
}


if(n == 7)
{
 if(arr[2][0] == 'n')
 {
  arr[2][0] = 'O';
 }
 else{
 return false;}
}

if(n == 8)
{
 if(arr[2][1] == 'n')
 {
arr[2][1] = 'O';
}
 else {return false;}

}


if(n == 9)
{
 if(arr[2][2] == 'n')
 {
  arr[2][2] = 'O';
 }
  else {return false;}

}

}
if(is_victory_o(n)){

check = 123;
str = 'O';
}

if(!is_victory_o(n)){
str = 'X';}
return true;


}
int main(){
Game g;
int n;

char ch;
char str = 'X';
int count = 1;
g.matrix();

 while(check != 123){
system("clear");

w:
e:
g.Print();

std::cout << "Move of  " << str;
std::cout << "\nEnter your number please\t";
std::cin >> n;

if(n > 0 && n <= 9){

if(count % 2 != 0){

if(g.is_legal_x(n, str)){
++count;
}
else {goto e;}

if(count == 10){
break;
}

if(check == 123){

break;
}
}


else if(count % 2 == 0){
if(g.is_legal_o(n, str)){

++count;}

else {goto e;}
}
}
else {goto w;}
}

g.Print();
std::cout << "\n END OF GAME\n";

if(count != 10){std::cout << "\nThe winner is\t" << str << '\n';}

if(count == 10){std::cout << "\nThere is no winner\n";}
std::cout << "\nTHANK YOU!!\n";


}


