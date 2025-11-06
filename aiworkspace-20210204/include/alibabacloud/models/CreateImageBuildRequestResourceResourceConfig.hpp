// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTRESOURCERESOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTRESOURCERESOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildRequestResourceResourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildRequestResourceResourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildRequestResourceResourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    CreateImageBuildRequestResourceResourceConfig() = default ;
    CreateImageBuildRequestResourceResourceConfig(const CreateImageBuildRequestResourceResourceConfig &) = default ;
    CreateImageBuildRequestResourceResourceConfig(CreateImageBuildRequestResourceResourceConfig &&) = default ;
    CreateImageBuildRequestResourceResourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildRequestResourceResourceConfig() = default ;
    CreateImageBuildRequestResourceResourceConfig& operator=(const CreateImageBuildRequestResourceResourceConfig &) = default ;
    CreateImageBuildRequestResourceResourceConfig& operator=(CreateImageBuildRequestResourceResourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && return this->memory_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline CreateImageBuildRequestResourceResourceConfig& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline CreateImageBuildRequestResourceResourceConfig& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    std::shared_ptr<string> CPU_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
