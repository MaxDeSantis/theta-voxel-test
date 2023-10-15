
#include "bingbong.hpp"

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

BingBong::BingBong()
{
    count = 0;
}

BingBong::~BingBong()
{
}

void BingBong::add(int p_value)
{
    count += p_value;
}

void BingBong::reset()
{
    count = 0;
}

int BingBong::get_total() const
{
    return count;
}

void BingBong::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("add", "value"), &BingBong::add, DEFVAL(1));
    ClassDB::bind_method(D_METHOD("reset"), &BingBong::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &BingBong::get_total);
}