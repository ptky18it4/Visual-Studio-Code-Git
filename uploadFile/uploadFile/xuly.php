
<?php

$name = $_FILES["HinhAvatar"]["name"];
$type = $_FILES["HinhAvatar"]["type"];
$size = $_FILES["HinhAvatar"]["size"];

if( $size <= 5*1024*1024 ) {
	move_uploaded_file(
		$_FILES["HinhAvatar"]["tmp_name"], 
		"upload/$name"
	);
}else{
	echo "FIle cua ban phai nho hon 5M";	
}

?>
