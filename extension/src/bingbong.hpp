
#ifndef BINGBONG_HPP
#define BINGBONG_HPP

// We don't need windows.h in this plugin but many others do and it throws up on itself all the time
// So best to include it and make sure CI warns us when we use something Microsoft took for their own goals....
#ifdef WIN32
#include <windows.h>
#endif

#include <godot_cpp/classes/ref.hpp>

using namespace godot;

class BingBong : public RefCounted
{

    GDCLASS(BingBong, RefCounted);

    int count;

protected:
    static void _bind_methods();

public:
    BingBong();
    ~BingBong();

    void add(int p_value);
    void reset();
    int get_total() const;

};


#endif // BINGBONG_HPP