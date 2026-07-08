/*
 * @lc app=leetcode id=657 lang=cpp
 *
 * [657] Robot Return to Origin
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        int i = 0;
        while(i<moves.size()){
            moves[i] == 'L' ? x-- : 0;
            moves[i] == 'R' ? x++ : 0;
            moves[i] == 'U' ? y++ : 0;
            moves[i] == 'D' ? y-- : 0;
            i++;
        }
        if(x==0 && y==0){
            return true;
        }
        return false;
    }
};
// @lc code=end

