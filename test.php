<?php
class A
{
	public $name;
	public function f()
	{

		echo "数组特性\n";
	}

}

$a = new A;
$arr = [$a, 'f'];
$arr();
?>