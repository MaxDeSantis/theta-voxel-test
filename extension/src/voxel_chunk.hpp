
#ifndef VOXEL_CHUNK_HPP
#define VOXEL_CHUNK_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/core/class_db.hpp>

#ifdef WIN32
#include <windows.h>
#endif

using namespace godot;

class VoxelChunk : public RefCounted
{

    GDCLASS(VoxelChunk, RefCounted);
    
public:
    VoxelChunk();
    ~VoxelChunk();

    void init_size(int size);
    PackedByteArray get_data_image();


protected:
    static void _bind_methods();


private:

    std::vector<int> voxel_types;
    int size;

};

#endif // VOXEL_CHUNK_HPP