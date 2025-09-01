#include <iostream>
#include "httplib.h"

using namespace httplib;

int main() {
    // Create a server
    Server svr;

    // Define a route for "/"
    svr.Get("/", [](const Request& req, Response& res) {
        res.set_content("<h1>Secured Sharing Of Health Records!</h1>", "text/html");
        });

    std::cout << "Server is running at http://localhost:8080\n";

    // Listen on localhost:8080
    svr.listen("0.0.0.0", 8080);

    return 0;
}
