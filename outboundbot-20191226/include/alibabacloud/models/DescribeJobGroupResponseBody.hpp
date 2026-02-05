// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODY_HPP_
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
  class DescribeJobGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobGroup, jobGroup_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobGroup, jobGroup_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeJobGroupResponseBody() = default ;
    DescribeJobGroupResponseBody(const DescribeJobGroupResponseBody &) = default ;
    DescribeJobGroupResponseBody(DescribeJobGroupResponseBody &&) = default ;
    DescribeJobGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupResponseBody() = default ;
    DescribeJobGroupResponseBody& operator=(const DescribeJobGroupResponseBody &) = default ;
    DescribeJobGroupResponseBody& operator=(DescribeJobGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobGroup& obj) { 
        DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(ExportProgress, exportProgress_);
        DARABONBA_PTR_TO_JSON(FlashSmsExtras, flashSmsExtras_);
        DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
        DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
        DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
        DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
        DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RecallCallingNumbers, recallCallingNumbers_);
        DARABONBA_PTR_TO_JSON(RecallStrategy, recallStrategy_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
        DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(ScriptNluEngine, scriptNluEngine_);
        DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      };
      friend void from_json(const Darabonba::Json& j, JobGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(ExportProgress, exportProgress_);
        DARABONBA_PTR_FROM_JSON(FlashSmsExtras, flashSmsExtras_);
        DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
        DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
        DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
        DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
        DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RecallCallingNumbers, recallCallingNumbers_);
        DARABONBA_PTR_FROM_JSON(RecallStrategy, recallStrategy_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
        DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
        DARABONBA_PTR_FROM_JSON(ScriptNluEngine, scriptNluEngine_);
        DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
          DARABONBA_PTR_TO_JSON(Repeatable, repeatable_);
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
          DARABONBA_PTR_FROM_JSON(Repeatable, repeatable_);
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
        && this->repeatBy_ == nullptr && this->repeatDays_ == nullptr && this->repeatable_ == nullptr && this->routingStrategy_ == nullptr && this->startTime_ == nullptr
        && this->strategyDescription_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->type_ == nullptr && this->workingTime_ == nullptr; };
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


        // repeatable Field Functions 
        bool hasRepeatable() const { return this->repeatable_ != nullptr;};
        void deleteRepeatable() { this->repeatable_ = nullptr;};
        inline bool getRepeatable() const { DARABONBA_PTR_GET_DEFAULT(repeatable_, false) };
        inline Strategy& setRepeatable(bool repeatable) { DARABONBA_PTR_SET_VALUE(repeatable_, repeatable) };


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
        shared_ptr<bool> repeatable_ {};
        shared_ptr<string> routingStrategy_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> strategyDescription_ {};
        shared_ptr<string> strategyId_ {};
        shared_ptr<string> strategyName_ {};
        shared_ptr<string> type_ {};
        shared_ptr<vector<Strategy::WorkingTime>> workingTime_ {};
      };

      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(ClientHangupNum, clientHangupNum_);
          DARABONBA_PTR_TO_JSON(FinishedNum, finishedNum_);
          DARABONBA_PTR_TO_JSON(NoInteractNum, noInteractNum_);
          DARABONBA_PTR_TO_JSON(TimeoutHangupNum, timeoutHangupNum_);
          DARABONBA_PTR_TO_JSON(UnrecognizedNum, unrecognizedNum_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientHangupNum, clientHangupNum_);
          DARABONBA_PTR_FROM_JSON(FinishedNum, finishedNum_);
          DARABONBA_PTR_FROM_JSON(NoInteractNum, noInteractNum_);
          DARABONBA_PTR_FROM_JSON(TimeoutHangupNum, timeoutHangupNum_);
          DARABONBA_PTR_FROM_JSON(UnrecognizedNum, unrecognizedNum_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientHangupNum_ == nullptr
        && this->finishedNum_ == nullptr && this->noInteractNum_ == nullptr && this->timeoutHangupNum_ == nullptr && this->unrecognizedNum_ == nullptr; };
        // clientHangupNum Field Functions 
        bool hasClientHangupNum() const { return this->clientHangupNum_ != nullptr;};
        void deleteClientHangupNum() { this->clientHangupNum_ = nullptr;};
        inline int32_t getClientHangupNum() const { DARABONBA_PTR_GET_DEFAULT(clientHangupNum_, 0) };
        inline Result& setClientHangupNum(int32_t clientHangupNum) { DARABONBA_PTR_SET_VALUE(clientHangupNum_, clientHangupNum) };


        // finishedNum Field Functions 
        bool hasFinishedNum() const { return this->finishedNum_ != nullptr;};
        void deleteFinishedNum() { this->finishedNum_ = nullptr;};
        inline int32_t getFinishedNum() const { DARABONBA_PTR_GET_DEFAULT(finishedNum_, 0) };
        inline Result& setFinishedNum(int32_t finishedNum) { DARABONBA_PTR_SET_VALUE(finishedNum_, finishedNum) };


        // noInteractNum Field Functions 
        bool hasNoInteractNum() const { return this->noInteractNum_ != nullptr;};
        void deleteNoInteractNum() { this->noInteractNum_ = nullptr;};
        inline int32_t getNoInteractNum() const { DARABONBA_PTR_GET_DEFAULT(noInteractNum_, 0) };
        inline Result& setNoInteractNum(int32_t noInteractNum) { DARABONBA_PTR_SET_VALUE(noInteractNum_, noInteractNum) };


        // timeoutHangupNum Field Functions 
        bool hasTimeoutHangupNum() const { return this->timeoutHangupNum_ != nullptr;};
        void deleteTimeoutHangupNum() { this->timeoutHangupNum_ = nullptr;};
        inline int32_t getTimeoutHangupNum() const { DARABONBA_PTR_GET_DEFAULT(timeoutHangupNum_, 0) };
        inline Result& setTimeoutHangupNum(int32_t timeoutHangupNum) { DARABONBA_PTR_SET_VALUE(timeoutHangupNum_, timeoutHangupNum) };


        // unrecognizedNum Field Functions 
        bool hasUnrecognizedNum() const { return this->unrecognizedNum_ != nullptr;};
        void deleteUnrecognizedNum() { this->unrecognizedNum_ = nullptr;};
        inline int32_t getUnrecognizedNum() const { DARABONBA_PTR_GET_DEFAULT(unrecognizedNum_, 0) };
        inline Result& setUnrecognizedNum(int32_t unrecognizedNum) { DARABONBA_PTR_SET_VALUE(unrecognizedNum_, unrecognizedNum) };


      protected:
        shared_ptr<int32_t> clientHangupNum_ {};
        shared_ptr<int32_t> finishedNum_ {};
        shared_ptr<int32_t> noInteractNum_ {};
        shared_ptr<int32_t> timeoutHangupNum_ {};
        shared_ptr<int32_t> unrecognizedNum_ {};
      };

      class RecallStrategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecallStrategy& obj) { 
          DARABONBA_PTR_TO_JSON(EmptyNumberIgnore, emptyNumberIgnore_);
          DARABONBA_PTR_TO_JSON(InArrearsIgnore, inArrearsIgnore_);
          DARABONBA_PTR_TO_JSON(OutOfServiceIgnore, outOfServiceIgnore_);
        };
        friend void from_json(const Darabonba::Json& j, RecallStrategy& obj) { 
          DARABONBA_PTR_FROM_JSON(EmptyNumberIgnore, emptyNumberIgnore_);
          DARABONBA_PTR_FROM_JSON(InArrearsIgnore, inArrearsIgnore_);
          DARABONBA_PTR_FROM_JSON(OutOfServiceIgnore, outOfServiceIgnore_);
        };
        RecallStrategy() = default ;
        RecallStrategy(const RecallStrategy &) = default ;
        RecallStrategy(RecallStrategy &&) = default ;
        RecallStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecallStrategy() = default ;
        RecallStrategy& operator=(const RecallStrategy &) = default ;
        RecallStrategy& operator=(RecallStrategy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->emptyNumberIgnore_ == nullptr
        && this->inArrearsIgnore_ == nullptr && this->outOfServiceIgnore_ == nullptr; };
        // emptyNumberIgnore Field Functions 
        bool hasEmptyNumberIgnore() const { return this->emptyNumberIgnore_ != nullptr;};
        void deleteEmptyNumberIgnore() { this->emptyNumberIgnore_ = nullptr;};
        inline bool getEmptyNumberIgnore() const { DARABONBA_PTR_GET_DEFAULT(emptyNumberIgnore_, false) };
        inline RecallStrategy& setEmptyNumberIgnore(bool emptyNumberIgnore) { DARABONBA_PTR_SET_VALUE(emptyNumberIgnore_, emptyNumberIgnore) };


        // inArrearsIgnore Field Functions 
        bool hasInArrearsIgnore() const { return this->inArrearsIgnore_ != nullptr;};
        void deleteInArrearsIgnore() { this->inArrearsIgnore_ = nullptr;};
        inline bool getInArrearsIgnore() const { DARABONBA_PTR_GET_DEFAULT(inArrearsIgnore_, false) };
        inline RecallStrategy& setInArrearsIgnore(bool inArrearsIgnore) { DARABONBA_PTR_SET_VALUE(inArrearsIgnore_, inArrearsIgnore) };


        // outOfServiceIgnore Field Functions 
        bool hasOutOfServiceIgnore() const { return this->outOfServiceIgnore_ != nullptr;};
        void deleteOutOfServiceIgnore() { this->outOfServiceIgnore_ = nullptr;};
        inline bool getOutOfServiceIgnore() const { DARABONBA_PTR_GET_DEFAULT(outOfServiceIgnore_, false) };
        inline RecallStrategy& setOutOfServiceIgnore(bool outOfServiceIgnore) { DARABONBA_PTR_SET_VALUE(outOfServiceIgnore_, outOfServiceIgnore) };


      protected:
        shared_ptr<bool> emptyNumberIgnore_ {};
        shared_ptr<bool> inArrearsIgnore_ {};
        shared_ptr<bool> outOfServiceIgnore_ {};
      };

      class Progress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Progress& obj) { 
          DARABONBA_PTR_TO_JSON(Briefs, briefs_);
          DARABONBA_PTR_TO_JSON(Cancelled, cancelled_);
          DARABONBA_PTR_TO_JSON(Categories, categories_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Executing, executing_);
          DARABONBA_PTR_TO_JSON(Failed, failed_);
          DARABONBA_PTR_TO_JSON(Paused, paused_);
          DARABONBA_PTR_TO_JSON(Scheduling, scheduling_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TotalCompleted, totalCompleted_);
          DARABONBA_PTR_TO_JSON(TotalJobs, totalJobs_);
          DARABONBA_PTR_TO_JSON(TotalNotAnswered, totalNotAnswered_);
        };
        friend void from_json(const Darabonba::Json& j, Progress& obj) { 
          DARABONBA_PTR_FROM_JSON(Briefs, briefs_);
          DARABONBA_PTR_FROM_JSON(Cancelled, cancelled_);
          DARABONBA_PTR_FROM_JSON(Categories, categories_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Executing, executing_);
          DARABONBA_PTR_FROM_JSON(Failed, failed_);
          DARABONBA_PTR_FROM_JSON(Paused, paused_);
          DARABONBA_PTR_FROM_JSON(Scheduling, scheduling_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TotalCompleted, totalCompleted_);
          DARABONBA_PTR_FROM_JSON(TotalJobs, totalJobs_);
          DARABONBA_PTR_FROM_JSON(TotalNotAnswered, totalNotAnswered_);
        };
        Progress() = default ;
        Progress(const Progress &) = default ;
        Progress(Progress &&) = default ;
        Progress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Progress() = default ;
        Progress& operator=(const Progress &) = default ;
        Progress& operator=(Progress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Categories : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Categories& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Categories& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Categories() = default ;
          Categories(const Categories &) = default ;
          Categories(Categories &&) = default ;
          Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Categories() = default ;
          Categories& operator=(const Categories &) = default ;
          Categories& operator=(Categories &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Categories& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Categories& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        class Briefs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Briefs& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Briefs& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Briefs() = default ;
          Briefs(const Briefs &) = default ;
          Briefs(Briefs &&) = default ;
          Briefs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Briefs() = default ;
          Briefs& operator=(const Briefs &) = default ;
          Briefs& operator=(Briefs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Briefs& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Briefs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->briefs_ == nullptr
        && this->cancelled_ == nullptr && this->categories_ == nullptr && this->duration_ == nullptr && this->executing_ == nullptr && this->failed_ == nullptr
        && this->paused_ == nullptr && this->scheduling_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->totalCompleted_ == nullptr
        && this->totalJobs_ == nullptr && this->totalNotAnswered_ == nullptr; };
        // briefs Field Functions 
        bool hasBriefs() const { return this->briefs_ != nullptr;};
        void deleteBriefs() { this->briefs_ = nullptr;};
        inline const vector<Progress::Briefs> & getBriefs() const { DARABONBA_PTR_GET_CONST(briefs_, vector<Progress::Briefs>) };
        inline vector<Progress::Briefs> getBriefs() { DARABONBA_PTR_GET(briefs_, vector<Progress::Briefs>) };
        inline Progress& setBriefs(const vector<Progress::Briefs> & briefs) { DARABONBA_PTR_SET_VALUE(briefs_, briefs) };
        inline Progress& setBriefs(vector<Progress::Briefs> && briefs) { DARABONBA_PTR_SET_RVALUE(briefs_, briefs) };


        // cancelled Field Functions 
        bool hasCancelled() const { return this->cancelled_ != nullptr;};
        void deleteCancelled() { this->cancelled_ = nullptr;};
        inline int32_t getCancelled() const { DARABONBA_PTR_GET_DEFAULT(cancelled_, 0) };
        inline Progress& setCancelled(int32_t cancelled) { DARABONBA_PTR_SET_VALUE(cancelled_, cancelled) };


        // categories Field Functions 
        bool hasCategories() const { return this->categories_ != nullptr;};
        void deleteCategories() { this->categories_ = nullptr;};
        inline const vector<Progress::Categories> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Progress::Categories>) };
        inline vector<Progress::Categories> getCategories() { DARABONBA_PTR_GET(categories_, vector<Progress::Categories>) };
        inline Progress& setCategories(const vector<Progress::Categories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
        inline Progress& setCategories(vector<Progress::Categories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline Progress& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // executing Field Functions 
        bool hasExecuting() const { return this->executing_ != nullptr;};
        void deleteExecuting() { this->executing_ = nullptr;};
        inline int32_t getExecuting() const { DARABONBA_PTR_GET_DEFAULT(executing_, 0) };
        inline Progress& setExecuting(int32_t executing) { DARABONBA_PTR_SET_VALUE(executing_, executing) };


        // failed Field Functions 
        bool hasFailed() const { return this->failed_ != nullptr;};
        void deleteFailed() { this->failed_ = nullptr;};
        inline int32_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
        inline Progress& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


        // paused Field Functions 
        bool hasPaused() const { return this->paused_ != nullptr;};
        void deletePaused() { this->paused_ = nullptr;};
        inline int32_t getPaused() const { DARABONBA_PTR_GET_DEFAULT(paused_, 0) };
        inline Progress& setPaused(int32_t paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


        // scheduling Field Functions 
        bool hasScheduling() const { return this->scheduling_ != nullptr;};
        void deleteScheduling() { this->scheduling_ = nullptr;};
        inline int32_t getScheduling() const { DARABONBA_PTR_GET_DEFAULT(scheduling_, 0) };
        inline Progress& setScheduling(int32_t scheduling) { DARABONBA_PTR_SET_VALUE(scheduling_, scheduling) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Progress& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Progress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalCompleted Field Functions 
        bool hasTotalCompleted() const { return this->totalCompleted_ != nullptr;};
        void deleteTotalCompleted() { this->totalCompleted_ = nullptr;};
        inline int32_t getTotalCompleted() const { DARABONBA_PTR_GET_DEFAULT(totalCompleted_, 0) };
        inline Progress& setTotalCompleted(int32_t totalCompleted) { DARABONBA_PTR_SET_VALUE(totalCompleted_, totalCompleted) };


        // totalJobs Field Functions 
        bool hasTotalJobs() const { return this->totalJobs_ != nullptr;};
        void deleteTotalJobs() { this->totalJobs_ = nullptr;};
        inline int32_t getTotalJobs() const { DARABONBA_PTR_GET_DEFAULT(totalJobs_, 0) };
        inline Progress& setTotalJobs(int32_t totalJobs) { DARABONBA_PTR_SET_VALUE(totalJobs_, totalJobs) };


        // totalNotAnswered Field Functions 
        bool hasTotalNotAnswered() const { return this->totalNotAnswered_ != nullptr;};
        void deleteTotalNotAnswered() { this->totalNotAnswered_ = nullptr;};
        inline int32_t getTotalNotAnswered() const { DARABONBA_PTR_GET_DEFAULT(totalNotAnswered_, 0) };
        inline Progress& setTotalNotAnswered(int32_t totalNotAnswered) { DARABONBA_PTR_SET_VALUE(totalNotAnswered_, totalNotAnswered) };


      protected:
        shared_ptr<vector<Progress::Briefs>> briefs_ {};
        shared_ptr<int32_t> cancelled_ {};
        shared_ptr<vector<Progress::Categories>> categories_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<int32_t> executing_ {};
        shared_ptr<int32_t> failed_ {};
        shared_ptr<int32_t> paused_ {};
        shared_ptr<int32_t> scheduling_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int32_t> totalCompleted_ {};
        shared_ptr<int32_t> totalJobs_ {};
        shared_ptr<int32_t> totalNotAnswered_ {};
      };

      class FlashSmsExtras : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlashSmsExtras& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, FlashSmsExtras& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        FlashSmsExtras() = default ;
        FlashSmsExtras(const FlashSmsExtras &) = default ;
        FlashSmsExtras(FlashSmsExtras &&) = default ;
        FlashSmsExtras(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlashSmsExtras() = default ;
        FlashSmsExtras& operator=(const FlashSmsExtras &) = default ;
        FlashSmsExtras& operator=(FlashSmsExtras &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->templateId_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
        inline FlashSmsExtras& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline FlashSmsExtras& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        shared_ptr<string> configId_ {};
        shared_ptr<string> templateId_ {};
      };

      class ExportProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExportProgress& obj) { 
          DARABONBA_PTR_TO_JSON(FileHttpUrl, fileHttpUrl_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ExportProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(FileHttpUrl, fileHttpUrl_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ExportProgress() = default ;
        ExportProgress(const ExportProgress &) = default ;
        ExportProgress(ExportProgress &&) = default ;
        ExportProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExportProgress() = default ;
        ExportProgress& operator=(const ExportProgress &) = default ;
        ExportProgress& operator=(ExportProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileHttpUrl_ == nullptr
        && this->progress_ == nullptr && this->status_ == nullptr; };
        // fileHttpUrl Field Functions 
        bool hasFileHttpUrl() const { return this->fileHttpUrl_ != nullptr;};
        void deleteFileHttpUrl() { this->fileHttpUrl_ = nullptr;};
        inline string getFileHttpUrl() const { DARABONBA_PTR_GET_DEFAULT(fileHttpUrl_, "") };
        inline ExportProgress& setFileHttpUrl(string fileHttpUrl) { DARABONBA_PTR_SET_VALUE(fileHttpUrl_, fileHttpUrl) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline ExportProgress& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ExportProgress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> fileHttpUrl_ {};
        shared_ptr<string> progress_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->callingNumbers_ == nullptr
        && this->creationTime_ == nullptr && this->exportProgress_ == nullptr && this->flashSmsExtras_ == nullptr && this->jobDataParsingTaskId_ == nullptr && this->jobFilePath_ == nullptr
        && this->jobGroupDescription_ == nullptr && this->jobGroupId_ == nullptr && this->jobGroupName_ == nullptr && this->minConcurrency_ == nullptr && this->modifyTime_ == nullptr
        && this->priority_ == nullptr && this->progress_ == nullptr && this->recallCallingNumbers_ == nullptr && this->recallStrategy_ == nullptr && this->result_ == nullptr
        && this->ringingDuration_ == nullptr && this->scenarioId_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->scriptNluEngine_ == nullptr
        && this->scriptVersion_ == nullptr && this->status_ == nullptr && this->strategy_ == nullptr; };
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


      // exportProgress Field Functions 
      bool hasExportProgress() const { return this->exportProgress_ != nullptr;};
      void deleteExportProgress() { this->exportProgress_ = nullptr;};
      inline const JobGroup::ExportProgress & getExportProgress() const { DARABONBA_PTR_GET_CONST(exportProgress_, JobGroup::ExportProgress) };
      inline JobGroup::ExportProgress getExportProgress() { DARABONBA_PTR_GET(exportProgress_, JobGroup::ExportProgress) };
      inline JobGroup& setExportProgress(const JobGroup::ExportProgress & exportProgress) { DARABONBA_PTR_SET_VALUE(exportProgress_, exportProgress) };
      inline JobGroup& setExportProgress(JobGroup::ExportProgress && exportProgress) { DARABONBA_PTR_SET_RVALUE(exportProgress_, exportProgress) };


      // flashSmsExtras Field Functions 
      bool hasFlashSmsExtras() const { return this->flashSmsExtras_ != nullptr;};
      void deleteFlashSmsExtras() { this->flashSmsExtras_ = nullptr;};
      inline const JobGroup::FlashSmsExtras & getFlashSmsExtras() const { DARABONBA_PTR_GET_CONST(flashSmsExtras_, JobGroup::FlashSmsExtras) };
      inline JobGroup::FlashSmsExtras getFlashSmsExtras() { DARABONBA_PTR_GET(flashSmsExtras_, JobGroup::FlashSmsExtras) };
      inline JobGroup& setFlashSmsExtras(const JobGroup::FlashSmsExtras & flashSmsExtras) { DARABONBA_PTR_SET_VALUE(flashSmsExtras_, flashSmsExtras) };
      inline JobGroup& setFlashSmsExtras(JobGroup::FlashSmsExtras && flashSmsExtras) { DARABONBA_PTR_SET_RVALUE(flashSmsExtras_, flashSmsExtras) };


      // jobDataParsingTaskId Field Functions 
      bool hasJobDataParsingTaskId() const { return this->jobDataParsingTaskId_ != nullptr;};
      void deleteJobDataParsingTaskId() { this->jobDataParsingTaskId_ = nullptr;};
      inline string getJobDataParsingTaskId() const { DARABONBA_PTR_GET_DEFAULT(jobDataParsingTaskId_, "") };
      inline JobGroup& setJobDataParsingTaskId(string jobDataParsingTaskId) { DARABONBA_PTR_SET_VALUE(jobDataParsingTaskId_, jobDataParsingTaskId) };


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


      // minConcurrency Field Functions 
      bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
      void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
      inline int64_t getMinConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
      inline JobGroup& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline JobGroup& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline JobGroup& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline const JobGroup::Progress & getProgress() const { DARABONBA_PTR_GET_CONST(progress_, JobGroup::Progress) };
      inline JobGroup::Progress getProgress() { DARABONBA_PTR_GET(progress_, JobGroup::Progress) };
      inline JobGroup& setProgress(const JobGroup::Progress & progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };
      inline JobGroup& setProgress(JobGroup::Progress && progress) { DARABONBA_PTR_SET_RVALUE(progress_, progress) };


      // recallCallingNumbers Field Functions 
      bool hasRecallCallingNumbers() const { return this->recallCallingNumbers_ != nullptr;};
      void deleteRecallCallingNumbers() { this->recallCallingNumbers_ = nullptr;};
      inline const vector<string> & getRecallCallingNumbers() const { DARABONBA_PTR_GET_CONST(recallCallingNumbers_, vector<string>) };
      inline vector<string> getRecallCallingNumbers() { DARABONBA_PTR_GET(recallCallingNumbers_, vector<string>) };
      inline JobGroup& setRecallCallingNumbers(const vector<string> & recallCallingNumbers) { DARABONBA_PTR_SET_VALUE(recallCallingNumbers_, recallCallingNumbers) };
      inline JobGroup& setRecallCallingNumbers(vector<string> && recallCallingNumbers) { DARABONBA_PTR_SET_RVALUE(recallCallingNumbers_, recallCallingNumbers) };


      // recallStrategy Field Functions 
      bool hasRecallStrategy() const { return this->recallStrategy_ != nullptr;};
      void deleteRecallStrategy() { this->recallStrategy_ = nullptr;};
      inline const JobGroup::RecallStrategy & getRecallStrategy() const { DARABONBA_PTR_GET_CONST(recallStrategy_, JobGroup::RecallStrategy) };
      inline JobGroup::RecallStrategy getRecallStrategy() { DARABONBA_PTR_GET(recallStrategy_, JobGroup::RecallStrategy) };
      inline JobGroup& setRecallStrategy(const JobGroup::RecallStrategy & recallStrategy) { DARABONBA_PTR_SET_VALUE(recallStrategy_, recallStrategy) };
      inline JobGroup& setRecallStrategy(JobGroup::RecallStrategy && recallStrategy) { DARABONBA_PTR_SET_RVALUE(recallStrategy_, recallStrategy) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const JobGroup::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, JobGroup::Result) };
      inline JobGroup::Result getResult() { DARABONBA_PTR_GET(result_, JobGroup::Result) };
      inline JobGroup& setResult(const JobGroup::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline JobGroup& setResult(JobGroup::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // ringingDuration Field Functions 
      bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
      void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
      inline int64_t getRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
      inline JobGroup& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


      // scenarioId Field Functions 
      bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
      void deleteScenarioId() { this->scenarioId_ = nullptr;};
      inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
      inline JobGroup& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline JobGroup& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline JobGroup& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // scriptNluEngine Field Functions 
      bool hasScriptNluEngine() const { return this->scriptNluEngine_ != nullptr;};
      void deleteScriptNluEngine() { this->scriptNluEngine_ = nullptr;};
      inline string getScriptNluEngine() const { DARABONBA_PTR_GET_DEFAULT(scriptNluEngine_, "") };
      inline JobGroup& setScriptNluEngine(string scriptNluEngine) { DARABONBA_PTR_SET_VALUE(scriptNluEngine_, scriptNluEngine) };


      // scriptVersion Field Functions 
      bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
      void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
      inline string getScriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
      inline JobGroup& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


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
      shared_ptr<JobGroup::ExportProgress> exportProgress_ {};
      shared_ptr<JobGroup::FlashSmsExtras> flashSmsExtras_ {};
      shared_ptr<string> jobDataParsingTaskId_ {};
      shared_ptr<string> jobFilePath_ {};
      shared_ptr<string> jobGroupDescription_ {};
      shared_ptr<string> jobGroupId_ {};
      shared_ptr<string> jobGroupName_ {};
      shared_ptr<int64_t> minConcurrency_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<JobGroup::Progress> progress_ {};
      shared_ptr<vector<string>> recallCallingNumbers_ {};
      shared_ptr<JobGroup::RecallStrategy> recallStrategy_ {};
      shared_ptr<JobGroup::Result> result_ {};
      shared_ptr<int64_t> ringingDuration_ {};
      shared_ptr<string> scenarioId_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> scriptName_ {};
      shared_ptr<string> scriptNluEngine_ {};
      shared_ptr<string> scriptVersion_ {};
      shared_ptr<string> status_ {};
      shared_ptr<JobGroup::Strategy> strategy_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->jobGroup_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeJobGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobGroup Field Functions 
    bool hasJobGroup() const { return this->jobGroup_ != nullptr;};
    void deleteJobGroup() { this->jobGroup_ = nullptr;};
    inline const DescribeJobGroupResponseBody::JobGroup & getJobGroup() const { DARABONBA_PTR_GET_CONST(jobGroup_, DescribeJobGroupResponseBody::JobGroup) };
    inline DescribeJobGroupResponseBody::JobGroup getJobGroup() { DARABONBA_PTR_GET(jobGroup_, DescribeJobGroupResponseBody::JobGroup) };
    inline DescribeJobGroupResponseBody& setJobGroup(const DescribeJobGroupResponseBody::JobGroup & jobGroup) { DARABONBA_PTR_SET_VALUE(jobGroup_, jobGroup) };
    inline DescribeJobGroupResponseBody& setJobGroup(DescribeJobGroupResponseBody::JobGroup && jobGroup) { DARABONBA_PTR_SET_RVALUE(jobGroup_, jobGroup) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeJobGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeJobGroupResponseBody::JobGroup> jobGroup_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
