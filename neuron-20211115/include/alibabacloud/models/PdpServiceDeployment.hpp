// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPSERVICEDEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_PDPSERVICEDEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpServiceDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpServiceDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(applicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(changeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(deploymentType, deploymentType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(edasId, edasId_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(imageId, imageId_);
      DARABONBA_PTR_TO_JSON(imageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(isServiceGroupEnable, isServiceGroupEnable_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(orgType, orgType_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(pipelineTimes, pipelineTimes_);
      DARABONBA_PTR_TO_JSON(repositoryId, repositoryId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(rollbackStatus, rollbackStatus_);
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(times, times_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PdpServiceDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(applicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(changeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(deploymentType, deploymentType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(edasId, edasId_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(imageId, imageId_);
      DARABONBA_PTR_FROM_JSON(imageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(isServiceGroupEnable, isServiceGroupEnable_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(orgType, orgType_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(pipelineTimes, pipelineTimes_);
      DARABONBA_PTR_FROM_JSON(repositoryId, repositoryId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(rollbackStatus, rollbackStatus_);
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(times, times_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PdpServiceDeployment() = default ;
    PdpServiceDeployment(const PdpServiceDeployment &) = default ;
    PdpServiceDeployment(PdpServiceDeployment &&) = default ;
    PdpServiceDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpServiceDeployment() = default ;
    PdpServiceDeployment& operator=(const PdpServiceDeployment &) = default ;
    PdpServiceDeployment& operator=(PdpServiceDeployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->applicationType_ == nullptr && this->changeOrderId_ == nullptr && this->context_ == nullptr && this->cpu_ == nullptr && this->deploymentType_ == nullptr
        && this->description_ == nullptr && this->edasId_ == nullptr && this->enterpriseId_ == nullptr && this->env_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->imageId_ == nullptr && this->imageTag_ == nullptr && this->instanceCount_ == nullptr
        && this->isServiceGroupEnable_ == nullptr && this->memory_ == nullptr && this->message_ == nullptr && this->orgType_ == nullptr && this->pbcId_ == nullptr
        && this->pbcName_ == nullptr && this->pipelineTimes_ == nullptr && this->repositoryId_ == nullptr && this->requestId_ == nullptr && this->rollbackStatus_ == nullptr
        && this->serviceGroupId_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr && this->timeout_ == nullptr
        && this->times_ == nullptr && this->type_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline PdpServiceDeployment& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline PdpServiceDeployment& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline PdpServiceDeployment& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline PdpServiceDeployment& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline PdpServiceDeployment& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string getDeploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline PdpServiceDeployment& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpServiceDeployment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edasId Field Functions 
    bool hasEdasId() const { return this->edasId_ != nullptr;};
    void deleteEdasId() { this->edasId_ = nullptr;};
    inline string getEdasId() const { DARABONBA_PTR_GET_DEFAULT(edasId_, "") };
    inline PdpServiceDeployment& setEdasId(string edasId) { DARABONBA_PTR_SET_VALUE(edasId_, edasId) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline PdpServiceDeployment& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PdpServiceDeployment& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PdpServiceDeployment& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline PdpServiceDeployment& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpServiceDeployment& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline PdpServiceDeployment& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline PdpServiceDeployment& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline PdpServiceDeployment& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // isServiceGroupEnable Field Functions 
    bool hasIsServiceGroupEnable() const { return this->isServiceGroupEnable_ != nullptr;};
    void deleteIsServiceGroupEnable() { this->isServiceGroupEnable_ = nullptr;};
    inline int32_t getIsServiceGroupEnable() const { DARABONBA_PTR_GET_DEFAULT(isServiceGroupEnable_, 0) };
    inline PdpServiceDeployment& setIsServiceGroupEnable(int32_t isServiceGroupEnable) { DARABONBA_PTR_SET_VALUE(isServiceGroupEnable_, isServiceGroupEnable) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline PdpServiceDeployment& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PdpServiceDeployment& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orgType Field Functions 
    bool hasOrgType() const { return this->orgType_ != nullptr;};
    void deleteOrgType() { this->orgType_ = nullptr;};
    inline string getOrgType() const { DARABONBA_PTR_GET_DEFAULT(orgType_, "") };
    inline PdpServiceDeployment& setOrgType(string orgType) { DARABONBA_PTR_SET_VALUE(orgType_, orgType) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline PdpServiceDeployment& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline PdpServiceDeployment& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // pipelineTimes Field Functions 
    bool hasPipelineTimes() const { return this->pipelineTimes_ != nullptr;};
    void deletePipelineTimes() { this->pipelineTimes_ = nullptr;};
    inline int32_t getPipelineTimes() const { DARABONBA_PTR_GET_DEFAULT(pipelineTimes_, 0) };
    inline PdpServiceDeployment& setPipelineTimes(int32_t pipelineTimes) { DARABONBA_PTR_SET_VALUE(pipelineTimes_, pipelineTimes) };


    // repositoryId Field Functions 
    bool hasRepositoryId() const { return this->repositoryId_ != nullptr;};
    void deleteRepositoryId() { this->repositoryId_ = nullptr;};
    inline string getRepositoryId() const { DARABONBA_PTR_GET_DEFAULT(repositoryId_, "") };
    inline PdpServiceDeployment& setRepositoryId(string repositoryId) { DARABONBA_PTR_SET_VALUE(repositoryId_, repositoryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpServiceDeployment& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rollbackStatus Field Functions 
    bool hasRollbackStatus() const { return this->rollbackStatus_ != nullptr;};
    void deleteRollbackStatus() { this->rollbackStatus_ = nullptr;};
    inline string getRollbackStatus() const { DARABONBA_PTR_GET_DEFAULT(rollbackStatus_, "") };
    inline PdpServiceDeployment& setRollbackStatus(string rollbackStatus) { DARABONBA_PTR_SET_VALUE(rollbackStatus_, rollbackStatus) };


    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline int64_t getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, 0L) };
    inline PdpServiceDeployment& setServiceGroupId(int64_t serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline PdpServiceDeployment& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline PdpServiceDeployment& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PdpServiceDeployment& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline PdpServiceDeployment& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline PdpServiceDeployment& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PdpServiceDeployment& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    shared_ptr<string> applicationType_ {};
    shared_ptr<string> changeOrderId_ {};
    shared_ptr<string> context_ {};
    // This parameter is required.
    shared_ptr<int32_t> cpu_ {};
    shared_ptr<string> deploymentType_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> edasId_ {};
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // This parameter is required.
    shared_ptr<string> imageTag_ {};
    // This parameter is required.
    shared_ptr<int32_t> instanceCount_ {};
    shared_ptr<int32_t> isServiceGroupEnable_ {};
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> orgType_ {};
    // This parameter is required.
    shared_ptr<int64_t> pbcId_ {};
    // This parameter is required.
    shared_ptr<string> pbcName_ {};
    shared_ptr<int32_t> pipelineTimes_ {};
    shared_ptr<string> repositoryId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rollbackStatus_ {};
    shared_ptr<int64_t> serviceGroupId_ {};
    // This parameter is required.
    shared_ptr<int64_t> serviceId_ {};
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> timeout_ {};
    shared_ptr<int32_t> times_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
