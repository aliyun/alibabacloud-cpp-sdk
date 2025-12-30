// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECDREPORTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECDREPORTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeEcdReportTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEcdReportTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTaskList, exportTaskList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEcdReportTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTaskList, exportTaskList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEcdReportTasksResponseBody() = default ;
    DescribeEcdReportTasksResponseBody(const DescribeEcdReportTasksResponseBody &) = default ;
    DescribeEcdReportTasksResponseBody(DescribeEcdReportTasksResponseBody &&) = default ;
    DescribeEcdReportTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEcdReportTasksResponseBody() = default ;
    DescribeEcdReportTasksResponseBody& operator=(const DescribeEcdReportTasksResponseBody &) = default ;
    DescribeEcdReportTasksResponseBody& operator=(DescribeEcdReportTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExportTaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExportTaskList& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(ReportFileName, reportFileName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubType, subType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, ExportTaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(ReportFileName, reportFileName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubType, subType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      ExportTaskList() = default ;
      ExportTaskList(const ExportTaskList &) = default ;
      ExportTaskList(ExportTaskList &&) = default ;
      ExportTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExportTaskList() = default ;
      ExportTaskList& operator=(const ExportTaskList &) = default ;
      ExportTaskList& operator=(ExportTaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->progress_ == nullptr
        && this->reportFileName_ == nullptr && this->status_ == nullptr && this->subType_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline ExportTaskList& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ExportTaskList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline ExportTaskList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ExportTaskList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ExportTaskList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline float getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
      inline ExportTaskList& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // reportFileName Field Functions 
      bool hasReportFileName() const { return this->reportFileName_ != nullptr;};
      void deleteReportFileName() { this->reportFileName_ = nullptr;};
      inline string getReportFileName() const { DARABONBA_PTR_GET_DEFAULT(reportFileName_, "") };
      inline ExportTaskList& setReportFileName(string reportFileName) { DARABONBA_PTR_SET_VALUE(reportFileName_, reportFileName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ExportTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline ExportTaskList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ExportTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline ExportTaskList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The download URL of the report file.
      shared_ptr<string> downloadUrl_ {};
      // The error code returned.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // The time when the task was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the task was last modified.
      shared_ptr<string> gmtModified_ {};
      // The progress of the report export task. Unit: %.
      shared_ptr<float> progress_ {};
      // The name of the report file.
      shared_ptr<string> reportFileName_ {};
      // The task status.
      shared_ptr<string> status_ {};
      // The sub-type of the report export task.
      // 
      // Valid value:
      // 
      // *   DESKTOP: cloud computer
      shared_ptr<string> subType_ {};
      // The ID of the report export task.
      shared_ptr<string> taskId_ {};
      // The type of the report.
      // 
      // Valid value:
      // 
      // *   RESOURCE_REPORT
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->exportTaskList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // exportTaskList Field Functions 
    bool hasExportTaskList() const { return this->exportTaskList_ != nullptr;};
    void deleteExportTaskList() { this->exportTaskList_ = nullptr;};
    inline const vector<DescribeEcdReportTasksResponseBody::ExportTaskList> & getExportTaskList() const { DARABONBA_PTR_GET_CONST(exportTaskList_, vector<DescribeEcdReportTasksResponseBody::ExportTaskList>) };
    inline vector<DescribeEcdReportTasksResponseBody::ExportTaskList> getExportTaskList() { DARABONBA_PTR_GET(exportTaskList_, vector<DescribeEcdReportTasksResponseBody::ExportTaskList>) };
    inline DescribeEcdReportTasksResponseBody& setExportTaskList(const vector<DescribeEcdReportTasksResponseBody::ExportTaskList> & exportTaskList) { DARABONBA_PTR_SET_VALUE(exportTaskList_, exportTaskList) };
    inline DescribeEcdReportTasksResponseBody& setExportTaskList(vector<DescribeEcdReportTasksResponseBody::ExportTaskList> && exportTaskList) { DARABONBA_PTR_SET_RVALUE(exportTaskList_, exportTaskList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEcdReportTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeEcdReportTasksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The report export tasks.
    shared_ptr<vector<DescribeEcdReportTasksResponseBody::ExportTaskList>> exportTaskList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
