#include "quickSampleDataVolumes.hpp"
#include "quickAppWindow.hpp"

namespace quick {

    namespace SampleData {

        Volumes* Volumes::instance = nullptr;

        Qml::Register::Class<Volumes> Volumes::Register;

        auto Volumes::Create() -> void {
            if (instance) {
                throw std::runtime_error("instance already existing");
            }

            instance = new Volumes();
        }

        auto Volumes::makeDataPath(const QString& file) -> QString {
            return App::Window::instance->getResourceDir() + "examples/data/volumes/" + file;
        }

        auto Volumes::getBrain1DIR() -> QString {
            return this->makeDataPath("brain1");
        }

        auto Volumes::getBrain2DIR() -> QString {
            return this->makeDataPath("brain2");
        }
    }
}