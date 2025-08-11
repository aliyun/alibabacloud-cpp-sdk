// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTREQUESTOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTREQUESTOVERRIDES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScaleWithAdjustmentRequestOverridesContainerOverrides.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ScaleWithAdjustmentRequestOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleWithAdjustmentRequestOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerOverrides, containerOverrides_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleWithAdjustmentRequestOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerOverrides, containerOverrides_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ScaleWithAdjustmentRequestOverrides() = default ;
    ScaleWithAdjustmentRequestOverrides(const ScaleWithAdjustmentRequestOverrides &) = default ;
    ScaleWithAdjustmentRequestOverrides(ScaleWithAdjustmentRequestOverrides &&) = default ;
    ScaleWithAdjustmentRequestOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleWithAdjustmentRequestOverrides() = default ;
    ScaleWithAdjustmentRequestOverrides& operator=(const ScaleWithAdjustmentRequestOverrides &) = default ;
    ScaleWithAdjustmentRequestOverrides& operator=(ScaleWithAdjustmentRequestOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerOverrides_ != nullptr
        && this->cpu_ != nullptr && this->memory_ != nullptr && this->userData_ != nullptr; };
    // containerOverrides Field Functions 
    bool hasContainerOverrides() const { return this->containerOverrides_ != nullptr;};
    void deleteContainerOverrides() { this->containerOverrides_ = nullptr;};
    inline const vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverrides> & containerOverrides() const { DARABONBA_PTR_GET_CONST(containerOverrides_, vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverrides>) };
    inline vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverrides> containerOverrides() { DARABONBA_PTR_GET(containerOverrides_, vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverrides>) };
    inline ScaleWithAdjustmentRequestOverrides& setContainerOverrides(const vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverrides> & containerOverrides) { DARABONBA_PTR_SET_VALUE(containerOverrides_, containerOverrides) };
    inline ScaleWithAdjustmentRequestOverrides& setContainerOverrides(vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverrides> && containerOverrides) { DARABONBA_PTR_SET_RVALUE(containerOverrides_, containerOverrides) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline ScaleWithAdjustmentRequestOverrides& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline ScaleWithAdjustmentRequestOverrides& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ScaleWithAdjustmentRequestOverrides& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The list of parameters that you want to use to override specific configurations for containers.
    std::shared_ptr<vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverrides>> containerOverrides_ = nullptr;
    // The number of vCPUs that you want to allocate to the instance. Unit: vCPUs.
    std::shared_ptr<float> cpu_ = nullptr;
    // The memory size that you want to allocate to the instance. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
