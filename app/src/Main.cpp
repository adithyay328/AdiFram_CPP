#include "pugixml.hpp"

int main() {
    pugi::xml_document myDocument;
    myDocument.load_file("Sample.xml");
    return 0;
}