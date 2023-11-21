<?php

abstract class Fruit{


    function __construct(public $color, protected $weight, protected $seeds = []){}

    abstract function ripen();
    static function becomeHealthy(){
        echo "Eat me!";     
    }

}

?>