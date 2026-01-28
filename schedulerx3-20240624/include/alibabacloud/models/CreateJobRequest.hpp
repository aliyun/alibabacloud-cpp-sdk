// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
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
  class CreateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Coordinate, coordinate_);
      DARABONBA_PTR_TO_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_TO_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
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
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Coordinate, coordinate_);
      DARABONBA_PTR_FROM_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_FROM_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateJobRequest() = default ;
    CreateJobRequest(const CreateJobRequest &) = default ;
    CreateJobRequest(CreateJobRequest &&) = default ;
    CreateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequest() = default ;
    CreateJobRequest& operator=(const CreateJobRequest &) = default ;
    CreateJobRequest& operator=(CreateJobRequest &&) = default ;
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
      shared_ptr<int32_t> contactType_ {};
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
      shared_ptr<int32_t> endEarly_ {};
      shared_ptr<bool> endEarlyEnable_ {};
      shared_ptr<bool> failEnable_ {};
      shared_ptr<int32_t> failLimitTimes_ {};
      shared_ptr<bool> missWorkerEnable_ {};
      shared_ptr<string> sendChannel_ {};
      shared_ptr<bool> successNotice_ {};
      shared_ptr<int64_t> timeout_ {};
      shared_ptr<bool> timeoutEnable_ {};
      shared_ptr<bool> timeoutKillEnable_ {};
    };

    class Coordinate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Coordinate& obj) { 
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, Coordinate& obj) { 
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
      };
      Coordinate() = default ;
      Coordinate(const Coordinate &) = default ;
      Coordinate(Coordinate &&) = default ;
      Coordinate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Coordinate() = default ;
      Coordinate& operator=(const Coordinate &) = default ;
      Coordinate& operator=(Coordinate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->height_ == nullptr
        && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Coordinate& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Coordinate& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Coordinate& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Coordinate& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    protected:
      shared_ptr<float> height_ {};
      shared_ptr<float> width_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->attemptInterval_ == nullptr && this->calendar_ == nullptr && this->childJobId_ == nullptr && this->clusterId_ == nullptr && this->coordinate_ == nullptr
        && this->dependentStrategy_ == nullptr && this->description_ == nullptr && this->executorBlockStrategy_ == nullptr && this->jobHandler_ == nullptr && this->jobType_ == nullptr
        && this->maxAttempt_ == nullptr && this->maxConcurrency_ == nullptr && this->name_ == nullptr && this->noticeConfig_ == nullptr && this->noticeContacts_ == nullptr
        && this->parameters_ == nullptr && this->priority_ == nullptr && this->routeStrategy_ == nullptr && this->script_ == nullptr && this->startTime_ == nullptr
        && this->startTimeType_ == nullptr && this->status_ == nullptr && this->timeExpression_ == nullptr && this->timeType_ == nullptr && this->timezone_ == nullptr
        && this->weight_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateJobRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t getAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline CreateJobRequest& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string getCalendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline CreateJobRequest& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // childJobId Field Functions 
    bool hasChildJobId() const { return this->childJobId_ != nullptr;};
    void deleteChildJobId() { this->childJobId_ = nullptr;};
    inline string getChildJobId() const { DARABONBA_PTR_GET_DEFAULT(childJobId_, "") };
    inline CreateJobRequest& setChildJobId(string childJobId) { DARABONBA_PTR_SET_VALUE(childJobId_, childJobId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateJobRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coordinate Field Functions 
    bool hasCoordinate() const { return this->coordinate_ != nullptr;};
    void deleteCoordinate() { this->coordinate_ = nullptr;};
    inline const CreateJobRequest::Coordinate & getCoordinate() const { DARABONBA_PTR_GET_CONST(coordinate_, CreateJobRequest::Coordinate) };
    inline CreateJobRequest::Coordinate getCoordinate() { DARABONBA_PTR_GET(coordinate_, CreateJobRequest::Coordinate) };
    inline CreateJobRequest& setCoordinate(const CreateJobRequest::Coordinate & coordinate) { DARABONBA_PTR_SET_VALUE(coordinate_, coordinate) };
    inline CreateJobRequest& setCoordinate(CreateJobRequest::Coordinate && coordinate) { DARABONBA_PTR_SET_RVALUE(coordinate_, coordinate) };


    // dependentStrategy Field Functions 
    bool hasDependentStrategy() const { return this->dependentStrategy_ != nullptr;};
    void deleteDependentStrategy() { this->dependentStrategy_ = nullptr;};
    inline int32_t getDependentStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependentStrategy_, 0) };
    inline CreateJobRequest& setDependentStrategy(int32_t dependentStrategy) { DARABONBA_PTR_SET_VALUE(dependentStrategy_, dependentStrategy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executorBlockStrategy Field Functions 
    bool hasExecutorBlockStrategy() const { return this->executorBlockStrategy_ != nullptr;};
    void deleteExecutorBlockStrategy() { this->executorBlockStrategy_ = nullptr;};
    inline int32_t getExecutorBlockStrategy() const { DARABONBA_PTR_GET_DEFAULT(executorBlockStrategy_, 0) };
    inline CreateJobRequest& setExecutorBlockStrategy(int32_t executorBlockStrategy) { DARABONBA_PTR_SET_VALUE(executorBlockStrategy_, executorBlockStrategy) };


    // jobHandler Field Functions 
    bool hasJobHandler() const { return this->jobHandler_ != nullptr;};
    void deleteJobHandler() { this->jobHandler_ = nullptr;};
    inline string getJobHandler() const { DARABONBA_PTR_GET_DEFAULT(jobHandler_, "") };
    inline CreateJobRequest& setJobHandler(string jobHandler) { DARABONBA_PTR_SET_VALUE(jobHandler_, jobHandler) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t getMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline CreateJobRequest& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline CreateJobRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // noticeConfig Field Functions 
    bool hasNoticeConfig() const { return this->noticeConfig_ != nullptr;};
    void deleteNoticeConfig() { this->noticeConfig_ = nullptr;};
    inline const CreateJobRequest::NoticeConfig & getNoticeConfig() const { DARABONBA_PTR_GET_CONST(noticeConfig_, CreateJobRequest::NoticeConfig) };
    inline CreateJobRequest::NoticeConfig getNoticeConfig() { DARABONBA_PTR_GET(noticeConfig_, CreateJobRequest::NoticeConfig) };
    inline CreateJobRequest& setNoticeConfig(const CreateJobRequest::NoticeConfig & noticeConfig) { DARABONBA_PTR_SET_VALUE(noticeConfig_, noticeConfig) };
    inline CreateJobRequest& setNoticeConfig(CreateJobRequest::NoticeConfig && noticeConfig) { DARABONBA_PTR_SET_RVALUE(noticeConfig_, noticeConfig) };


    // noticeContacts Field Functions 
    bool hasNoticeContacts() const { return this->noticeContacts_ != nullptr;};
    void deleteNoticeContacts() { this->noticeContacts_ = nullptr;};
    inline const vector<CreateJobRequest::NoticeContacts> & getNoticeContacts() const { DARABONBA_PTR_GET_CONST(noticeContacts_, vector<CreateJobRequest::NoticeContacts>) };
    inline vector<CreateJobRequest::NoticeContacts> getNoticeContacts() { DARABONBA_PTR_GET(noticeContacts_, vector<CreateJobRequest::NoticeContacts>) };
    inline CreateJobRequest& setNoticeContacts(const vector<CreateJobRequest::NoticeContacts> & noticeContacts) { DARABONBA_PTR_SET_VALUE(noticeContacts_, noticeContacts) };
    inline CreateJobRequest& setNoticeContacts(vector<CreateJobRequest::NoticeContacts> && noticeContacts) { DARABONBA_PTR_SET_RVALUE(noticeContacts_, noticeContacts) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateJobRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeStrategy Field Functions 
    bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
    void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
    inline int32_t getRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
    inline CreateJobRequest& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline CreateJobRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeType Field Functions 
    bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
    void deleteStartTimeType() { this->startTimeType_ = nullptr;};
    inline int32_t getStartTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, 0) };
    inline CreateJobRequest& setStartTimeType(int32_t startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateJobRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline CreateJobRequest& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline CreateJobRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateJobRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateJobRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int32_t> attemptInterval_ {};
    shared_ptr<string> calendar_ {};
    shared_ptr<string> childJobId_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<CreateJobRequest::Coordinate> coordinate_ {};
    shared_ptr<int32_t> dependentStrategy_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> executorBlockStrategy_ {};
    shared_ptr<string> jobHandler_ {};
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    shared_ptr<int32_t> maxAttempt_ {};
    shared_ptr<int32_t> maxConcurrency_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<CreateJobRequest::NoticeConfig> noticeConfig_ {};
    shared_ptr<vector<CreateJobRequest::NoticeContacts>> noticeContacts_ {};
    shared_ptr<string> parameters_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<int32_t> routeStrategy_ {};
    shared_ptr<string> script_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int32_t> startTimeType_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> timeExpression_ {};
    // This parameter is required.
    shared_ptr<int32_t> timeType_ {};
    shared_ptr<string> timezone_ {};
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
