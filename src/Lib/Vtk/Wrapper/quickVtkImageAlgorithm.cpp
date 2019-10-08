#include "quickVtkImageAlgorithm.hpp"

namespace quick {

    namespace Vtk {

        Qml::Register::Symbol::AbstractClass<ImageAlgorithm> ImageAlgorithm::Register(true);

        ImageAlgorithm::ImageAlgorithm(vtkSmartPointer<vtkImageAlgorithm> vtkObject) : Algorithm(vtkObject) {
        }
    }
}
