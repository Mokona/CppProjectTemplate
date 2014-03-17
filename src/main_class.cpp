#include "src/main_class.h"

Main::Main(std::string message)
    : m_message(message)
{

}

std::string Main::getMessage() const
{
    return m_message;
}
