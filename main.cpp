#include "Window.h"
#include "UFO.h"

int main() {
    UFOlist List("files/UFOPROJECTCSV.csv");
    startWindow(List);
}