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
// Correct overload that allows chaining
ostream& operator<<(ostream& out, const YouTubeChannel& yt) {
    out << "Name: " << yt.Name 
        << ", Subscribers: " << yt.SubscribersCount;
    return out;   // VERY IMPORTANT
}
int main() {
    YouTubeChannel yt1("CodeBeauty", 75000);
    YouTubeChannel yt2("My second channel", 80000);
    cout << yt1 << "  " << yt2 << endl;  // Works
    
}
