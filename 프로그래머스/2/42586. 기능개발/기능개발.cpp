#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
	vector<int> answer;
	vector<int> days;
	

	for (int i = 0; i < progresses.size(); ++i)
	{
		int reamining = 100 - progresses[i]; //남은 작업량
		int day = (reamining + speeds[i] - 1) / speeds[i]; //올림
		days.push_back(day);
	}
    
    int maxDay = days[0];
	int count = 0;
    
	for (int i = 0; i < days.size(); ++i)
	{
		if (days[i] <= maxDay)
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

	answer.push_back(count);

	return answer;
}
