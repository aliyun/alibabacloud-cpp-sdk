// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYSISTASK_HPP_
#define ALIBABACLOUD_MODELS_ANALYSISTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class AnalysisTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalysisTask& obj) { 
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_ANY_TO_JSON(report, report_);
      DARABONBA_PTR_TO_JSON(selectedCount, selectedCount_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, AnalysisTask& obj) { 
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_ANY_FROM_JSON(report, report_);
      DARABONBA_PTR_FROM_JSON(selectedCount, selectedCount_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    AnalysisTask() = default ;
    AnalysisTask(const AnalysisTask &) = default ;
    AnalysisTask(AnalysisTask &&) = default ;
    AnalysisTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalysisTask() = default ;
    AnalysisTask& operator=(const AnalysisTask &) = default ;
    AnalysisTask& operator=(AnalysisTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedAt_ == nullptr
        && this->createdAt_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->report_ == nullptr && this->selectedCount_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr; };
    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline int64_t getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, 0L) };
    inline AnalysisTask& setCompletedAt(int64_t completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline AnalysisTask& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AnalysisTask& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline AnalysisTask& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline     const Darabonba::Json & getReport() const { DARABONBA_GET(report_) };
    Darabonba::Json & getReport() { DARABONBA_GET(report_) };
    inline AnalysisTask& setReport(const Darabonba::Json & report) { DARABONBA_SET_VALUE(report_, report) };
    inline AnalysisTask& setReport(Darabonba::Json && report) { DARABONBA_SET_RVALUE(report_, report) };


    // selectedCount Field Functions 
    bool hasSelectedCount() const { return this->selectedCount_ != nullptr;};
    void deleteSelectedCount() { this->selectedCount_ = nullptr;};
    inline int32_t getSelectedCount() const { DARABONBA_PTR_GET_DEFAULT(selectedCount_, 0) };
    inline AnalysisTask& setSelectedCount(int32_t selectedCount) { DARABONBA_PTR_SET_VALUE(selectedCount_, selectedCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AnalysisTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AnalysisTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline AnalysisTask& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline AnalysisTask& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The task completion time as a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> completedAt_ {};
    // The task creation time as a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> createdAt_ {};
    // The error code for the task failure.
    shared_ptr<string> errorCode_ {};
    // The error message for the task failure.
    shared_ptr<string> errorMessage_ {};
    // The generated analysis report. This field is typically not returned by list operations.
    Darabonba::Json report_ {};
    // The number of evaluation details selected by the user.
    shared_ptr<int32_t> selectedCount_ {};
    // The task status. Valid values: PENDING, RUNNING, SUCCEEDED, PARTIAL_SUCCEEDED, and FAILED.
    shared_ptr<string> status_ {};
    // The analysis task ID.
    shared_ptr<string> taskId_ {};
    // The analysis task name.
    shared_ptr<string> taskName_ {};
    // The analysis task type.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
