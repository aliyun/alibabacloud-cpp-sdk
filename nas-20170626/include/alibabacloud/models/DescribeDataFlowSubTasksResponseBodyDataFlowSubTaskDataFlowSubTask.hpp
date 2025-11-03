// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSRESPONSEBODYDATAFLOWSUBTASKDATAFLOWSUBTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSRESPONSEBODYDATAFLOWSUBTASKDATAFLOWSUBTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail.hpp>
#include <alibabacloud/models/DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DataFlowSubTaskId, dataFlowSubTaskId_);
      DARABONBA_PTR_TO_JSON(DataFlowTaskId, dataFlowTaskId_);
      DARABONBA_PTR_TO_JSON(DstFilePath, dstFilePath_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(FileDetail, fileDetail_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProgressStats, progressStats_);
      DARABONBA_PTR_TO_JSON(SrcFilePath, srcFilePath_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DataFlowSubTaskId, dataFlowSubTaskId_);
      DARABONBA_PTR_FROM_JSON(DataFlowTaskId, dataFlowTaskId_);
      DARABONBA_PTR_FROM_JSON(DstFilePath, dstFilePath_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(FileDetail, fileDetail_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProgressStats, progressStats_);
      DARABONBA_PTR_FROM_JSON(SrcFilePath, srcFilePath_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask() = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask(const DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask &) = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask(DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask &&) = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask() = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& operator=(const DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask &) = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& operator=(DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataFlowId_ == nullptr && return this->dataFlowSubTaskId_ == nullptr && return this->dataFlowTaskId_ == nullptr && return this->dstFilePath_ == nullptr && return this->endTime_ == nullptr
        && return this->errorMsg_ == nullptr && return this->fileDetail_ == nullptr && return this->fileSystemId_ == nullptr && return this->progress_ == nullptr && return this->progressStats_ == nullptr
        && return this->srcFilePath_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string dataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dataFlowSubTaskId Field Functions 
    bool hasDataFlowSubTaskId() const { return this->dataFlowSubTaskId_ != nullptr;};
    void deleteDataFlowSubTaskId() { this->dataFlowSubTaskId_ = nullptr;};
    inline string dataFlowSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowSubTaskId_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setDataFlowSubTaskId(string dataFlowSubTaskId) { DARABONBA_PTR_SET_VALUE(dataFlowSubTaskId_, dataFlowSubTaskId) };


    // dataFlowTaskId Field Functions 
    bool hasDataFlowTaskId() const { return this->dataFlowTaskId_ != nullptr;};
    void deleteDataFlowTaskId() { this->dataFlowTaskId_ = nullptr;};
    inline string dataFlowTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowTaskId_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setDataFlowTaskId(string dataFlowTaskId) { DARABONBA_PTR_SET_VALUE(dataFlowTaskId_, dataFlowTaskId) };


    // dstFilePath Field Functions 
    bool hasDstFilePath() const { return this->dstFilePath_ != nullptr;};
    void deleteDstFilePath() { this->dstFilePath_ = nullptr;};
    inline string dstFilePath() const { DARABONBA_PTR_GET_DEFAULT(dstFilePath_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setDstFilePath(string dstFilePath) { DARABONBA_PTR_SET_VALUE(dstFilePath_, dstFilePath) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // fileDetail Field Functions 
    bool hasFileDetail() const { return this->fileDetail_ != nullptr;};
    void deleteFileDetail() { this->fileDetail_ = nullptr;};
    inline const Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail & fileDetail() const { DARABONBA_PTR_GET_CONST(fileDetail_, Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail) };
    inline Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail fileDetail() { DARABONBA_PTR_GET(fileDetail_, Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail) };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setFileDetail(const Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail & fileDetail) { DARABONBA_PTR_SET_VALUE(fileDetail_, fileDetail) };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setFileDetail(Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail && fileDetail) { DARABONBA_PTR_SET_RVALUE(fileDetail_, fileDetail) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // progressStats Field Functions 
    bool hasProgressStats() const { return this->progressStats_ != nullptr;};
    void deleteProgressStats() { this->progressStats_ = nullptr;};
    inline const Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats & progressStats() const { DARABONBA_PTR_GET_CONST(progressStats_, Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats) };
    inline Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats progressStats() { DARABONBA_PTR_GET(progressStats_, Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats) };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setProgressStats(const Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats & progressStats) { DARABONBA_PTR_SET_VALUE(progressStats_, progressStats) };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setProgressStats(Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats && progressStats) { DARABONBA_PTR_SET_RVALUE(progressStats_, progressStats) };


    // srcFilePath Field Functions 
    bool hasSrcFilePath() const { return this->srcFilePath_ != nullptr;};
    void deleteSrcFilePath() { this->srcFilePath_ = nullptr;};
    inline string srcFilePath() const { DARABONBA_PTR_GET_DEFAULT(srcFilePath_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setSrcFilePath(string srcFilePath) { DARABONBA_PTR_SET_VALUE(srcFilePath_, srcFilePath) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the data streaming task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the data flow.
    std::shared_ptr<string> dataFlowId_ = nullptr;
    // The ID of the data streaming task.
    std::shared_ptr<string> dataFlowSubTaskId_ = nullptr;
    // The ID of the data flow task.
    std::shared_ptr<string> dataFlowTaskId_ = nullptr;
    // The path of the destination file. Limits:
    // 
    // *   The path must be 1 to 1,023 characters in length.
    // *   The path must be encoded in UTF-8.
    // *   The path must start with a forward slash (/).
    // *   The path must end with the file name.
    std::shared_ptr<string> dstFilePath_ = nullptr;
    // The time when the data streaming task ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The error message returned when the task failed.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The file information.
    std::shared_ptr<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail> fileDetail_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The progress of the data streaming task. Valid values: 0 to 10000.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The progress information about data streaming tasks.
    std::shared_ptr<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats> progressStats_ = nullptr;
    // The path of the source file. Limits:
    // 
    // *   The path must be 1 to 1,023 characters in length.
    // *   The path must be encoded in UTF-8.
    // *   The path must start with a forward slash (/).
    // *   The path must end with the file name.
    std::shared_ptr<string> srcFilePath_ = nullptr;
    // The time when the data streaming task started.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the data streaming task. Valid values:
    // 
    // *   EXPIRED: The task is terminated.
    // *   CREATED: The task is created.
    // *   RUNNING: The task is running.
    // *   COMPLETE: The task is complete.
    // *   CANCELING: The task is being canceled.
    // *   FAILED: The task failed to be executed.
    // *   CANCELED: The task is canceled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
