// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODY_HPP_
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
  class ListJobGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobGroups, jobGroups_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobGroups, jobGroups_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListJobGroupsResponseBody() = default ;
    ListJobGroupsResponseBody(const ListJobGroupsResponseBody &) = default ;
    ListJobGroupsResponseBody(ListJobGroupsResponseBody &&) = default ;
    ListJobGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobGroupsResponseBody() = default ;
    ListJobGroupsResponseBody& operator=(const ListJobGroupsResponseBody &) = default ;
    ListJobGroupsResponseBody& operator=(ListJobGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobGroups& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, JobGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      JobGroups() = default ;
      JobGroups(const JobGroups &) = default ;
      JobGroups(JobGroups &&) = default ;
      JobGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobGroups() = default ;
      JobGroups& operator=(const JobGroups &) = default ;
      JobGroups& operator=(JobGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(ExportProgress, exportProgress_);
          DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
          DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
          DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
          DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
          DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(TotalCallNum, totalCallNum_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(ExportProgress, exportProgress_);
          DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
          DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
          DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
          DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
          DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
          DARABONBA_PTR_FROM_JSON(TotalCallNum, totalCallNum_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Strategy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline Strategy& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline Strategy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<int64_t> startTime_ {};
        };

        class Progress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Progress& obj) { 
            DARABONBA_PTR_TO_JSON(CancelledNum, cancelledNum_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(ExecutingNum, executingNum_);
            DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
            DARABONBA_PTR_TO_JSON(PausedNum, pausedNum_);
            DARABONBA_PTR_TO_JSON(Scheduling, scheduling_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TotalCompleted, totalCompleted_);
            DARABONBA_PTR_TO_JSON(TotalJobs, totalJobs_);
            DARABONBA_PTR_TO_JSON(TotalNotAnswered, totalNotAnswered_);
          };
          friend void from_json(const Darabonba::Json& j, Progress& obj) { 
            DARABONBA_PTR_FROM_JSON(CancelledNum, cancelledNum_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(ExecutingNum, executingNum_);
            DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
            DARABONBA_PTR_FROM_JSON(PausedNum, pausedNum_);
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
          virtual bool empty() const override { return this->cancelledNum_ == nullptr
        && this->duration_ == nullptr && this->executingNum_ == nullptr && this->failedNum_ == nullptr && this->pausedNum_ == nullptr && this->scheduling_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->totalCompleted_ == nullptr && this->totalJobs_ == nullptr && this->totalNotAnswered_ == nullptr; };
          // cancelledNum Field Functions 
          bool hasCancelledNum() const { return this->cancelledNum_ != nullptr;};
          void deleteCancelledNum() { this->cancelledNum_ = nullptr;};
          inline int32_t getCancelledNum() const { DARABONBA_PTR_GET_DEFAULT(cancelledNum_, 0) };
          inline Progress& setCancelledNum(int32_t cancelledNum) { DARABONBA_PTR_SET_VALUE(cancelledNum_, cancelledNum) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
          inline Progress& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // executingNum Field Functions 
          bool hasExecutingNum() const { return this->executingNum_ != nullptr;};
          void deleteExecutingNum() { this->executingNum_ = nullptr;};
          inline int32_t getExecutingNum() const { DARABONBA_PTR_GET_DEFAULT(executingNum_, 0) };
          inline Progress& setExecutingNum(int32_t executingNum) { DARABONBA_PTR_SET_VALUE(executingNum_, executingNum) };


          // failedNum Field Functions 
          bool hasFailedNum() const { return this->failedNum_ != nullptr;};
          void deleteFailedNum() { this->failedNum_ = nullptr;};
          inline int32_t getFailedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0) };
          inline Progress& setFailedNum(int32_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


          // pausedNum Field Functions 
          bool hasPausedNum() const { return this->pausedNum_ != nullptr;};
          void deletePausedNum() { this->pausedNum_ = nullptr;};
          inline int32_t getPausedNum() const { DARABONBA_PTR_GET_DEFAULT(pausedNum_, 0) };
          inline Progress& setPausedNum(int32_t pausedNum) { DARABONBA_PTR_SET_VALUE(pausedNum_, pausedNum) };


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
          shared_ptr<int32_t> cancelledNum_ {};
          shared_ptr<int32_t> duration_ {};
          shared_ptr<int32_t> executingNum_ {};
          shared_ptr<int32_t> failedNum_ {};
          shared_ptr<int32_t> pausedNum_ {};
          shared_ptr<int32_t> scheduling_ {};
          shared_ptr<int64_t> startTime_ {};
          shared_ptr<string> status_ {};
          shared_ptr<int32_t> totalCompleted_ {};
          shared_ptr<int32_t> totalJobs_ {};
          shared_ptr<int32_t> totalNotAnswered_ {};
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

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->exportProgress_ == nullptr && this->jobDataParsingTaskId_ == nullptr && this->jobGroupDescription_ == nullptr && this->jobGroupId_ == nullptr && this->jobGroupName_ == nullptr
        && this->minConcurrency_ == nullptr && this->modifyTime_ == nullptr && this->progress_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr
        && this->scriptVersion_ == nullptr && this->status_ == nullptr && this->strategy_ == nullptr && this->totalCallNum_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
        inline List& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // exportProgress Field Functions 
        bool hasExportProgress() const { return this->exportProgress_ != nullptr;};
        void deleteExportProgress() { this->exportProgress_ = nullptr;};
        inline const List::ExportProgress & getExportProgress() const { DARABONBA_PTR_GET_CONST(exportProgress_, List::ExportProgress) };
        inline List::ExportProgress getExportProgress() { DARABONBA_PTR_GET(exportProgress_, List::ExportProgress) };
        inline List& setExportProgress(const List::ExportProgress & exportProgress) { DARABONBA_PTR_SET_VALUE(exportProgress_, exportProgress) };
        inline List& setExportProgress(List::ExportProgress && exportProgress) { DARABONBA_PTR_SET_RVALUE(exportProgress_, exportProgress) };


        // jobDataParsingTaskId Field Functions 
        bool hasJobDataParsingTaskId() const { return this->jobDataParsingTaskId_ != nullptr;};
        void deleteJobDataParsingTaskId() { this->jobDataParsingTaskId_ = nullptr;};
        inline string getJobDataParsingTaskId() const { DARABONBA_PTR_GET_DEFAULT(jobDataParsingTaskId_, "") };
        inline List& setJobDataParsingTaskId(string jobDataParsingTaskId) { DARABONBA_PTR_SET_VALUE(jobDataParsingTaskId_, jobDataParsingTaskId) };


        // jobGroupDescription Field Functions 
        bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
        void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
        inline string getJobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
        inline List& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


        // jobGroupId Field Functions 
        bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
        void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
        inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
        inline List& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


        // jobGroupName Field Functions 
        bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
        void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
        inline string getJobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
        inline List& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


        // minConcurrency Field Functions 
        bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
        void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
        inline int32_t getMinConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0) };
        inline List& setMinConcurrency(int32_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline List& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline const List::Progress & getProgress() const { DARABONBA_PTR_GET_CONST(progress_, List::Progress) };
        inline List::Progress getProgress() { DARABONBA_PTR_GET(progress_, List::Progress) };
        inline List& setProgress(const List::Progress & progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };
        inline List& setProgress(List::Progress && progress) { DARABONBA_PTR_SET_RVALUE(progress_, progress) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline List& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptName Field Functions 
        bool hasScriptName() const { return this->scriptName_ != nullptr;};
        void deleteScriptName() { this->scriptName_ = nullptr;};
        inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
        inline List& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


        // scriptVersion Field Functions 
        bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
        void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
        inline string getScriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
        inline List& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline const List::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, List::Strategy) };
        inline List::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, List::Strategy) };
        inline List& setStrategy(const List::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
        inline List& setStrategy(List::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


        // totalCallNum Field Functions 
        bool hasTotalCallNum() const { return this->totalCallNum_ != nullptr;};
        void deleteTotalCallNum() { this->totalCallNum_ = nullptr;};
        inline int32_t getTotalCallNum() const { DARABONBA_PTR_GET_DEFAULT(totalCallNum_, 0) };
        inline List& setTotalCallNum(int32_t totalCallNum) { DARABONBA_PTR_SET_VALUE(totalCallNum_, totalCallNum) };


      protected:
        shared_ptr<int64_t> creationTime_ {};
        shared_ptr<List::ExportProgress> exportProgress_ {};
        shared_ptr<string> jobDataParsingTaskId_ {};
        shared_ptr<string> jobGroupDescription_ {};
        shared_ptr<string> jobGroupId_ {};
        shared_ptr<string> jobGroupName_ {};
        shared_ptr<int32_t> minConcurrency_ {};
        shared_ptr<string> modifyTime_ {};
        shared_ptr<List::Progress> progress_ {};
        shared_ptr<string> scriptId_ {};
        shared_ptr<string> scriptName_ {};
        shared_ptr<string> scriptVersion_ {};
        shared_ptr<string> status_ {};
        shared_ptr<List::Strategy> strategy_ {};
        shared_ptr<int32_t> totalCallNum_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<JobGroups::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<JobGroups::List>) };
      inline vector<JobGroups::List> getList() { DARABONBA_PTR_GET(list_, vector<JobGroups::List>) };
      inline JobGroups& setList(const vector<JobGroups::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline JobGroups& setList(vector<JobGroups::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline JobGroups& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline JobGroups& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline JobGroups& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<JobGroups::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->jobGroups_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string getAsyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline ListJobGroupsResponseBody& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListJobGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListJobGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobGroups Field Functions 
    bool hasJobGroups() const { return this->jobGroups_ != nullptr;};
    void deleteJobGroups() { this->jobGroups_ = nullptr;};
    inline const ListJobGroupsResponseBody::JobGroups & getJobGroups() const { DARABONBA_PTR_GET_CONST(jobGroups_, ListJobGroupsResponseBody::JobGroups) };
    inline ListJobGroupsResponseBody::JobGroups getJobGroups() { DARABONBA_PTR_GET(jobGroups_, ListJobGroupsResponseBody::JobGroups) };
    inline ListJobGroupsResponseBody& setJobGroups(const ListJobGroupsResponseBody::JobGroups & jobGroups) { DARABONBA_PTR_SET_VALUE(jobGroups_, jobGroups) };
    inline ListJobGroupsResponseBody& setJobGroups(ListJobGroupsResponseBody::JobGroups && jobGroups) { DARABONBA_PTR_SET_RVALUE(jobGroups_, jobGroups) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> asyncTaskId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<ListJobGroupsResponseBody::JobGroups> jobGroups_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
