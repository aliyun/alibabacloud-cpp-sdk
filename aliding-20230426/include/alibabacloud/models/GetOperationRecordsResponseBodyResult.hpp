// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOperationRecordsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionExit, actionExit_);
      DARABONBA_PTR_TO_JSON(ActiveTimeGMT, activeTimeGMT_);
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(DigitalSign, digitalSign_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(OperateTimeGMT, operateTimeGMT_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(OperatorDisplayName, operatorDisplayName_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OperatorNickName, operatorNickName_);
      DARABONBA_PTR_TO_JSON(OperatorPhotoUrl, operatorPhotoUrl_);
      DARABONBA_PTR_TO_JSON(OperatorStatus, operatorStatus_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TaskExecuteType, taskExecuteType_);
      DARABONBA_PTR_TO_JSON(TaskHoldTimeGMT, taskHoldTimeGMT_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionExit, actionExit_);
      DARABONBA_PTR_FROM_JSON(ActiveTimeGMT, activeTimeGMT_);
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(DigitalSign, digitalSign_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(OperateTimeGMT, operateTimeGMT_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(OperatorDisplayName, operatorDisplayName_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OperatorNickName, operatorNickName_);
      DARABONBA_PTR_FROM_JSON(OperatorPhotoUrl, operatorPhotoUrl_);
      DARABONBA_PTR_FROM_JSON(OperatorStatus, operatorStatus_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TaskExecuteType, taskExecuteType_);
      DARABONBA_PTR_FROM_JSON(TaskHoldTimeGMT, taskHoldTimeGMT_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetOperationRecordsResponseBodyResult() = default ;
    GetOperationRecordsResponseBodyResult(const GetOperationRecordsResponseBodyResult &) = default ;
    GetOperationRecordsResponseBodyResult(GetOperationRecordsResponseBodyResult &&) = default ;
    GetOperationRecordsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordsResponseBodyResult() = default ;
    GetOperationRecordsResponseBodyResult& operator=(const GetOperationRecordsResponseBodyResult &) = default ;
    GetOperationRecordsResponseBodyResult& operator=(GetOperationRecordsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->actionExit_ == nullptr && return this->activeTimeGMT_ == nullptr && return this->activityId_ == nullptr && return this->dataId_ == nullptr && return this->digitalSign_ == nullptr
        && return this->files_ == nullptr && return this->operateTimeGMT_ == nullptr && return this->operateType_ == nullptr && return this->operatorDisplayName_ == nullptr && return this->operatorName_ == nullptr
        && return this->operatorNickName_ == nullptr && return this->operatorPhotoUrl_ == nullptr && return this->operatorStatus_ == nullptr && return this->operatorUserId_ == nullptr && return this->processInstanceId_ == nullptr
        && return this->remark_ == nullptr && return this->showName_ == nullptr && return this->size_ == nullptr && return this->taskExecuteType_ == nullptr && return this->taskHoldTimeGMT_ == nullptr
        && return this->taskId_ == nullptr && return this->taskType_ == nullptr && return this->type_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetOperationRecordsResponseBodyResult& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionExit Field Functions 
    bool hasActionExit() const { return this->actionExit_ != nullptr;};
    void deleteActionExit() { this->actionExit_ = nullptr;};
    inline string actionExit() const { DARABONBA_PTR_GET_DEFAULT(actionExit_, "") };
    inline GetOperationRecordsResponseBodyResult& setActionExit(string actionExit) { DARABONBA_PTR_SET_VALUE(actionExit_, actionExit) };


    // activeTimeGMT Field Functions 
    bool hasActiveTimeGMT() const { return this->activeTimeGMT_ != nullptr;};
    void deleteActiveTimeGMT() { this->activeTimeGMT_ = nullptr;};
    inline string activeTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(activeTimeGMT_, "") };
    inline GetOperationRecordsResponseBodyResult& setActiveTimeGMT(string activeTimeGMT) { DARABONBA_PTR_SET_VALUE(activeTimeGMT_, activeTimeGMT) };


    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline GetOperationRecordsResponseBodyResult& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline int64_t dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, 0L) };
    inline GetOperationRecordsResponseBodyResult& setDataId(int64_t dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // digitalSign Field Functions 
    bool hasDigitalSign() const { return this->digitalSign_ != nullptr;};
    void deleteDigitalSign() { this->digitalSign_ = nullptr;};
    inline string digitalSign() const { DARABONBA_PTR_GET_DEFAULT(digitalSign_, "") };
    inline GetOperationRecordsResponseBodyResult& setDigitalSign(string digitalSign) { DARABONBA_PTR_SET_VALUE(digitalSign_, digitalSign) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline string files() const { DARABONBA_PTR_GET_DEFAULT(files_, "") };
    inline GetOperationRecordsResponseBodyResult& setFiles(string files) { DARABONBA_PTR_SET_VALUE(files_, files) };


    // operateTimeGMT Field Functions 
    bool hasOperateTimeGMT() const { return this->operateTimeGMT_ != nullptr;};
    void deleteOperateTimeGMT() { this->operateTimeGMT_ = nullptr;};
    inline string operateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(operateTimeGMT_, "") };
    inline GetOperationRecordsResponseBodyResult& setOperateTimeGMT(string operateTimeGMT) { DARABONBA_PTR_SET_VALUE(operateTimeGMT_, operateTimeGMT) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline GetOperationRecordsResponseBodyResult& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // operatorDisplayName Field Functions 
    bool hasOperatorDisplayName() const { return this->operatorDisplayName_ != nullptr;};
    void deleteOperatorDisplayName() { this->operatorDisplayName_ = nullptr;};
    inline string operatorDisplayName() const { DARABONBA_PTR_GET_DEFAULT(operatorDisplayName_, "") };
    inline GetOperationRecordsResponseBodyResult& setOperatorDisplayName(string operatorDisplayName) { DARABONBA_PTR_SET_VALUE(operatorDisplayName_, operatorDisplayName) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline GetOperationRecordsResponseBodyResult& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // operatorNickName Field Functions 
    bool hasOperatorNickName() const { return this->operatorNickName_ != nullptr;};
    void deleteOperatorNickName() { this->operatorNickName_ = nullptr;};
    inline string operatorNickName() const { DARABONBA_PTR_GET_DEFAULT(operatorNickName_, "") };
    inline GetOperationRecordsResponseBodyResult& setOperatorNickName(string operatorNickName) { DARABONBA_PTR_SET_VALUE(operatorNickName_, operatorNickName) };


    // operatorPhotoUrl Field Functions 
    bool hasOperatorPhotoUrl() const { return this->operatorPhotoUrl_ != nullptr;};
    void deleteOperatorPhotoUrl() { this->operatorPhotoUrl_ = nullptr;};
    inline string operatorPhotoUrl() const { DARABONBA_PTR_GET_DEFAULT(operatorPhotoUrl_, "") };
    inline GetOperationRecordsResponseBodyResult& setOperatorPhotoUrl(string operatorPhotoUrl) { DARABONBA_PTR_SET_VALUE(operatorPhotoUrl_, operatorPhotoUrl) };


    // operatorStatus Field Functions 
    bool hasOperatorStatus() const { return this->operatorStatus_ != nullptr;};
    void deleteOperatorStatus() { this->operatorStatus_ = nullptr;};
    inline string operatorStatus() const { DARABONBA_PTR_GET_DEFAULT(operatorStatus_, "") };
    inline GetOperationRecordsResponseBodyResult& setOperatorStatus(string operatorStatus) { DARABONBA_PTR_SET_VALUE(operatorStatus_, operatorStatus) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string operatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline GetOperationRecordsResponseBodyResult& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetOperationRecordsResponseBodyResult& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetOperationRecordsResponseBodyResult& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetOperationRecordsResponseBodyResult& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetOperationRecordsResponseBodyResult& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // taskExecuteType Field Functions 
    bool hasTaskExecuteType() const { return this->taskExecuteType_ != nullptr;};
    void deleteTaskExecuteType() { this->taskExecuteType_ = nullptr;};
    inline string taskExecuteType() const { DARABONBA_PTR_GET_DEFAULT(taskExecuteType_, "") };
    inline GetOperationRecordsResponseBodyResult& setTaskExecuteType(string taskExecuteType) { DARABONBA_PTR_SET_VALUE(taskExecuteType_, taskExecuteType) };


    // taskHoldTimeGMT Field Functions 
    bool hasTaskHoldTimeGMT() const { return this->taskHoldTimeGMT_ != nullptr;};
    void deleteTaskHoldTimeGMT() { this->taskHoldTimeGMT_ = nullptr;};
    inline int64_t taskHoldTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(taskHoldTimeGMT_, 0L) };
    inline GetOperationRecordsResponseBodyResult& setTaskHoldTimeGMT(int64_t taskHoldTimeGMT) { DARABONBA_PTR_SET_VALUE(taskHoldTimeGMT_, taskHoldTimeGMT) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetOperationRecordsResponseBodyResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetOperationRecordsResponseBodyResult& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetOperationRecordsResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> actionExit_ = nullptr;
    std::shared_ptr<string> activeTimeGMT_ = nullptr;
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<int64_t> dataId_ = nullptr;
    std::shared_ptr<string> digitalSign_ = nullptr;
    std::shared_ptr<string> files_ = nullptr;
    std::shared_ptr<string> operateTimeGMT_ = nullptr;
    std::shared_ptr<string> operateType_ = nullptr;
    std::shared_ptr<string> operatorDisplayName_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
    std::shared_ptr<string> operatorNickName_ = nullptr;
    std::shared_ptr<string> operatorPhotoUrl_ = nullptr;
    std::shared_ptr<string> operatorStatus_ = nullptr;
    std::shared_ptr<string> operatorUserId_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> showName_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> taskExecuteType_ = nullptr;
    std::shared_ptr<int64_t> taskHoldTimeGMT_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
