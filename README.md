=============================
=== std::string extension ===
=============================

This header file adds some template functions to make string's operations easier.

To use it, just add to your project and it's good. Example :

std::string text = "Hey people !\nHere's a little std::string extension !"
std::vector<std::string> st = Utility::split<std::string>(text, "\n");

Results :
st[0] = "Hey people !"
st[1] = "Here's a little std::string extension !"