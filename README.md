std::string extension
======================

This header file adds some template functions to make string's operations easier.

To use it, just add to your project and it's good. Example :

```c
std::string text = "Hey people !\nHere's a little std::string extension !"
std::vector<std::string> st = String_utils::split<std::string>(text, "\n");

//Results :
st[0] = "Hey people !"
st[1] = "Here's a little std::string extension !"
```

##License

    Copyright (c) 2014 Guillaume Gomez

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    Come on, don't tell me you read that.
