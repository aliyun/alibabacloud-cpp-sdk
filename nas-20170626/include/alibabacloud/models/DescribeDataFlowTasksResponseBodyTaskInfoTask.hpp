// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODYTASKINFOTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODYTASKINFOTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats.hpp>
#include <alibabacloud/models/DescribeDataFlowTasksResponseBodyTaskInfoTaskReports.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowTasksResponseBodyTaskInfoTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowTasksResponseBodyTaskInfoTask& obj) { 
      DARABONBA_PTR_TO_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(DstDirectory, dstDirectory_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_TO_JSON(FilesystemId, filesystemId_);
      DARABONBA_PTR_TO_JSON(FsPath, fsPath_);
      DARABONBA_PTR_TO_JSON(Includes, includes_);
      DARABONBA_PTR_TO_JSON(Originator, originator_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProgressStats, progressStats_);
      DARABONBA_PTR_TO_JSON(ReportPath, reportPath_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(SourceStorage, sourceStorage_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TransferFileListPath, transferFileListPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowTasksResponseBodyTaskInfoTask& obj) { 
      DARABONBA_PTR_FROM_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(DstDirectory, dstDirectory_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(FileSystemPath, fileSystemPath_);
      DARABONBA_PTR_FROM_JSON(FilesystemId, filesystemId_);
      DARABONBA_PTR_FROM_JSON(FsPath, fsPath_);
      DARABONBA_PTR_FROM_JSON(Includes, includes_);
      DARABONBA_PTR_FROM_JSON(Originator, originator_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProgressStats, progressStats_);
      DARABONBA_PTR_FROM_JSON(ReportPath, reportPath_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(SourceStorage, sourceStorage_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TransferFileListPath, transferFileListPath_);
    };
    DescribeDataFlowTasksResponseBodyTaskInfoTask() = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTask(const DescribeDataFlowTasksResponseBodyTaskInfoTask &) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTask(DescribeDataFlowTasksResponseBodyTaskInfoTask &&) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowTasksResponseBodyTaskInfoTask() = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTask& operator=(const DescribeDataFlowTasksResponseBodyTaskInfoTask &) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTask& operator=(DescribeDataFlowTasksResponseBodyTaskInfoTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conflictPolicy_ == nullptr
        && return this->createTime_ == nullptr && return this->dataFlowId_ == nullptr && return this->dataType_ == nullptr && return this->directory_ == nullptr && return this->dstDirectory_ == nullptr
        && return this->endTime_ == nullptr && return this->errorMsg_ == nullptr && return this->fileSystemPath_ == nullptr && return this->filesystemId_ == nullptr && return this->fsPath_ == nullptr
        && return this->includes_ == nullptr && return this->originator_ == nullptr && return this->progress_ == nullptr && return this->progressStats_ == nullptr && return this->reportPath_ == nullptr
        && return this->reports_ == nullptr && return this->sourceStorage_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->taskAction_ == nullptr
        && return this->taskId_ == nullptr && return this->transferFileListPath_ == nullptr; };
    // conflictPolicy Field Functions 
    bool hasConflictPolicy() const { return this->conflictPolicy_ != nullptr;};
    void deleteConflictPolicy() { this->conflictPolicy_ = nullptr;};
    inline string conflictPolicy() const { DARABONBA_PTR_GET_DEFAULT(conflictPolicy_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setConflictPolicy(string conflictPolicy) { DARABONBA_PTR_SET_VALUE(conflictPolicy_, conflictPolicy) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string dataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // dstDirectory Field Functions 
    bool hasDstDirectory() const { return this->dstDirectory_ != nullptr;};
    void deleteDstDirectory() { this->dstDirectory_ = nullptr;};
    inline string dstDirectory() const { DARABONBA_PTR_GET_DEFAULT(dstDirectory_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setDstDirectory(string dstDirectory) { DARABONBA_PTR_SET_VALUE(dstDirectory_, dstDirectory) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // fileSystemPath Field Functions 
    bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
    void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
    inline string fileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


    // filesystemId Field Functions 
    bool hasFilesystemId() const { return this->filesystemId_ != nullptr;};
    void deleteFilesystemId() { this->filesystemId_ = nullptr;};
    inline string filesystemId() const { DARABONBA_PTR_GET_DEFAULT(filesystemId_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setFilesystemId(string filesystemId) { DARABONBA_PTR_SET_VALUE(filesystemId_, filesystemId) };


    // fsPath Field Functions 
    bool hasFsPath() const { return this->fsPath_ != nullptr;};
    void deleteFsPath() { this->fsPath_ = nullptr;};
    inline string fsPath() const { DARABONBA_PTR_GET_DEFAULT(fsPath_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setFsPath(string fsPath) { DARABONBA_PTR_SET_VALUE(fsPath_, fsPath) };


    // includes Field Functions 
    bool hasIncludes() const { return this->includes_ != nullptr;};
    void deleteIncludes() { this->includes_ = nullptr;};
    inline string includes() const { DARABONBA_PTR_GET_DEFAULT(includes_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setIncludes(string includes) { DARABONBA_PTR_SET_VALUE(includes_, includes) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline string originator() const { DARABONBA_PTR_GET_DEFAULT(originator_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setOriginator(string originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // progressStats Field Functions 
    bool hasProgressStats() const { return this->progressStats_ != nullptr;};
    void deleteProgressStats() { this->progressStats_ = nullptr;};
    inline const Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats & progressStats() const { DARABONBA_PTR_GET_CONST(progressStats_, Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats) };
    inline Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats progressStats() { DARABONBA_PTR_GET(progressStats_, Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setProgressStats(const Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats & progressStats) { DARABONBA_PTR_SET_VALUE(progressStats_, progressStats) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setProgressStats(Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats && progressStats) { DARABONBA_PTR_SET_RVALUE(progressStats_, progressStats) };


    // reportPath Field Functions 
    bool hasReportPath() const { return this->reportPath_ != nullptr;};
    void deleteReportPath() { this->reportPath_ = nullptr;};
    inline string reportPath() const { DARABONBA_PTR_GET_DEFAULT(reportPath_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setReportPath(string reportPath) { DARABONBA_PTR_SET_VALUE(reportPath_, reportPath) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReports & reports() const { DARABONBA_PTR_GET_CONST(reports_, Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReports) };
    inline Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReports reports() { DARABONBA_PTR_GET(reports_, Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReports) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setReports(const Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReports & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setReports(Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReports && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // sourceStorage Field Functions 
    bool hasSourceStorage() const { return this->sourceStorage_ != nullptr;};
    void deleteSourceStorage() { this->sourceStorage_ = nullptr;};
    inline string sourceStorage() const { DARABONBA_PTR_GET_DEFAULT(sourceStorage_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setSourceStorage(string sourceStorage) { DARABONBA_PTR_SET_VALUE(sourceStorage_, sourceStorage) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // transferFileListPath Field Functions 
    bool hasTransferFileListPath() const { return this->transferFileListPath_ != nullptr;};
    void deleteTransferFileListPath() { this->transferFileListPath_ = nullptr;};
    inline string transferFileListPath() const { DARABONBA_PTR_GET_DEFAULT(transferFileListPath_, "") };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTask& setTransferFileListPath(string transferFileListPath) { DARABONBA_PTR_SET_VALUE(transferFileListPath_, transferFileListPath) };


  protected:
    // The conflict policy for files with the same name. Valid values:
    // 
    // *   SKIP_THE_FILE: skips files with the same name.
    // *   KEEP_LATEST: compares the update time and keeps the latest version.
    // *   OVERWRITE_EXISTING: forcibly overwrites the existing file.
    std::shared_ptr<string> conflictPolicy_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the dataflow.
    std::shared_ptr<string> dataFlowId_ = nullptr;
    // The type of data on which operations are performed by the dataflow task. The following information is displayed:
    // 
    // *   Metadata: the metadata of a file, including the timestamp, ownership, and permission information of the file. If you select Metadata, only the metadata of the file is imported. You can only query the file. When you access the file data, the file is loaded from the source storage as required.
    // *   Data: the data blocks of the file.
    // *   MetaAndData: the metadata and data blocks of the file.
    // 
    // >  CPFS for Lingjun supports only the MetaAndData type.
    std::shared_ptr<string> dataType_ = nullptr;
    // The directory in which the dataflow task is executed.
    std::shared_ptr<string> directory_ = nullptr;
    // The directory mapped to the dataflow task.
    std::shared_ptr<string> dstDirectory_ = nullptr;
    // The end time of the task.
    std::shared_ptr<string> endTime_ = nullptr;
    // The cause of the task exception.
    // 
    // >  If this parameter is not returned or the return value is empty, no error occurs.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The directory of the fileset in the CPFS file system.
    // 
    // Limits:
    // 
    // *   The directory must be 2 to 1024 characters in length.
    // *   The directory must be encoded in UTF-8.
    // *   The directory must start and end with a forward slash (/).
    // *   The directory must be a fileset directory in the CPFS file system.
    // 
    // >  Only CPFS supports this parameter.
    std::shared_ptr<string> fileSystemPath_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> filesystemId_ = nullptr;
    // The path of the smart directory.
    std::shared_ptr<string> fsPath_ = nullptr;
    // Filters subdirectories and transfers their contents.
    // 
    // >  Only CPFS for Lingjun supports this operation.
    std::shared_ptr<string> includes_ = nullptr;
    // The initiator of the dataflow task. The following information is displayed:
    // 
    // *   User: The task is initiated by a user.
    // *   System: The task is automatically initiated by CPFS based on the automatic update interval.
    // 
    // >  Only CPFS supports this parameter.
    std::shared_ptr<string> originator_ = nullptr;
    // The progress of the dataflow task. The number of operations that have been performed by the dataflow task.
    std::shared_ptr<int64_t> progress_ = nullptr;
    // The progress of the dataflow task.
    std::shared_ptr<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats> progressStats_ = nullptr;
    // The save path of dataflow task reports in the CPFS file system.
    // 
    // *   The task reports for a CPFS file system are generated in the `.dataflow_report` directory of the CPFS file system.
    // *   CPFS for Lingjun returns an OSS download link for you to download the task reports.
    std::shared_ptr<string> reportPath_ = nullptr;
    // The reports.
    // 
    // > 
    // 
    // *   Streaming tasks do not support reports.
    // 
    // *   If the WithReport parameter is set to True, the CPFS for Lingjun report data is returned.
    // 
    // *   Only CPFS for Lingjun supports the WithReport parameter.
    std::shared_ptr<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReports> reports_ = nullptr;
    // The access path of the source storage. Format: `<storage type>://[<account id>:]<path>`.
    // 
    // Among them:
    // 
    // *   storage type: Only Object Storage Service (OSS) is supported.
    // 
    // *   account id: the UID of the account of the source storage.
    // 
    // *   path: the name of the OSS bucket. Limits:
    // 
    //     *   The name can contain only lowercase letters, digits, and hyphens (-). The name must start and end with a lowercase letter or digit.
    //     *   The name can be up to 128 characters in length.
    //     *   The name must be encoded in UTF-8.
    // 
    // > 
    // 
    // *   The OSS bucket must be an existing bucket in the region.
    // 
    // *   Only CPFS for Lingjun V2.6.0 and later support the account id parameter.
    std::shared_ptr<string> sourceStorage_ = nullptr;
    // The start time of the task.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the dataflow task. The following information is displayed:
    // 
    // *   Pending: The dataflow task has been created and has not started.
    // *   Executing: The dataflow task is being executed.
    // *   Failed: The dataflow task failed to be executed. You can view the cause of the failure in the dataflow task report.
    // *   Completed: The dataflow task is completed. You can check that all the files have been correctly transferred in the dataflow task report.
    // *   Canceled: The dataflow task is canceled and is not completed.
    // *   Canceling: The dataflow task is being canceled.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the dataflow task. The following information is displayed:
    // 
    // *   Import: imports data stored in the source storage to a CPFS file system.
    // *   Export: exports specified data from a CPFS file system to the source storage.
    // *   StreamImport: imports the specified data from the source storage to a CPFS file system in streaming mode.
    // *   StreamExport: exports specified data from a CPFS file system to the source storage in streaming mode.
    // *   Evict: releases the data blocks of a file in a CPFS file system. After the eviction, only the metadata of the file is retained in the CPFS file system. You can still query the file. However, the data blocks of the file are cleared and do not occupy the storage space in the CPFS file system. When you access the file data, the file is loaded from the source storage as required.
    // *   Inventory: obtains the inventory list managed by a dataflow from the CPFS file system, providing the cache status of inventories in the dataflow.
    // 
    // >  Only CPFS for Lingjun V2.6.0 and later support StreamImport and StreamExport.
    std::shared_ptr<string> taskAction_ = nullptr;
    // The ID of the dataflow task.
    std::shared_ptr<string> taskId_ = nullptr;
    // Specify the OSS directory and synchronize data based on the content of the CSV file in the OSS directory.
    // 
    // >  Only CPFS for Lingjun supports this operation.
    std::shared_ptr<string> transferFileListPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
