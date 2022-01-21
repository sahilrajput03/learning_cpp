// ex1.cpp
#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
        ([](){
            return "Hello, world!";
        });

    CROW_ROUTE(app, "/abc")
        ([](){
            return "Abcdefghijklmnopqrstuvwxyz!";
        });


  app.port(8080).run();
}