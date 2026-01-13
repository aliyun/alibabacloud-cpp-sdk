// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobExecutorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorStatus, executorStatus_);
      DARABONBA_PTR_TO_JSON(Executors, executors_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobExecutorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorStatus, executorStatus_);
      DARABONBA_PTR_FROM_JSON(Executors, executors_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobExecutorsResponseBody() = default ;
    ListJobExecutorsResponseBody(const ListJobExecutorsResponseBody &) = default ;
    ListJobExecutorsResponseBody(ListJobExecutorsResponseBody &&) = default ;
    ListJobExecutorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobExecutorsResponseBody() = default ;
    ListJobExecutorsResponseBody& operator=(const ListJobExecutorsResponseBody &) = default ;
    ListJobExecutorsResponseBody& operator=(ListJobExecutorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Executors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Executors& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
        DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
        DARABONBA_PTR_TO_JSON(BlockDuration, blockDuration_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExecutorId, executorId_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(ExternalIpAddress, externalIpAddress_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(Preemptible, preemptible_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Executors& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
        DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
        DARABONBA_PTR_FROM_JSON(BlockDuration, blockDuration_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExecutorId, executorId_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(ExternalIpAddress, externalIpAddress_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(Preemptible, preemptible_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Executors() = default ;
      Executors(const Executors &) = default ;
      Executors(Executors &&) = default ;
      Executors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Executors() = default ;
      Executors& operator=(const Executors &) = default ;
      Executors& operator=(Executors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the executor tag.
        shared_ptr<string> tagKey_ {};
        // The value of the executor tag.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->allocationSpec_ == nullptr
        && this->arrayIndex_ == nullptr && this->blockDuration_ == nullptr && this->createTime_ == nullptr && this->endTime_ == nullptr && this->executorId_ == nullptr
        && this->expirationTime_ == nullptr && this->externalIpAddress_ == nullptr && this->hostName_ == nullptr && this->ipAddress_ == nullptr && this->preemptible_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->tags_ == nullptr; };
      // allocationSpec Field Functions 
      bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
      void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
      inline string getAllocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
      inline Executors& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


      // arrayIndex Field Functions 
      bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
      void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
      inline int32_t getArrayIndex() const { DARABONBA_PTR_GET_DEFAULT(arrayIndex_, 0) };
      inline Executors& setArrayIndex(int32_t arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };


      // blockDuration Field Functions 
      bool hasBlockDuration() const { return this->blockDuration_ != nullptr;};
      void deleteBlockDuration() { this->blockDuration_ = nullptr;};
      inline int32_t getBlockDuration() const { DARABONBA_PTR_GET_DEFAULT(blockDuration_, 0) };
      inline Executors& setBlockDuration(int32_t blockDuration) { DARABONBA_PTR_SET_VALUE(blockDuration_, blockDuration) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Executors& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Executors& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executorId Field Functions 
      bool hasExecutorId() const { return this->executorId_ != nullptr;};
      void deleteExecutorId() { this->executorId_ = nullptr;};
      inline string getExecutorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
      inline Executors& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline Executors& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // externalIpAddress Field Functions 
      bool hasExternalIpAddress() const { return this->externalIpAddress_ != nullptr;};
      void deleteExternalIpAddress() { this->externalIpAddress_ = nullptr;};
      inline const vector<string> & getExternalIpAddress() const { DARABONBA_PTR_GET_CONST(externalIpAddress_, vector<string>) };
      inline vector<string> getExternalIpAddress() { DARABONBA_PTR_GET(externalIpAddress_, vector<string>) };
      inline Executors& setExternalIpAddress(const vector<string> & externalIpAddress) { DARABONBA_PTR_SET_VALUE(externalIpAddress_, externalIpAddress) };
      inline Executors& setExternalIpAddress(vector<string> && externalIpAddress) { DARABONBA_PTR_SET_RVALUE(externalIpAddress_, externalIpAddress) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline const vector<string> & getHostName() const { DARABONBA_PTR_GET_CONST(hostName_, vector<string>) };
      inline vector<string> getHostName() { DARABONBA_PTR_GET(hostName_, vector<string>) };
      inline Executors& setHostName(const vector<string> & hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };
      inline Executors& setHostName(vector<string> && hostName) { DARABONBA_PTR_SET_RVALUE(hostName_, hostName) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
      inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
      inline Executors& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
      inline Executors& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


      // preemptible Field Functions 
      bool hasPreemptible() const { return this->preemptible_ != nullptr;};
      void deletePreemptible() { this->preemptible_ = nullptr;};
      inline bool getPreemptible() const { DARABONBA_PTR_GET_DEFAULT(preemptible_, false) };
      inline Executors& setPreemptible(bool preemptible) { DARABONBA_PTR_SET_VALUE(preemptible_, preemptible) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Executors& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Executors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Executors& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Executors::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Executors::Tags>) };
      inline vector<Executors::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Executors::Tags>) };
      inline Executors& setTags(const vector<Executors::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Executors& setTags(vector<Executors::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> allocationSpec_ {};
      // The executor index number.
      shared_ptr<int32_t> arrayIndex_ {};
      shared_ptr<int32_t> blockDuration_ {};
      // The time when the storage resource was created.
      shared_ptr<string> createTime_ {};
      // The end time.
      shared_ptr<string> endTime_ {};
      // The executor ID. The format is JobId-TaskName-ArrayIndex.
      shared_ptr<string> executorId_ {};
      shared_ptr<string> expirationTime_ {};
      // The list of public IP addresses of the nodes.
      shared_ptr<vector<string>> externalIpAddress_ {};
      // An array of node hostnames.
      shared_ptr<vector<string>> hostName_ {};
      // The list of node IP addresses.
      shared_ptr<vector<string>> ipAddress_ {};
      shared_ptr<bool> preemptible_ {};
      // The create time.
      shared_ptr<string> startTime_ {};
      // The status of the executor. Valid values:
      // 
      // *   Pending
      // *   Initing
      // *   Succeed
      // *   Failed
      // *   Running
      // *   Unknown
      // *   Exception
      // *   Retrying
      // *   Expired
      // *   Deleted
      shared_ptr<string> status_ {};
      // The description of the status reason.
      shared_ptr<string> statusReason_ {};
      // The list of executor tags.
      shared_ptr<vector<Executors::Tags>> tags_ {};
    };

    class ExecutorStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutorStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
        DARABONBA_PTR_TO_JSON(Exception, exception_);
        DARABONBA_PTR_TO_JSON(Failed, failed_);
        DARABONBA_PTR_TO_JSON(Initing, initing_);
        DARABONBA_PTR_TO_JSON(Pending, pending_);
        DARABONBA_PTR_TO_JSON(Restarting, restarting_);
        DARABONBA_PTR_TO_JSON(Running, running_);
        DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
        DARABONBA_PTR_TO_JSON(Suspended, suspended_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutorStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(Exception, exception_);
        DARABONBA_PTR_FROM_JSON(Failed, failed_);
        DARABONBA_PTR_FROM_JSON(Initing, initing_);
        DARABONBA_PTR_FROM_JSON(Pending, pending_);
        DARABONBA_PTR_FROM_JSON(Restarting, restarting_);
        DARABONBA_PTR_FROM_JSON(Running, running_);
        DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
        DARABONBA_PTR_FROM_JSON(Suspended, suspended_);
      };
      ExecutorStatus() = default ;
      ExecutorStatus(const ExecutorStatus &) = default ;
      ExecutorStatus(ExecutorStatus &&) = default ;
      ExecutorStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutorStatus() = default ;
      ExecutorStatus& operator=(const ExecutorStatus &) = default ;
      ExecutorStatus& operator=(ExecutorStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deleted_ == nullptr
        && this->exception_ == nullptr && this->failed_ == nullptr && this->initing_ == nullptr && this->pending_ == nullptr && this->restarting_ == nullptr
        && this->running_ == nullptr && this->succeeded_ == nullptr && this->suspended_ == nullptr; };
      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
      inline ExecutorStatus& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // exception Field Functions 
      bool hasException() const { return this->exception_ != nullptr;};
      void deleteException() { this->exception_ = nullptr;};
      inline int32_t getException() const { DARABONBA_PTR_GET_DEFAULT(exception_, 0) };
      inline ExecutorStatus& setException(int32_t exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


      // failed Field Functions 
      bool hasFailed() const { return this->failed_ != nullptr;};
      void deleteFailed() { this->failed_ = nullptr;};
      inline int32_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
      inline ExecutorStatus& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


      // initing Field Functions 
      bool hasIniting() const { return this->initing_ != nullptr;};
      void deleteIniting() { this->initing_ = nullptr;};
      inline int32_t getIniting() const { DARABONBA_PTR_GET_DEFAULT(initing_, 0) };
      inline ExecutorStatus& setIniting(int32_t initing) { DARABONBA_PTR_SET_VALUE(initing_, initing) };


      // pending Field Functions 
      bool hasPending() const { return this->pending_ != nullptr;};
      void deletePending() { this->pending_ = nullptr;};
      inline int32_t getPending() const { DARABONBA_PTR_GET_DEFAULT(pending_, 0) };
      inline ExecutorStatus& setPending(int32_t pending) { DARABONBA_PTR_SET_VALUE(pending_, pending) };


      // restarting Field Functions 
      bool hasRestarting() const { return this->restarting_ != nullptr;};
      void deleteRestarting() { this->restarting_ = nullptr;};
      inline int32_t getRestarting() const { DARABONBA_PTR_GET_DEFAULT(restarting_, 0) };
      inline ExecutorStatus& setRestarting(int32_t restarting) { DARABONBA_PTR_SET_VALUE(restarting_, restarting) };


      // running Field Functions 
      bool hasRunning() const { return this->running_ != nullptr;};
      void deleteRunning() { this->running_ = nullptr;};
      inline int32_t getRunning() const { DARABONBA_PTR_GET_DEFAULT(running_, 0) };
      inline ExecutorStatus& setRunning(int32_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


      // succeeded Field Functions 
      bool hasSucceeded() const { return this->succeeded_ != nullptr;};
      void deleteSucceeded() { this->succeeded_ = nullptr;};
      inline int32_t getSucceeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0) };
      inline ExecutorStatus& setSucceeded(int32_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


      // suspended Field Functions 
      bool hasSuspended() const { return this->suspended_ != nullptr;};
      void deleteSuspended() { this->suspended_ = nullptr;};
      inline int32_t getSuspended() const { DARABONBA_PTR_GET_DEFAULT(suspended_, 0) };
      inline ExecutorStatus& setSuspended(int32_t suspended) { DARABONBA_PTR_SET_VALUE(suspended_, suspended) };


    protected:
      // The number of executers in the Deleted state.
      shared_ptr<int32_t> deleted_ {};
      // The number of executers in the abnormal state.
      shared_ptr<int32_t> exception_ {};
      // The number of executers in the Failed state.
      shared_ptr<int32_t> failed_ {};
      // The number of executers in the initialized state.
      shared_ptr<int32_t> initing_ {};
      // The number of executers in the queued state.
      shared_ptr<int32_t> pending_ {};
      shared_ptr<int32_t> restarting_ {};
      // The number of executers in the running state.
      shared_ptr<int32_t> running_ {};
      // The number of executoresin the Successful state.
      shared_ptr<int32_t> succeeded_ {};
      shared_ptr<int32_t> suspended_ {};
    };

    virtual bool empty() const override { return this->executorStatus_ == nullptr
        && this->executors_ == nullptr && this->jobId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->taskName_ == nullptr && this->totalCount_ == nullptr; };
    // executorStatus Field Functions 
    bool hasExecutorStatus() const { return this->executorStatus_ != nullptr;};
    void deleteExecutorStatus() { this->executorStatus_ = nullptr;};
    inline const ListJobExecutorsResponseBody::ExecutorStatus & getExecutorStatus() const { DARABONBA_PTR_GET_CONST(executorStatus_, ListJobExecutorsResponseBody::ExecutorStatus) };
    inline ListJobExecutorsResponseBody::ExecutorStatus getExecutorStatus() { DARABONBA_PTR_GET(executorStatus_, ListJobExecutorsResponseBody::ExecutorStatus) };
    inline ListJobExecutorsResponseBody& setExecutorStatus(const ListJobExecutorsResponseBody::ExecutorStatus & executorStatus) { DARABONBA_PTR_SET_VALUE(executorStatus_, executorStatus) };
    inline ListJobExecutorsResponseBody& setExecutorStatus(ListJobExecutorsResponseBody::ExecutorStatus && executorStatus) { DARABONBA_PTR_SET_RVALUE(executorStatus_, executorStatus) };


    // executors Field Functions 
    bool hasExecutors() const { return this->executors_ != nullptr;};
    void deleteExecutors() { this->executors_ = nullptr;};
    inline const vector<ListJobExecutorsResponseBody::Executors> & getExecutors() const { DARABONBA_PTR_GET_CONST(executors_, vector<ListJobExecutorsResponseBody::Executors>) };
    inline vector<ListJobExecutorsResponseBody::Executors> getExecutors() { DARABONBA_PTR_GET(executors_, vector<ListJobExecutorsResponseBody::Executors>) };
    inline ListJobExecutorsResponseBody& setExecutors(const vector<ListJobExecutorsResponseBody::Executors> & executors) { DARABONBA_PTR_SET_VALUE(executors_, executors) };
    inline ListJobExecutorsResponseBody& setExecutors(vector<ListJobExecutorsResponseBody::Executors> && executors) { DARABONBA_PTR_SET_RVALUE(executors_, executors) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobExecutorsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobExecutorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobExecutorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobExecutorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListJobExecutorsResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListJobExecutorsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Executor status statistics.
    shared_ptr<ListJobExecutorsResponseBody::ExecutorStatus> executorStatus_ {};
    // The executor list.
    shared_ptr<vector<ListJobExecutorsResponseBody::Executors>> executors_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The job name.
    shared_ptr<string> taskName_ {};
    // The total number of list entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
