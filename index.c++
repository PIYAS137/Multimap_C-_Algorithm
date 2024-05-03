#include <iostream>
#include <map>
#include <string>
using namespace std;

// Function to print category catalog
void print_category_catalog(multimap<string, string> category_catalog) {
    string prev_category = "";
    for (auto it = category_catalog.begin(); it != category_catalog.end(); ++it) {
        if (prev_category != it->first) {
            cout << "Category: " << it->first << endl;
            prev_category = it->first;
        }
        cout << "\tContent: " << it->second << endl;
    }
}

// Function to print user playlists
void print_user_playlists(multimap<int, string> user_playlists) {
    int prev_user_id = -1;
    for (auto it = user_playlists.begin(); it != user_playlists.end(); ++it) {
        if (prev_user_id != it->first) {
            cout << "User ID: " << it->first << endl;
            prev_user_id = it->first;
        }
        cout << "\tPlaylist: " << it->second << endl;
    }
}

int main() {
    // Creating Category catalog multimap
    multimap<string, string> category_catalog;
    // Creating User playlist multimap
    multimap<int, string> user_playlists;

    // Add content to the category catalog
    category_catalog.insert({"Fiction", "Book A"});
    category_catalog.insert({"Fiction", "Book B"});
    category_catalog.insert({"Mystery", "Book B"});
    category_catalog.insert({"Thriller", "Book C"});
    category_catalog.insert({"Thriller", "Book D"});
    category_catalog.insert({"Non-Fiction", "Book E"});
    category_catalog.insert({"Non-Fiction", "Book F"});
    category_catalog.insert({"Non-Fiction", "Book G"});
    category_catalog.insert({"Articles", "Article X"});
    category_catalog.insert({"Articles", "Article Y"});

    // Add content to user playlists
    user_playlists.insert({101, "Book A"});
    user_playlists.insert({101, "Book B"});
    user_playlists.insert({101, "Book C"});
    user_playlists.insert({102, "Book D"});
    user_playlists.insert({102, "Article X"});
    user_playlists.insert({103, "Book F"});
    user_playlists.insert({103, "Book G"});
    user_playlists.insert({103, "Article Y"});

    cout << "\n======================= Category Catalog =======================" << endl;
    print_category_catalog(category_catalog);

    cout << "\n======================= User Playlists =======================" << endl;
    print_user_playlists(user_playlists);

    return 0;
}