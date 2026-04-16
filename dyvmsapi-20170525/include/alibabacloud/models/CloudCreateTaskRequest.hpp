// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_TO_JSON(AgentTimeout, agentTimeout_);
      DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_TO_JSON(AutoComplete, autoComplete_);
      DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_TO_JSON(AutoStartDay, autoStartDay_);
      DARABONBA_PTR_TO_JSON(AutoStartTime, autoStartTime_);
      DARABONBA_PTR_TO_JSON(AutoStop, autoStop_);
      DARABONBA_PTR_TO_JSON(AutoStopDay, autoStopDay_);
      DARABONBA_PTR_TO_JSON(AutoStopTime, autoStopTime_);
      DARABONBA_PTR_TO_JSON(AutoTaskType, autoTaskType_);
      DARABONBA_PTR_TO_JSON(AutoTriggerTimeStrategy, autoTriggerTimeStrategy_);
      DARABONBA_PTR_TO_JSON(CallGroupType, callGroupType_);
      DARABONBA_PTR_TO_JSON(CallLimitStrategy, callLimitStrategy_);
      DARABONBA_PTR_TO_JSON(CallPriorityStrategy, callPriorityStrategy_);
      DARABONBA_PTR_TO_JSON(CallRouteStrategy, callRouteStrategy_);
      DARABONBA_PTR_TO_JSON(CallStrategy, callStrategy_);
      DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_TO_JSON(ClidProperty, clidProperty_);
      DARABONBA_PTR_TO_JSON(Cnos, cnos_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(CustomerClidType, customerClidType_);
      DARABONBA_PTR_TO_JSON(CustomerClidWeight, customerClidWeight_);
      DARABONBA_PTR_TO_JSON(CustomerClidWeightFlag, customerClidWeightFlag_);
      DARABONBA_PTR_TO_JSON(CustomerClids, customerClids_);
      DARABONBA_PTR_TO_JSON(CustomerClidsCategory, customerClidsCategory_);
      DARABONBA_PTR_TO_JSON(CustomerClidsGroup, customerClidsGroup_);
      DARABONBA_PTR_TO_JSON(CustomerMoh, customerMoh_);
      DARABONBA_PTR_TO_JSON(CustomerTimeout, customerTimeout_);
      DARABONBA_PTR_TO_JSON(CustomerVoice, customerVoice_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(ForceEndFlag, forceEndFlag_);
      DARABONBA_PTR_TO_JSON(IsRewarm, isRewarm_);
      DARABONBA_PTR_TO_JSON(IvrId, ivrId_);
      DARABONBA_PTR_TO_JSON(IvrName, ivrName_);
      DARABONBA_PTR_TO_JSON(MaxWaitTime, maxWaitTime_);
      DARABONBA_PTR_TO_JSON(MinAvailableAgentCount, minAvailableAgentCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PredictAdjust, predictAdjust_);
      DARABONBA_PTR_TO_JSON(Quotiety, quotiety_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetryStrategy, retryStrategy_);
      DARABONBA_PTR_TO_JSON(RetryStrategyOnlyToday, retryStrategyOnlyToday_);
      DARABONBA_PTR_TO_JSON(RetryStrategyTimeType, retryStrategyTimeType_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimeStrategy, timeStrategy_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserFields, userFields_);
      DARABONBA_PTR_TO_JSON(WarmUpDuration, warmUpDuration_);
      DARABONBA_PTR_TO_JSON(Wrapup, wrapup_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_FROM_JSON(AgentTimeout, agentTimeout_);
      DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_FROM_JSON(AutoComplete, autoComplete_);
      DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_FROM_JSON(AutoStartDay, autoStartDay_);
      DARABONBA_PTR_FROM_JSON(AutoStartTime, autoStartTime_);
      DARABONBA_PTR_FROM_JSON(AutoStop, autoStop_);
      DARABONBA_PTR_FROM_JSON(AutoStopDay, autoStopDay_);
      DARABONBA_PTR_FROM_JSON(AutoStopTime, autoStopTime_);
      DARABONBA_PTR_FROM_JSON(AutoTaskType, autoTaskType_);
      DARABONBA_PTR_FROM_JSON(AutoTriggerTimeStrategy, autoTriggerTimeStrategy_);
      DARABONBA_PTR_FROM_JSON(CallGroupType, callGroupType_);
      DARABONBA_PTR_FROM_JSON(CallLimitStrategy, callLimitStrategy_);
      DARABONBA_PTR_FROM_JSON(CallPriorityStrategy, callPriorityStrategy_);
      DARABONBA_PTR_FROM_JSON(CallRouteStrategy, callRouteStrategy_);
      DARABONBA_PTR_FROM_JSON(CallStrategy, callStrategy_);
      DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_FROM_JSON(ClidProperty, clidProperty_);
      DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(CustomerClidType, customerClidType_);
      DARABONBA_PTR_FROM_JSON(CustomerClidWeight, customerClidWeight_);
      DARABONBA_PTR_FROM_JSON(CustomerClidWeightFlag, customerClidWeightFlag_);
      DARABONBA_PTR_FROM_JSON(CustomerClids, customerClids_);
      DARABONBA_PTR_FROM_JSON(CustomerClidsCategory, customerClidsCategory_);
      DARABONBA_PTR_FROM_JSON(CustomerClidsGroup, customerClidsGroup_);
      DARABONBA_PTR_FROM_JSON(CustomerMoh, customerMoh_);
      DARABONBA_PTR_FROM_JSON(CustomerTimeout, customerTimeout_);
      DARABONBA_PTR_FROM_JSON(CustomerVoice, customerVoice_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(ForceEndFlag, forceEndFlag_);
      DARABONBA_PTR_FROM_JSON(IsRewarm, isRewarm_);
      DARABONBA_PTR_FROM_JSON(IvrId, ivrId_);
      DARABONBA_PTR_FROM_JSON(IvrName, ivrName_);
      DARABONBA_PTR_FROM_JSON(MaxWaitTime, maxWaitTime_);
      DARABONBA_PTR_FROM_JSON(MinAvailableAgentCount, minAvailableAgentCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PredictAdjust, predictAdjust_);
      DARABONBA_PTR_FROM_JSON(Quotiety, quotiety_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetryStrategy, retryStrategy_);
      DARABONBA_PTR_FROM_JSON(RetryStrategyOnlyToday, retryStrategyOnlyToday_);
      DARABONBA_PTR_FROM_JSON(RetryStrategyTimeType, retryStrategyTimeType_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimeStrategy, timeStrategy_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserFields, userFields_);
      DARABONBA_PTR_FROM_JSON(WarmUpDuration, warmUpDuration_);
      DARABONBA_PTR_FROM_JSON(Wrapup, wrapup_);
    };
    CloudCreateTaskRequest() = default ;
    CloudCreateTaskRequest(const CloudCreateTaskRequest &) = default ;
    CloudCreateTaskRequest(CloudCreateTaskRequest &&) = default ;
    CloudCreateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateTaskRequest() = default ;
    CloudCreateTaskRequest& operator=(const CloudCreateTaskRequest &) = default ;
    CloudCreateTaskRequest& operator=(CloudCreateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentGroup_ == nullptr
        && this->agentTimeout_ == nullptr && this->answerRate_ == nullptr && this->autoComplete_ == nullptr && this->autoDelete_ == nullptr && this->autoStart_ == nullptr
        && this->autoStartDay_ == nullptr && this->autoStartTime_ == nullptr && this->autoStop_ == nullptr && this->autoStopDay_ == nullptr && this->autoStopTime_ == nullptr
        && this->autoTaskType_ == nullptr && this->autoTriggerTimeStrategy_ == nullptr && this->callGroupType_ == nullptr && this->callLimitStrategy_ == nullptr && this->callPriorityStrategy_ == nullptr
        && this->callRouteStrategy_ == nullptr && this->callStrategy_ == nullptr && this->callVariables_ == nullptr && this->clidProperty_ == nullptr && this->cnos_ == nullptr
        && this->concurrency_ == nullptr && this->customerClidType_ == nullptr && this->customerClidWeight_ == nullptr && this->customerClidWeightFlag_ == nullptr && this->customerClids_ == nullptr
        && this->customerClidsCategory_ == nullptr && this->customerClidsGroup_ == nullptr && this->customerMoh_ == nullptr && this->customerTimeout_ == nullptr && this->customerVoice_ == nullptr
        && this->description_ == nullptr && this->enterpriseId_ == nullptr && this->forceEndFlag_ == nullptr && this->isRewarm_ == nullptr && this->ivrId_ == nullptr
        && this->ivrName_ == nullptr && this->maxWaitTime_ == nullptr && this->minAvailableAgentCount_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr
        && this->predictAdjust_ == nullptr && this->quotiety_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->retryStrategy_ == nullptr
        && this->retryStrategyOnlyToday_ == nullptr && this->retryStrategyTimeType_ == nullptr && this->templateName_ == nullptr && this->timeStrategy_ == nullptr && this->type_ == nullptr
        && this->userFields_ == nullptr && this->warmUpDuration_ == nullptr && this->wrapup_ == nullptr; };
    // agentGroup Field Functions 
    bool hasAgentGroup() const { return this->agentGroup_ != nullptr;};
    void deleteAgentGroup() { this->agentGroup_ = nullptr;};
    inline string getAgentGroup() const { DARABONBA_PTR_GET_DEFAULT(agentGroup_, "") };
    inline CloudCreateTaskRequest& setAgentGroup(string agentGroup) { DARABONBA_PTR_SET_VALUE(agentGroup_, agentGroup) };


    // agentTimeout Field Functions 
    bool hasAgentTimeout() const { return this->agentTimeout_ != nullptr;};
    void deleteAgentTimeout() { this->agentTimeout_ = nullptr;};
    inline int64_t getAgentTimeout() const { DARABONBA_PTR_GET_DEFAULT(agentTimeout_, 0L) };
    inline CloudCreateTaskRequest& setAgentTimeout(int64_t agentTimeout) { DARABONBA_PTR_SET_VALUE(agentTimeout_, agentTimeout) };


    // answerRate Field Functions 
    bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
    void deleteAnswerRate() { this->answerRate_ = nullptr;};
    inline int64_t getAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, 0L) };
    inline CloudCreateTaskRequest& setAnswerRate(int64_t answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


    // autoComplete Field Functions 
    bool hasAutoComplete() const { return this->autoComplete_ != nullptr;};
    void deleteAutoComplete() { this->autoComplete_ = nullptr;};
    inline int64_t getAutoComplete() const { DARABONBA_PTR_GET_DEFAULT(autoComplete_, 0L) };
    inline CloudCreateTaskRequest& setAutoComplete(int64_t autoComplete) { DARABONBA_PTR_SET_VALUE(autoComplete_, autoComplete) };


    // autoDelete Field Functions 
    bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
    void deleteAutoDelete() { this->autoDelete_ = nullptr;};
    inline int64_t getAutoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, 0L) };
    inline CloudCreateTaskRequest& setAutoDelete(int64_t autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


    // autoStart Field Functions 
    bool hasAutoStart() const { return this->autoStart_ != nullptr;};
    void deleteAutoStart() { this->autoStart_ = nullptr;};
    inline int64_t getAutoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, 0L) };
    inline CloudCreateTaskRequest& setAutoStart(int64_t autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


    // autoStartDay Field Functions 
    bool hasAutoStartDay() const { return this->autoStartDay_ != nullptr;};
    void deleteAutoStartDay() { this->autoStartDay_ = nullptr;};
    inline string getAutoStartDay() const { DARABONBA_PTR_GET_DEFAULT(autoStartDay_, "") };
    inline CloudCreateTaskRequest& setAutoStartDay(string autoStartDay) { DARABONBA_PTR_SET_VALUE(autoStartDay_, autoStartDay) };


    // autoStartTime Field Functions 
    bool hasAutoStartTime() const { return this->autoStartTime_ != nullptr;};
    void deleteAutoStartTime() { this->autoStartTime_ = nullptr;};
    inline string getAutoStartTime() const { DARABONBA_PTR_GET_DEFAULT(autoStartTime_, "") };
    inline CloudCreateTaskRequest& setAutoStartTime(string autoStartTime) { DARABONBA_PTR_SET_VALUE(autoStartTime_, autoStartTime) };


    // autoStop Field Functions 
    bool hasAutoStop() const { return this->autoStop_ != nullptr;};
    void deleteAutoStop() { this->autoStop_ = nullptr;};
    inline int64_t getAutoStop() const { DARABONBA_PTR_GET_DEFAULT(autoStop_, 0L) };
    inline CloudCreateTaskRequest& setAutoStop(int64_t autoStop) { DARABONBA_PTR_SET_VALUE(autoStop_, autoStop) };


    // autoStopDay Field Functions 
    bool hasAutoStopDay() const { return this->autoStopDay_ != nullptr;};
    void deleteAutoStopDay() { this->autoStopDay_ = nullptr;};
    inline string getAutoStopDay() const { DARABONBA_PTR_GET_DEFAULT(autoStopDay_, "") };
    inline CloudCreateTaskRequest& setAutoStopDay(string autoStopDay) { DARABONBA_PTR_SET_VALUE(autoStopDay_, autoStopDay) };


    // autoStopTime Field Functions 
    bool hasAutoStopTime() const { return this->autoStopTime_ != nullptr;};
    void deleteAutoStopTime() { this->autoStopTime_ = nullptr;};
    inline string getAutoStopTime() const { DARABONBA_PTR_GET_DEFAULT(autoStopTime_, "") };
    inline CloudCreateTaskRequest& setAutoStopTime(string autoStopTime) { DARABONBA_PTR_SET_VALUE(autoStopTime_, autoStopTime) };


    // autoTaskType Field Functions 
    bool hasAutoTaskType() const { return this->autoTaskType_ != nullptr;};
    void deleteAutoTaskType() { this->autoTaskType_ = nullptr;};
    inline int64_t getAutoTaskType() const { DARABONBA_PTR_GET_DEFAULT(autoTaskType_, 0L) };
    inline CloudCreateTaskRequest& setAutoTaskType(int64_t autoTaskType) { DARABONBA_PTR_SET_VALUE(autoTaskType_, autoTaskType) };


    // autoTriggerTimeStrategy Field Functions 
    bool hasAutoTriggerTimeStrategy() const { return this->autoTriggerTimeStrategy_ != nullptr;};
    void deleteAutoTriggerTimeStrategy() { this->autoTriggerTimeStrategy_ = nullptr;};
    inline string getAutoTriggerTimeStrategy() const { DARABONBA_PTR_GET_DEFAULT(autoTriggerTimeStrategy_, "") };
    inline CloudCreateTaskRequest& setAutoTriggerTimeStrategy(string autoTriggerTimeStrategy) { DARABONBA_PTR_SET_VALUE(autoTriggerTimeStrategy_, autoTriggerTimeStrategy) };


    // callGroupType Field Functions 
    bool hasCallGroupType() const { return this->callGroupType_ != nullptr;};
    void deleteCallGroupType() { this->callGroupType_ = nullptr;};
    inline int64_t getCallGroupType() const { DARABONBA_PTR_GET_DEFAULT(callGroupType_, 0L) };
    inline CloudCreateTaskRequest& setCallGroupType(int64_t callGroupType) { DARABONBA_PTR_SET_VALUE(callGroupType_, callGroupType) };


    // callLimitStrategy Field Functions 
    bool hasCallLimitStrategy() const { return this->callLimitStrategy_ != nullptr;};
    void deleteCallLimitStrategy() { this->callLimitStrategy_ = nullptr;};
    inline string getCallLimitStrategy() const { DARABONBA_PTR_GET_DEFAULT(callLimitStrategy_, "") };
    inline CloudCreateTaskRequest& setCallLimitStrategy(string callLimitStrategy) { DARABONBA_PTR_SET_VALUE(callLimitStrategy_, callLimitStrategy) };


    // callPriorityStrategy Field Functions 
    bool hasCallPriorityStrategy() const { return this->callPriorityStrategy_ != nullptr;};
    void deleteCallPriorityStrategy() { this->callPriorityStrategy_ = nullptr;};
    inline string getCallPriorityStrategy() const { DARABONBA_PTR_GET_DEFAULT(callPriorityStrategy_, "") };
    inline CloudCreateTaskRequest& setCallPriorityStrategy(string callPriorityStrategy) { DARABONBA_PTR_SET_VALUE(callPriorityStrategy_, callPriorityStrategy) };


    // callRouteStrategy Field Functions 
    bool hasCallRouteStrategy() const { return this->callRouteStrategy_ != nullptr;};
    void deleteCallRouteStrategy() { this->callRouteStrategy_ = nullptr;};
    inline int64_t getCallRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(callRouteStrategy_, 0L) };
    inline CloudCreateTaskRequest& setCallRouteStrategy(int64_t callRouteStrategy) { DARABONBA_PTR_SET_VALUE(callRouteStrategy_, callRouteStrategy) };


    // callStrategy Field Functions 
    bool hasCallStrategy() const { return this->callStrategy_ != nullptr;};
    void deleteCallStrategy() { this->callStrategy_ = nullptr;};
    inline string getCallStrategy() const { DARABONBA_PTR_GET_DEFAULT(callStrategy_, "") };
    inline CloudCreateTaskRequest& setCallStrategy(string callStrategy) { DARABONBA_PTR_SET_VALUE(callStrategy_, callStrategy) };


    // callVariables Field Functions 
    bool hasCallVariables() const { return this->callVariables_ != nullptr;};
    void deleteCallVariables() { this->callVariables_ = nullptr;};
    inline string getCallVariables() const { DARABONBA_PTR_GET_DEFAULT(callVariables_, "") };
    inline CloudCreateTaskRequest& setCallVariables(string callVariables) { DARABONBA_PTR_SET_VALUE(callVariables_, callVariables) };


    // clidProperty Field Functions 
    bool hasClidProperty() const { return this->clidProperty_ != nullptr;};
    void deleteClidProperty() { this->clidProperty_ = nullptr;};
    inline string getClidProperty() const { DARABONBA_PTR_GET_DEFAULT(clidProperty_, "") };
    inline CloudCreateTaskRequest& setClidProperty(string clidProperty) { DARABONBA_PTR_SET_VALUE(clidProperty_, clidProperty) };


    // cnos Field Functions 
    bool hasCnos() const { return this->cnos_ != nullptr;};
    void deleteCnos() { this->cnos_ = nullptr;};
    inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
    inline CloudCreateTaskRequest& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline CloudCreateTaskRequest& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // customerClidType Field Functions 
    bool hasCustomerClidType() const { return this->customerClidType_ != nullptr;};
    void deleteCustomerClidType() { this->customerClidType_ = nullptr;};
    inline int64_t getCustomerClidType() const { DARABONBA_PTR_GET_DEFAULT(customerClidType_, 0L) };
    inline CloudCreateTaskRequest& setCustomerClidType(int64_t customerClidType) { DARABONBA_PTR_SET_VALUE(customerClidType_, customerClidType) };


    // customerClidWeight Field Functions 
    bool hasCustomerClidWeight() const { return this->customerClidWeight_ != nullptr;};
    void deleteCustomerClidWeight() { this->customerClidWeight_ = nullptr;};
    inline string getCustomerClidWeight() const { DARABONBA_PTR_GET_DEFAULT(customerClidWeight_, "") };
    inline CloudCreateTaskRequest& setCustomerClidWeight(string customerClidWeight) { DARABONBA_PTR_SET_VALUE(customerClidWeight_, customerClidWeight) };


    // customerClidWeightFlag Field Functions 
    bool hasCustomerClidWeightFlag() const { return this->customerClidWeightFlag_ != nullptr;};
    void deleteCustomerClidWeightFlag() { this->customerClidWeightFlag_ = nullptr;};
    inline int64_t getCustomerClidWeightFlag() const { DARABONBA_PTR_GET_DEFAULT(customerClidWeightFlag_, 0L) };
    inline CloudCreateTaskRequest& setCustomerClidWeightFlag(int64_t customerClidWeightFlag) { DARABONBA_PTR_SET_VALUE(customerClidWeightFlag_, customerClidWeightFlag) };


    // customerClids Field Functions 
    bool hasCustomerClids() const { return this->customerClids_ != nullptr;};
    void deleteCustomerClids() { this->customerClids_ = nullptr;};
    inline string getCustomerClids() const { DARABONBA_PTR_GET_DEFAULT(customerClids_, "") };
    inline CloudCreateTaskRequest& setCustomerClids(string customerClids) { DARABONBA_PTR_SET_VALUE(customerClids_, customerClids) };


    // customerClidsCategory Field Functions 
    bool hasCustomerClidsCategory() const { return this->customerClidsCategory_ != nullptr;};
    void deleteCustomerClidsCategory() { this->customerClidsCategory_ = nullptr;};
    inline int64_t getCustomerClidsCategory() const { DARABONBA_PTR_GET_DEFAULT(customerClidsCategory_, 0L) };
    inline CloudCreateTaskRequest& setCustomerClidsCategory(int64_t customerClidsCategory) { DARABONBA_PTR_SET_VALUE(customerClidsCategory_, customerClidsCategory) };


    // customerClidsGroup Field Functions 
    bool hasCustomerClidsGroup() const { return this->customerClidsGroup_ != nullptr;};
    void deleteCustomerClidsGroup() { this->customerClidsGroup_ = nullptr;};
    inline string getCustomerClidsGroup() const { DARABONBA_PTR_GET_DEFAULT(customerClidsGroup_, "") };
    inline CloudCreateTaskRequest& setCustomerClidsGroup(string customerClidsGroup) { DARABONBA_PTR_SET_VALUE(customerClidsGroup_, customerClidsGroup) };


    // customerMoh Field Functions 
    bool hasCustomerMoh() const { return this->customerMoh_ != nullptr;};
    void deleteCustomerMoh() { this->customerMoh_ = nullptr;};
    inline string getCustomerMoh() const { DARABONBA_PTR_GET_DEFAULT(customerMoh_, "") };
    inline CloudCreateTaskRequest& setCustomerMoh(string customerMoh) { DARABONBA_PTR_SET_VALUE(customerMoh_, customerMoh) };


    // customerTimeout Field Functions 
    bool hasCustomerTimeout() const { return this->customerTimeout_ != nullptr;};
    void deleteCustomerTimeout() { this->customerTimeout_ = nullptr;};
    inline int64_t getCustomerTimeout() const { DARABONBA_PTR_GET_DEFAULT(customerTimeout_, 0L) };
    inline CloudCreateTaskRequest& setCustomerTimeout(int64_t customerTimeout) { DARABONBA_PTR_SET_VALUE(customerTimeout_, customerTimeout) };


    // customerVoice Field Functions 
    bool hasCustomerVoice() const { return this->customerVoice_ != nullptr;};
    void deleteCustomerVoice() { this->customerVoice_ = nullptr;};
    inline string getCustomerVoice() const { DARABONBA_PTR_GET_DEFAULT(customerVoice_, "") };
    inline CloudCreateTaskRequest& setCustomerVoice(string customerVoice) { DARABONBA_PTR_SET_VALUE(customerVoice_, customerVoice) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CloudCreateTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudCreateTaskRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // forceEndFlag Field Functions 
    bool hasForceEndFlag() const { return this->forceEndFlag_ != nullptr;};
    void deleteForceEndFlag() { this->forceEndFlag_ = nullptr;};
    inline int64_t getForceEndFlag() const { DARABONBA_PTR_GET_DEFAULT(forceEndFlag_, 0L) };
    inline CloudCreateTaskRequest& setForceEndFlag(int64_t forceEndFlag) { DARABONBA_PTR_SET_VALUE(forceEndFlag_, forceEndFlag) };


    // isRewarm Field Functions 
    bool hasIsRewarm() const { return this->isRewarm_ != nullptr;};
    void deleteIsRewarm() { this->isRewarm_ = nullptr;};
    inline int64_t getIsRewarm() const { DARABONBA_PTR_GET_DEFAULT(isRewarm_, 0L) };
    inline CloudCreateTaskRequest& setIsRewarm(int64_t isRewarm) { DARABONBA_PTR_SET_VALUE(isRewarm_, isRewarm) };


    // ivrId Field Functions 
    bool hasIvrId() const { return this->ivrId_ != nullptr;};
    void deleteIvrId() { this->ivrId_ = nullptr;};
    inline int64_t getIvrId() const { DARABONBA_PTR_GET_DEFAULT(ivrId_, 0L) };
    inline CloudCreateTaskRequest& setIvrId(int64_t ivrId) { DARABONBA_PTR_SET_VALUE(ivrId_, ivrId) };


    // ivrName Field Functions 
    bool hasIvrName() const { return this->ivrName_ != nullptr;};
    void deleteIvrName() { this->ivrName_ = nullptr;};
    inline string getIvrName() const { DARABONBA_PTR_GET_DEFAULT(ivrName_, "") };
    inline CloudCreateTaskRequest& setIvrName(string ivrName) { DARABONBA_PTR_SET_VALUE(ivrName_, ivrName) };


    // maxWaitTime Field Functions 
    bool hasMaxWaitTime() const { return this->maxWaitTime_ != nullptr;};
    void deleteMaxWaitTime() { this->maxWaitTime_ = nullptr;};
    inline int64_t getMaxWaitTime() const { DARABONBA_PTR_GET_DEFAULT(maxWaitTime_, 0L) };
    inline CloudCreateTaskRequest& setMaxWaitTime(int64_t maxWaitTime) { DARABONBA_PTR_SET_VALUE(maxWaitTime_, maxWaitTime) };


    // minAvailableAgentCount Field Functions 
    bool hasMinAvailableAgentCount() const { return this->minAvailableAgentCount_ != nullptr;};
    void deleteMinAvailableAgentCount() { this->minAvailableAgentCount_ = nullptr;};
    inline int64_t getMinAvailableAgentCount() const { DARABONBA_PTR_GET_DEFAULT(minAvailableAgentCount_, 0L) };
    inline CloudCreateTaskRequest& setMinAvailableAgentCount(int64_t minAvailableAgentCount) { DARABONBA_PTR_SET_VALUE(minAvailableAgentCount_, minAvailableAgentCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CloudCreateTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudCreateTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // predictAdjust Field Functions 
    bool hasPredictAdjust() const { return this->predictAdjust_ != nullptr;};
    void deletePredictAdjust() { this->predictAdjust_ = nullptr;};
    inline int64_t getPredictAdjust() const { DARABONBA_PTR_GET_DEFAULT(predictAdjust_, 0L) };
    inline CloudCreateTaskRequest& setPredictAdjust(int64_t predictAdjust) { DARABONBA_PTR_SET_VALUE(predictAdjust_, predictAdjust) };


    // quotiety Field Functions 
    bool hasQuotiety() const { return this->quotiety_ != nullptr;};
    void deleteQuotiety() { this->quotiety_ = nullptr;};
    inline double getQuotiety() const { DARABONBA_PTR_GET_DEFAULT(quotiety_, 0.0) };
    inline CloudCreateTaskRequest& setQuotiety(double quotiety) { DARABONBA_PTR_SET_VALUE(quotiety_, quotiety) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudCreateTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudCreateTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retryStrategy Field Functions 
    bool hasRetryStrategy() const { return this->retryStrategy_ != nullptr;};
    void deleteRetryStrategy() { this->retryStrategy_ = nullptr;};
    inline string getRetryStrategy() const { DARABONBA_PTR_GET_DEFAULT(retryStrategy_, "") };
    inline CloudCreateTaskRequest& setRetryStrategy(string retryStrategy) { DARABONBA_PTR_SET_VALUE(retryStrategy_, retryStrategy) };


    // retryStrategyOnlyToday Field Functions 
    bool hasRetryStrategyOnlyToday() const { return this->retryStrategyOnlyToday_ != nullptr;};
    void deleteRetryStrategyOnlyToday() { this->retryStrategyOnlyToday_ = nullptr;};
    inline int64_t getRetryStrategyOnlyToday() const { DARABONBA_PTR_GET_DEFAULT(retryStrategyOnlyToday_, 0L) };
    inline CloudCreateTaskRequest& setRetryStrategyOnlyToday(int64_t retryStrategyOnlyToday) { DARABONBA_PTR_SET_VALUE(retryStrategyOnlyToday_, retryStrategyOnlyToday) };


    // retryStrategyTimeType Field Functions 
    bool hasRetryStrategyTimeType() const { return this->retryStrategyTimeType_ != nullptr;};
    void deleteRetryStrategyTimeType() { this->retryStrategyTimeType_ = nullptr;};
    inline int64_t getRetryStrategyTimeType() const { DARABONBA_PTR_GET_DEFAULT(retryStrategyTimeType_, 0L) };
    inline CloudCreateTaskRequest& setRetryStrategyTimeType(int64_t retryStrategyTimeType) { DARABONBA_PTR_SET_VALUE(retryStrategyTimeType_, retryStrategyTimeType) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CloudCreateTaskRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeStrategy Field Functions 
    bool hasTimeStrategy() const { return this->timeStrategy_ != nullptr;};
    void deleteTimeStrategy() { this->timeStrategy_ = nullptr;};
    inline string getTimeStrategy() const { DARABONBA_PTR_GET_DEFAULT(timeStrategy_, "") };
    inline CloudCreateTaskRequest& setTimeStrategy(string timeStrategy) { DARABONBA_PTR_SET_VALUE(timeStrategy_, timeStrategy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline CloudCreateTaskRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userFields Field Functions 
    bool hasUserFields() const { return this->userFields_ != nullptr;};
    void deleteUserFields() { this->userFields_ = nullptr;};
    inline string getUserFields() const { DARABONBA_PTR_GET_DEFAULT(userFields_, "") };
    inline CloudCreateTaskRequest& setUserFields(string userFields) { DARABONBA_PTR_SET_VALUE(userFields_, userFields) };


    // warmUpDuration Field Functions 
    bool hasWarmUpDuration() const { return this->warmUpDuration_ != nullptr;};
    void deleteWarmUpDuration() { this->warmUpDuration_ = nullptr;};
    inline int64_t getWarmUpDuration() const { DARABONBA_PTR_GET_DEFAULT(warmUpDuration_, 0L) };
    inline CloudCreateTaskRequest& setWarmUpDuration(int64_t warmUpDuration) { DARABONBA_PTR_SET_VALUE(warmUpDuration_, warmUpDuration) };


    // wrapup Field Functions 
    bool hasWrapup() const { return this->wrapup_ != nullptr;};
    void deleteWrapup() { this->wrapup_ = nullptr;};
    inline int64_t getWrapup() const { DARABONBA_PTR_GET_DEFAULT(wrapup_, 0L) };
    inline CloudCreateTaskRequest& setWrapup(int64_t wrapup) { DARABONBA_PTR_SET_VALUE(wrapup_, wrapup) };


  protected:
    // 外呼组号；callGroupType=2时必填。注：一个外呼组可以绑定到多个任务，但只能同时运行一个任务中
    shared_ptr<string> agentGroup_ {};
    // 座席超时时间；单位秒数，默认10秒，取值范围5 ~ 60
    shared_ptr<int64_t> agentTimeout_ {};
    // 初始化预计客户接通率；默认50，取值范围1～100，预热阶段的呼叫，按照此接通率计算呼叫频率
    shared_ptr<int64_t> answerRate_ {};
    // 0.关闭 1.开启，默认开启。开启：任务中的号码呼叫完后，任务自动完成，状态设置为结束，关闭：任务中的号码呼叫完后，任务自动暂停，状态设置为暂停注：任务在结束状态时无法再次启动。
    shared_ptr<int64_t> autoComplete_ {};
    // 0.关闭 1.自动删除。任务数超出最大任务数限制时，是否自动删除已完成的最早创建的任务，值为1代表自动删除。注：autoDelete不是任务属性，只在接口调用时生效
    shared_ptr<int64_t> autoDelete_ {};
    // 定时开始；0.关闭 1.开启，默认关闭。值为1时autoStartDay和autoStartTime参数才生效，并且至少设置其中的一个
    shared_ptr<int64_t> autoStart_ {};
    // 定时开始日期；autoStart=1时生效。参数不传入时默认在当天的autoStartTime定时启动。格式：yyyy-MM-dd，如：2017-01-01
    shared_ptr<string> autoStartDay_ {};
    // 定时开始时间；autoStart=1时生效。参数不传入时默认在autoStartDay的00:00:00定时启动。格式：HH:mm:ss，如：08:00:00
    shared_ptr<string> autoStartTime_ {};
    // 定时完成；0.关闭 1.开启，默认关闭。值为1时autoStopDay和autoStopTime参数才生效，并且至少设置其中的一个
    shared_ptr<int64_t> autoStop_ {};
    // 定时完成日期；autoStop=1时生效。参数不传入时默认在当天的autoStopTime定时完成。格式：yyyy-MM-dd，如：2017-01-01
    shared_ptr<string> autoStopDay_ {};
    // 定时完成时间；autoStop=1时生效。参数不传入时默认在autoStopDay的23:59:59定时完成。格式：HH:mm:ss，如：17:00:00
    shared_ptr<string> autoStopTime_ {};
    // 0.连续呼叫 1.间隔呼叫，默认连续呼叫。配合定时开始（autoStart）和定时结束（autoStop）参数使用，如任务需要在每天的特定时间段内呼叫则开启间隔呼叫方式
    shared_ptr<int64_t> autoTaskType_ {};
    // 间隔呼叫时间段；autoTaskType=1时必填。呼叫的时间段配置。参数格式：时间条件编号。支持多个，多个使用英文","逗号隔开，如：9,22。注：时间条件列表可通过查询时间条件设置列表接口获取
    shared_ptr<string> autoTriggerTimeStrategy_ {};
    // 指定座席方式；1.座席工号列表 2.外呼组，默认座席工号列表注：任务创建后不支持修改
    shared_ptr<int64_t> callGroupType_ {};
    // 座席当日接听的通话个数上限，使用方式详见下方说明；JsonArray格式 [{"cnos":["2000","2001"],"limit":"5"}注：使用座席当日接听数限制功能需开启企业配置，功能开启并且配置上限后系统才开始统计当日接听数
    shared_ptr<string> callLimitStrategy_ {};
    // 数据结构为Json格式```{"strategy":[{"sort":1,"type":"retryCall", "desc":0},{"sort":2,"type":"firstCall","orderType":0}]}```格式说明：sort是重试号码和未呼叫号码的呼叫顺序 type：retryCall重试号码、firstCall未呼叫号码当type=retryCall，desc：0.优先呼叫待重呼轮次数值较小的号码，即轮次靠前（如第1轮、第2轮）的号码先被呼叫 1.优先呼叫待重呼轮次数值较大的号码，即轮次靠后（如第5轮、第4轮）的号码先被呼叫当type=firstCall时，orderType：随机呼叫，0顺序(优先级) 1随机 2顺序(导入时间)
    shared_ptr<string> callPriorityStrategy_ {};
    // 1.直连座席 2.AI转人工 直连座席模式：客户接听后直接分配座席，无空闲座席可溢出语音导航（需配置语音导航），保障高优先级客户直连体验 AI转人工：客户接入后，优先进入语音导航中配置的智能体机器人，按交互结果决定是否转接座席，提升自动化覆盖率，降低人工成本
    shared_ptr<int64_t> callRouteStrategy_ {};
    // 座席分配规则；1.随机 2.顺序 3.座席未进线最大时（从上一次呼叫结束到当前的总时长） 4.座席状态[空闲]最长时长（座席最近一次切换为空闲状态的持续时长），默认随机
    shared_ptr<string> callStrategy_ {};
    // 座席通道变量。JsonArray格式；最大支持5个变量。默认空值， 示例：[{"name":"abcdefg","value":"${cdr_enterprise_id}"}] 注：单个字段值的长度不能超过1000个字符。变量会以SIP_HEADER的形式设置到座席侧通道
    shared_ptr<string> callVariables_ {};
    // 外显规则；customerClidType=2时生效。Json格式，外显号码选择规则：默认区号，是否匹配省会等；如：{"defaultAreaCode":"010", "isMatchCapital":"1"}。不建议使用
    shared_ptr<string> clidProperty_ {};
    // 座席工号列表；callGroupType=1时必填。支持多个座席工号，多个之间使用英文逗号\\",\\"分隔注：一个座席只能在一个运行中的任务中
    shared_ptr<string> cnos_ {};
    // 任务维度限制最大并发数，实际并发不会超过最大并发限制。type=1时，配置成0表示不限制，座席数量少于10时建议配置该参数
    shared_ptr<int64_t> concurrency_ {};
    // 客户侧外显规则；customerClidsCategory=1或2时生效。1.随机 2.按区号，默认随机。不建议使用
    shared_ptr<int64_t> customerClidType_ {};
    // 外显号码比例配置内容；customerClidsCategory=1且customerClidWeightFlag=1时生效。JsonArray格式 [{"number":"123,345","weight":"5"}, {"number":"567,789","weight":"5"}]，不建议使用
    shared_ptr<string> customerClidWeight_ {};
    // 外显号码比例配置开关；customerClidsCategory=1时生效。0.关闭 1.开启，默认关闭。不建议使用
    shared_ptr<int64_t> customerClidWeightFlag_ {};
    // 客户侧外显号码列表；customerClidsCategory=1或2时必填。支持多个，多个直接使用英文逗号\\",\\"分隔。不建议使用
    shared_ptr<string> customerClids_ {};
    // 客户侧外显号码类型；1.外显固话 2.外显手机号 4.外显号码池 5.外显导航注：推荐使用外显导航，可以灵活调整和控制外显策略。其他类型将逐步下线
    shared_ptr<int64_t> customerClidsCategory_ {};
    // 客户侧外显号码池名称或外显导航标识；customerClidsCategory=4或5时必填。customerClidsCategory=4时customerClidsGroup传号码池名称。customerClidsCategory=5时customerClidsGroup传外显导航标识
    shared_ptr<string> customerClidsGroup_ {};
    // 客户侧等待音；客户接听后呼叫座席，等待座席接听时播放的语音，默认为空白音。支持公共语音和企业语音，值为语音文件的path，如:60000011533526918819
    shared_ptr<string> customerMoh_ {};
    // 客户超时时间；单位秒数，默认30秒，取值范围5 ~ 60
    shared_ptr<int64_t> customerTimeout_ {};
    // 客户侧提示音；客户接听后呼转座席前播放的语音，提示音播放完成后再找座席，默认无提示音。支持公共语音和企业语音，值为语音文件的path，如:60000011533526918819
    shared_ptr<string> customerVoice_ {};
    // 任务描述；需进行UTF-8格式的URLEncode编码，长度小于200字
    shared_ptr<string> description_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 定时完成时强制结束任务；autoStop=1时生效。0.关闭 1.开启，默认关闭。开启配置后，当任务到定时完成时间时无论任务中的号码是否已经呼完，均将任务状态设置为结束。适用于对数据有呼叫时间限制的场景。注：任务在结束状态时无法再次启动。
    shared_ptr<int64_t> forceEndFlag_ {};
    // 暂停后重新预热；0.关闭，1开启，默认开启，任务暂停后是否需要重新预热
    shared_ptr<int64_t> isRewarm_ {};
    // 语音导航Id；参数ivrId和ivrName二选一，同时传入时ivrId生效，在创建自动外呼任务时ivrId或ivrName必选其一。预测外呼使用场景：如果客户接听后未在特定时间内（默认2秒）找到可用座席，通话将溢出到语音导航继续排队找座席。同时支持在呼转座席，座席未接听时也溢出到语音导航，需要开启企业配置生效自动外呼使用场景：客户接听后，转到的语音导航
    shared_ptr<int64_t> ivrId_ {};
    // 语音导航名称；参数ivrId和ivrName二选一，同时传入时ivrId生效，在创建自动外呼任务时ivrId或ivrName必选其一。
    shared_ptr<string> ivrName_ {};
    // 座席最长等待时间；默认40秒，最小10，最大600，允许座席空闲的最大时间。任务执行过程中，如果座席平均空闲时间大于maxWaitTime，每次呼叫个数会增加
    shared_ptr<int64_t> maxWaitTime_ {};
    // 最小可用座席数；默认为10，取值范围1 ~ 10。任务内可用座席数小于当前值时，任务自动暂停，避免骚扰
    shared_ptr<int64_t> minAvailableAgentCount_ {};
    // 任务名称；需进行UTF-8格式的URLEncode编码，长度小于50字
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 超呼率；默认值为100，取值范围50～400
    shared_ptr<int64_t> predictAdjust_ {};
    // 骚扰率；默认值为1，取值范围为大于0，小于等于20，支持小数，精确到小数点两位。值越小呼叫的号码越少，值越大呼叫的号码越多，座席利用率越高
    shared_ptr<double> quotiety_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 重试策略；「基础模式」数据结构为Json格式```{"retry":2,"strategy":[{"round":1,"time":"1-1-1"},{"round":2,"time":"2-2-2"}]}```格式说明：retry是重试次数，round是第几次重试，time是第几次重试间隔的时间：1-1-1，第一个1是天，第二个1是小时，第三个1是分钟「高级模式」高级模式需要开启「号码状态识别」服务数据结构为JsonArray格式 ```[{"condition":{"sipCause":[710,719]},"retry":1,"sort":1,"strategy":[{"round":1,"time":"0-0-10"}]},{"condition":{"sipCause":[800]},"retry":1,"sort":2,"strategy":[{"round":2,"time":"0-0-10"}]}]```格式说明：condition是重试条件，sort是重试条件的顺序，其余字段与基础模式一致 注：基础模式和高级模式的区分根据传入的参数格式自动识别。基于首次呼叫时间重试时，每轮的重试时间必须大于上一轮的时间
    shared_ptr<string> retryStrategy_ {};
    // 任务仅当天生效；0.关闭 1.开启，删除待重试的数据和待呼叫的数据 2.开启，删除待重试的数据 3.开启，删除待呼叫的数据，默认关闭
    shared_ptr<int64_t> retryStrategyOnlyToday_ {};
    // 重试策略时间类型；配置重试策略时生效。 1.基于首次呼叫时间 2.基于上次呼叫时间，默认基于首次呼叫时间
    shared_ptr<int64_t> retryStrategyTimeType_ {};
    // 任务模板名称；通过任务模板可以实现对任务参数的统一管理以及简化接口传参，多个任务可以使用同一个模板管理参数，接口只需要传入任务间有差异的参数。参数生效规则：接口传入的参数优先。示例说明：如果接口传了参数autoStart=1和参数templateName=testTemplate，接口传入的参数autoStart生效。如果接口未传入autoStart参数或者传入的autoStart参数是空值，那么模版中的参数生效。注：任务模板可通过任务模板接口进行管理
    shared_ptr<string> templateName_ {};
    // 禁呼时间；在特定的时间段内禁止呼叫。参数格式：时间条件编号。支持多个，多个使用英文","逗号隔开，如：9,22。注：时间条件列表可通过查询时间条件设置列表接口获取
    shared_ptr<string> timeStrategy_ {};
    // 1.预测外呼任务 2.自动外呼任务。外呼任务创建后任务类型不支持修改
    // 
    // This parameter is required.
    shared_ptr<int64_t> type_ {};
    // 任务自定义字段。JsonArray格式；数组的每个元素只支持传递一组键值对，传递多组只取第一组，如 {"key", "value"}。 默认空值，示例：[{"name":"1234"},{"name1":"12345"}] 注：单个字段值的长度不能超过1000个字符
    shared_ptr<string> userFields_ {};
    // 任务预热时间；默认300秒, 取值范围60 ～ 600
    shared_ptr<int64_t> warmUpDuration_ {};
    // 座席整理时间；默认30秒，取值范围1～10800，整理时间会影响每次呼叫的个数，值越大，呼叫号码个数会减小
    shared_ptr<int64_t> wrapup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
