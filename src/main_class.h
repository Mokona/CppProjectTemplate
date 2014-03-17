#include <string>

class Main
{
public:
    Main(std::string message);
    std::string getMessage() const;

private:
    std::string m_message;
};
