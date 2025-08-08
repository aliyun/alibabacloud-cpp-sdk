// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMODELSCOPEMODELINPUTGPUCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMODELSCOPEMODELINPUTGPUCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployModelScopeModelInputGpuConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployModelScopeModelInputGpuConfig& obj) { 
      DARABONBA_PTR_TO_JSON(gpuMemorySize, gpuMemorySize_);
      DARABONBA_PTR_TO_JSON(gpuType, gpuType_);
    };
    friend void from_json(const Darabonba::Json& j, DeployModelScopeModelInputGpuConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(gpuMemorySize, gpuMemorySize_);
      DARABONBA_PTR_FROM_JSON(gpuType, gpuType_);
    };
    DeployModelScopeModelInputGpuConfig() = default ;
    DeployModelScopeModelInputGpuConfig(const DeployModelScopeModelInputGpuConfig &) = default ;
    DeployModelScopeModelInputGpuConfig(DeployModelScopeModelInputGpuConfig &&) = default ;
    DeployModelScopeModelInputGpuConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployModelScopeModelInputGpuConfig() = default ;
    DeployModelScopeModelInputGpuConfig& operator=(const DeployModelScopeModelInputGpuConfig &) = default ;
    DeployModelScopeModelInputGpuConfig& operator=(DeployModelScopeModelInputGpuConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gpuMemorySize_ != nullptr
        && this->gpuType_ != nullptr; };
    // gpuMemorySize Field Functions 
    bool hasGpuMemorySize() const { return this->gpuMemorySize_ != nullptr;};
    void deleteGpuMemorySize() { this->gpuMemorySize_ = nullptr;};
    inline int32_t gpuMemorySize() const { DARABONBA_PTR_GET_DEFAULT(gpuMemorySize_, 0) };
    inline DeployModelScopeModelInputGpuConfig& setGpuMemorySize(int32_t gpuMemorySize) { DARABONBA_PTR_SET_VALUE(gpuMemorySize_, gpuMemorySize) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string gpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline DeployModelScopeModelInputGpuConfig& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


  protected:
    std::shared_ptr<int32_t> gpuMemorySize_ = nullptr;
    std::shared_ptr<string> gpuType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
