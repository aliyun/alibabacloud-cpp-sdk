// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCONFIGINFO_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCONFIGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeployConfigInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployConfigInfo& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(deploymentType, deploymentType_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(finish, finish_);
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(isMonitorEnable, isMonitorEnable_);
      DARABONBA_PTR_TO_JSON(isServiceGroupEnable, isServiceGroupEnable_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(preStop, preStop_);
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, DeployConfigInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(deploymentType, deploymentType_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(finish, finish_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(isMonitorEnable, isMonitorEnable_);
      DARABONBA_PTR_FROM_JSON(isServiceGroupEnable, isServiceGroupEnable_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(preStop, preStop_);
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    DeployConfigInfo() = default ;
    DeployConfigInfo(const DeployConfigInfo &) = default ;
    DeployConfigInfo(DeployConfigInfo &&) = default ;
    DeployConfigInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployConfigInfo() = default ;
    DeployConfigInfo& operator=(const DeployConfigInfo &) = default ;
    DeployConfigInfo& operator=(DeployConfigInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && this->deploymentId_ == nullptr && this->deploymentType_ == nullptr && this->env_ == nullptr && this->finish_ == nullptr && this->instanceCount_ == nullptr
        && this->isMonitorEnable_ == nullptr && this->isServiceGroupEnable_ == nullptr && this->memory_ == nullptr && this->pipelineId_ == nullptr && this->preStop_ == nullptr
        && this->serviceGroupId_ == nullptr && this->serviceId_ == nullptr && this->timeout_ == nullptr && this->times_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DeployConfigInfo& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline int64_t getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, 0L) };
    inline DeployConfigInfo& setDeploymentId(int64_t deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string getDeploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DeployConfigInfo& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline DeployConfigInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline bool getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
    inline DeployConfigInfo& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DeployConfigInfo& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // isMonitorEnable Field Functions 
    bool hasIsMonitorEnable() const { return this->isMonitorEnable_ != nullptr;};
    void deleteIsMonitorEnable() { this->isMonitorEnable_ = nullptr;};
    inline int32_t getIsMonitorEnable() const { DARABONBA_PTR_GET_DEFAULT(isMonitorEnable_, 0) };
    inline DeployConfigInfo& setIsMonitorEnable(int32_t isMonitorEnable) { DARABONBA_PTR_SET_VALUE(isMonitorEnable_, isMonitorEnable) };


    // isServiceGroupEnable Field Functions 
    bool hasIsServiceGroupEnable() const { return this->isServiceGroupEnable_ != nullptr;};
    void deleteIsServiceGroupEnable() { this->isServiceGroupEnable_ = nullptr;};
    inline int32_t getIsServiceGroupEnable() const { DARABONBA_PTR_GET_DEFAULT(isServiceGroupEnable_, 0) };
    inline DeployConfigInfo& setIsServiceGroupEnable(int32_t isServiceGroupEnable) { DARABONBA_PTR_SET_VALUE(isServiceGroupEnable_, isServiceGroupEnable) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DeployConfigInfo& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DeployConfigInfo& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline DeployConfigInfo& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline int64_t getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, 0L) };
    inline DeployConfigInfo& setServiceGroupId(int64_t serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline DeployConfigInfo& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DeployConfigInfo& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline DeployConfigInfo& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    shared_ptr<int32_t> cpu_ {};
    shared_ptr<int64_t> deploymentId_ {};
    shared_ptr<string> deploymentType_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<bool> finish_ {};
    shared_ptr<int32_t> instanceCount_ {};
    shared_ptr<int32_t> isMonitorEnable_ {};
    shared_ptr<int32_t> isServiceGroupEnable_ {};
    shared_ptr<int32_t> memory_ {};
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> preStop_ {};
    shared_ptr<int64_t> serviceGroupId_ {};
    // This parameter is required.
    shared_ptr<int64_t> serviceId_ {};
    shared_ptr<int32_t> timeout_ {};
    shared_ptr<int32_t> times_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
