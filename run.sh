clear
[ ! -d "build" ] && mkdir -p build
cd build
cmake ../ 
cmake --build . 
clear 
./poo1_2020_1_lab209_clases_objetos