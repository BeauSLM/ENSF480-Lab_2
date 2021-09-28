#!/bin/bash

CLASSES="point,shape,rectangle,square,graphicsworld"

for class in $(echo $CLASSES | sed "s/,/ /g")
do
    touch $class.h
    touch $class.cpp
done
