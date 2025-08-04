// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECDREPORTTASKSRESPONSEBODYEXPORTTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECDREPORTTASKSRESPONSEBODYEXPORTTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeEcdReportTasksResponseBodyExportTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEcdReportTasksResponseBodyExportTaskList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeEcdReportTasksResponseBodyExportTaskList& obj) { 
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
    DescribeEcdReportTasksResponseBodyExportTaskList() = default ;
    DescribeEcdReportTasksResponseBodyExportTaskList(const DescribeEcdReportTasksResponseBodyExportTaskList &) = default ;
    DescribeEcdReportTasksResponseBodyExportTaskList(DescribeEcdReportTasksResponseBodyExportTaskList &&) = default ;
    DescribeEcdReportTasksResponseBodyExportTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEcdReportTasksResponseBodyExportTaskList() = default ;
    DescribeEcdReportTasksResponseBodyExportTaskList& operator=(const DescribeEcdReportTasksResponseBodyExportTaskList &) = default ;
    DescribeEcdReportTasksResponseBodyExportTaskList& operator=(DescribeEcdReportTasksResponseBodyExportTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadUrl_ != nullptr
        && this->errorCode_ != nullptr && this->errorMsg_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->progress_ != nullptr
        && this->reportFileName_ != nullptr && this->status_ != nullptr && this->subType_ != nullptr && this->taskId_ != nullptr && this->taskType_ != nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline float progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // reportFileName Field Functions 
    bool hasReportFileName() const { return this->reportFileName_ != nullptr;};
    void deleteReportFileName() { this->reportFileName_ = nullptr;};
    inline string reportFileName() const { DARABONBA_PTR_GET_DEFAULT(reportFileName_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setReportFileName(string reportFileName) { DARABONBA_PTR_SET_VALUE(reportFileName_, reportFileName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeEcdReportTasksResponseBodyExportTaskList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<float> progress_ = nullptr;
    std::shared_ptr<string> reportFileName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
