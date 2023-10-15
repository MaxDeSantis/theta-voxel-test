extends Node
class_name Main

var voxel_chunk: VoxelChunk

func _ready() -> void:

	voxel_chunk = VoxelChunk.new()
	voxel_chunk.init_size(30)
	
	await get_tree().get_root().ready
	
func _process(_delta: float) -> void:
	get_node("PanelContainer/CanvasLayer/Canvas").paint(voxel_chunk)
	
