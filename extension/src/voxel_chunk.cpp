
#include "voxel_chunk.hpp"

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

VoxelChunk::VoxelChunk()
{

}

VoxelChunk::~VoxelChunk()
{

}

void VoxelChunk::init_size(int size)
{
    this->size = size;
    this->voxel_types.resize(size*size);
    for (int i = 0; i < voxel_types.size(); ++i)
    {
        this->voxel_types.at(i) = 0;
    }
}

PackedByteArray VoxelChunk::get_data_image()
{
    PackedByteArray new_array;
    new_array.resize(size * size * 3); // Storing RGB (3 bytes per voxel)

    for (int y = 0; y < this->size; ++y)
    {
        for (int x = 0; x < this->size; ++x)
        {
            int index = (y*this->size + x) * 3;
            if (index % 2 == 0)
            {
                new_array.set(index, 255);
                new_array.set(index+1, 0);
                new_array.set(index+2, 0);
            }
            else
            {
                new_array.set(index, 0);
                new_array.set(index+1, 255);
                new_array.set(index+2, 255);
            }

        }
    }

    return new_array;
}

void VoxelChunk::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("get_data_image"), &VoxelChunk::get_data_image);
    ClassDB::bind_method(D_METHOD("init_size"), &VoxelChunk::init_size, DEFVAL(1));
}