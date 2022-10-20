#ifndef SPAWNS
#define SPAWNS

#include <string>

#ifdef DEBUG
#include <iostream>
#endif

class spawns
{
private:
    std::string m_name;
    int m_responsiblity;

public:
    spawns(const char *name, int responsiblity)
        : m_name(name), m_responsiblity(responsiblity)
    {
    }

    std::string get_name()
    {
        return m_name;
    }

#ifdef DEBUG
    friend std::ostream &operator<<(std::ostream &os, const spawns s);
#endif
};

#ifdef DEBUG
std::ostream &operator<<(std::ostream &os, const spawns s)
{
    os << "Name: " << s.m_name << " , Responsiblity: " << s.m_responsiblity;
    return os;
}
#endif

#endif // SPAWNS_HPP
