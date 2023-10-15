extends TextureRect
class_name Canvas


# Called when the node enters the scene tree for the first time.
func _ready():
	size = Vector2(30, 30)

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	pass

func paint(voxels) -> void:
	var data: PackedByteArray = voxels.get_data_image()
	texture.set_image(Image.create_from_data(30, 30, false, Image.FORMAT_RGB8, data))
