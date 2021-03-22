#include <string>
#include "Direction.hpp"
#include <unordered_map>
using namespace std;
namespace ariel{
    class Board{
        public:
            unordered_map<unsigned int,unordered_map<unsigned int,char>> my_board;
            Board();
            void post(unsigned int row,unsigned int col,Direction dir,string input_str);
            string read(unsigned int row,unsigned int col,Direction dir,unsigned int num_of_letters);
            void show();

    };
}
