// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBATCHJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBATCHJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBatchJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBatchJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobGroup, jobGroup_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBatchJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobGroup, jobGroup_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyBatchJobsResponseBody() = default ;
    ModifyBatchJobsResponseBody(const ModifyBatchJobsResponseBody &) = default ;
    ModifyBatchJobsResponseBody(ModifyBatchJobsResponseBody &&) = default ;
    ModifyBatchJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBatchJobsResponseBody() = default ;
    ModifyBatchJobsResponseBody& operator=(const ModifyBatchJobsResponseBody &) = default ;
    ModifyBatchJobsResponseBody& operator=(ModifyBatchJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobGroup& obj) { 
        DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
        DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
        DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
        DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
        DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      };
      friend void from_json(const Darabonba::Json& j, JobGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
        DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
        DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
        DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
        DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      };
      JobGroup() = default ;
      JobGroup(const JobGroup &) = default ;
      JobGroup(JobGroup &&) = default ;
      JobGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobGroup() = default ;
      JobGroup& operator=(const JobGroup &) = default ;
      JobGroup& operator=(JobGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Strategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
          DARABONBA_PTR_TO_JSON(Customized, customized_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(FollowUpStrategy, followUpStrategy_);
          DARABONBA_PTR_TO_JSON(IsTemplate, isTemplate_);
          DARABONBA_PTR_TO_JSON(MaxAttemptsPerDay, maxAttemptsPerDay_);
          DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
          DARABONBA_PTR_TO_JSON(RepeatBy, repeatBy_);
          DARABONBA_PTR_TO_JSON(RepeatDays, repeatDays_);
          DARABONBA_PTR_TO_JSON(RoutingStrategy, routingStrategy_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StrategyDescription, strategyDescription_);
          DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(WorkingTime, workingTime_);
        };
        friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
          DARABONBA_PTR_FROM_JSON(Customized, customized_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(FollowUpStrategy, followUpStrategy_);
          DARABONBA_PTR_FROM_JSON(IsTemplate, isTemplate_);
          DARABONBA_PTR_FROM_JSON(MaxAttemptsPerDay, maxAttemptsPerDay_);
          DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
          DARABONBA_PTR_FROM_JSON(RepeatBy, repeatBy_);
          DARABONBA_PTR_FROM_JSON(RepeatDays, repeatDays_);
          DARABONBA_PTR_FROM_JSON(RoutingStrategy, routingStrategy_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StrategyDescription, strategyDescription_);
          DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(WorkingTime, workingTime_);
        };
        Strategy() = default ;
        Strategy(const Strategy &) = default ;
        Strategy(Strategy &&) = default ;
        Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Strategy() = default ;
        Strategy& operator=(const Strategy &) = default ;
        Strategy& operator=(Strategy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WorkingTime : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WorkingTime& obj) { 
            DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          };
          friend void from_json(const Darabonba::Json& j, WorkingTime& obj) { 
            DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          };
          WorkingTime() = default ;
          WorkingTime(const WorkingTime &) = default ;
          WorkingTime(WorkingTime &&) = default ;
          WorkingTime(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WorkingTime() = default ;
          WorkingTime& operator=(const WorkingTime &) = default ;
          WorkingTime& operator=(WorkingTime &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr; };
          // beginTime Field Functions 
          bool hasBeginTime() const { return this->beginTime_ != nullptr;};
          void deleteBeginTime() { this->beginTime_ = nullptr;};
          inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
          inline WorkingTime& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline WorkingTime& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        protected:
          shared_ptr<string> beginTime_ {};
          shared_ptr<string> endTime_ {};
        };

        virtual bool empty() const override { return this->customized_ == nullptr
        && this->endTime_ == nullptr && this->followUpStrategy_ == nullptr && this->isTemplate_ == nullptr && this->maxAttemptsPerDay_ == nullptr && this->minAttemptInterval_ == nullptr
        && this->repeatBy_ == nullptr && this->repeatDays_ == nullptr && this->routingStrategy_ == nullptr && this->startTime_ == nullptr && this->strategyDescription_ == nullptr
        && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->type_ == nullptr && this->workingTime_ == nullptr; };
        // customized Field Functions 
        bool hasCustomized() const { return this->customized_ != nullptr;};
        void deleteCustomized() { this->customized_ = nullptr;};
        inline string getCustomized() const { DARABONBA_PTR_GET_DEFAULT(customized_, "") };
        inline Strategy& setCustomized(string customized) { DARABONBA_PTR_SET_VALUE(customized_, customized) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Strategy& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // followUpStrategy Field Functions 
        bool hasFollowUpStrategy() const { return this->followUpStrategy_ != nullptr;};
        void deleteFollowUpStrategy() { this->followUpStrategy_ = nullptr;};
        inline string getFollowUpStrategy() const { DARABONBA_PTR_GET_DEFAULT(followUpStrategy_, "") };
        inline Strategy& setFollowUpStrategy(string followUpStrategy) { DARABONBA_PTR_SET_VALUE(followUpStrategy_, followUpStrategy) };


        // isTemplate Field Functions 
        bool hasIsTemplate() const { return this->isTemplate_ != nullptr;};
        void deleteIsTemplate() { this->isTemplate_ = nullptr;};
        inline bool getIsTemplate() const { DARABONBA_PTR_GET_DEFAULT(isTemplate_, false) };
        inline Strategy& setIsTemplate(bool isTemplate) { DARABONBA_PTR_SET_VALUE(isTemplate_, isTemplate) };


        // maxAttemptsPerDay Field Functions 
        bool hasMaxAttemptsPerDay() const { return this->maxAttemptsPerDay_ != nullptr;};
        void deleteMaxAttemptsPerDay() { this->maxAttemptsPerDay_ = nullptr;};
        inline int32_t getMaxAttemptsPerDay() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptsPerDay_, 0) };
        inline Strategy& setMaxAttemptsPerDay(int32_t maxAttemptsPerDay) { DARABONBA_PTR_SET_VALUE(maxAttemptsPerDay_, maxAttemptsPerDay) };


        // minAttemptInterval Field Functions 
        bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
        void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
        inline int32_t getMinAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0) };
        inline Strategy& setMinAttemptInterval(int32_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


        // repeatBy Field Functions 
        bool hasRepeatBy() const { return this->repeatBy_ != nullptr;};
        void deleteRepeatBy() { this->repeatBy_ = nullptr;};
        inline string getRepeatBy() const { DARABONBA_PTR_GET_DEFAULT(repeatBy_, "") };
        inline Strategy& setRepeatBy(string repeatBy) { DARABONBA_PTR_SET_VALUE(repeatBy_, repeatBy) };


        // repeatDays Field Functions 
        bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
        void deleteRepeatDays() { this->repeatDays_ = nullptr;};
        inline const vector<string> & getRepeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<string>) };
        inline vector<string> getRepeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<string>) };
        inline Strategy& setRepeatDays(const vector<string> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
        inline Strategy& setRepeatDays(vector<string> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


        // routingStrategy Field Functions 
        bool hasRoutingStrategy() const { return this->routingStrategy_ != nullptr;};
        void deleteRoutingStrategy() { this->routingStrategy_ = nullptr;};
        inline string getRoutingStrategy() const { DARABONBA_PTR_GET_DEFAULT(routingStrategy_, "") };
        inline Strategy& setRoutingStrategy(string routingStrategy) { DARABONBA_PTR_SET_VALUE(routingStrategy_, routingStrategy) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Strategy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // strategyDescription Field Functions 
        bool hasStrategyDescription() const { return this->strategyDescription_ != nullptr;};
        void deleteStrategyDescription() { this->strategyDescription_ = nullptr;};
        inline string getStrategyDescription() const { DARABONBA_PTR_GET_DEFAULT(strategyDescription_, "") };
        inline Strategy& setStrategyDescription(string strategyDescription) { DARABONBA_PTR_SET_VALUE(strategyDescription_, strategyDescription) };


        // strategyId Field Functions 
        bool hasStrategyId() const { return this->strategyId_ != nullptr;};
        void deleteStrategyId() { this->strategyId_ = nullptr;};
        inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
        inline Strategy& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


        // strategyName Field Functions 
        bool hasStrategyName() const { return this->strategyName_ != nullptr;};
        void deleteStrategyName() { this->strategyName_ = nullptr;};
        inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
        inline Strategy& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Strategy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // workingTime Field Functions 
        bool hasWorkingTime() const { return this->workingTime_ != nullptr;};
        void deleteWorkingTime() { this->workingTime_ = nullptr;};
        inline const vector<Strategy::WorkingTime> & getWorkingTime() const { DARABONBA_PTR_GET_CONST(workingTime_, vector<Strategy::WorkingTime>) };
        inline vector<Strategy::WorkingTime> getWorkingTime() { DARABONBA_PTR_GET(workingTime_, vector<Strategy::WorkingTime>) };
        inline Strategy& setWorkingTime(const vector<Strategy::WorkingTime> & workingTime) { DARABONBA_PTR_SET_VALUE(workingTime_, workingTime) };
        inline Strategy& setWorkingTime(vector<Strategy::WorkingTime> && workingTime) { DARABONBA_PTR_SET_RVALUE(workingTime_, workingTime) };


      protected:
        shared_ptr<string> customized_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> followUpStrategy_ {};
        shared_ptr<bool> isTemplate_ {};
        shared_ptr<int32_t> maxAttemptsPerDay_ {};
        shared_ptr<int32_t> minAttemptInterval_ {};
        shared_ptr<string> repeatBy_ {};
        shared_ptr<vector<string>> repeatDays_ {};
        shared_ptr<string> routingStrategy_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> strategyDescription_ {};
        shared_ptr<string> strategyId_ {};
        shared_ptr<string> strategyName_ {};
        shared_ptr<string> type_ {};
        shared_ptr<vector<Strategy::WorkingTime>> workingTime_ {};
      };

      virtual bool empty() const override { return this->callingNumbers_ == nullptr
        && this->creationTime_ == nullptr && this->jobFilePath_ == nullptr && this->jobGroupDescription_ == nullptr && this->jobGroupId_ == nullptr && this->jobGroupName_ == nullptr
        && this->scenarioId_ == nullptr && this->strategy_ == nullptr; };
      // callingNumbers Field Functions 
      bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
      void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
      inline const vector<string> & getCallingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
      inline vector<string> getCallingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
      inline JobGroup& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
      inline JobGroup& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline JobGroup& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // jobFilePath Field Functions 
      bool hasJobFilePath() const { return this->jobFilePath_ != nullptr;};
      void deleteJobFilePath() { this->jobFilePath_ = nullptr;};
      inline string getJobFilePath() const { DARABONBA_PTR_GET_DEFAULT(jobFilePath_, "") };
      inline JobGroup& setJobFilePath(string jobFilePath) { DARABONBA_PTR_SET_VALUE(jobFilePath_, jobFilePath) };


      // jobGroupDescription Field Functions 
      bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
      void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
      inline string getJobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
      inline JobGroup& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


      // jobGroupId Field Functions 
      bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
      void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
      inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
      inline JobGroup& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


      // jobGroupName Field Functions 
      bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
      void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
      inline string getJobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
      inline JobGroup& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


      // scenarioId Field Functions 
      bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
      void deleteScenarioId() { this->scenarioId_ = nullptr;};
      inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
      inline JobGroup& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline const JobGroup::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, JobGroup::Strategy) };
      inline JobGroup::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, JobGroup::Strategy) };
      inline JobGroup& setStrategy(const JobGroup::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
      inline JobGroup& setStrategy(JobGroup::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


    protected:
      shared_ptr<vector<string>> callingNumbers_ {};
      shared_ptr<int64_t> creationTime_ {};
      shared_ptr<string> jobFilePath_ {};
      shared_ptr<string> jobGroupDescription_ {};
      shared_ptr<string> jobGroupId_ {};
      shared_ptr<string> jobGroupName_ {};
      shared_ptr<string> scenarioId_ {};
      shared_ptr<JobGroup::Strategy> strategy_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->jobGroup_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyBatchJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyBatchJobsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobGroup Field Functions 
    bool hasJobGroup() const { return this->jobGroup_ != nullptr;};
    void deleteJobGroup() { this->jobGroup_ = nullptr;};
    inline const ModifyBatchJobsResponseBody::JobGroup & getJobGroup() const { DARABONBA_PTR_GET_CONST(jobGroup_, ModifyBatchJobsResponseBody::JobGroup) };
    inline ModifyBatchJobsResponseBody::JobGroup getJobGroup() { DARABONBA_PTR_GET(jobGroup_, ModifyBatchJobsResponseBody::JobGroup) };
    inline ModifyBatchJobsResponseBody& setJobGroup(const ModifyBatchJobsResponseBody::JobGroup & jobGroup) { DARABONBA_PTR_SET_VALUE(jobGroup_, jobGroup) };
    inline ModifyBatchJobsResponseBody& setJobGroup(ModifyBatchJobsResponseBody::JobGroup && jobGroup) { DARABONBA_PTR_SET_RVALUE(jobGroup_, jobGroup) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyBatchJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyBatchJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyBatchJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<ModifyBatchJobsResponseBody::JobGroup> jobGroup_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
