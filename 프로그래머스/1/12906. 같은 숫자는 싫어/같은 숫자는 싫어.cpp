#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    // 빈 배열 예외 처리
    if(arr.empty())
        return answer;
    
    // 첫 번째 요소 추가
    answer.push_back(arr[0]);
    
    // 이전 값과 다른 때만 추가
    for(int i = 1; i < arr.size(); ++i)
    {
        if(arr[i] != arr[i - 1])
            answer.push_back(arr[i]);
    }
    
    return answer;
}