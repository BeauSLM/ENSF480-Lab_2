#!/bin/bash

CLASSES="Point,Shape,Rectangle,Square,GraphicsWorld"

for class in $(echo $CLASSES | sed "s/,/ /g")
do
    touch $class.h
    touch $class.cpp
done
