#pragma once
#include <string>
#include <iostream>

class Screen
{
public:
    using pos = size_t;
    Screen() = default;
    Screen(pos w, pos h) :width(w), height(h), contents(w*h, ' ') {}
    Screen(pos w, pos h, char c) :width(w), height(h), contents(w*h, c) {}
    Screen &move(pos w, pos h)
    { 
        cursor = width*h + w;
        return *this;
    }
    Screen &set(pos w, pos h, char c)
    {
        cursor = width*h + w;
        contents[cursor] = c;
        return *this;
    }
    Screen &set(char c)
    {
        contents[cursor] = c;
        return *this;
    }
    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }
    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
   
private:
    pos cursor = 0;
    pos width = 0, height = 0;
    std::string contents;
    void do_display(std::ostream &os) const
    {
        for (pos h = 0; h != height; ++h)
        {
            for (pos w = 0; w != width; ++w)
                os << contents[width*h + w];
            os << std::endl;
        }
    }
};

