// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODYDATASTAGELISTTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODYDATASTAGELISTTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribePipelineResponseBodyDataStageListTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePipelineResponseBodyDataStageListTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorIgnore, errorIgnore_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ShowManualIgnore, showManualIgnore_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePipelineResponseBodyDataStageListTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorIgnore, errorIgnore_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ShowManualIgnore, showManualIgnore_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribePipelineResponseBodyDataStageListTaskList() = default ;
    DescribePipelineResponseBodyDataStageListTaskList(const DescribePipelineResponseBodyDataStageListTaskList &) = default ;
    DescribePipelineResponseBodyDataStageListTaskList(DescribePipelineResponseBodyDataStageListTaskList &&) = default ;
    DescribePipelineResponseBodyDataStageListTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePipelineResponseBodyDataStageListTaskList() = default ;
    DescribePipelineResponseBodyDataStageListTaskList& operator=(const DescribePipelineResponseBodyDataStageListTaskList &) = default ;
    DescribePipelineResponseBodyDataStageListTaskList& operator=(DescribePipelineResponseBodyDataStageListTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorIgnore_ == nullptr && return this->errorMessage_ == nullptr && return this->message_ == nullptr && return this->showManualIgnore_ == nullptr && return this->stageId_ == nullptr
        && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribePipelineResponseBodyDataStageListTaskList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorIgnore Field Functions 
    bool hasErrorIgnore() const { return this->errorIgnore_ != nullptr;};
    void deleteErrorIgnore() { this->errorIgnore_ = nullptr;};
    inline int32_t errorIgnore() const { DARABONBA_PTR_GET_DEFAULT(errorIgnore_, 0) };
    inline DescribePipelineResponseBodyDataStageListTaskList& setErrorIgnore(int32_t errorIgnore) { DARABONBA_PTR_SET_VALUE(errorIgnore_, errorIgnore) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribePipelineResponseBodyDataStageListTaskList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePipelineResponseBodyDataStageListTaskList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // showManualIgnore Field Functions 
    bool hasShowManualIgnore() const { return this->showManualIgnore_ != nullptr;};
    void deleteShowManualIgnore() { this->showManualIgnore_ = nullptr;};
    inline bool showManualIgnore() const { DARABONBA_PTR_GET_DEFAULT(showManualIgnore_, false) };
    inline DescribePipelineResponseBodyDataStageListTaskList& setShowManualIgnore(bool showManualIgnore) { DARABONBA_PTR_SET_VALUE(showManualIgnore_, showManualIgnore) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DescribePipelineResponseBodyDataStageListTaskList& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribePipelineResponseBodyDataStageListTaskList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribePipelineResponseBodyDataStageListTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribePipelineResponseBodyDataStageListTaskList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The error code returned when the task could not be executed. If the task is successfully executed, this parameter is not returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Indicates whether to execute the subsequent tasks when the task failed. Valid values:
    // 
    // *   **0**: The subsequent tasks cannot be executed.
    // *   **1**: The subsequent tasks can be executed.
    std::shared_ptr<int32_t> errorIgnore_ = nullptr;
    // The error message returned when the task could not be executed. If the task is successfully executed, this parameter is not returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The returned message indicating the task execution result.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether a running task can be manually skipped. Valid values:
    // 
    // *   **true**: The running task can be skipped.
    // *   **false**: The zone does not allow you to change the network type of an ApsaraDB for Redis instance from classic network to VPC.
    std::shared_ptr<bool> showManualIgnore_ = nullptr;
    // The ID of the stage.
    std::shared_ptr<string> stageId_ = nullptr;
    // The task status. Valid values:
    // 
    // *   **0**: The task is prepared for execution.
    // *   **1**: The task is being executed.
    // *   **2**: successful
    // *   **3**: The task could not be executed.
    // *   **5**: The task is pending retry.
    // *   **6**: The task was terminated.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
