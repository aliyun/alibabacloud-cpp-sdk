// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTTRIGGERCMD_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTTRIGGERCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeploymentTriggerCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentTriggerCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(applicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(imageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(isMonitorEnable, isMonitorEnable_);
      DARABONBA_PTR_TO_JSON(isServiceGroupEnable, isServiceGroupEnable_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(preStop, preStop_);
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(times, times_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentTriggerCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(applicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(imageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(isMonitorEnable, isMonitorEnable_);
      DARABONBA_PTR_FROM_JSON(isServiceGroupEnable, isServiceGroupEnable_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(preStop, preStop_);
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(times, times_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DeploymentTriggerCmd() = default ;
    DeploymentTriggerCmd(const DeploymentTriggerCmd &) = default ;
    DeploymentTriggerCmd(DeploymentTriggerCmd &&) = default ;
    DeploymentTriggerCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentTriggerCmd() = default ;
    DeploymentTriggerCmd& operator=(const DeploymentTriggerCmd &) = default ;
    DeploymentTriggerCmd& operator=(DeploymentTriggerCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->applicationType_ == nullptr && this->cpu_ == nullptr && this->description_ == nullptr && this->imageTag_ == nullptr && this->instanceCount_ == nullptr
        && this->isMonitorEnable_ == nullptr && this->isServiceGroupEnable_ == nullptr && this->memory_ == nullptr && this->preStop_ == nullptr && this->serviceGroupId_ == nullptr
        && this->timeout_ == nullptr && this->times_ == nullptr && this->type_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeploymentTriggerCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DeploymentTriggerCmd& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DeploymentTriggerCmd& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeploymentTriggerCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DeploymentTriggerCmd& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DeploymentTriggerCmd& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // isMonitorEnable Field Functions 
    bool hasIsMonitorEnable() const { return this->isMonitorEnable_ != nullptr;};
    void deleteIsMonitorEnable() { this->isMonitorEnable_ = nullptr;};
    inline int32_t getIsMonitorEnable() const { DARABONBA_PTR_GET_DEFAULT(isMonitorEnable_, 0) };
    inline DeploymentTriggerCmd& setIsMonitorEnable(int32_t isMonitorEnable) { DARABONBA_PTR_SET_VALUE(isMonitorEnable_, isMonitorEnable) };


    // isServiceGroupEnable Field Functions 
    bool hasIsServiceGroupEnable() const { return this->isServiceGroupEnable_ != nullptr;};
    void deleteIsServiceGroupEnable() { this->isServiceGroupEnable_ = nullptr;};
    inline int32_t getIsServiceGroupEnable() const { DARABONBA_PTR_GET_DEFAULT(isServiceGroupEnable_, 0) };
    inline DeploymentTriggerCmd& setIsServiceGroupEnable(int32_t isServiceGroupEnable) { DARABONBA_PTR_SET_VALUE(isServiceGroupEnable_, isServiceGroupEnable) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DeploymentTriggerCmd& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline DeploymentTriggerCmd& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline int64_t getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, 0L) };
    inline DeploymentTriggerCmd& setServiceGroupId(int64_t serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DeploymentTriggerCmd& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline DeploymentTriggerCmd& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeploymentTriggerCmd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> applicationType_ {};
    // This parameter is required.
    shared_ptr<int32_t> cpu_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> imageTag_ {};
    // This parameter is required.
    shared_ptr<int32_t> instanceCount_ {};
    shared_ptr<int32_t> isMonitorEnable_ {};
    shared_ptr<int32_t> isServiceGroupEnable_ {};
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    shared_ptr<string> preStop_ {};
    // This parameter is required.
    shared_ptr<int64_t> serviceGroupId_ {};
    shared_ptr<int32_t> timeout_ {};
    // This parameter is required.
    shared_ptr<int32_t> times_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
