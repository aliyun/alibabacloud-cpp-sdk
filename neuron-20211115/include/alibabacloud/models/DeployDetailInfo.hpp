// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeployPipelineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeployDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(accountName, accountName_);
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
      DARABONBA_PTR_TO_JSON(isMonitorEnable, isMonitorEnable_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(orgType, orgType_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(pipelineInfos, pipelineInfos_);
      DARABONBA_PTR_TO_JSON(pipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(repositoryId, repositoryId_);
      DARABONBA_PTR_TO_JSON(rollbackStatus, rollbackStatus_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(times, times_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeployDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(accountName, accountName_);
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
      DARABONBA_PTR_FROM_JSON(isMonitorEnable, isMonitorEnable_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(orgType, orgType_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(pipelineInfos, pipelineInfos_);
      DARABONBA_PTR_FROM_JSON(pipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(repositoryId, repositoryId_);
      DARABONBA_PTR_FROM_JSON(rollbackStatus, rollbackStatus_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(times, times_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DeployDetailInfo() = default ;
    DeployDetailInfo(const DeployDetailInfo &) = default ;
    DeployDetailInfo(DeployDetailInfo &&) = default ;
    DeployDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployDetailInfo() = default ;
    DeployDetailInfo& operator=(const DeployDetailInfo &) = default ;
    DeployDetailInfo& operator=(DeployDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->applicationType_ == nullptr && this->changeOrderId_ == nullptr && this->context_ == nullptr && this->cpu_ == nullptr
        && this->deploymentType_ == nullptr && this->description_ == nullptr && this->edasId_ == nullptr && this->enterpriseId_ == nullptr && this->env_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->imageId_ == nullptr && this->imageTag_ == nullptr
        && this->instanceCount_ == nullptr && this->isMonitorEnable_ == nullptr && this->memory_ == nullptr && this->message_ == nullptr && this->orgType_ == nullptr
        && this->pbcId_ == nullptr && this->pbcName_ == nullptr && this->pipelineId_ == nullptr && this->pipelineInfos_ == nullptr && this->pipelineRunId_ == nullptr
        && this->repositoryId_ == nullptr && this->rollbackStatus_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr
        && this->times_ == nullptr && this->type_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeployDetailInfo& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DeployDetailInfo& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DeployDetailInfo& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline DeployDetailInfo& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline DeployDetailInfo& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DeployDetailInfo& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string getDeploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DeployDetailInfo& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeployDetailInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edasId Field Functions 
    bool hasEdasId() const { return this->edasId_ != nullptr;};
    void deleteEdasId() { this->edasId_ = nullptr;};
    inline string getEdasId() const { DARABONBA_PTR_GET_DEFAULT(edasId_, "") };
    inline DeployDetailInfo& setEdasId(string edasId) { DARABONBA_PTR_SET_VALUE(edasId_, edasId) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline DeployDetailInfo& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline DeployDetailInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DeployDetailInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DeployDetailInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeployDetailInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DeployDetailInfo& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DeployDetailInfo& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DeployDetailInfo& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // isMonitorEnable Field Functions 
    bool hasIsMonitorEnable() const { return this->isMonitorEnable_ != nullptr;};
    void deleteIsMonitorEnable() { this->isMonitorEnable_ = nullptr;};
    inline int32_t getIsMonitorEnable() const { DARABONBA_PTR_GET_DEFAULT(isMonitorEnable_, 0) };
    inline DeployDetailInfo& setIsMonitorEnable(int32_t isMonitorEnable) { DARABONBA_PTR_SET_VALUE(isMonitorEnable_, isMonitorEnable) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DeployDetailInfo& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeployDetailInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orgType Field Functions 
    bool hasOrgType() const { return this->orgType_ != nullptr;};
    void deleteOrgType() { this->orgType_ = nullptr;};
    inline string getOrgType() const { DARABONBA_PTR_GET_DEFAULT(orgType_, "") };
    inline DeployDetailInfo& setOrgType(string orgType) { DARABONBA_PTR_SET_VALUE(orgType_, orgType) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline DeployDetailInfo& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline DeployDetailInfo& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DeployDetailInfo& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineInfos Field Functions 
    bool hasPipelineInfos() const { return this->pipelineInfos_ != nullptr;};
    void deletePipelineInfos() { this->pipelineInfos_ = nullptr;};
    inline const vector<DeployPipelineInfo> & getPipelineInfos() const { DARABONBA_PTR_GET_CONST(pipelineInfos_, vector<DeployPipelineInfo>) };
    inline vector<DeployPipelineInfo> getPipelineInfos() { DARABONBA_PTR_GET(pipelineInfos_, vector<DeployPipelineInfo>) };
    inline DeployDetailInfo& setPipelineInfos(const vector<DeployPipelineInfo> & pipelineInfos) { DARABONBA_PTR_SET_VALUE(pipelineInfos_, pipelineInfos) };
    inline DeployDetailInfo& setPipelineInfos(vector<DeployPipelineInfo> && pipelineInfos) { DARABONBA_PTR_SET_RVALUE(pipelineInfos_, pipelineInfos) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
    inline DeployDetailInfo& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // repositoryId Field Functions 
    bool hasRepositoryId() const { return this->repositoryId_ != nullptr;};
    void deleteRepositoryId() { this->repositoryId_ = nullptr;};
    inline string getRepositoryId() const { DARABONBA_PTR_GET_DEFAULT(repositoryId_, "") };
    inline DeployDetailInfo& setRepositoryId(string repositoryId) { DARABONBA_PTR_SET_VALUE(repositoryId_, repositoryId) };


    // rollbackStatus Field Functions 
    bool hasRollbackStatus() const { return this->rollbackStatus_ != nullptr;};
    void deleteRollbackStatus() { this->rollbackStatus_ = nullptr;};
    inline string getRollbackStatus() const { DARABONBA_PTR_GET_DEFAULT(rollbackStatus_, "") };
    inline DeployDetailInfo& setRollbackStatus(string rollbackStatus) { DARABONBA_PTR_SET_VALUE(rollbackStatus_, rollbackStatus) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline DeployDetailInfo& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DeployDetailInfo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeployDetailInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline DeployDetailInfo& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeployDetailInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> accountName_ {};
    shared_ptr<string> applicationType_ {};
    shared_ptr<string> changeOrderId_ {};
    shared_ptr<string> context_ {};
    // This parameter is required.
    shared_ptr<int32_t> cpu_ {};
    shared_ptr<string> deploymentType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> edasId_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // This parameter is required.
    shared_ptr<string> imageTag_ {};
    // This parameter is required.
    shared_ptr<int32_t> instanceCount_ {};
    shared_ptr<int32_t> isMonitorEnable_ {};
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> orgType_ {};
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<string> pbcName_ {};
    shared_ptr<string> pipelineId_ {};
    shared_ptr<vector<DeployPipelineInfo>> pipelineInfos_ {};
    shared_ptr<string> pipelineRunId_ {};
    shared_ptr<string> repositoryId_ {};
    shared_ptr<string> rollbackStatus_ {};
    // This parameter is required.
    shared_ptr<int64_t> serviceId_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> status_ {};
    // This parameter is required.
    shared_ptr<int32_t> times_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
