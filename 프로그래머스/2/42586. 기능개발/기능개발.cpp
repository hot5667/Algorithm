#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    //얼마만큼 일수가 걸리나요? 그걸 저장해서 체크합니다.
    vector<int> days; // 완료 되는데 걸리는 날짜 저장 변수
    
    for(int i = 0; i < progresses.size(); ++i)
    {
        //남은 작업량 계산
        int reamining = 100 - progresses[i];
        
        //만약 소수점으로 계산이 된다면 올림처리해서 해야함 7.2 -> 8 
        int day = (reamining + speeds[i] - 1) / speeds[i];

        //days <- 걸리는 날짜를 저장합니다.
        days.push_back(day);
    }
    
    //각 적업이 완료되는 날짜가 얼마인가요? 계산
    int maxDay = days[0]; // 첫번째 기능이 끝나는 날로 기준으로 잡아서 저장
    int count = 0;
    
    //배포를 7일 단위로 계산합니다. 그럼 그룹으로 편성해서 제작합니다.
    //maxday 몇이니? 7일 이상이면 다음 배열로 저장해야합니다.
    
    for(int i = 0; i < days.size(); ++i)
    {
        if(days[i] <= maxDay)
        {
            count++;
        }
        else
        {
            answer.push_back(count);
            count = 1;
            maxDay = days[i];
        }
    }
    
    //마지막으로 배포된 그룹을 추가해주세요.
     answer.push_back(count);
    
    return answer;
}