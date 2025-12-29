// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESCALEAPPLICATIONVERTICALLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESCALEAPPLICATIONVERTICALLYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class RescaleApplicationVerticallyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RescaleApplicationVerticallyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Deploy, deploy_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(autoEnableApplicationScalingRule, autoEnableApplicationScalingRule_);
      DARABONBA_PTR_TO_JSON(minReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(minReadyInstances, minReadyInstances_);
    };
    friend void from_json(const Darabonba::Json& j, RescaleApplicationVerticallyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Deploy, deploy_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(autoEnableApplicationScalingRule, autoEnableApplicationScalingRule_);
      DARABONBA_PTR_FROM_JSON(minReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(minReadyInstances, minReadyInstances_);
    };
    RescaleApplicationVerticallyRequest() = default ;
    RescaleApplicationVerticallyRequest(const RescaleApplicationVerticallyRequest &) = default ;
    RescaleApplicationVerticallyRequest(RescaleApplicationVerticallyRequest &&) = default ;
    RescaleApplicationVerticallyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RescaleApplicationVerticallyRequest() = default ;
    RescaleApplicationVerticallyRequest& operator=(const RescaleApplicationVerticallyRequest &) = default ;
    RescaleApplicationVerticallyRequest& operator=(RescaleApplicationVerticallyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->cpu_ == nullptr && this->deploy_ == nullptr && this->diskSize_ == nullptr && this->memory_ == nullptr && this->resourceType_ == nullptr
        && this->vSwitchId_ == nullptr && this->autoEnableApplicationScalingRule_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RescaleApplicationVerticallyRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline RescaleApplicationVerticallyRequest& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // deploy Field Functions 
    bool hasDeploy() const { return this->deploy_ != nullptr;};
    void deleteDeploy() { this->deploy_ = nullptr;};
    inline bool getDeploy() const { DARABONBA_PTR_GET_DEFAULT(deploy_, false) };
    inline RescaleApplicationVerticallyRequest& setDeploy(bool deploy) { DARABONBA_PTR_SET_VALUE(deploy_, deploy) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline string getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, "") };
    inline RescaleApplicationVerticallyRequest& setDiskSize(string diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline RescaleApplicationVerticallyRequest& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline RescaleApplicationVerticallyRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline RescaleApplicationVerticallyRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // autoEnableApplicationScalingRule Field Functions 
    bool hasAutoEnableApplicationScalingRule() const { return this->autoEnableApplicationScalingRule_ != nullptr;};
    void deleteAutoEnableApplicationScalingRule() { this->autoEnableApplicationScalingRule_ = nullptr;};
    inline bool getAutoEnableApplicationScalingRule() const { DARABONBA_PTR_GET_DEFAULT(autoEnableApplicationScalingRule_, false) };
    inline RescaleApplicationVerticallyRequest& setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule) { DARABONBA_PTR_SET_VALUE(autoEnableApplicationScalingRule_, autoEnableApplicationScalingRule) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline RescaleApplicationVerticallyRequest& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline RescaleApplicationVerticallyRequest& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


  protected:
    // The app ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Target CPU specification. Unit: millicore.
    // 
    // This parameter is required.
    shared_ptr<string> cpu_ {};
    shared_ptr<bool> deploy_ {};
    // The disk size. Unit: GB.
    shared_ptr<string> diskSize_ {};
    // Target memory specification. Unit: MB.
    // 
    // This parameter is required.
    shared_ptr<string> memory_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> vSwitchId_ {};
    // Enable application scale rules automatically.
    shared_ptr<bool> autoEnableApplicationScalingRule_ {};
    // The ratio of minimum ready instances.
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    // Minimum ready instances.
    shared_ptr<int32_t> minReadyInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
