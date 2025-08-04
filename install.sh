#!/bin/sh

for file in ./.*; do
  ln -s $(pwd)/${file} ${HOME}/
done

mkdir -pv ${HOME}/{.cache,.config,.icons,.themes,wallpaper}

for dir in ./.cache/*; do
  ln -s $(pwd)/${dir} ${HOME}/.cache/
done

for dir in ./.config/*; do
  ln -s $(pwd)/${dir} ${HOME}/.config/
done

for dir in ./.icons/*; do
  ln -s $(pwd)/${dir} ${HOME}/.icons/
done

for dir in ./.themes/*; do
  ln -s $(pwd)/${dir} ${HOME}/.themes/
done

for dir in ./wallpaper/*; do
  ln -s $(pwd)/${dir} ${HOME}/wallpaper/
done
