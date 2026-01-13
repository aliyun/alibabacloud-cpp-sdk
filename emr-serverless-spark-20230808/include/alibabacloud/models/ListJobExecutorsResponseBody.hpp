// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListJobExecutorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(exexutors, exexutors_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobExecutorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(exexutors, exexutors_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
    class Exexutors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Exexutors& obj) { 
        DARABONBA_PTR_TO_JSON(activeTasks, activeTasks_);
        DARABONBA_PTR_TO_JSON(addTime, addTime_);
        DARABONBA_PTR_TO_JSON(completedTasks, completedTasks_);
        DARABONBA_PTR_TO_JSON(diskUsed, diskUsed_);
        DARABONBA_PTR_TO_JSON(executorId, executorId_);
        DARABONBA_PTR_TO_JSON(executorType, executorType_);
        DARABONBA_PTR_TO_JSON(failedTasks, failedTasks_);
        DARABONBA_PTR_TO_JSON(hostPort, hostPort_);
        DARABONBA_PTR_TO_JSON(jobRunId, jobRunId_);
        DARABONBA_PTR_TO_JSON(maxMemory, maxMemory_);
        DARABONBA_PTR_TO_JSON(memoryUsed, memoryUsed_);
        DARABONBA_PTR_TO_JSON(rddBlocks, rddBlocks_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(totalCores, totalCores_);
        DARABONBA_PTR_TO_JSON(totalDuration, totalDuration_);
        DARABONBA_PTR_TO_JSON(totalGCTime, totalGCTime_);
        DARABONBA_PTR_TO_JSON(totalInputBytes, totalInputBytes_);
        DARABONBA_PTR_TO_JSON(totalShuffleRead, totalShuffleRead_);
        DARABONBA_PTR_TO_JSON(totalShuffleWrite, totalShuffleWrite_);
        DARABONBA_PTR_TO_JSON(totalTasks, totalTasks_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Exexutors& obj) { 
        DARABONBA_PTR_FROM_JSON(activeTasks, activeTasks_);
        DARABONBA_PTR_FROM_JSON(addTime, addTime_);
        DARABONBA_PTR_FROM_JSON(completedTasks, completedTasks_);
        DARABONBA_PTR_FROM_JSON(diskUsed, diskUsed_);
        DARABONBA_PTR_FROM_JSON(executorId, executorId_);
        DARABONBA_PTR_FROM_JSON(executorType, executorType_);
        DARABONBA_PTR_FROM_JSON(failedTasks, failedTasks_);
        DARABONBA_PTR_FROM_JSON(hostPort, hostPort_);
        DARABONBA_PTR_FROM_JSON(jobRunId, jobRunId_);
        DARABONBA_PTR_FROM_JSON(maxMemory, maxMemory_);
        DARABONBA_PTR_FROM_JSON(memoryUsed, memoryUsed_);
        DARABONBA_PTR_FROM_JSON(rddBlocks, rddBlocks_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(totalCores, totalCores_);
        DARABONBA_PTR_FROM_JSON(totalDuration, totalDuration_);
        DARABONBA_PTR_FROM_JSON(totalGCTime, totalGCTime_);
        DARABONBA_PTR_FROM_JSON(totalInputBytes, totalInputBytes_);
        DARABONBA_PTR_FROM_JSON(totalShuffleRead, totalShuffleRead_);
        DARABONBA_PTR_FROM_JSON(totalShuffleWrite, totalShuffleWrite_);
        DARABONBA_PTR_FROM_JSON(totalTasks, totalTasks_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Exexutors() = default ;
      Exexutors(const Exexutors &) = default ;
      Exexutors(Exexutors &&) = default ;
      Exexutors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Exexutors() = default ;
      Exexutors& operator=(const Exexutors &) = default ;
      Exexutors& operator=(Exexutors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeTasks_ == nullptr
        && this->addTime_ == nullptr && this->completedTasks_ == nullptr && this->diskUsed_ == nullptr && this->executorId_ == nullptr && this->executorType_ == nullptr
        && this->failedTasks_ == nullptr && this->hostPort_ == nullptr && this->jobRunId_ == nullptr && this->maxMemory_ == nullptr && this->memoryUsed_ == nullptr
        && this->rddBlocks_ == nullptr && this->status_ == nullptr && this->totalCores_ == nullptr && this->totalDuration_ == nullptr && this->totalGCTime_ == nullptr
        && this->totalInputBytes_ == nullptr && this->totalShuffleRead_ == nullptr && this->totalShuffleWrite_ == nullptr && this->totalTasks_ == nullptr && this->workspaceId_ == nullptr; };
      // activeTasks Field Functions 
      bool hasActiveTasks() const { return this->activeTasks_ != nullptr;};
      void deleteActiveTasks() { this->activeTasks_ = nullptr;};
      inline int64_t getActiveTasks() const { DARABONBA_PTR_GET_DEFAULT(activeTasks_, 0L) };
      inline Exexutors& setActiveTasks(int64_t activeTasks) { DARABONBA_PTR_SET_VALUE(activeTasks_, activeTasks) };


      // addTime Field Functions 
      bool hasAddTime() const { return this->addTime_ != nullptr;};
      void deleteAddTime() { this->addTime_ = nullptr;};
      inline int64_t getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
      inline Exexutors& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


      // completedTasks Field Functions 
      bool hasCompletedTasks() const { return this->completedTasks_ != nullptr;};
      void deleteCompletedTasks() { this->completedTasks_ = nullptr;};
      inline int64_t getCompletedTasks() const { DARABONBA_PTR_GET_DEFAULT(completedTasks_, 0L) };
      inline Exexutors& setCompletedTasks(int64_t completedTasks) { DARABONBA_PTR_SET_VALUE(completedTasks_, completedTasks) };


      // diskUsed Field Functions 
      bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
      void deleteDiskUsed() { this->diskUsed_ = nullptr;};
      inline int64_t getDiskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0L) };
      inline Exexutors& setDiskUsed(int64_t diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


      // executorId Field Functions 
      bool hasExecutorId() const { return this->executorId_ != nullptr;};
      void deleteExecutorId() { this->executorId_ = nullptr;};
      inline string getExecutorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
      inline Exexutors& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


      // executorType Field Functions 
      bool hasExecutorType() const { return this->executorType_ != nullptr;};
      void deleteExecutorType() { this->executorType_ = nullptr;};
      inline string getExecutorType() const { DARABONBA_PTR_GET_DEFAULT(executorType_, "") };
      inline Exexutors& setExecutorType(string executorType) { DARABONBA_PTR_SET_VALUE(executorType_, executorType) };


      // failedTasks Field Functions 
      bool hasFailedTasks() const { return this->failedTasks_ != nullptr;};
      void deleteFailedTasks() { this->failedTasks_ = nullptr;};
      inline int64_t getFailedTasks() const { DARABONBA_PTR_GET_DEFAULT(failedTasks_, 0L) };
      inline Exexutors& setFailedTasks(int64_t failedTasks) { DARABONBA_PTR_SET_VALUE(failedTasks_, failedTasks) };


      // hostPort Field Functions 
      bool hasHostPort() const { return this->hostPort_ != nullptr;};
      void deleteHostPort() { this->hostPort_ = nullptr;};
      inline string getHostPort() const { DARABONBA_PTR_GET_DEFAULT(hostPort_, "") };
      inline Exexutors& setHostPort(string hostPort) { DARABONBA_PTR_SET_VALUE(hostPort_, hostPort) };


      // jobRunId Field Functions 
      bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
      void deleteJobRunId() { this->jobRunId_ = nullptr;};
      inline string getJobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
      inline Exexutors& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


      // maxMemory Field Functions 
      bool hasMaxMemory() const { return this->maxMemory_ != nullptr;};
      void deleteMaxMemory() { this->maxMemory_ = nullptr;};
      inline int64_t getMaxMemory() const { DARABONBA_PTR_GET_DEFAULT(maxMemory_, 0L) };
      inline Exexutors& setMaxMemory(int64_t maxMemory) { DARABONBA_PTR_SET_VALUE(maxMemory_, maxMemory) };


      // memoryUsed Field Functions 
      bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
      void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
      inline int64_t getMemoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, 0L) };
      inline Exexutors& setMemoryUsed(int64_t memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


      // rddBlocks Field Functions 
      bool hasRddBlocks() const { return this->rddBlocks_ != nullptr;};
      void deleteRddBlocks() { this->rddBlocks_ = nullptr;};
      inline int64_t getRddBlocks() const { DARABONBA_PTR_GET_DEFAULT(rddBlocks_, 0L) };
      inline Exexutors& setRddBlocks(int64_t rddBlocks) { DARABONBA_PTR_SET_VALUE(rddBlocks_, rddBlocks) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Exexutors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalCores Field Functions 
      bool hasTotalCores() const { return this->totalCores_ != nullptr;};
      void deleteTotalCores() { this->totalCores_ = nullptr;};
      inline int64_t getTotalCores() const { DARABONBA_PTR_GET_DEFAULT(totalCores_, 0L) };
      inline Exexutors& setTotalCores(int64_t totalCores) { DARABONBA_PTR_SET_VALUE(totalCores_, totalCores) };


      // totalDuration Field Functions 
      bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
      void deleteTotalDuration() { this->totalDuration_ = nullptr;};
      inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
      inline Exexutors& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


      // totalGCTime Field Functions 
      bool hasTotalGCTime() const { return this->totalGCTime_ != nullptr;};
      void deleteTotalGCTime() { this->totalGCTime_ = nullptr;};
      inline int64_t getTotalGCTime() const { DARABONBA_PTR_GET_DEFAULT(totalGCTime_, 0L) };
      inline Exexutors& setTotalGCTime(int64_t totalGCTime) { DARABONBA_PTR_SET_VALUE(totalGCTime_, totalGCTime) };


      // totalInputBytes Field Functions 
      bool hasTotalInputBytes() const { return this->totalInputBytes_ != nullptr;};
      void deleteTotalInputBytes() { this->totalInputBytes_ = nullptr;};
      inline int64_t getTotalInputBytes() const { DARABONBA_PTR_GET_DEFAULT(totalInputBytes_, 0L) };
      inline Exexutors& setTotalInputBytes(int64_t totalInputBytes) { DARABONBA_PTR_SET_VALUE(totalInputBytes_, totalInputBytes) };


      // totalShuffleRead Field Functions 
      bool hasTotalShuffleRead() const { return this->totalShuffleRead_ != nullptr;};
      void deleteTotalShuffleRead() { this->totalShuffleRead_ = nullptr;};
      inline int64_t getTotalShuffleRead() const { DARABONBA_PTR_GET_DEFAULT(totalShuffleRead_, 0L) };
      inline Exexutors& setTotalShuffleRead(int64_t totalShuffleRead) { DARABONBA_PTR_SET_VALUE(totalShuffleRead_, totalShuffleRead) };


      // totalShuffleWrite Field Functions 
      bool hasTotalShuffleWrite() const { return this->totalShuffleWrite_ != nullptr;};
      void deleteTotalShuffleWrite() { this->totalShuffleWrite_ = nullptr;};
      inline int64_t getTotalShuffleWrite() const { DARABONBA_PTR_GET_DEFAULT(totalShuffleWrite_, 0L) };
      inline Exexutors& setTotalShuffleWrite(int64_t totalShuffleWrite) { DARABONBA_PTR_SET_VALUE(totalShuffleWrite_, totalShuffleWrite) };


      // totalTasks Field Functions 
      bool hasTotalTasks() const { return this->totalTasks_ != nullptr;};
      void deleteTotalTasks() { this->totalTasks_ = nullptr;};
      inline int64_t getTotalTasks() const { DARABONBA_PTR_GET_DEFAULT(totalTasks_, 0L) };
      inline Exexutors& setTotalTasks(int64_t totalTasks) { DARABONBA_PTR_SET_VALUE(totalTasks_, totalTasks) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Exexutors& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<int64_t> activeTasks_ {};
      shared_ptr<int64_t> addTime_ {};
      shared_ptr<int64_t> completedTasks_ {};
      shared_ptr<int64_t> diskUsed_ {};
      shared_ptr<string> executorId_ {};
      shared_ptr<string> executorType_ {};
      shared_ptr<int64_t> failedTasks_ {};
      shared_ptr<string> hostPort_ {};
      shared_ptr<string> jobRunId_ {};
      shared_ptr<int64_t> maxMemory_ {};
      shared_ptr<int64_t> memoryUsed_ {};
      shared_ptr<int64_t> rddBlocks_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> totalCores_ {};
      shared_ptr<int64_t> totalDuration_ {};
      shared_ptr<int64_t> totalGCTime_ {};
      shared_ptr<int64_t> totalInputBytes_ {};
      shared_ptr<int64_t> totalShuffleRead_ {};
      shared_ptr<int64_t> totalShuffleWrite_ {};
      shared_ptr<int64_t> totalTasks_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->exexutors_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // exexutors Field Functions 
    bool hasExexutors() const { return this->exexutors_ != nullptr;};
    void deleteExexutors() { this->exexutors_ = nullptr;};
    inline const vector<ListJobExecutorsResponseBody::Exexutors> & getExexutors() const { DARABONBA_PTR_GET_CONST(exexutors_, vector<ListJobExecutorsResponseBody::Exexutors>) };
    inline vector<ListJobExecutorsResponseBody::Exexutors> getExexutors() { DARABONBA_PTR_GET(exexutors_, vector<ListJobExecutorsResponseBody::Exexutors>) };
    inline ListJobExecutorsResponseBody& setExexutors(const vector<ListJobExecutorsResponseBody::Exexutors> & exexutors) { DARABONBA_PTR_SET_VALUE(exexutors_, exexutors) };
    inline ListJobExecutorsResponseBody& setExexutors(vector<ListJobExecutorsResponseBody::Exexutors> && exexutors) { DARABONBA_PTR_SET_RVALUE(exexutors_, exexutors) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListJobExecutorsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJobExecutorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobExecutorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobExecutorsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListJobExecutorsResponseBody::Exexutors>> exexutors_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
