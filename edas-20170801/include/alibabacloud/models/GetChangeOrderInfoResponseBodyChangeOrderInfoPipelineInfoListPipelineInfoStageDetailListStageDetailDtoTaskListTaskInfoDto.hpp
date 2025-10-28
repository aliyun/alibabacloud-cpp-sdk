// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOPIPELINEINFOLISTPIPELINEINFOSTAGEDETAILLISTSTAGEDETAILDTOTASKLISTTASKINFODTO_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOPIPELINEINFOLISTPIPELINEINFOSTAGEDETAILLISTSTAGEDETAILDTOTASKLISTTASKINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(RetryType, retryType_);
      DARABONBA_PTR_TO_JSON(ShowManualIgnorance, showManualIgnorance_);
      DARABONBA_PTR_TO_JSON(TaskErrorCode, taskErrorCode_);
      DARABONBA_PTR_TO_JSON(TaskErrorIgnorance, taskErrorIgnorance_);
      DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(RetryType, retryType_);
      DARABONBA_PTR_FROM_JSON(ShowManualIgnorance, showManualIgnorance_);
      DARABONBA_PTR_FROM_JSON(TaskErrorCode, taskErrorCode_);
      DARABONBA_PTR_FROM_JSON(TaskErrorIgnorance, taskErrorIgnorance_);
      DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO(const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO(GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO &&) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& operator=(const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& operator=(GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->retryType_ == nullptr
        && return this->showManualIgnorance_ == nullptr && return this->taskErrorCode_ == nullptr && return this->taskErrorIgnorance_ == nullptr && return this->taskErrorMessage_ == nullptr && return this->taskId_ == nullptr
        && return this->taskMessage_ == nullptr && return this->taskName_ == nullptr && return this->taskStatus_ == nullptr; };
    // retryType Field Functions 
    bool hasRetryType() const { return this->retryType_ != nullptr;};
    void deleteRetryType() { this->retryType_ = nullptr;};
    inline int32_t retryType() const { DARABONBA_PTR_GET_DEFAULT(retryType_, 0) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setRetryType(int32_t retryType) { DARABONBA_PTR_SET_VALUE(retryType_, retryType) };


    // showManualIgnorance Field Functions 
    bool hasShowManualIgnorance() const { return this->showManualIgnorance_ != nullptr;};
    void deleteShowManualIgnorance() { this->showManualIgnorance_ = nullptr;};
    inline bool showManualIgnorance() const { DARABONBA_PTR_GET_DEFAULT(showManualIgnorance_, false) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setShowManualIgnorance(bool showManualIgnorance) { DARABONBA_PTR_SET_VALUE(showManualIgnorance_, showManualIgnorance) };


    // taskErrorCode Field Functions 
    bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
    void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
    inline string taskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


    // taskErrorIgnorance Field Functions 
    bool hasTaskErrorIgnorance() const { return this->taskErrorIgnorance_ != nullptr;};
    void deleteTaskErrorIgnorance() { this->taskErrorIgnorance_ = nullptr;};
    inline int32_t taskErrorIgnorance() const { DARABONBA_PTR_GET_DEFAULT(taskErrorIgnorance_, 0) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setTaskErrorIgnorance(int32_t taskErrorIgnorance) { DARABONBA_PTR_SET_VALUE(taskErrorIgnorance_, taskErrorIgnorance) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskMessage Field Functions 
    bool hasTaskMessage() const { return this->taskMessage_ != nullptr;};
    void deleteTaskMessage() { this->taskMessage_ = nullptr;};
    inline string taskMessage() const { DARABONBA_PTR_GET_DEFAULT(taskMessage_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setTaskMessage(string taskMessage) { DARABONBA_PTR_SET_VALUE(taskMessage_, taskMessage) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The type of the retry policy. Value 0 indicates no retry, value 1 indicates automatic retry, and value 2 indicates manual retry.
    std::shared_ptr<int32_t> retryType_ = nullptr;
    // Indicates whether errors that occur in the change process are ignored. Valid values:``
    // 
    // *   true: Errors that occur in the change process are ignored. This parameter can be set to true only when URL health checks are performed.
    // *   false: Errors that occur in the change process are not ignored.
    std::shared_ptr<bool> showManualIgnorance_ = nullptr;
    // Error codes
    std::shared_ptr<string> taskErrorCode_ = nullptr;
    // Indicates whether the task is error-tolerant. If the task can tolerate errors, the errors that occur in the change process are ignored and the next task is executed.
    // 
    // *   0: The task is not error-tolerant.
    // *   1: The task is error-tolerant.
    std::shared_ptr<int32_t> taskErrorIgnorance_ = nullptr;
    // The error message for the task.
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // Task information
    std::shared_ptr<string> taskMessage_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The state of the task. Valid values:
    // 
    // *   0: ready
    // *   1: in progress
    // *   2: successful
    // *   3: failed
    // *   6: terminated
    // *   8: wait for manual confirmation to trigger the next batch during a manual phased release
    // *   9: wait to trigger the next batch during an automatic phased release
    // *   10: failed due to a system exception
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
