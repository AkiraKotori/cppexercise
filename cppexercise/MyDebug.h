#pragma once
class MyDebug
{
public:
    constexpr MyDebug(bool h, bool i, bool o) :hw(h), io(o), others(o) {}
    constexpr bool any()  { return hw || io || others; }
    bool set_io(bool i)
    {
        io = i;
        return io;
    }
private:
    bool hw;
    bool io;
    bool others;

};

