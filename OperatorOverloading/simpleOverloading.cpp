#include <iostream>
using namespace std;

struct YouTubeChannel {
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subs) {
        Name = name;
        SubscribersCount = subs;
    }
};
void operator<<(ostream& out, const YouTubeChannel& yt) {
    out << "Name: " << yt.Name << endl;
    out << "Subscribers: " << yt.SubscribersCount << endl;
}

int main() {
    YouTubeChannel yt1("CodeBeauty", 75000);
    cout << yt1;   // Works
    operator<<(cout,yt1);
    // cout << yt1 << yt2; // DOES NOT WORK (no chaining)
}
