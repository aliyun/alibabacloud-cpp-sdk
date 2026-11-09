// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTaskModel, exportTaskModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTaskModel, exportTaskModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateExportTaskResponseBody() = default ;
    CreateExportTaskResponseBody(const CreateExportTaskResponseBody &) = default ;
    CreateExportTaskResponseBody(CreateExportTaskResponseBody &&) = default ;
    CreateExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExportTaskResponseBody() = default ;
    CreateExportTaskResponseBody& operator=(const CreateExportTaskResponseBody &) = default ;
    CreateExportTaskResponseBody& operator=(CreateExportTaskResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, ExportTaskModel& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
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
        && this->downloadUrl_ == nullptr && this->errorMsg_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->taskType_ == nullptr; };
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
      // The time when the task was created. The time is in the yyyy-MM-dd HH:mm:ss format, accurate to seconds. The returned string does not contain a time zone offset.
      shared_ptr<string> createTime_ {};
      // The download URL of the exported file. When the task is created by calling this operation, the file is not generated and this field is empty. The null in the example represents a JSON null value, not the string "null". You can subsequently call DescribeExportTasks to query the latest download URL of the completed task and use it within the validity period.
      shared_ptr<string> downloadUrl_ {};
      // The error message when the task execution fails. If the task is created by calling this operation, this field is empty. The null in the example represents a JSON null value, not the string "null". When you query the task status and the status is FAILED, you can use this field to identify the cause of the failure.
      shared_ptr<string> errorMsg_ {};
      // The progress of the export task, in percentage. Valid values: 0 to 100. If the task is created by calling this operation, 0 is returned. The value is updated based on the execution phase and reaches 100 when the task is completed.
      shared_ptr<float> progress_ {};
      // The status of the task. If the task is created by calling this operation, INIT (initialized and waiting for execution) is returned. You can subsequently call DescribeExportTasks to query RUNNING (executing), FINISHED (completed), or FAILED (failed). Do not treat INIT as export completion.
      shared_ptr<string> status_ {};
      // The ID of the newly created export task, which is a 32-character UUID string without hyphens. You can use this value as the TaskId parameter in DescribeExportTasks to query the task.
      shared_ptr<string> taskId_ {};
      // The type of the export task, which is the same as the TaskType in the request. For the meaning of each type, see the TaskType request parameter.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->exportTaskModel_ == nullptr
        && this->requestId_ == nullptr; };
    // exportTaskModel Field Functions 
    bool hasExportTaskModel() const { return this->exportTaskModel_ != nullptr;};
    void deleteExportTaskModel() { this->exportTaskModel_ = nullptr;};
    inline const CreateExportTaskResponseBody::ExportTaskModel & getExportTaskModel() const { DARABONBA_PTR_GET_CONST(exportTaskModel_, CreateExportTaskResponseBody::ExportTaskModel) };
    inline CreateExportTaskResponseBody::ExportTaskModel getExportTaskModel() { DARABONBA_PTR_GET(exportTaskModel_, CreateExportTaskResponseBody::ExportTaskModel) };
    inline CreateExportTaskResponseBody& setExportTaskModel(const CreateExportTaskResponseBody::ExportTaskModel & exportTaskModel) { DARABONBA_PTR_SET_VALUE(exportTaskModel_, exportTaskModel) };
    inline CreateExportTaskResponseBody& setExportTaskModel(CreateExportTaskResponseBody::ExportTaskModel && exportTaskModel) { DARABONBA_PTR_SET_RVALUE(exportTaskModel_, exportTaskModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the newly created export task. If the task is created, Status is INIT, Progress is 0, and the download URL and error message are empty.
    shared_ptr<CreateExportTaskResponseBody::ExportTaskModel> exportTaskModel_ {};
    // The ID of the request, which is used to locate call records and troubleshoot issues. The example value is partially desensitized.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
