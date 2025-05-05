#include <iostream>
#include <vector>

// find min and max value of a vector

class FindValues{
    public:
        int findMinValueFunc(std::vector<int> vectorMain){
            int vectorMin;
            int currMin = vectorMain[0];
            
            for (int i = 0; i < vectorMain.size(); i++){
                if (vectorMain[i] < currMin){
                    currMin = vectorMain[i];
                }
            }
        
            vectorMin = currMin;
            return vectorMin;
        }
    
        int findMaxValueFunc(std::vector<int> vectorMain){
            int vectorMax;
            int currMax = vectorMain[0];
            
            for (int i = 0; i < vectorMain.size(); i++){
                if (vectorMain[i] > currMax){
                    currMax = vectorMain[i];
                }
            }
            
            vectorMax = currMax;
            return vectorMax;
        }
};

int main(){
    FindValues FindValuesObj;
    std::vector<int> vectorMain = {1, 2, 3, 4, 5};
    int vectorMin = FindValuesObj.findMinValueFunc(vectorMain);
    int vectorMax = FindValuesObj.findMaxValueFunc(vectorMain);
    
    std::cout << "Min: " << vectorMin << '\n';
    std::cout << "Max: " << vectorMax << '\n';
    
    std::cin.get();
    return 0;
}
