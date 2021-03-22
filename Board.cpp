#include <string>
#include "Direction.hpp"
#include "Board.hpp"
#include <iostream>
#include <unordered_map>
using namespace std;
namespace ariel{

            Board::Board(){
            };
            void Board::post(unsigned int row,unsigned int col,Direction dir,string input_str){
              if(dir==Direction::Horizontal){
              for(unsigned int i=0;i<input_str.length();i++){
              my_board[row][col+i]=input_str[i];
              }
              }
              else{
              for(unsigned int i=0;i<input_str.length();i++){
              my_board[row+i][col]=input_str[i];
              }
              }

            }
            string Board::read(unsigned int row,unsigned int col,Direction dir,unsigned int num_of_letters){
                string out_str;
                if(dir==Direction::Horizontal){
                for(unsigned int i=0;i<num_of_letters;i++){
                if (my_board.find(row) == my_board.end()||my_board[row].find(col+i)== my_board[row].end()){
                    out_str+="_";
                }
                else{
                    out_str+=my_board[row][col+i];
                }
                }
                }
                else{
                for(unsigned int i=0;i<num_of_letters;i++){
                if (my_board.find(row+i) == my_board.end()||my_board[row+i].find(col)== my_board[row+i].end()){
                    out_str+="_";
                }
                else{
                    out_str+=my_board[row+i][col];
                }
                }

                }
                return out_str;
                }    
            void Board::show(){}
}
