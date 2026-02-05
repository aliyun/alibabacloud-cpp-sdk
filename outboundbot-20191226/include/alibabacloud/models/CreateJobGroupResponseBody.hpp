// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODY_HPP_
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
  class CreateJobGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobGroup, jobGroup_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobGroup, jobGroup_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateJobGroupResponseBody() = default ;
    CreateJobGroupResponseBody(const CreateJobGroupResponseBody &) = default ;
    CreateJobGroupResponseBody(CreateJobGroupResponseBody &&) = default ;
    CreateJobGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobGroupResponseBody() = default ;
    CreateJobGroupResponseBody& operator=(const CreateJobGroupResponseBody &) = default ;
    CreateJobGroupResponseBody& operator=(CreateJobGroupResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
        DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
        DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
        DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
        DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RecallCallingNumbers, recallCallingNumbers_);
        DARABONBA_PTR_TO_JSON(RecallStrategy, recallStrategy_);
        DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
        DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
        DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      };
      friend void from_json(const Darabonba::Json& j, JobGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(ExportProgress, exportProgress_);
        DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
        DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
        DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
        DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
        DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RecallCallingNumbers, recallCallingNumbers_);
        DARABONBA_PTR_FROM_JSON(RecallStrategy, recallStrategy_);
        DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
        DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
        DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
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
        && this->creationTime_ == nullptr && this->exportProgress_ == nullptr && this->jobDataParsingTaskId_ == nullptr && this->jobFilePath_ == nullptr && this->jobGroupDescription_ == nullptr
        && this->jobGroupId_ == nullptr && this->jobGroupName_ == nullptr && this->minConcurrency_ == nullptr && this->modifyTime_ == nullptr && this->priority_ == nullptr
        && this->recallCallingNumbers_ == nullptr && this->recallStrategy_ == nullptr && this->ringingDuration_ == nullptr && this->scenarioId_ == nullptr && this->scriptName_ == nullptr
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


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline JobGroup& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


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
      shared_ptr<string> jobDataParsingTaskId_ {};
      shared_ptr<string> jobFilePath_ {};
      shared_ptr<string> jobGroupDescription_ {};
      shared_ptr<string> jobGroupId_ {};
      shared_ptr<string> jobGroupName_ {};
      shared_ptr<int64_t> minConcurrency_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<vector<string>> recallCallingNumbers_ {};
      shared_ptr<JobGroup::RecallStrategy> recallStrategy_ {};
      shared_ptr<int64_t> ringingDuration_ {};
      shared_ptr<string> scenarioId_ {};
      shared_ptr<string> scriptName_ {};
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
    inline CreateJobGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateJobGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobGroup Field Functions 
    bool hasJobGroup() const { return this->jobGroup_ != nullptr;};
    void deleteJobGroup() { this->jobGroup_ = nullptr;};
    inline const CreateJobGroupResponseBody::JobGroup & getJobGroup() const { DARABONBA_PTR_GET_CONST(jobGroup_, CreateJobGroupResponseBody::JobGroup) };
    inline CreateJobGroupResponseBody::JobGroup getJobGroup() { DARABONBA_PTR_GET(jobGroup_, CreateJobGroupResponseBody::JobGroup) };
    inline CreateJobGroupResponseBody& setJobGroup(const CreateJobGroupResponseBody::JobGroup & jobGroup) { DARABONBA_PTR_SET_VALUE(jobGroup_, jobGroup) };
    inline CreateJobGroupResponseBody& setJobGroup(CreateJobGroupResponseBody::JobGroup && jobGroup) { DARABONBA_PTR_SET_RVALUE(jobGroup_, jobGroup) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateJobGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateJobGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateJobGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<CreateJobGroupResponseBody::JobGroup> jobGroup_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
