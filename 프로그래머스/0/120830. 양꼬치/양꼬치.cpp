#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int discount = n / 10;
    int answer = (n * 12000) + (k * 2000) - (discount * 2000);
    
    return answer;
}