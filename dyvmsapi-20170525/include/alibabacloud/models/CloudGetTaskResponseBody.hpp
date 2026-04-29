// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudGetTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudGetTaskResponseBody() = default ;
    CloudGetTaskResponseBody(const CloudGetTaskResponseBody &) = default ;
    CloudGetTaskResponseBody(CloudGetTaskResponseBody &&) = default ;
    CloudGetTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetTaskResponseBody() = default ;
    CloudGetTaskResponseBody& operator=(const CloudGetTaskResponseBody &) = default ;
    CloudGetTaskResponseBody& operator=(CloudGetTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TaskProperty, taskProperty_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskProperty, taskProperty_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskProperty : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskProperty& obj) { 
          DARABONBA_PTR_TO_JSON(AdjustStep, adjustStep_);
          DARABONBA_PTR_TO_JSON(AgentTimeout, agentTimeout_);
          DARABONBA_PTR_TO_JSON(AgentUtilization, agentUtilization_);
          DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
          DARABONBA_PTR_TO_JSON(AutoComplete, autoComplete_);
          DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
          DARABONBA_PTR_TO_JSON(AutoStartDay, autoStartDay_);
          DARABONBA_PTR_TO_JSON(AutoStartTime, autoStartTime_);
          DARABONBA_PTR_TO_JSON(AutoStop, autoStop_);
          DARABONBA_PTR_TO_JSON(AutoStopDay, autoStopDay_);
          DARABONBA_PTR_TO_JSON(AutoStopTime, autoStopTime_);
          DARABONBA_PTR_TO_JSON(AutoTaskType, autoTaskType_);
          DARABONBA_PTR_TO_JSON(AutoTriggerTimeStrategy, autoTriggerTimeStrategy_);
          DARABONBA_PTR_TO_JSON(CallLimitStrategy, callLimitStrategy_);
          DARABONBA_PTR_TO_JSON(CallStrategy, callStrategy_);
          DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
          DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
          DARABONBA_PTR_TO_JSON(ClidGroup, clidGroup_);
          DARABONBA_PTR_TO_JSON(ClidProperty, clidProperty_);
          DARABONBA_PTR_TO_JSON(Cnos, cnos_);
          DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CurlRetryTimes, curlRetryTimes_);
          DARABONBA_PTR_TO_JSON(CustomerClidType, customerClidType_);
          DARABONBA_PTR_TO_JSON(CustomerClidWeight, customerClidWeight_);
          DARABONBA_PTR_TO_JSON(CustomerClidWeightFlag, customerClidWeightFlag_);
          DARABONBA_PTR_TO_JSON(CustomerClids, customerClids_);
          DARABONBA_PTR_TO_JSON(CustomerClidsCategory, customerClidsCategory_);
          DARABONBA_PTR_TO_JSON(CustomerMoh, customerMoh_);
          DARABONBA_PTR_TO_JSON(CustomerTimeout, customerTimeout_);
          DARABONBA_PTR_TO_JSON(CustomerVoice, customerVoice_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(ForceEndFlag, forceEndFlag_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsRandom, isRandom_);
          DARABONBA_PTR_TO_JSON(IsRewarm, isRewarm_);
          DARABONBA_PTR_TO_JSON(IvrId, ivrId_);
          DARABONBA_PTR_TO_JSON(MaxWaitTime, maxWaitTime_);
          DARABONBA_PTR_TO_JSON(MinAvailableAgentCount, minAvailableAgentCount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OverCallLimitCnos, overCallLimitCnos_);
          DARABONBA_PTR_TO_JSON(OverTime, overTime_);
          DARABONBA_PTR_TO_JSON(PauseDuration, pauseDuration_);
          DARABONBA_PTR_TO_JSON(PauseTime, pauseTime_);
          DARABONBA_PTR_TO_JSON(PredictAdjust, predictAdjust_);
          DARABONBA_PTR_TO_JSON(Quotiety, quotiety_);
          DARABONBA_PTR_TO_JSON(RetryStrategy, retryStrategy_);
          DARABONBA_PTR_TO_JSON(RetryStrategyOnlyToday, retryStrategyOnlyToday_);
          DARABONBA_PTR_TO_JSON(StandbyCnos, standbyCnos_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
          DARABONBA_PTR_TO_JSON(TaskFields, taskFields_);
          DARABONBA_PTR_TO_JSON(TimeStrategy, timeStrategy_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UserFields, userFields_);
          DARABONBA_PTR_TO_JSON(WarmUpDuration, warmUpDuration_);
          DARABONBA_PTR_TO_JSON(Wrapup, wrapup_);
        };
        friend void from_json(const Darabonba::Json& j, TaskProperty& obj) { 
          DARABONBA_PTR_FROM_JSON(AdjustStep, adjustStep_);
          DARABONBA_PTR_FROM_JSON(AgentTimeout, agentTimeout_);
          DARABONBA_PTR_FROM_JSON(AgentUtilization, agentUtilization_);
          DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
          DARABONBA_PTR_FROM_JSON(AutoComplete, autoComplete_);
          DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
          DARABONBA_PTR_FROM_JSON(AutoStartDay, autoStartDay_);
          DARABONBA_PTR_FROM_JSON(AutoStartTime, autoStartTime_);
          DARABONBA_PTR_FROM_JSON(AutoStop, autoStop_);
          DARABONBA_PTR_FROM_JSON(AutoStopDay, autoStopDay_);
          DARABONBA_PTR_FROM_JSON(AutoStopTime, autoStopTime_);
          DARABONBA_PTR_FROM_JSON(AutoTaskType, autoTaskType_);
          DARABONBA_PTR_FROM_JSON(AutoTriggerTimeStrategy, autoTriggerTimeStrategy_);
          DARABONBA_PTR_FROM_JSON(CallLimitStrategy, callLimitStrategy_);
          DARABONBA_PTR_FROM_JSON(CallStrategy, callStrategy_);
          DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
          DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
          DARABONBA_PTR_FROM_JSON(ClidGroup, clidGroup_);
          DARABONBA_PTR_FROM_JSON(ClidProperty, clidProperty_);
          DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
          DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CurlRetryTimes, curlRetryTimes_);
          DARABONBA_PTR_FROM_JSON(CustomerClidType, customerClidType_);
          DARABONBA_PTR_FROM_JSON(CustomerClidWeight, customerClidWeight_);
          DARABONBA_PTR_FROM_JSON(CustomerClidWeightFlag, customerClidWeightFlag_);
          DARABONBA_PTR_FROM_JSON(CustomerClids, customerClids_);
          DARABONBA_PTR_FROM_JSON(CustomerClidsCategory, customerClidsCategory_);
          DARABONBA_PTR_FROM_JSON(CustomerMoh, customerMoh_);
          DARABONBA_PTR_FROM_JSON(CustomerTimeout, customerTimeout_);
          DARABONBA_PTR_FROM_JSON(CustomerVoice, customerVoice_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(ForceEndFlag, forceEndFlag_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsRandom, isRandom_);
          DARABONBA_PTR_FROM_JSON(IsRewarm, isRewarm_);
          DARABONBA_PTR_FROM_JSON(IvrId, ivrId_);
          DARABONBA_PTR_FROM_JSON(MaxWaitTime, maxWaitTime_);
          DARABONBA_PTR_FROM_JSON(MinAvailableAgentCount, minAvailableAgentCount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OverCallLimitCnos, overCallLimitCnos_);
          DARABONBA_PTR_FROM_JSON(OverTime, overTime_);
          DARABONBA_PTR_FROM_JSON(PauseDuration, pauseDuration_);
          DARABONBA_PTR_FROM_JSON(PauseTime, pauseTime_);
          DARABONBA_PTR_FROM_JSON(PredictAdjust, predictAdjust_);
          DARABONBA_PTR_FROM_JSON(Quotiety, quotiety_);
          DARABONBA_PTR_FROM_JSON(RetryStrategy, retryStrategy_);
          DARABONBA_PTR_FROM_JSON(RetryStrategyOnlyToday, retryStrategyOnlyToday_);
          DARABONBA_PTR_FROM_JSON(StandbyCnos, standbyCnos_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
          DARABONBA_PTR_FROM_JSON(TaskFields, taskFields_);
          DARABONBA_PTR_FROM_JSON(TimeStrategy, timeStrategy_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UserFields, userFields_);
          DARABONBA_PTR_FROM_JSON(WarmUpDuration, warmUpDuration_);
          DARABONBA_PTR_FROM_JSON(Wrapup, wrapup_);
        };
        TaskProperty() = default ;
        TaskProperty(const TaskProperty &) = default ;
        TaskProperty(TaskProperty &&) = default ;
        TaskProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskProperty() = default ;
        TaskProperty& operator=(const TaskProperty &) = default ;
        TaskProperty& operator=(TaskProperty &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adjustStep_ == nullptr
        && this->agentTimeout_ == nullptr && this->agentUtilization_ == nullptr && this->answerRate_ == nullptr && this->autoComplete_ == nullptr && this->autoStart_ == nullptr
        && this->autoStartDay_ == nullptr && this->autoStartTime_ == nullptr && this->autoStop_ == nullptr && this->autoStopDay_ == nullptr && this->autoStopTime_ == nullptr
        && this->autoTaskType_ == nullptr && this->autoTriggerTimeStrategy_ == nullptr && this->callLimitStrategy_ == nullptr && this->callStrategy_ == nullptr && this->callVariables_ == nullptr
        && this->callbackUrl_ == nullptr && this->clidGroup_ == nullptr && this->clidProperty_ == nullptr && this->cnos_ == nullptr && this->concurrency_ == nullptr
        && this->createTime_ == nullptr && this->curlRetryTimes_ == nullptr && this->customerClidType_ == nullptr && this->customerClidWeight_ == nullptr && this->customerClidWeightFlag_ == nullptr
        && this->customerClids_ == nullptr && this->customerClidsCategory_ == nullptr && this->customerMoh_ == nullptr && this->customerTimeout_ == nullptr && this->customerVoice_ == nullptr
        && this->description_ == nullptr && this->enterpriseId_ == nullptr && this->forceEndFlag_ == nullptr && this->id_ == nullptr && this->isRandom_ == nullptr
        && this->isRewarm_ == nullptr && this->ivrId_ == nullptr && this->maxWaitTime_ == nullptr && this->minAvailableAgentCount_ == nullptr && this->name_ == nullptr
        && this->overCallLimitCnos_ == nullptr && this->overTime_ == nullptr && this->pauseDuration_ == nullptr && this->pauseTime_ == nullptr && this->predictAdjust_ == nullptr
        && this->quotiety_ == nullptr && this->retryStrategy_ == nullptr && this->retryStrategyOnlyToday_ == nullptr && this->standbyCnos_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->statusDescription_ == nullptr && this->taskFields_ == nullptr && this->timeStrategy_ == nullptr && this->type_ == nullptr
        && this->userFields_ == nullptr && this->warmUpDuration_ == nullptr && this->wrapup_ == nullptr; };
        // adjustStep Field Functions 
        bool hasAdjustStep() const { return this->adjustStep_ != nullptr;};
        void deleteAdjustStep() { this->adjustStep_ = nullptr;};
        inline string getAdjustStep() const { DARABONBA_PTR_GET_DEFAULT(adjustStep_, "") };
        inline TaskProperty& setAdjustStep(string adjustStep) { DARABONBA_PTR_SET_VALUE(adjustStep_, adjustStep) };


        // agentTimeout Field Functions 
        bool hasAgentTimeout() const { return this->agentTimeout_ != nullptr;};
        void deleteAgentTimeout() { this->agentTimeout_ = nullptr;};
        inline string getAgentTimeout() const { DARABONBA_PTR_GET_DEFAULT(agentTimeout_, "") };
        inline TaskProperty& setAgentTimeout(string agentTimeout) { DARABONBA_PTR_SET_VALUE(agentTimeout_, agentTimeout) };


        // agentUtilization Field Functions 
        bool hasAgentUtilization() const { return this->agentUtilization_ != nullptr;};
        void deleteAgentUtilization() { this->agentUtilization_ = nullptr;};
        inline string getAgentUtilization() const { DARABONBA_PTR_GET_DEFAULT(agentUtilization_, "") };
        inline TaskProperty& setAgentUtilization(string agentUtilization) { DARABONBA_PTR_SET_VALUE(agentUtilization_, agentUtilization) };


        // answerRate Field Functions 
        bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
        void deleteAnswerRate() { this->answerRate_ = nullptr;};
        inline string getAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, "") };
        inline TaskProperty& setAnswerRate(string answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


        // autoComplete Field Functions 
        bool hasAutoComplete() const { return this->autoComplete_ != nullptr;};
        void deleteAutoComplete() { this->autoComplete_ = nullptr;};
        inline string getAutoComplete() const { DARABONBA_PTR_GET_DEFAULT(autoComplete_, "") };
        inline TaskProperty& setAutoComplete(string autoComplete) { DARABONBA_PTR_SET_VALUE(autoComplete_, autoComplete) };


        // autoStart Field Functions 
        bool hasAutoStart() const { return this->autoStart_ != nullptr;};
        void deleteAutoStart() { this->autoStart_ = nullptr;};
        inline string getAutoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, "") };
        inline TaskProperty& setAutoStart(string autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


        // autoStartDay Field Functions 
        bool hasAutoStartDay() const { return this->autoStartDay_ != nullptr;};
        void deleteAutoStartDay() { this->autoStartDay_ = nullptr;};
        inline string getAutoStartDay() const { DARABONBA_PTR_GET_DEFAULT(autoStartDay_, "") };
        inline TaskProperty& setAutoStartDay(string autoStartDay) { DARABONBA_PTR_SET_VALUE(autoStartDay_, autoStartDay) };


        // autoStartTime Field Functions 
        bool hasAutoStartTime() const { return this->autoStartTime_ != nullptr;};
        void deleteAutoStartTime() { this->autoStartTime_ = nullptr;};
        inline string getAutoStartTime() const { DARABONBA_PTR_GET_DEFAULT(autoStartTime_, "") };
        inline TaskProperty& setAutoStartTime(string autoStartTime) { DARABONBA_PTR_SET_VALUE(autoStartTime_, autoStartTime) };


        // autoStop Field Functions 
        bool hasAutoStop() const { return this->autoStop_ != nullptr;};
        void deleteAutoStop() { this->autoStop_ = nullptr;};
        inline string getAutoStop() const { DARABONBA_PTR_GET_DEFAULT(autoStop_, "") };
        inline TaskProperty& setAutoStop(string autoStop) { DARABONBA_PTR_SET_VALUE(autoStop_, autoStop) };


        // autoStopDay Field Functions 
        bool hasAutoStopDay() const { return this->autoStopDay_ != nullptr;};
        void deleteAutoStopDay() { this->autoStopDay_ = nullptr;};
        inline string getAutoStopDay() const { DARABONBA_PTR_GET_DEFAULT(autoStopDay_, "") };
        inline TaskProperty& setAutoStopDay(string autoStopDay) { DARABONBA_PTR_SET_VALUE(autoStopDay_, autoStopDay) };


        // autoStopTime Field Functions 
        bool hasAutoStopTime() const { return this->autoStopTime_ != nullptr;};
        void deleteAutoStopTime() { this->autoStopTime_ = nullptr;};
        inline string getAutoStopTime() const { DARABONBA_PTR_GET_DEFAULT(autoStopTime_, "") };
        inline TaskProperty& setAutoStopTime(string autoStopTime) { DARABONBA_PTR_SET_VALUE(autoStopTime_, autoStopTime) };


        // autoTaskType Field Functions 
        bool hasAutoTaskType() const { return this->autoTaskType_ != nullptr;};
        void deleteAutoTaskType() { this->autoTaskType_ = nullptr;};
        inline string getAutoTaskType() const { DARABONBA_PTR_GET_DEFAULT(autoTaskType_, "") };
        inline TaskProperty& setAutoTaskType(string autoTaskType) { DARABONBA_PTR_SET_VALUE(autoTaskType_, autoTaskType) };


        // autoTriggerTimeStrategy Field Functions 
        bool hasAutoTriggerTimeStrategy() const { return this->autoTriggerTimeStrategy_ != nullptr;};
        void deleteAutoTriggerTimeStrategy() { this->autoTriggerTimeStrategy_ = nullptr;};
        inline string getAutoTriggerTimeStrategy() const { DARABONBA_PTR_GET_DEFAULT(autoTriggerTimeStrategy_, "") };
        inline TaskProperty& setAutoTriggerTimeStrategy(string autoTriggerTimeStrategy) { DARABONBA_PTR_SET_VALUE(autoTriggerTimeStrategy_, autoTriggerTimeStrategy) };


        // callLimitStrategy Field Functions 
        bool hasCallLimitStrategy() const { return this->callLimitStrategy_ != nullptr;};
        void deleteCallLimitStrategy() { this->callLimitStrategy_ = nullptr;};
        inline string getCallLimitStrategy() const { DARABONBA_PTR_GET_DEFAULT(callLimitStrategy_, "") };
        inline TaskProperty& setCallLimitStrategy(string callLimitStrategy) { DARABONBA_PTR_SET_VALUE(callLimitStrategy_, callLimitStrategy) };


        // callStrategy Field Functions 
        bool hasCallStrategy() const { return this->callStrategy_ != nullptr;};
        void deleteCallStrategy() { this->callStrategy_ = nullptr;};
        inline string getCallStrategy() const { DARABONBA_PTR_GET_DEFAULT(callStrategy_, "") };
        inline TaskProperty& setCallStrategy(string callStrategy) { DARABONBA_PTR_SET_VALUE(callStrategy_, callStrategy) };


        // callVariables Field Functions 
        bool hasCallVariables() const { return this->callVariables_ != nullptr;};
        void deleteCallVariables() { this->callVariables_ = nullptr;};
        inline string getCallVariables() const { DARABONBA_PTR_GET_DEFAULT(callVariables_, "") };
        inline TaskProperty& setCallVariables(string callVariables) { DARABONBA_PTR_SET_VALUE(callVariables_, callVariables) };


        // callbackUrl Field Functions 
        bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
        void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
        inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
        inline TaskProperty& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


        // clidGroup Field Functions 
        bool hasClidGroup() const { return this->clidGroup_ != nullptr;};
        void deleteClidGroup() { this->clidGroup_ = nullptr;};
        inline string getClidGroup() const { DARABONBA_PTR_GET_DEFAULT(clidGroup_, "") };
        inline TaskProperty& setClidGroup(string clidGroup) { DARABONBA_PTR_SET_VALUE(clidGroup_, clidGroup) };


        // clidProperty Field Functions 
        bool hasClidProperty() const { return this->clidProperty_ != nullptr;};
        void deleteClidProperty() { this->clidProperty_ = nullptr;};
        inline string getClidProperty() const { DARABONBA_PTR_GET_DEFAULT(clidProperty_, "") };
        inline TaskProperty& setClidProperty(string clidProperty) { DARABONBA_PTR_SET_VALUE(clidProperty_, clidProperty) };


        // cnos Field Functions 
        bool hasCnos() const { return this->cnos_ != nullptr;};
        void deleteCnos() { this->cnos_ = nullptr;};
        inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
        inline TaskProperty& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


        // concurrency Field Functions 
        bool hasConcurrency() const { return this->concurrency_ != nullptr;};
        void deleteConcurrency() { this->concurrency_ = nullptr;};
        inline string getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, "") };
        inline TaskProperty& setConcurrency(string concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TaskProperty& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // curlRetryTimes Field Functions 
        bool hasCurlRetryTimes() const { return this->curlRetryTimes_ != nullptr;};
        void deleteCurlRetryTimes() { this->curlRetryTimes_ = nullptr;};
        inline string getCurlRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(curlRetryTimes_, "") };
        inline TaskProperty& setCurlRetryTimes(string curlRetryTimes) { DARABONBA_PTR_SET_VALUE(curlRetryTimes_, curlRetryTimes) };


        // customerClidType Field Functions 
        bool hasCustomerClidType() const { return this->customerClidType_ != nullptr;};
        void deleteCustomerClidType() { this->customerClidType_ = nullptr;};
        inline string getCustomerClidType() const { DARABONBA_PTR_GET_DEFAULT(customerClidType_, "") };
        inline TaskProperty& setCustomerClidType(string customerClidType) { DARABONBA_PTR_SET_VALUE(customerClidType_, customerClidType) };


        // customerClidWeight Field Functions 
        bool hasCustomerClidWeight() const { return this->customerClidWeight_ != nullptr;};
        void deleteCustomerClidWeight() { this->customerClidWeight_ = nullptr;};
        inline string getCustomerClidWeight() const { DARABONBA_PTR_GET_DEFAULT(customerClidWeight_, "") };
        inline TaskProperty& setCustomerClidWeight(string customerClidWeight) { DARABONBA_PTR_SET_VALUE(customerClidWeight_, customerClidWeight) };


        // customerClidWeightFlag Field Functions 
        bool hasCustomerClidWeightFlag() const { return this->customerClidWeightFlag_ != nullptr;};
        void deleteCustomerClidWeightFlag() { this->customerClidWeightFlag_ = nullptr;};
        inline string getCustomerClidWeightFlag() const { DARABONBA_PTR_GET_DEFAULT(customerClidWeightFlag_, "") };
        inline TaskProperty& setCustomerClidWeightFlag(string customerClidWeightFlag) { DARABONBA_PTR_SET_VALUE(customerClidWeightFlag_, customerClidWeightFlag) };


        // customerClids Field Functions 
        bool hasCustomerClids() const { return this->customerClids_ != nullptr;};
        void deleteCustomerClids() { this->customerClids_ = nullptr;};
        inline string getCustomerClids() const { DARABONBA_PTR_GET_DEFAULT(customerClids_, "") };
        inline TaskProperty& setCustomerClids(string customerClids) { DARABONBA_PTR_SET_VALUE(customerClids_, customerClids) };


        // customerClidsCategory Field Functions 
        bool hasCustomerClidsCategory() const { return this->customerClidsCategory_ != nullptr;};
        void deleteCustomerClidsCategory() { this->customerClidsCategory_ = nullptr;};
        inline string getCustomerClidsCategory() const { DARABONBA_PTR_GET_DEFAULT(customerClidsCategory_, "") };
        inline TaskProperty& setCustomerClidsCategory(string customerClidsCategory) { DARABONBA_PTR_SET_VALUE(customerClidsCategory_, customerClidsCategory) };


        // customerMoh Field Functions 
        bool hasCustomerMoh() const { return this->customerMoh_ != nullptr;};
        void deleteCustomerMoh() { this->customerMoh_ = nullptr;};
        inline string getCustomerMoh() const { DARABONBA_PTR_GET_DEFAULT(customerMoh_, "") };
        inline TaskProperty& setCustomerMoh(string customerMoh) { DARABONBA_PTR_SET_VALUE(customerMoh_, customerMoh) };


        // customerTimeout Field Functions 
        bool hasCustomerTimeout() const { return this->customerTimeout_ != nullptr;};
        void deleteCustomerTimeout() { this->customerTimeout_ = nullptr;};
        inline string getCustomerTimeout() const { DARABONBA_PTR_GET_DEFAULT(customerTimeout_, "") };
        inline TaskProperty& setCustomerTimeout(string customerTimeout) { DARABONBA_PTR_SET_VALUE(customerTimeout_, customerTimeout) };


        // customerVoice Field Functions 
        bool hasCustomerVoice() const { return this->customerVoice_ != nullptr;};
        void deleteCustomerVoice() { this->customerVoice_ = nullptr;};
        inline string getCustomerVoice() const { DARABONBA_PTR_GET_DEFAULT(customerVoice_, "") };
        inline TaskProperty& setCustomerVoice(string customerVoice) { DARABONBA_PTR_SET_VALUE(customerVoice_, customerVoice) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TaskProperty& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline TaskProperty& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // forceEndFlag Field Functions 
        bool hasForceEndFlag() const { return this->forceEndFlag_ != nullptr;};
        void deleteForceEndFlag() { this->forceEndFlag_ = nullptr;};
        inline string getForceEndFlag() const { DARABONBA_PTR_GET_DEFAULT(forceEndFlag_, "") };
        inline TaskProperty& setForceEndFlag(string forceEndFlag) { DARABONBA_PTR_SET_VALUE(forceEndFlag_, forceEndFlag) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline TaskProperty& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isRandom Field Functions 
        bool hasIsRandom() const { return this->isRandom_ != nullptr;};
        void deleteIsRandom() { this->isRandom_ = nullptr;};
        inline string getIsRandom() const { DARABONBA_PTR_GET_DEFAULT(isRandom_, "") };
        inline TaskProperty& setIsRandom(string isRandom) { DARABONBA_PTR_SET_VALUE(isRandom_, isRandom) };


        // isRewarm Field Functions 
        bool hasIsRewarm() const { return this->isRewarm_ != nullptr;};
        void deleteIsRewarm() { this->isRewarm_ = nullptr;};
        inline string getIsRewarm() const { DARABONBA_PTR_GET_DEFAULT(isRewarm_, "") };
        inline TaskProperty& setIsRewarm(string isRewarm) { DARABONBA_PTR_SET_VALUE(isRewarm_, isRewarm) };


        // ivrId Field Functions 
        bool hasIvrId() const { return this->ivrId_ != nullptr;};
        void deleteIvrId() { this->ivrId_ = nullptr;};
        inline string getIvrId() const { DARABONBA_PTR_GET_DEFAULT(ivrId_, "") };
        inline TaskProperty& setIvrId(string ivrId) { DARABONBA_PTR_SET_VALUE(ivrId_, ivrId) };


        // maxWaitTime Field Functions 
        bool hasMaxWaitTime() const { return this->maxWaitTime_ != nullptr;};
        void deleteMaxWaitTime() { this->maxWaitTime_ = nullptr;};
        inline string getMaxWaitTime() const { DARABONBA_PTR_GET_DEFAULT(maxWaitTime_, "") };
        inline TaskProperty& setMaxWaitTime(string maxWaitTime) { DARABONBA_PTR_SET_VALUE(maxWaitTime_, maxWaitTime) };


        // minAvailableAgentCount Field Functions 
        bool hasMinAvailableAgentCount() const { return this->minAvailableAgentCount_ != nullptr;};
        void deleteMinAvailableAgentCount() { this->minAvailableAgentCount_ = nullptr;};
        inline string getMinAvailableAgentCount() const { DARABONBA_PTR_GET_DEFAULT(minAvailableAgentCount_, "") };
        inline TaskProperty& setMinAvailableAgentCount(string minAvailableAgentCount) { DARABONBA_PTR_SET_VALUE(minAvailableAgentCount_, minAvailableAgentCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TaskProperty& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // overCallLimitCnos Field Functions 
        bool hasOverCallLimitCnos() const { return this->overCallLimitCnos_ != nullptr;};
        void deleteOverCallLimitCnos() { this->overCallLimitCnos_ = nullptr;};
        inline string getOverCallLimitCnos() const { DARABONBA_PTR_GET_DEFAULT(overCallLimitCnos_, "") };
        inline TaskProperty& setOverCallLimitCnos(string overCallLimitCnos) { DARABONBA_PTR_SET_VALUE(overCallLimitCnos_, overCallLimitCnos) };


        // overTime Field Functions 
        bool hasOverTime() const { return this->overTime_ != nullptr;};
        void deleteOverTime() { this->overTime_ = nullptr;};
        inline string getOverTime() const { DARABONBA_PTR_GET_DEFAULT(overTime_, "") };
        inline TaskProperty& setOverTime(string overTime) { DARABONBA_PTR_SET_VALUE(overTime_, overTime) };


        // pauseDuration Field Functions 
        bool hasPauseDuration() const { return this->pauseDuration_ != nullptr;};
        void deletePauseDuration() { this->pauseDuration_ = nullptr;};
        inline string getPauseDuration() const { DARABONBA_PTR_GET_DEFAULT(pauseDuration_, "") };
        inline TaskProperty& setPauseDuration(string pauseDuration) { DARABONBA_PTR_SET_VALUE(pauseDuration_, pauseDuration) };


        // pauseTime Field Functions 
        bool hasPauseTime() const { return this->pauseTime_ != nullptr;};
        void deletePauseTime() { this->pauseTime_ = nullptr;};
        inline string getPauseTime() const { DARABONBA_PTR_GET_DEFAULT(pauseTime_, "") };
        inline TaskProperty& setPauseTime(string pauseTime) { DARABONBA_PTR_SET_VALUE(pauseTime_, pauseTime) };


        // predictAdjust Field Functions 
        bool hasPredictAdjust() const { return this->predictAdjust_ != nullptr;};
        void deletePredictAdjust() { this->predictAdjust_ = nullptr;};
        inline string getPredictAdjust() const { DARABONBA_PTR_GET_DEFAULT(predictAdjust_, "") };
        inline TaskProperty& setPredictAdjust(string predictAdjust) { DARABONBA_PTR_SET_VALUE(predictAdjust_, predictAdjust) };


        // quotiety Field Functions 
        bool hasQuotiety() const { return this->quotiety_ != nullptr;};
        void deleteQuotiety() { this->quotiety_ = nullptr;};
        inline string getQuotiety() const { DARABONBA_PTR_GET_DEFAULT(quotiety_, "") };
        inline TaskProperty& setQuotiety(string quotiety) { DARABONBA_PTR_SET_VALUE(quotiety_, quotiety) };


        // retryStrategy Field Functions 
        bool hasRetryStrategy() const { return this->retryStrategy_ != nullptr;};
        void deleteRetryStrategy() { this->retryStrategy_ = nullptr;};
        inline string getRetryStrategy() const { DARABONBA_PTR_GET_DEFAULT(retryStrategy_, "") };
        inline TaskProperty& setRetryStrategy(string retryStrategy) { DARABONBA_PTR_SET_VALUE(retryStrategy_, retryStrategy) };


        // retryStrategyOnlyToday Field Functions 
        bool hasRetryStrategyOnlyToday() const { return this->retryStrategyOnlyToday_ != nullptr;};
        void deleteRetryStrategyOnlyToday() { this->retryStrategyOnlyToday_ = nullptr;};
        inline string getRetryStrategyOnlyToday() const { DARABONBA_PTR_GET_DEFAULT(retryStrategyOnlyToday_, "") };
        inline TaskProperty& setRetryStrategyOnlyToday(string retryStrategyOnlyToday) { DARABONBA_PTR_SET_VALUE(retryStrategyOnlyToday_, retryStrategyOnlyToday) };


        // standbyCnos Field Functions 
        bool hasStandbyCnos() const { return this->standbyCnos_ != nullptr;};
        void deleteStandbyCnos() { this->standbyCnos_ = nullptr;};
        inline string getStandbyCnos() const { DARABONBA_PTR_GET_DEFAULT(standbyCnos_, "") };
        inline TaskProperty& setStandbyCnos(string standbyCnos) { DARABONBA_PTR_SET_VALUE(standbyCnos_, standbyCnos) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline TaskProperty& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TaskProperty& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDescription Field Functions 
        bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
        void deleteStatusDescription() { this->statusDescription_ = nullptr;};
        inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
        inline TaskProperty& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


        // taskFields Field Functions 
        bool hasTaskFields() const { return this->taskFields_ != nullptr;};
        void deleteTaskFields() { this->taskFields_ = nullptr;};
        inline string getTaskFields() const { DARABONBA_PTR_GET_DEFAULT(taskFields_, "") };
        inline TaskProperty& setTaskFields(string taskFields) { DARABONBA_PTR_SET_VALUE(taskFields_, taskFields) };


        // timeStrategy Field Functions 
        bool hasTimeStrategy() const { return this->timeStrategy_ != nullptr;};
        void deleteTimeStrategy() { this->timeStrategy_ = nullptr;};
        inline string getTimeStrategy() const { DARABONBA_PTR_GET_DEFAULT(timeStrategy_, "") };
        inline TaskProperty& setTimeStrategy(string timeStrategy) { DARABONBA_PTR_SET_VALUE(timeStrategy_, timeStrategy) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TaskProperty& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userFields Field Functions 
        bool hasUserFields() const { return this->userFields_ != nullptr;};
        void deleteUserFields() { this->userFields_ = nullptr;};
        inline string getUserFields() const { DARABONBA_PTR_GET_DEFAULT(userFields_, "") };
        inline TaskProperty& setUserFields(string userFields) { DARABONBA_PTR_SET_VALUE(userFields_, userFields) };


        // warmUpDuration Field Functions 
        bool hasWarmUpDuration() const { return this->warmUpDuration_ != nullptr;};
        void deleteWarmUpDuration() { this->warmUpDuration_ = nullptr;};
        inline string getWarmUpDuration() const { DARABONBA_PTR_GET_DEFAULT(warmUpDuration_, "") };
        inline TaskProperty& setWarmUpDuration(string warmUpDuration) { DARABONBA_PTR_SET_VALUE(warmUpDuration_, warmUpDuration) };


        // wrapup Field Functions 
        bool hasWrapup() const { return this->wrapup_ != nullptr;};
        void deleteWrapup() { this->wrapup_ = nullptr;};
        inline string getWrapup() const { DARABONBA_PTR_GET_DEFAULT(wrapup_, "") };
        inline TaskProperty& setWrapup(string wrapup) { DARABONBA_PTR_SET_VALUE(wrapup_, wrapup) };


      protected:
        // adjustStep
        shared_ptr<string> adjustStep_ {};
        // 座席超时时间，单位秒
        shared_ptr<string> agentTimeout_ {};
        // 已废弃。座席利用率
        shared_ptr<string> agentUtilization_ {};
        // 初始化预计客户接通率
        shared_ptr<string> answerRate_ {};
        // 自动完成，0.关闭 1.开启
        shared_ptr<string> autoComplete_ {};
        // 定时开始，0.关闭 1.开启
        shared_ptr<string> autoStart_ {};
        // 定时开始日期，格式：yyyy-MM-dd，如：2017-02-11
        shared_ptr<string> autoStartDay_ {};
        // 定时开始时间，格式：HH:mm:ss，如：08:00:00
        shared_ptr<string> autoStartTime_ {};
        // 定时完成，0.关闭 1.开启
        shared_ptr<string> autoStop_ {};
        // 定时完成日期，格式：yyyy-MM-dd，如：2017-02-11
        shared_ptr<string> autoStopDay_ {};
        // 定时完成时间，格式：HH:mm:ss，如：17:00:00
        shared_ptr<string> autoStopTime_ {};
        // 呼叫方式，0.连续呼叫 1.间隔呼叫
        shared_ptr<string> autoTaskType_ {};
        // 间隔呼叫时间段，呼叫的时间段配置。参数格式：时间条件编号。支持多个，多个使用英文","逗号隔开，如：9,22。
        shared_ptr<string> autoTriggerTimeStrategy_ {};
        // 座席当日接听数限制，JsonArray格式[{"cnos":["2000","2001"],"limit":"5"}]
        shared_ptr<string> callLimitStrategy_ {};
        // 座席分配规则，1.随机 2.顺序 3.座席未进线最大时（从上一次呼叫结束到当前的总时长） 4.座席状态[空闲]最长时长（座席最近一次切换为空闲状态的持续时长）
        shared_ptr<string> callStrategy_ {};
        // 座席通道变量，JsonArray格式[{"key1":"value1"},{"key2":"value2"}]
        shared_ptr<string> callVariables_ {};
        // 已废弃。给企业推送任务状态的URL地址
        shared_ptr<string> callbackUrl_ {};
        // 已废弃。热线号码组
        shared_ptr<string> clidGroup_ {};
        // 外显规则，Json格式，外显号码选择规则：默认区号，是否匹配省会等；如：{"defaultAreaCode":"010", "isMatchCapital":"1"}
        shared_ptr<string> clidProperty_ {};
        // 座席工号列表
        shared_ptr<string> cnos_ {};
        // 最大并发限制
        shared_ptr<string> concurrency_ {};
        // 任务创建时间 ，格式为： yyyy-MM-dd HH:mm:ss
        shared_ptr<string> createTime_ {};
        // 已废弃。推送重试次数 最大5次
        shared_ptr<string> curlRetryTimes_ {};
        // 客户侧外显规则，1.随机 2.按区号
        shared_ptr<string> customerClidType_ {};
        // 外显号码比例配置内容，JsonArray格式[{"number":"123,345","weight":"5"},{"number":"567,789","weight":"5"}]
        shared_ptr<string> customerClidWeight_ {};
        // 外显号码比例配置开关，0.关闭 1.开启
        shared_ptr<string> customerClidWeightFlag_ {};
        // 客户侧外显号码列表
        shared_ptr<string> customerClids_ {};
        // 客户侧外显号码类型，1.外显固话 2.外显手机号 4.外显号码池 5.外显导航
        shared_ptr<string> customerClidsCategory_ {};
        // 客户侧等待音
        shared_ptr<string> customerMoh_ {};
        // 客户超时时间，单位秒
        shared_ptr<string> customerTimeout_ {};
        // 客户侧提示音
        shared_ptr<string> customerVoice_ {};
        // 任务描述
        shared_ptr<string> description_ {};
        // 企业编号
        shared_ptr<string> enterpriseId_ {};
        // 定时完成时强制结束任务。开启配置后，当任务到定时完成时间时无论任务中的号码是否已经呼完，均将任务状态设置为结束。适用于对数据有呼叫时间限制的场景。注：任务在结束状态时无法再次启动。
        shared_ptr<string> forceEndFlag_ {};
        // 外呼任务Id
        shared_ptr<string> id_ {};
        // 随机呼叫，0.关闭 1.开启
        shared_ptr<string> isRandom_ {};
        // 暂停后重新预热，0.关闭，1开启
        shared_ptr<string> isRewarm_ {};
        // 语音导航Id
        shared_ptr<string> ivrId_ {};
        // 座席最大等待时间，单位秒
        shared_ptr<string> maxWaitTime_ {};
        // 最小可用座席数
        shared_ptr<string> minAvailableAgentCount_ {};
        // 任务名称
        shared_ptr<string> name_ {};
        shared_ptr<string> overCallLimitCnos_ {};
        // 任务结束时间
        shared_ptr<string> overTime_ {};
        // 任务暂停时长(针对自动启动时间段) 单位分钟
        shared_ptr<string> pauseDuration_ {};
        // 任务暂停时间点
        shared_ptr<string> pauseTime_ {};
        // 超呼率
        shared_ptr<string> predictAdjust_ {};
        // 骚扰率，支持小数，精确到小数点两位
        shared_ptr<string> quotiety_ {};
        // 重试策略，「基础模式」数据结构为Json格式```{"retry":2,"strategy":[{"round":1,"time":"1-1-1"},{"round":2,"time":"2-2-2"}]}```格式说明：retry是重试次数，round是第几次重试，time是第几次重试间隔的时间：1-1-1，第一个1是天，第二个1是小时，第三个1是分钟「高级模式」高级模式需要开启「号码状态识别」服务后。目前只支持「自动外呼」任务模式。数据结构为JsonArray格式 ```[{"condition":{"sipCause":[710,719]},"retry":1,"sort":1,"strategy":[{"round":1,"time":"0-0-10"}]},{"condition":{"sipCause":[800]},"retry":1,"sort":2,"strategy":[{"round":2,"time":"0-0-10"}]}]```格式说明：condition是重试条件，sort是重试条件的顺序，其余字段与基础模式一致
        shared_ptr<string> retryStrategy_ {};
        // 重试仅当天生效，0.关闭 1.开启，删除待重试的数据和待呼叫的数据 2.开启，删除待重试的数据 3.开启，删除待呼叫的数据
        shared_ptr<string> retryStrategyOnlyToday_ {};
        // 已废弃
        shared_ptr<string> standbyCnos_ {};
        // 任务开始时间
        shared_ptr<string> startTime_ {};
        // 任务状态，0.初始 1.运行中 2.暂停 3.结束
        shared_ptr<string> status_ {};
        // 任务状态描述
        shared_ptr<string> statusDescription_ {};
        // 已废弃。任务级呼叫属性 json格式{"key1":"value1","key2":"value2"}，仅做呼叫控制用，不放通道变量
        shared_ptr<string> taskFields_ {};
        // 禁止呼叫时间限制，在特定的时间段内禁止呼叫。参数格式：时间条件编号。支持多个，多个使用英文","逗号隔开，如：9,22。
        shared_ptr<string> timeStrategy_ {};
        // 任务类型，1.预测外呼任务 2.自动外呼任务
        shared_ptr<string> type_ {};
        // 任务自定义字段，JsonArray格式[{"key1":"value1"},{"key2":"value2"}]
        shared_ptr<string> userFields_ {};
        // 任务预热时间，单位秒
        shared_ptr<string> warmUpDuration_ {};
        // 座席整理时间，单位秒
        shared_ptr<string> wrapup_ {};
      };

      virtual bool empty() const override { return this->taskProperty_ == nullptr; };
      // taskProperty Field Functions 
      bool hasTaskProperty() const { return this->taskProperty_ != nullptr;};
      void deleteTaskProperty() { this->taskProperty_ = nullptr;};
      inline const Data::TaskProperty & getTaskProperty() const { DARABONBA_PTR_GET_CONST(taskProperty_, Data::TaskProperty) };
      inline Data::TaskProperty getTaskProperty() { DARABONBA_PTR_GET(taskProperty_, Data::TaskProperty) };
      inline Data& setTaskProperty(const Data::TaskProperty & taskProperty) { DARABONBA_PTR_SET_VALUE(taskProperty_, taskProperty) };
      inline Data& setTaskProperty(Data::TaskProperty && taskProperty) { DARABONBA_PTR_SET_RVALUE(taskProperty_, taskProperty) };


    protected:
      // 任务配置信息
      shared_ptr<Data::TaskProperty> taskProperty_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudGetTaskResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudGetTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudGetTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudGetTaskResponseBody::Data) };
    inline CloudGetTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudGetTaskResponseBody::Data) };
    inline CloudGetTaskResponseBody& setData(const CloudGetTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudGetTaskResponseBody& setData(CloudGetTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudGetTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudGetTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudGetTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
