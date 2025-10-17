// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODYEXEXUTORS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODYEXEXUTORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListJobExecutorsResponseBodyExexutors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutorsResponseBodyExexutors& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListJobExecutorsResponseBodyExexutors& obj) { 
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
    ListJobExecutorsResponseBodyExexutors() = default ;
    ListJobExecutorsResponseBodyExexutors(const ListJobExecutorsResponseBodyExexutors &) = default ;
    ListJobExecutorsResponseBodyExexutors(ListJobExecutorsResponseBodyExexutors &&) = default ;
    ListJobExecutorsResponseBodyExexutors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobExecutorsResponseBodyExexutors() = default ;
    ListJobExecutorsResponseBodyExexutors& operator=(const ListJobExecutorsResponseBodyExexutors &) = default ;
    ListJobExecutorsResponseBodyExexutors& operator=(ListJobExecutorsResponseBodyExexutors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeTasks_ == nullptr
        && return this->addTime_ == nullptr && return this->completedTasks_ == nullptr && return this->diskUsed_ == nullptr && return this->executorId_ == nullptr && return this->executorType_ == nullptr
        && return this->failedTasks_ == nullptr && return this->hostPort_ == nullptr && return this->jobRunId_ == nullptr && return this->maxMemory_ == nullptr && return this->memoryUsed_ == nullptr
        && return this->rddBlocks_ == nullptr && return this->status_ == nullptr && return this->totalCores_ == nullptr && return this->totalDuration_ == nullptr && return this->totalGCTime_ == nullptr
        && return this->totalInputBytes_ == nullptr && return this->totalShuffleRead_ == nullptr && return this->totalShuffleWrite_ == nullptr && return this->totalTasks_ == nullptr && return this->workspaceId_ == nullptr; };
    // activeTasks Field Functions 
    bool hasActiveTasks() const { return this->activeTasks_ != nullptr;};
    void deleteActiveTasks() { this->activeTasks_ = nullptr;};
    inline int64_t activeTasks() const { DARABONBA_PTR_GET_DEFAULT(activeTasks_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setActiveTasks(int64_t activeTasks) { DARABONBA_PTR_SET_VALUE(activeTasks_, activeTasks) };


    // addTime Field Functions 
    bool hasAddTime() const { return this->addTime_ != nullptr;};
    void deleteAddTime() { this->addTime_ = nullptr;};
    inline int64_t addTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


    // completedTasks Field Functions 
    bool hasCompletedTasks() const { return this->completedTasks_ != nullptr;};
    void deleteCompletedTasks() { this->completedTasks_ = nullptr;};
    inline int64_t completedTasks() const { DARABONBA_PTR_GET_DEFAULT(completedTasks_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setCompletedTasks(int64_t completedTasks) { DARABONBA_PTR_SET_VALUE(completedTasks_, completedTasks) };


    // diskUsed Field Functions 
    bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
    void deleteDiskUsed() { this->diskUsed_ = nullptr;};
    inline int64_t diskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setDiskUsed(int64_t diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


    // executorId Field Functions 
    bool hasExecutorId() const { return this->executorId_ != nullptr;};
    void deleteExecutorId() { this->executorId_ = nullptr;};
    inline string executorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
    inline ListJobExecutorsResponseBodyExexutors& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


    // executorType Field Functions 
    bool hasExecutorType() const { return this->executorType_ != nullptr;};
    void deleteExecutorType() { this->executorType_ = nullptr;};
    inline string executorType() const { DARABONBA_PTR_GET_DEFAULT(executorType_, "") };
    inline ListJobExecutorsResponseBodyExexutors& setExecutorType(string executorType) { DARABONBA_PTR_SET_VALUE(executorType_, executorType) };


    // failedTasks Field Functions 
    bool hasFailedTasks() const { return this->failedTasks_ != nullptr;};
    void deleteFailedTasks() { this->failedTasks_ = nullptr;};
    inline int64_t failedTasks() const { DARABONBA_PTR_GET_DEFAULT(failedTasks_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setFailedTasks(int64_t failedTasks) { DARABONBA_PTR_SET_VALUE(failedTasks_, failedTasks) };


    // hostPort Field Functions 
    bool hasHostPort() const { return this->hostPort_ != nullptr;};
    void deleteHostPort() { this->hostPort_ = nullptr;};
    inline string hostPort() const { DARABONBA_PTR_GET_DEFAULT(hostPort_, "") };
    inline ListJobExecutorsResponseBodyExexutors& setHostPort(string hostPort) { DARABONBA_PTR_SET_VALUE(hostPort_, hostPort) };


    // jobRunId Field Functions 
    bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
    void deleteJobRunId() { this->jobRunId_ = nullptr;};
    inline string jobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
    inline ListJobExecutorsResponseBodyExexutors& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


    // maxMemory Field Functions 
    bool hasMaxMemory() const { return this->maxMemory_ != nullptr;};
    void deleteMaxMemory() { this->maxMemory_ = nullptr;};
    inline int64_t maxMemory() const { DARABONBA_PTR_GET_DEFAULT(maxMemory_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setMaxMemory(int64_t maxMemory) { DARABONBA_PTR_SET_VALUE(maxMemory_, maxMemory) };


    // memoryUsed Field Functions 
    bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
    void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
    inline int64_t memoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setMemoryUsed(int64_t memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


    // rddBlocks Field Functions 
    bool hasRddBlocks() const { return this->rddBlocks_ != nullptr;};
    void deleteRddBlocks() { this->rddBlocks_ = nullptr;};
    inline int64_t rddBlocks() const { DARABONBA_PTR_GET_DEFAULT(rddBlocks_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setRddBlocks(int64_t rddBlocks) { DARABONBA_PTR_SET_VALUE(rddBlocks_, rddBlocks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobExecutorsResponseBodyExexutors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCores Field Functions 
    bool hasTotalCores() const { return this->totalCores_ != nullptr;};
    void deleteTotalCores() { this->totalCores_ = nullptr;};
    inline int64_t totalCores() const { DARABONBA_PTR_GET_DEFAULT(totalCores_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setTotalCores(int64_t totalCores) { DARABONBA_PTR_SET_VALUE(totalCores_, totalCores) };


    // totalDuration Field Functions 
    bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
    void deleteTotalDuration() { this->totalDuration_ = nullptr;};
    inline int64_t totalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


    // totalGCTime Field Functions 
    bool hasTotalGCTime() const { return this->totalGCTime_ != nullptr;};
    void deleteTotalGCTime() { this->totalGCTime_ = nullptr;};
    inline int64_t totalGCTime() const { DARABONBA_PTR_GET_DEFAULT(totalGCTime_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setTotalGCTime(int64_t totalGCTime) { DARABONBA_PTR_SET_VALUE(totalGCTime_, totalGCTime) };


    // totalInputBytes Field Functions 
    bool hasTotalInputBytes() const { return this->totalInputBytes_ != nullptr;};
    void deleteTotalInputBytes() { this->totalInputBytes_ = nullptr;};
    inline int64_t totalInputBytes() const { DARABONBA_PTR_GET_DEFAULT(totalInputBytes_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setTotalInputBytes(int64_t totalInputBytes) { DARABONBA_PTR_SET_VALUE(totalInputBytes_, totalInputBytes) };


    // totalShuffleRead Field Functions 
    bool hasTotalShuffleRead() const { return this->totalShuffleRead_ != nullptr;};
    void deleteTotalShuffleRead() { this->totalShuffleRead_ = nullptr;};
    inline int64_t totalShuffleRead() const { DARABONBA_PTR_GET_DEFAULT(totalShuffleRead_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setTotalShuffleRead(int64_t totalShuffleRead) { DARABONBA_PTR_SET_VALUE(totalShuffleRead_, totalShuffleRead) };


    // totalShuffleWrite Field Functions 
    bool hasTotalShuffleWrite() const { return this->totalShuffleWrite_ != nullptr;};
    void deleteTotalShuffleWrite() { this->totalShuffleWrite_ = nullptr;};
    inline int64_t totalShuffleWrite() const { DARABONBA_PTR_GET_DEFAULT(totalShuffleWrite_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setTotalShuffleWrite(int64_t totalShuffleWrite) { DARABONBA_PTR_SET_VALUE(totalShuffleWrite_, totalShuffleWrite) };


    // totalTasks Field Functions 
    bool hasTotalTasks() const { return this->totalTasks_ != nullptr;};
    void deleteTotalTasks() { this->totalTasks_ = nullptr;};
    inline int64_t totalTasks() const { DARABONBA_PTR_GET_DEFAULT(totalTasks_, 0L) };
    inline ListJobExecutorsResponseBodyExexutors& setTotalTasks(int64_t totalTasks) { DARABONBA_PTR_SET_VALUE(totalTasks_, totalTasks) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListJobExecutorsResponseBodyExexutors& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> activeTasks_ = nullptr;
    std::shared_ptr<int64_t> addTime_ = nullptr;
    std::shared_ptr<int64_t> completedTasks_ = nullptr;
    std::shared_ptr<int64_t> diskUsed_ = nullptr;
    std::shared_ptr<string> executorId_ = nullptr;
    std::shared_ptr<string> executorType_ = nullptr;
    std::shared_ptr<int64_t> failedTasks_ = nullptr;
    std::shared_ptr<string> hostPort_ = nullptr;
    std::shared_ptr<string> jobRunId_ = nullptr;
    std::shared_ptr<int64_t> maxMemory_ = nullptr;
    std::shared_ptr<int64_t> memoryUsed_ = nullptr;
    std::shared_ptr<int64_t> rddBlocks_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> totalCores_ = nullptr;
    std::shared_ptr<int64_t> totalDuration_ = nullptr;
    std::shared_ptr<int64_t> totalGCTime_ = nullptr;
    std::shared_ptr<int64_t> totalInputBytes_ = nullptr;
    std::shared_ptr<int64_t> totalShuffleRead_ = nullptr;
    std::shared_ptr<int64_t> totalShuffleWrite_ = nullptr;
    std::shared_ptr<int64_t> totalTasks_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
