// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeExportTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExportTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ExportTaskModel, exportTaskModel_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExportTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ExportTaskModel, exportTaskModel_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExportTasksResponseBody() = default ;
    DescribeExportTasksResponseBody(const DescribeExportTasksResponseBody &) = default ;
    DescribeExportTasksResponseBody(DescribeExportTasksResponseBody &&) = default ;
    DescribeExportTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExportTasksResponseBody() = default ;
    DescribeExportTasksResponseBody& operator=(const DescribeExportTasksResponseBody &) = default ;
    DescribeExportTasksResponseBody& operator=(DescribeExportTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExportTaskModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExportTaskModel& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(ExportFileName, exportFileName_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, ExportTaskModel& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(ExportFileName, exportFileName_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      ExportTaskModel() = default ;
      ExportTaskModel(const ExportTaskModel &) = default ;
      ExportTaskModel(ExportTaskModel &&) = default ;
      ExportTaskModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExportTaskModel() = default ;
      ExportTaskModel& operator=(const ExportTaskModel &) = default ;
      ExportTaskModel& operator=(ExportTaskModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->downloadUrl_ == nullptr && this->errorMsg_ == nullptr && this->exportFileName_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->taskType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ExportTaskModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline ExportTaskModel& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline ExportTaskModel& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // exportFileName Field Functions 
      bool hasExportFileName() const { return this->exportFileName_ != nullptr;};
      void deleteExportFileName() { this->exportFileName_ = nullptr;};
      inline string getExportFileName() const { DARABONBA_PTR_GET_DEFAULT(exportFileName_, "") };
      inline ExportTaskModel& setExportFileName(string exportFileName) { DARABONBA_PTR_SET_VALUE(exportFileName_, exportFileName) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline float getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
      inline ExportTaskModel& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ExportTaskModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ExportTaskModel& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline ExportTaskModel& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The task creation time, in yyyy-MM-dd HH:mm:ss format, accurate to seconds. The returned string does not include the time zone offset.
      shared_ptr<string> createTime_ {};
      // The OSS pre-signed download URL of the export file. This field is returned only for tasks whose Status is FINISHED. The default maximum validity period of the signature is 1 hour and does not exceed the 24-hour validity period after the task is created. When the remaining validity period is less than 10 minutes, the server automatically refreshes and returns a new URL. If the task is not completed, the task has expired, or the URL refresh fails, this field is empty. The domain name and path in the example URL are for illustration purposes only. The actual returned value is a complete URL with signature parameters. Use the URL returned by the most recent query for downloading.
      shared_ptr<string> downloadUrl_ {};
      // The cause of the task execution failure. This field is returned only when Status is FAILED. The content is the English error description recorded by the server and can be directly displayed to users or used for troubleshooting. In other states, this field is empty.
      shared_ptr<string> errorMsg_ {};
      // The export file name, which consists of the task type, task creation time (in yyyyMMddHHmmss format), and the first 8 characters of the task ID, connected by underscores. The file extension is .xlsx. If the file is not generated, this field is empty.
      shared_ptr<string> exportFileName_ {};
      // The export task progress, in percentage. Valid values: 0 to 100. This value is updated based on the execution stage of the task and is 100 when the task is completed.
      shared_ptr<float> progress_ {};
      // The export task status. This operation returns the following values:
      // - INIT: The task is created and waiting to be executed. Continue polling.
      // - RUNNING: The export file is being generated. You can display the progress based on Progress and continue polling.
      // - FINISHED: The export file is generated. Stop polling and use DownloadUrl to download the file.
      // - FAILED: The task execution failed. Stop polling and check ErrorMsg.
      // 
      // The server also has an internal EXPIRED state, but this operation does not return tasks in this state.
      shared_ptr<string> status_ {};
      // The export task ID, which is a 32-character UUID string without hyphens. You can use this value as the TaskId parameter of this operation to poll the task.
      shared_ptr<string> taskId_ {};
      // The export task type. For the meaning of each value, see the TaskType request parameter.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->exportTaskModel_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeExportTasksResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // exportTaskModel Field Functions 
    bool hasExportTaskModel() const { return this->exportTaskModel_ != nullptr;};
    void deleteExportTaskModel() { this->exportTaskModel_ = nullptr;};
    inline const vector<DescribeExportTasksResponseBody::ExportTaskModel> & getExportTaskModel() const { DARABONBA_PTR_GET_CONST(exportTaskModel_, vector<DescribeExportTasksResponseBody::ExportTaskModel>) };
    inline vector<DescribeExportTasksResponseBody::ExportTaskModel> getExportTaskModel() { DARABONBA_PTR_GET(exportTaskModel_, vector<DescribeExportTasksResponseBody::ExportTaskModel>) };
    inline DescribeExportTasksResponseBody& setExportTaskModel(const vector<DescribeExportTasksResponseBody::ExportTaskModel> & exportTaskModel) { DARABONBA_PTR_SET_VALUE(exportTaskModel_, exportTaskModel) };
    inline DescribeExportTasksResponseBody& setExportTaskModel(vector<DescribeExportTasksResponseBody::ExportTaskModel> && exportTaskModel) { DARABONBA_PTR_SET_RVALUE(exportTaskModel_, exportTaskModel) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeExportTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeExportTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExportTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of tasks that meet the query conditions. This value is independent of the number of tasks returned on the current page and can be used with PageSize to calculate the total number of pages. If no tasks meet the conditions, 0 is returned.
    shared_ptr<int32_t> count_ {};
    // The list of export tasks, sorted in descending order of task creation time, with the most recently created tasks listed first. If no tasks meet the conditions, an empty array is returned.
    shared_ptr<vector<DescribeExportTasksResponseBody::ExportTaskModel>> exportTaskModel_ {};
    // The actual page number used in this query, which is the echoed value of the PageNumber request parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The actual number of tasks per page used in this query, which is the echoed value of the PageSize request parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate call records and troubleshoot issues. The example value is partially masked.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
