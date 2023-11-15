<?php

class Car{
    private $tires = [];
    private $PropulsionSystem;
    function __construct(public $color, 
                         public $brand,    
                         private $releaseYear, 
                         private $mileage,
                         $tireSize,
                         $tirePressure
                         ){
                            for($i = 0; $i<4; $i++){
                                $this->tires[] = new Tire($tirePressure, $tireSize);
                             }
                             if ($type === "Electric"){
                                $PropulsionSystem[] = new ElectricMotor(780, "electricity", 0.9);
                             }elseif($type === "Hybrid"){
                                $PropulsionSystem[] = new ElectricMotor(780, "electricity", 0.9);
                                $PropulsionSystem[] = new ICEngine(4, "gasoline", 0.9);
                             }elseif($type === "Gasoline"){
                                $PropulsionSystem[] = new ICEngine(4, "gasoline", 0.9);
                             }else{
                                echo "Type doesn't exist";
                             }
                         }



    function makeNoise(){
    }
    
    function move(){
    }
}

?>