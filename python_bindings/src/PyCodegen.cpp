#include "PyInit.h"
#include "../../include/tiramisu/core.h"

namespace tiramisu {
  namespace PythonBindings {

    void define_codegen(py::module &m){
      m.def("codegen", 
            py::overload_cast<const std::vector<tiramisu::buffer *> &, const std::string, const bool>(&tiramisu::codegen),
            "This function generates the declared function and computations in an object file",
            py::arg("arguments"), py::arg("obj_filename"), py::arg("gen_cuda_stmt") = false);
    }

  }  // namespace PythonBindings
}  // namespace tiramisu
