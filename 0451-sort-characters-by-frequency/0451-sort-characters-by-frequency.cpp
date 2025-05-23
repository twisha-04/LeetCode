class Solution {
public:
    string frequencySort(string s) {
    vector<int> freq(256,0);
     for(char ch:s)
     {
            freq[ch]++;
     } 
     vector<pair<char, int>> freqVec;
        for (int i = 0; i < 256; ++i) {
            if (freq[i] > 0) {
                freqVec.push_back({(char)i, freq[i]});
            }
        }
        sort(freqVec.begin(), freqVec.end(), [](pair<char, int>& a,pair<char, int>& b) {
            return a.second > b.second;
        });
        string result;
        for (auto &p : freqVec) {
            result += std::string(p.second, p.first);
        }

        return result;
    }
};