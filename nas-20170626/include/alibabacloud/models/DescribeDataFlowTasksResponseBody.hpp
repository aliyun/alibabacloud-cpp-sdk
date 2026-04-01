// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    DescribeDataFlowTasksResponseBody() = default ;
    DescribeDataFlowTasksResponseBody(const DescribeDataFlowTasksResponseBody &) = default ;
    DescribeDataFlowTasksResponseBody(DescribeDataFlowTasksResponseBody &&) = default ;
    DescribeDataFlowTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowTasksResponseBody() = default ;
    DescribeDataFlowTasksResponseBody& operator=(const DescribeDataFlowTasksResponseBody &) = default ;
    DescribeDataFlowTasksResponseBody& operator=(DescribeDataFlowTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Task, task_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Task, task_);
      };
      TaskInfo() = default ;
      TaskInfo(const TaskInfo &) = default ;
      TaskInfo(TaskInfo &&) = default ;
      TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInfo() = default ;
      TaskInfo& operator=(const TaskInfo &) = default ;
      TaskInfo& operator=(TaskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Task : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Task& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Task& obj) { 
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
        Task() = default ;
        Task(const Task &) = default ;
        Task(Task &&) = default ;
        Task(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Task() = default ;
        Task& operator=(const Task &) = default ;
        Task& operator=(Task &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Reports : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Reports& obj) { 
            DARABONBA_PTR_TO_JSON(Report, report_);
          };
          friend void from_json(const Darabonba::Json& j, Reports& obj) { 
            DARABONBA_PTR_FROM_JSON(Report, report_);
          };
          Reports() = default ;
          Reports(const Reports &) = default ;
          Reports(Reports &&) = default ;
          Reports(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Reports() = default ;
          Reports& operator=(const Reports &) = default ;
          Reports& operator=(Reports &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Report : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Report& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Path, path_);
            };
            friend void from_json(const Darabonba::Json& j, Report& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Path, path_);
            };
            Report() = default ;
            Report(const Report &) = default ;
            Report(Report &&) = default ;
            Report(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Report() = default ;
            Report& operator=(const Report &) = default ;
            Report& operator=(Report &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Report& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // path Field Functions 
            bool hasPath() const { return this->path_ != nullptr;};
            void deletePath() { this->path_ = nullptr;};
            inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
            inline Report& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<string> path_ {};
          };

          virtual bool empty() const override { return this->report_ == nullptr; };
          // report Field Functions 
          bool hasReport() const { return this->report_ != nullptr;};
          void deleteReport() { this->report_ = nullptr;};
          inline const vector<Reports::Report> & getReport() const { DARABONBA_PTR_GET_CONST(report_, vector<Reports::Report>) };
          inline vector<Reports::Report> getReport() { DARABONBA_PTR_GET(report_, vector<Reports::Report>) };
          inline Reports& setReport(const vector<Reports::Report> & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
          inline Reports& setReport(vector<Reports::Report> && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


        protected:
          shared_ptr<vector<Reports::Report>> report_ {};
        };

        class ProgressStats : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProgressStats& obj) { 
            DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
            DARABONBA_PTR_TO_JSON(ActualFiles, actualFiles_);
            DARABONBA_PTR_TO_JSON(AverageSpeed, averageSpeed_);
            DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
            DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
            DARABONBA_PTR_TO_JSON(FilesDone, filesDone_);
            DARABONBA_PTR_TO_JSON(FilesTotal, filesTotal_);
            DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
          };
          friend void from_json(const Darabonba::Json& j, ProgressStats& obj) { 
            DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
            DARABONBA_PTR_FROM_JSON(ActualFiles, actualFiles_);
            DARABONBA_PTR_FROM_JSON(AverageSpeed, averageSpeed_);
            DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
            DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
            DARABONBA_PTR_FROM_JSON(FilesDone, filesDone_);
            DARABONBA_PTR_FROM_JSON(FilesTotal, filesTotal_);
            DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
          };
          ProgressStats() = default ;
          ProgressStats(const ProgressStats &) = default ;
          ProgressStats(ProgressStats &&) = default ;
          ProgressStats(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProgressStats() = default ;
          ProgressStats& operator=(const ProgressStats &) = default ;
          ProgressStats& operator=(ProgressStats &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->actualFiles_ == nullptr && this->averageSpeed_ == nullptr && this->bytesDone_ == nullptr && this->bytesTotal_ == nullptr && this->filesDone_ == nullptr
        && this->filesTotal_ == nullptr && this->remainTime_ == nullptr; };
          // actualBytes Field Functions 
          bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
          void deleteActualBytes() { this->actualBytes_ = nullptr;};
          inline int64_t getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
          inline ProgressStats& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


          // actualFiles Field Functions 
          bool hasActualFiles() const { return this->actualFiles_ != nullptr;};
          void deleteActualFiles() { this->actualFiles_ = nullptr;};
          inline int64_t getActualFiles() const { DARABONBA_PTR_GET_DEFAULT(actualFiles_, 0L) };
          inline ProgressStats& setActualFiles(int64_t actualFiles) { DARABONBA_PTR_SET_VALUE(actualFiles_, actualFiles) };


          // averageSpeed Field Functions 
          bool hasAverageSpeed() const { return this->averageSpeed_ != nullptr;};
          void deleteAverageSpeed() { this->averageSpeed_ = nullptr;};
          inline int64_t getAverageSpeed() const { DARABONBA_PTR_GET_DEFAULT(averageSpeed_, 0L) };
          inline ProgressStats& setAverageSpeed(int64_t averageSpeed) { DARABONBA_PTR_SET_VALUE(averageSpeed_, averageSpeed) };


          // bytesDone Field Functions 
          bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
          void deleteBytesDone() { this->bytesDone_ = nullptr;};
          inline int64_t getBytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
          inline ProgressStats& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


          // bytesTotal Field Functions 
          bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
          void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
          inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
          inline ProgressStats& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


          // filesDone Field Functions 
          bool hasFilesDone() const { return this->filesDone_ != nullptr;};
          void deleteFilesDone() { this->filesDone_ = nullptr;};
          inline int64_t getFilesDone() const { DARABONBA_PTR_GET_DEFAULT(filesDone_, 0L) };
          inline ProgressStats& setFilesDone(int64_t filesDone) { DARABONBA_PTR_SET_VALUE(filesDone_, filesDone) };


          // filesTotal Field Functions 
          bool hasFilesTotal() const { return this->filesTotal_ != nullptr;};
          void deleteFilesTotal() { this->filesTotal_ = nullptr;};
          inline int64_t getFilesTotal() const { DARABONBA_PTR_GET_DEFAULT(filesTotal_, 0L) };
          inline ProgressStats& setFilesTotal(int64_t filesTotal) { DARABONBA_PTR_SET_VALUE(filesTotal_, filesTotal) };


          // remainTime Field Functions 
          bool hasRemainTime() const { return this->remainTime_ != nullptr;};
          void deleteRemainTime() { this->remainTime_ = nullptr;};
          inline int64_t getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0L) };
          inline ProgressStats& setRemainTime(int64_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


        protected:
          shared_ptr<int64_t> actualBytes_ {};
          shared_ptr<int64_t> actualFiles_ {};
          shared_ptr<int64_t> averageSpeed_ {};
          shared_ptr<int64_t> bytesDone_ {};
          shared_ptr<int64_t> bytesTotal_ {};
          shared_ptr<int64_t> filesDone_ {};
          shared_ptr<int64_t> filesTotal_ {};
          shared_ptr<int64_t> remainTime_ {};
        };

        virtual bool empty() const override { return this->conflictPolicy_ == nullptr
        && this->createTime_ == nullptr && this->dataFlowId_ == nullptr && this->dataType_ == nullptr && this->directory_ == nullptr && this->dstDirectory_ == nullptr
        && this->endTime_ == nullptr && this->errorMsg_ == nullptr && this->fileSystemPath_ == nullptr && this->filesystemId_ == nullptr && this->fsPath_ == nullptr
        && this->includes_ == nullptr && this->originator_ == nullptr && this->progress_ == nullptr && this->progressStats_ == nullptr && this->reportPath_ == nullptr
        && this->reports_ == nullptr && this->sourceStorage_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->taskAction_ == nullptr
        && this->taskId_ == nullptr && this->transferFileListPath_ == nullptr; };
        // conflictPolicy Field Functions 
        bool hasConflictPolicy() const { return this->conflictPolicy_ != nullptr;};
        void deleteConflictPolicy() { this->conflictPolicy_ = nullptr;};
        inline string getConflictPolicy() const { DARABONBA_PTR_GET_DEFAULT(conflictPolicy_, "") };
        inline Task& setConflictPolicy(string conflictPolicy) { DARABONBA_PTR_SET_VALUE(conflictPolicy_, conflictPolicy) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Task& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataFlowId Field Functions 
        bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
        void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
        inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
        inline Task& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline Task& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline Task& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


        // dstDirectory Field Functions 
        bool hasDstDirectory() const { return this->dstDirectory_ != nullptr;};
        void deleteDstDirectory() { this->dstDirectory_ = nullptr;};
        inline string getDstDirectory() const { DARABONBA_PTR_GET_DEFAULT(dstDirectory_, "") };
        inline Task& setDstDirectory(string dstDirectory) { DARABONBA_PTR_SET_VALUE(dstDirectory_, dstDirectory) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Task& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline Task& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // fileSystemPath Field Functions 
        bool hasFileSystemPath() const { return this->fileSystemPath_ != nullptr;};
        void deleteFileSystemPath() { this->fileSystemPath_ = nullptr;};
        inline string getFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(fileSystemPath_, "") };
        inline Task& setFileSystemPath(string fileSystemPath) { DARABONBA_PTR_SET_VALUE(fileSystemPath_, fileSystemPath) };


        // filesystemId Field Functions 
        bool hasFilesystemId() const { return this->filesystemId_ != nullptr;};
        void deleteFilesystemId() { this->filesystemId_ = nullptr;};
        inline string getFilesystemId() const { DARABONBA_PTR_GET_DEFAULT(filesystemId_, "") };
        inline Task& setFilesystemId(string filesystemId) { DARABONBA_PTR_SET_VALUE(filesystemId_, filesystemId) };


        // fsPath Field Functions 
        bool hasFsPath() const { return this->fsPath_ != nullptr;};
        void deleteFsPath() { this->fsPath_ = nullptr;};
        inline string getFsPath() const { DARABONBA_PTR_GET_DEFAULT(fsPath_, "") };
        inline Task& setFsPath(string fsPath) { DARABONBA_PTR_SET_VALUE(fsPath_, fsPath) };


        // includes Field Functions 
        bool hasIncludes() const { return this->includes_ != nullptr;};
        void deleteIncludes() { this->includes_ = nullptr;};
        inline string getIncludes() const { DARABONBA_PTR_GET_DEFAULT(includes_, "") };
        inline Task& setIncludes(string includes) { DARABONBA_PTR_SET_VALUE(includes_, includes) };


        // originator Field Functions 
        bool hasOriginator() const { return this->originator_ != nullptr;};
        void deleteOriginator() { this->originator_ = nullptr;};
        inline string getOriginator() const { DARABONBA_PTR_GET_DEFAULT(originator_, "") };
        inline Task& setOriginator(string originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
        inline Task& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // progressStats Field Functions 
        bool hasProgressStats() const { return this->progressStats_ != nullptr;};
        void deleteProgressStats() { this->progressStats_ = nullptr;};
        inline const Task::ProgressStats & getProgressStats() const { DARABONBA_PTR_GET_CONST(progressStats_, Task::ProgressStats) };
        inline Task::ProgressStats getProgressStats() { DARABONBA_PTR_GET(progressStats_, Task::ProgressStats) };
        inline Task& setProgressStats(const Task::ProgressStats & progressStats) { DARABONBA_PTR_SET_VALUE(progressStats_, progressStats) };
        inline Task& setProgressStats(Task::ProgressStats && progressStats) { DARABONBA_PTR_SET_RVALUE(progressStats_, progressStats) };


        // reportPath Field Functions 
        bool hasReportPath() const { return this->reportPath_ != nullptr;};
        void deleteReportPath() { this->reportPath_ = nullptr;};
        inline string getReportPath() const { DARABONBA_PTR_GET_DEFAULT(reportPath_, "") };
        inline Task& setReportPath(string reportPath) { DARABONBA_PTR_SET_VALUE(reportPath_, reportPath) };


        // reports Field Functions 
        bool hasReports() const { return this->reports_ != nullptr;};
        void deleteReports() { this->reports_ = nullptr;};
        inline const Task::Reports & getReports() const { DARABONBA_PTR_GET_CONST(reports_, Task::Reports) };
        inline Task::Reports getReports() { DARABONBA_PTR_GET(reports_, Task::Reports) };
        inline Task& setReports(const Task::Reports & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
        inline Task& setReports(Task::Reports && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


        // sourceStorage Field Functions 
        bool hasSourceStorage() const { return this->sourceStorage_ != nullptr;};
        void deleteSourceStorage() { this->sourceStorage_ = nullptr;};
        inline string getSourceStorage() const { DARABONBA_PTR_GET_DEFAULT(sourceStorage_, "") };
        inline Task& setSourceStorage(string sourceStorage) { DARABONBA_PTR_SET_VALUE(sourceStorage_, sourceStorage) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Task& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Task& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskAction Field Functions 
        bool hasTaskAction() const { return this->taskAction_ != nullptr;};
        void deleteTaskAction() { this->taskAction_ = nullptr;};
        inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
        inline Task& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // transferFileListPath Field Functions 
        bool hasTransferFileListPath() const { return this->transferFileListPath_ != nullptr;};
        void deleteTransferFileListPath() { this->transferFileListPath_ = nullptr;};
        inline string getTransferFileListPath() const { DARABONBA_PTR_GET_DEFAULT(transferFileListPath_, "") };
        inline Task& setTransferFileListPath(string transferFileListPath) { DARABONBA_PTR_SET_VALUE(transferFileListPath_, transferFileListPath) };


      protected:
        shared_ptr<string> conflictPolicy_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> dataFlowId_ {};
        shared_ptr<string> dataType_ {};
        shared_ptr<string> directory_ {};
        shared_ptr<string> dstDirectory_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> errorMsg_ {};
        shared_ptr<string> fileSystemPath_ {};
        shared_ptr<string> filesystemId_ {};
        shared_ptr<string> fsPath_ {};
        shared_ptr<string> includes_ {};
        shared_ptr<string> originator_ {};
        shared_ptr<int64_t> progress_ {};
        shared_ptr<Task::ProgressStats> progressStats_ {};
        shared_ptr<string> reportPath_ {};
        shared_ptr<Task::Reports> reports_ {};
        shared_ptr<string> sourceStorage_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> taskAction_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> transferFileListPath_ {};
      };

      virtual bool empty() const override { return this->task_ == nullptr; };
      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline const vector<TaskInfo::Task> & getTask() const { DARABONBA_PTR_GET_CONST(task_, vector<TaskInfo::Task>) };
      inline vector<TaskInfo::Task> getTask() { DARABONBA_PTR_GET(task_, vector<TaskInfo::Task>) };
      inline TaskInfo& setTask(const vector<TaskInfo::Task> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
      inline TaskInfo& setTask(vector<TaskInfo::Task> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


    protected:
      shared_ptr<vector<TaskInfo::Task>> task_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->taskInfo_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataFlowTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const DescribeDataFlowTasksResponseBody::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DescribeDataFlowTasksResponseBody::TaskInfo) };
    inline DescribeDataFlowTasksResponseBody::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, DescribeDataFlowTasksResponseBody::TaskInfo) };
    inline DescribeDataFlowTasksResponseBody& setTaskInfo(const DescribeDataFlowTasksResponseBody::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeDataFlowTasksResponseBody& setTaskInfo(DescribeDataFlowTasksResponseBody::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeDataFlowTasksResponseBody::TaskInfo> taskInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
