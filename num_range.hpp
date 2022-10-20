#pragma once

class range
{
private:
    int m_start, m_end, m_incr;

public:
    range(int start = 0, int end = 0, int next_state = 1)
        : m_start(start), m_end(end), m_incr(next_state)
    {
        if (m_end < m_start and m_incr > 0)
        {
            throw "Can be executed infinitely";
        }
    }

    int operator()()
    {
        if (m_start < m_end)
        {
            auto i = m_start;
            m_start += m_incr;
            return i;
        }
        return INT32_MAX;
    }
};