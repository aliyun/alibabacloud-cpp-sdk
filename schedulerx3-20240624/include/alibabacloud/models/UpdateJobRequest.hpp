// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_TO_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NoticeConfig, noticeConfig_);
      DARABONBA_PTR_TO_JSON(NoticeContacts, noticeContacts_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(XAttrs, XAttrs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_FROM_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NoticeConfig, noticeConfig_);
      DARABONBA_PTR_FROM_JSON(NoticeContacts, noticeContacts_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(XAttrs, XAttrs_);
    };
    UpdateJobRequest() = default ;
    UpdateJobRequest(const UpdateJobRequest &) = default ;
    UpdateJobRequest(UpdateJobRequest &&) = default ;
    UpdateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobRequest() = default ;
    UpdateJobRequest& operator=(const UpdateJobRequest &) = default ;
    UpdateJobRequest& operator=(UpdateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NoticeContacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NoticeContacts& obj) { 
        DARABONBA_PTR_TO_JSON(ContactType, contactType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, NoticeContacts& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      NoticeContacts() = default ;
      NoticeContacts(const NoticeContacts &) = default ;
      NoticeContacts(NoticeContacts &&) = default ;
      NoticeContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NoticeContacts() = default ;
      NoticeContacts& operator=(const NoticeContacts &) = default ;
      NoticeContacts& operator=(NoticeContacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactType_ == nullptr
        && this->name_ == nullptr; };
      // contactType Field Functions 
      bool hasContactType() const { return this->contactType_ != nullptr;};
      void deleteContactType() { this->contactType_ = nullptr;};
      inline int32_t getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, 0) };
      inline NoticeContacts& setContactType(int32_t contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NoticeContacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The contact type. 
      // > Default configurations: 1.
      shared_ptr<int32_t> contactType_ {};
      // The contact name.
      shared_ptr<string> name_ {};
    };

    class NoticeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NoticeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EndEarly, endEarly_);
        DARABONBA_PTR_TO_JSON(EndEarlyEnable, endEarlyEnable_);
        DARABONBA_PTR_TO_JSON(FailEnable, failEnable_);
        DARABONBA_PTR_TO_JSON(FailLimitTimes, failLimitTimes_);
        DARABONBA_PTR_TO_JSON(MissWorkerEnable, missWorkerEnable_);
        DARABONBA_PTR_TO_JSON(SendChannel, sendChannel_);
        DARABONBA_PTR_TO_JSON(SuccessNotice, successNotice_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(TimeoutEnable, timeoutEnable_);
        DARABONBA_PTR_TO_JSON(TimeoutKillEnable, timeoutKillEnable_);
      };
      friend void from_json(const Darabonba::Json& j, NoticeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EndEarly, endEarly_);
        DARABONBA_PTR_FROM_JSON(EndEarlyEnable, endEarlyEnable_);
        DARABONBA_PTR_FROM_JSON(FailEnable, failEnable_);
        DARABONBA_PTR_FROM_JSON(FailLimitTimes, failLimitTimes_);
        DARABONBA_PTR_FROM_JSON(MissWorkerEnable, missWorkerEnable_);
        DARABONBA_PTR_FROM_JSON(SendChannel, sendChannel_);
        DARABONBA_PTR_FROM_JSON(SuccessNotice, successNotice_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(TimeoutEnable, timeoutEnable_);
        DARABONBA_PTR_FROM_JSON(TimeoutKillEnable, timeoutKillEnable_);
      };
      NoticeConfig() = default ;
      NoticeConfig(const NoticeConfig &) = default ;
      NoticeConfig(NoticeConfig &&) = default ;
      NoticeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NoticeConfig() = default ;
      NoticeConfig& operator=(const NoticeConfig &) = default ;
      NoticeConfig& operator=(NoticeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endEarly_ == nullptr
        && this->endEarlyEnable_ == nullptr && this->failEnable_ == nullptr && this->failLimitTimes_ == nullptr && this->missWorkerEnable_ == nullptr && this->sendChannel_ == nullptr
        && this->successNotice_ == nullptr && this->timeout_ == nullptr && this->timeoutEnable_ == nullptr && this->timeoutKillEnable_ == nullptr; };
      // endEarly Field Functions 
      bool hasEndEarly() const { return this->endEarly_ != nullptr;};
      void deleteEndEarly() { this->endEarly_ = nullptr;};
      inline int32_t getEndEarly() const { DARABONBA_PTR_GET_DEFAULT(endEarly_, 0) };
      inline NoticeConfig& setEndEarly(int32_t endEarly) { DARABONBA_PTR_SET_VALUE(endEarly_, endEarly) };


      // endEarlyEnable Field Functions 
      bool hasEndEarlyEnable() const { return this->endEarlyEnable_ != nullptr;};
      void deleteEndEarlyEnable() { this->endEarlyEnable_ = nullptr;};
      inline bool getEndEarlyEnable() const { DARABONBA_PTR_GET_DEFAULT(endEarlyEnable_, false) };
      inline NoticeConfig& setEndEarlyEnable(bool endEarlyEnable) { DARABONBA_PTR_SET_VALUE(endEarlyEnable_, endEarlyEnable) };


      // failEnable Field Functions 
      bool hasFailEnable() const { return this->failEnable_ != nullptr;};
      void deleteFailEnable() { this->failEnable_ = nullptr;};
      inline bool getFailEnable() const { DARABONBA_PTR_GET_DEFAULT(failEnable_, false) };
      inline NoticeConfig& setFailEnable(bool failEnable) { DARABONBA_PTR_SET_VALUE(failEnable_, failEnable) };


      // failLimitTimes Field Functions 
      bool hasFailLimitTimes() const { return this->failLimitTimes_ != nullptr;};
      void deleteFailLimitTimes() { this->failLimitTimes_ = nullptr;};
      inline int32_t getFailLimitTimes() const { DARABONBA_PTR_GET_DEFAULT(failLimitTimes_, 0) };
      inline NoticeConfig& setFailLimitTimes(int32_t failLimitTimes) { DARABONBA_PTR_SET_VALUE(failLimitTimes_, failLimitTimes) };


      // missWorkerEnable Field Functions 
      bool hasMissWorkerEnable() const { return this->missWorkerEnable_ != nullptr;};
      void deleteMissWorkerEnable() { this->missWorkerEnable_ = nullptr;};
      inline bool getMissWorkerEnable() const { DARABONBA_PTR_GET_DEFAULT(missWorkerEnable_, false) };
      inline NoticeConfig& setMissWorkerEnable(bool missWorkerEnable) { DARABONBA_PTR_SET_VALUE(missWorkerEnable_, missWorkerEnable) };


      // sendChannel Field Functions 
      bool hasSendChannel() const { return this->sendChannel_ != nullptr;};
      void deleteSendChannel() { this->sendChannel_ = nullptr;};
      inline string getSendChannel() const { DARABONBA_PTR_GET_DEFAULT(sendChannel_, "") };
      inline NoticeConfig& setSendChannel(string sendChannel) { DARABONBA_PTR_SET_VALUE(sendChannel_, sendChannel) };


      // successNotice Field Functions 
      bool hasSuccessNotice() const { return this->successNotice_ != nullptr;};
      void deleteSuccessNotice() { this->successNotice_ = nullptr;};
      inline bool getSuccessNotice() const { DARABONBA_PTR_GET_DEFAULT(successNotice_, false) };
      inline NoticeConfig& setSuccessNotice(bool successNotice) { DARABONBA_PTR_SET_VALUE(successNotice_, successNotice) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
      inline NoticeConfig& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // timeoutEnable Field Functions 
      bool hasTimeoutEnable() const { return this->timeoutEnable_ != nullptr;};
      void deleteTimeoutEnable() { this->timeoutEnable_ = nullptr;};
      inline bool getTimeoutEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutEnable_, false) };
      inline NoticeConfig& setTimeoutEnable(bool timeoutEnable) { DARABONBA_PTR_SET_VALUE(timeoutEnable_, timeoutEnable) };


      // timeoutKillEnable Field Functions 
      bool hasTimeoutKillEnable() const { return this->timeoutKillEnable_ != nullptr;};
      void deleteTimeoutKillEnable() { this->timeoutKillEnable_ = nullptr;};
      inline bool getTimeoutKillEnable() const { DARABONBA_PTR_GET_DEFAULT(timeoutKillEnable_, false) };
      inline NoticeConfig& setTimeoutKillEnable(bool timeoutKillEnable) { DARABONBA_PTR_SET_VALUE(timeoutKillEnable_, timeoutKillEnable) };


    protected:
      // The early termination threshold, in seconds.
      shared_ptr<int32_t> endEarly_ {};
      // Specifies whether to enable the early termination alert.
      shared_ptr<bool> endEarlyEnable_ {};
      // Specifies whether to enable the failure alert. Valid values:
      // 
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> failEnable_ {};
      // The number of consecutive failures.
      // > An alert is sent only when the number of consecutive failures exceeds the configured value.
      shared_ptr<int32_t> failLimitTimes_ {};
      // Specifies whether to enable the no-available-machine alert. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> missWorkerEnable_ {};
      // The notification channel. Valid values:
      // - sms: text message
      // - phone: phone call
      // - mail: email
      // - webhook: webhook
      // > Separate multiple notification channels with commas.
      shared_ptr<string> sendChannel_ {};
      // Specifies whether to enable the success notification. Valid values:
      // 
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> successNotice_ {};
      // The node execution timeout period, in seconds.
      shared_ptr<int64_t> timeout_ {};
      // Specifies whether to enable the timeout alert. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      shared_ptr<bool> timeoutEnable_ {};
      // Specifies whether to enable the timeout termination for the current trigger. Valid values:
      // 
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> timeoutKillEnable_ {};
    };

    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->appName_ == nullptr && this->attemptInterval_ == nullptr && this->calendar_ == nullptr && this->childJobId_ == nullptr && this->clusterId_ == nullptr
        && this->dependentStrategy_ == nullptr && this->description_ == nullptr && this->executorBlockStrategy_ == nullptr && this->jobHandler_ == nullptr && this->jobId_ == nullptr
        && this->maxAttempt_ == nullptr && this->maxConcurrency_ == nullptr && this->name_ == nullptr && this->noticeConfig_ == nullptr && this->noticeContacts_ == nullptr
        && this->parameters_ == nullptr && this->priority_ == nullptr && this->routeStrategy_ == nullptr && this->script_ == nullptr && this->startTime_ == nullptr
        && this->startTimeType_ == nullptr && this->timeExpression_ == nullptr && this->timeType_ == nullptr && this->timezone_ == nullptr && this->weight_ == nullptr
        && this->XAttrs_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline UpdateJobRequest& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateJobRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t getAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline UpdateJobRequest& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string getCalendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline UpdateJobRequest& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // childJobId Field Functions 
    bool hasChildJobId() const { return this->childJobId_ != nullptr;};
    void deleteChildJobId() { this->childJobId_ = nullptr;};
    inline string getChildJobId() const { DARABONBA_PTR_GET_DEFAULT(childJobId_, "") };
    inline UpdateJobRequest& setChildJobId(string childJobId) { DARABONBA_PTR_SET_VALUE(childJobId_, childJobId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateJobRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dependentStrategy Field Functions 
    bool hasDependentStrategy() const { return this->dependentStrategy_ != nullptr;};
    void deleteDependentStrategy() { this->dependentStrategy_ = nullptr;};
    inline int32_t getDependentStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependentStrategy_, 0) };
    inline UpdateJobRequest& setDependentStrategy(int32_t dependentStrategy) { DARABONBA_PTR_SET_VALUE(dependentStrategy_, dependentStrategy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executorBlockStrategy Field Functions 
    bool hasExecutorBlockStrategy() const { return this->executorBlockStrategy_ != nullptr;};
    void deleteExecutorBlockStrategy() { this->executorBlockStrategy_ = nullptr;};
    inline int32_t getExecutorBlockStrategy() const { DARABONBA_PTR_GET_DEFAULT(executorBlockStrategy_, 0) };
    inline UpdateJobRequest& setExecutorBlockStrategy(int32_t executorBlockStrategy) { DARABONBA_PTR_SET_VALUE(executorBlockStrategy_, executorBlockStrategy) };


    // jobHandler Field Functions 
    bool hasJobHandler() const { return this->jobHandler_ != nullptr;};
    void deleteJobHandler() { this->jobHandler_ = nullptr;};
    inline string getJobHandler() const { DARABONBA_PTR_GET_DEFAULT(jobHandler_, "") };
    inline UpdateJobRequest& setJobHandler(string jobHandler) { DARABONBA_PTR_SET_VALUE(jobHandler_, jobHandler) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline UpdateJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t getMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline UpdateJobRequest& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline UpdateJobRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // noticeConfig Field Functions 
    bool hasNoticeConfig() const { return this->noticeConfig_ != nullptr;};
    void deleteNoticeConfig() { this->noticeConfig_ = nullptr;};
    inline const UpdateJobRequest::NoticeConfig & getNoticeConfig() const { DARABONBA_PTR_GET_CONST(noticeConfig_, UpdateJobRequest::NoticeConfig) };
    inline UpdateJobRequest::NoticeConfig getNoticeConfig() { DARABONBA_PTR_GET(noticeConfig_, UpdateJobRequest::NoticeConfig) };
    inline UpdateJobRequest& setNoticeConfig(const UpdateJobRequest::NoticeConfig & noticeConfig) { DARABONBA_PTR_SET_VALUE(noticeConfig_, noticeConfig) };
    inline UpdateJobRequest& setNoticeConfig(UpdateJobRequest::NoticeConfig && noticeConfig) { DARABONBA_PTR_SET_RVALUE(noticeConfig_, noticeConfig) };


    // noticeContacts Field Functions 
    bool hasNoticeContacts() const { return this->noticeContacts_ != nullptr;};
    void deleteNoticeContacts() { this->noticeContacts_ = nullptr;};
    inline const vector<UpdateJobRequest::NoticeContacts> & getNoticeContacts() const { DARABONBA_PTR_GET_CONST(noticeContacts_, vector<UpdateJobRequest::NoticeContacts>) };
    inline vector<UpdateJobRequest::NoticeContacts> getNoticeContacts() { DARABONBA_PTR_GET(noticeContacts_, vector<UpdateJobRequest::NoticeContacts>) };
    inline UpdateJobRequest& setNoticeContacts(const vector<UpdateJobRequest::NoticeContacts> & noticeContacts) { DARABONBA_PTR_SET_VALUE(noticeContacts_, noticeContacts) };
    inline UpdateJobRequest& setNoticeContacts(vector<UpdateJobRequest::NoticeContacts> && noticeContacts) { DARABONBA_PTR_SET_RVALUE(noticeContacts_, noticeContacts) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline UpdateJobRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeStrategy Field Functions 
    bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
    void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
    inline int32_t getRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
    inline UpdateJobRequest& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline UpdateJobRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline UpdateJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeType Field Functions 
    bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
    void deleteStartTimeType() { this->startTimeType_ = nullptr;};
    inline string getStartTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, "") };
    inline UpdateJobRequest& setStartTimeType(string startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline UpdateJobRequest& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline UpdateJobRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline UpdateJobRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateJobRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // XAttrs Field Functions 
    bool hasXAttrs() const { return this->XAttrs_ != nullptr;};
    void deleteXAttrs() { this->XAttrs_ = nullptr;};
    inline string getXAttrs() const { DARABONBA_PTR_GET_DEFAULT(XAttrs_, "") };
    inline UpdateJobRequest& setXAttrs(string XAttrs) { DARABONBA_PTR_SET_VALUE(XAttrs_, XAttrs) };


  protected:
    shared_ptr<int64_t> appGroupId_ {};
    // The application name.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The retry interval upon node failure.
    shared_ptr<int32_t> attemptInterval_ {};
    // The custom calendar.
    shared_ptr<string> calendar_ {};
    // The child node IDs, separated by commas.
    shared_ptr<string> childJobId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The dependency strategy.
    shared_ptr<int32_t> dependentStrategy_ {};
    // The node description.
    shared_ptr<string> description_ {};
    // The client blocking strategy. Valid values:
    // - 1: serial execution on a single machine
    // - 2: ignore subsequent scheduling
    // - 3: override previous scheduling
    shared_ptr<int32_t> executorBlockStrategy_ {};
    // The JobHandler name.
    shared_ptr<string> jobHandler_ {};
    // The node ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> jobId_ {};
    // The maximum number of retry attempts upon node failure.
    shared_ptr<int32_t> maxAttempt_ {};
    // The maximum number of concurrent instances for the node.
    // >The maximum number of instances that can run simultaneously for the same node. A value of 1 indicates that repeated execution is not allowed. If the concurrency limit is exceeded, the current scheduling is skipped.
    shared_ptr<int32_t> maxConcurrency_ {};
    // The node name.
    shared_ptr<string> name_ {};
    // The notification configuration.
    shared_ptr<UpdateJobRequest::NoticeConfig> noticeConfig_ {};
    // The notification contact configuration.
    shared_ptr<vector<UpdateJobRequest::NoticeContacts>> noticeContacts_ {};
    // The node parameters.
    shared_ptr<string> parameters_ {};
    // The node execution priority. Valid values:
    // 
    // - 1: low
    // - 5: medium
    // - 10: high
    // - 15: very high
    shared_ptr<int32_t> priority_ {};
    // The routing strategy. Valid values:
    // 
    // - 1: round robin
    // - 2: random
    // - 3: first
    // - 4: last
    // - 5: least frequently used
    // - 6: least recently used
    // - 7: consistent hashing
    // - 8: shard broadcast
    shared_ptr<int32_t> routeStrategy_ {};
    // The script content for non-BEAN nodes. Use this field to configure the script.
    shared_ptr<string> script_ {};
    // The scheduling start time.
    shared_ptr<int64_t> startTime_ {};
    // The start time type.
    shared_ptr<string> startTimeType_ {};
    // The time expression. Set the time expression based on the selected time type.
    // 
    // - none: No value is required.
    // - cron: Specify a standard cron expression. Online verification is supported.
    // - api: No value is required.
    // - fixed_rate: Specify a fixed frequency value in seconds. For example, 30 indicates that the node is triggered every 30 seconds.
    // - one_time: Specify a scheduling time in the format of yyyy-MM-dd HH:mm:ss or a timestamp in milliseconds. For example, "2022-10-10 10:10:00".
    shared_ptr<string> timeExpression_ {};
    // The time type. Valid values:
    // 
    // - -1: none
    // - 1: cron
    // - 3: fix_rate
    // - 5: one_time
    // - 100: api
    shared_ptr<int32_t> timeType_ {};
    // The time zone.
    // > The default value is the time zone of the SchedulerX server.
    shared_ptr<string> timezone_ {};
    // The node weight.
    shared_ptr<int32_t> weight_ {};
    shared_ptr<string> XAttrs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
