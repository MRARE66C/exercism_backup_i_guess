#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    size_t pos = line.find(": ");

    return line.substr(pos + 2);
}

std::string log_level(std::string line) {
    // return the log level
    size_t startPos = line.find ("[");
    size_t endPos = line.find ("]");

    return line.substr(startPos + 1, endPos - 1);
}

std::string reformat(std::string line) {
    // return the reformatted message
    size_t pos = line.find(": ");
    std::string startString { line.substr(pos + 2) };

    size_t startPos = line.find ("[");
    size_t endPos = line.find ("]");
    std::string endString { line.substr(startPos + 1, endPos - 1) };

    return startString + " (" + endString + ')';
}
}  // namespace log_line
