
class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int a1 = 0, a2 = 0, b1 = 0, b2 = 0;

        for (int i = 0; i < stoi(arriveAlice.substr(0, 2)) - 1; i++)
            a1 += days[i];
        a1 += stoi(arriveAlice.substr(3, 2));

        for (int i = 0; i < stoi(leaveAlice.substr(0, 2)) - 1; i++)
            a2 += days[i];
        a2 += stoi(leaveAlice.substr(3, 2));

        for (int i = 0; i < stoi(arriveBob.substr(0, 2)) - 1; i++)
            b1 += days[i];
        b1 += stoi(arriveBob.substr(3, 2));

        for (int i = 0; i < stoi(leaveBob.substr(0, 2)) - 1; i++)
            b2 += days[i];
        b2 += stoi(leaveBob.substr(3, 2));

        int start = max(a1, b1);
        int end = min(a2, b2);

        return max(0, end - start + 1);
    }
};
