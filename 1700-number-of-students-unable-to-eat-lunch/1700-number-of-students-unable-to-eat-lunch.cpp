class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stud;
        for(int i=0;i<students.size();i++)
        {
            stud.push(students[i]);
        }
        int i = 0;
        int left = 0;
        while(!stud.empty() && left<stud.size())
        {
            if(stud.front()==sandwiches[i])
            {
                stud.pop();
                i++;
                left=0;
            }
            else
            {
                stud.push(stud.front());
                stud.pop();
                left++;
            }
        }
        return left;
    }
};