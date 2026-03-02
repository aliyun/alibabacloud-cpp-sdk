// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTREVERTCMD_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTREVERTCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeploymentRevertCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentRevertCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(isMonitorEnable, isMonitorEnable_);
      DARABONBA_PTR_TO_JSON(isServiceGroupEnable, isServiceGroupEnable_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(times, times_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentRevertCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(isMonitorEnable, isMonitorEnable_);
      DARABONBA_PTR_FROM_JSON(isServiceGroupEnable, isServiceGroupEnable_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(times, times_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DeploymentRevertCmd() = default ;
    DeploymentRevertCmd(const DeploymentRevertCmd &) = default ;
    DeploymentRevertCmd(DeploymentRevertCmd &&) = default ;
    DeploymentRevertCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentRevertCmd() = default ;
    DeploymentRevertCmd& operator=(const DeploymentRevertCmd &) = default ;
    DeploymentRevertCmd& operator=(DeploymentRevertCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->cpu_ == nullptr && this->deploymentId_ == nullptr && this->description_ == nullptr && this->instanceCount_ == nullptr && this->isMonitorEnable_ == nullptr
        && this->isServiceGroupEnable_ == nullptr && this->memory_ == nullptr && this->timeout_ == nullptr && this->times_ == nullptr && this->type_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeploymentRevertCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DeploymentRevertCmd& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline int64_t getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, 0L) };
    inline DeploymentRevertCmd& setDeploymentId(int64_t deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeploymentRevertCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DeploymentRevertCmd& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // isMonitorEnable Field Functions 
    bool hasIsMonitorEnable() const { return this->isMonitorEnable_ != nullptr;};
    void deleteIsMonitorEnable() { this->isMonitorEnable_ = nullptr;};
    inline int32_t getIsMonitorEnable() const { DARABONBA_PTR_GET_DEFAULT(isMonitorEnable_, 0) };
    inline DeploymentRevertCmd& setIsMonitorEnable(int32_t isMonitorEnable) { DARABONBA_PTR_SET_VALUE(isMonitorEnable_, isMonitorEnable) };


    // isServiceGroupEnable Field Functions 
    bool hasIsServiceGroupEnable() const { return this->isServiceGroupEnable_ != nullptr;};
    void deleteIsServiceGroupEnable() { this->isServiceGroupEnable_ = nullptr;};
    inline int32_t getIsServiceGroupEnable() const { DARABONBA_PTR_GET_DEFAULT(isServiceGroupEnable_, 0) };
    inline DeploymentRevertCmd& setIsServiceGroupEnable(int32_t isServiceGroupEnable) { DARABONBA_PTR_SET_VALUE(isServiceGroupEnable_, isServiceGroupEnable) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DeploymentRevertCmd& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DeploymentRevertCmd& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline DeploymentRevertCmd& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeploymentRevertCmd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> accountId_ {};
    // This parameter is required.
    shared_ptr<int32_t> cpu_ {};
    // This parameter is required.
    shared_ptr<int64_t> deploymentId_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int32_t> instanceCount_ {};
    shared_ptr<int32_t> isMonitorEnable_ {};
    shared_ptr<int32_t> isServiceGroupEnable_ {};
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
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
