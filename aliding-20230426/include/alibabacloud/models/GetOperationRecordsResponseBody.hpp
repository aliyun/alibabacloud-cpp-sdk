// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOperationRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetOperationRecordsResponseBody() = default ;
    GetOperationRecordsResponseBody(const GetOperationRecordsResponseBody &) = default ;
    GetOperationRecordsResponseBody(GetOperationRecordsResponseBody &&) = default ;
    GetOperationRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordsResponseBody() = default ;
    GetOperationRecordsResponseBody& operator=(const GetOperationRecordsResponseBody &) = default ;
    GetOperationRecordsResponseBody& operator=(GetOperationRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->actionExit_ == nullptr && this->activeTimeGMT_ == nullptr && this->activityId_ == nullptr && this->dataId_ == nullptr && this->digitalSign_ == nullptr
        && this->files_ == nullptr && this->operateTimeGMT_ == nullptr && this->operateType_ == nullptr && this->operatorDisplayName_ == nullptr && this->operatorName_ == nullptr
        && this->operatorNickName_ == nullptr && this->operatorPhotoUrl_ == nullptr && this->operatorStatus_ == nullptr && this->operatorUserId_ == nullptr && this->processInstanceId_ == nullptr
        && this->remark_ == nullptr && this->showName_ == nullptr && this->size_ == nullptr && this->taskExecuteType_ == nullptr && this->taskHoldTimeGMT_ == nullptr
        && this->taskId_ == nullptr && this->taskType_ == nullptr && this->type_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Result& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // actionExit Field Functions 
      bool hasActionExit() const { return this->actionExit_ != nullptr;};
      void deleteActionExit() { this->actionExit_ = nullptr;};
      inline string getActionExit() const { DARABONBA_PTR_GET_DEFAULT(actionExit_, "") };
      inline Result& setActionExit(string actionExit) { DARABONBA_PTR_SET_VALUE(actionExit_, actionExit) };


      // activeTimeGMT Field Functions 
      bool hasActiveTimeGMT() const { return this->activeTimeGMT_ != nullptr;};
      void deleteActiveTimeGMT() { this->activeTimeGMT_ = nullptr;};
      inline string getActiveTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(activeTimeGMT_, "") };
      inline Result& setActiveTimeGMT(string activeTimeGMT) { DARABONBA_PTR_SET_VALUE(activeTimeGMT_, activeTimeGMT) };


      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
      inline Result& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline int64_t getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, 0L) };
      inline Result& setDataId(int64_t dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // digitalSign Field Functions 
      bool hasDigitalSign() const { return this->digitalSign_ != nullptr;};
      void deleteDigitalSign() { this->digitalSign_ = nullptr;};
      inline string getDigitalSign() const { DARABONBA_PTR_GET_DEFAULT(digitalSign_, "") };
      inline Result& setDigitalSign(string digitalSign) { DARABONBA_PTR_SET_VALUE(digitalSign_, digitalSign) };


      // files Field Functions 
      bool hasFiles() const { return this->files_ != nullptr;};
      void deleteFiles() { this->files_ = nullptr;};
      inline string getFiles() const { DARABONBA_PTR_GET_DEFAULT(files_, "") };
      inline Result& setFiles(string files) { DARABONBA_PTR_SET_VALUE(files_, files) };


      // operateTimeGMT Field Functions 
      bool hasOperateTimeGMT() const { return this->operateTimeGMT_ != nullptr;};
      void deleteOperateTimeGMT() { this->operateTimeGMT_ = nullptr;};
      inline string getOperateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(operateTimeGMT_, "") };
      inline Result& setOperateTimeGMT(string operateTimeGMT) { DARABONBA_PTR_SET_VALUE(operateTimeGMT_, operateTimeGMT) };


      // operateType Field Functions 
      bool hasOperateType() const { return this->operateType_ != nullptr;};
      void deleteOperateType() { this->operateType_ = nullptr;};
      inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
      inline Result& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


      // operatorDisplayName Field Functions 
      bool hasOperatorDisplayName() const { return this->operatorDisplayName_ != nullptr;};
      void deleteOperatorDisplayName() { this->operatorDisplayName_ = nullptr;};
      inline string getOperatorDisplayName() const { DARABONBA_PTR_GET_DEFAULT(operatorDisplayName_, "") };
      inline Result& setOperatorDisplayName(string operatorDisplayName) { DARABONBA_PTR_SET_VALUE(operatorDisplayName_, operatorDisplayName) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline Result& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // operatorNickName Field Functions 
      bool hasOperatorNickName() const { return this->operatorNickName_ != nullptr;};
      void deleteOperatorNickName() { this->operatorNickName_ = nullptr;};
      inline string getOperatorNickName() const { DARABONBA_PTR_GET_DEFAULT(operatorNickName_, "") };
      inline Result& setOperatorNickName(string operatorNickName) { DARABONBA_PTR_SET_VALUE(operatorNickName_, operatorNickName) };


      // operatorPhotoUrl Field Functions 
      bool hasOperatorPhotoUrl() const { return this->operatorPhotoUrl_ != nullptr;};
      void deleteOperatorPhotoUrl() { this->operatorPhotoUrl_ = nullptr;};
      inline string getOperatorPhotoUrl() const { DARABONBA_PTR_GET_DEFAULT(operatorPhotoUrl_, "") };
      inline Result& setOperatorPhotoUrl(string operatorPhotoUrl) { DARABONBA_PTR_SET_VALUE(operatorPhotoUrl_, operatorPhotoUrl) };


      // operatorStatus Field Functions 
      bool hasOperatorStatus() const { return this->operatorStatus_ != nullptr;};
      void deleteOperatorStatus() { this->operatorStatus_ = nullptr;};
      inline string getOperatorStatus() const { DARABONBA_PTR_GET_DEFAULT(operatorStatus_, "") };
      inline Result& setOperatorStatus(string operatorStatus) { DARABONBA_PTR_SET_VALUE(operatorStatus_, operatorStatus) };


      // operatorUserId Field Functions 
      bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
      void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
      inline string getOperatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
      inline Result& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


      // processInstanceId Field Functions 
      bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
      void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
      inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
      inline Result& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Result& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Result& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Result& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // taskExecuteType Field Functions 
      bool hasTaskExecuteType() const { return this->taskExecuteType_ != nullptr;};
      void deleteTaskExecuteType() { this->taskExecuteType_ = nullptr;};
      inline string getTaskExecuteType() const { DARABONBA_PTR_GET_DEFAULT(taskExecuteType_, "") };
      inline Result& setTaskExecuteType(string taskExecuteType) { DARABONBA_PTR_SET_VALUE(taskExecuteType_, taskExecuteType) };


      // taskHoldTimeGMT Field Functions 
      bool hasTaskHoldTimeGMT() const { return this->taskHoldTimeGMT_ != nullptr;};
      void deleteTaskHoldTimeGMT() { this->taskHoldTimeGMT_ = nullptr;};
      inline int64_t getTaskHoldTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(taskHoldTimeGMT_, 0L) };
      inline Result& setTaskHoldTimeGMT(int64_t taskHoldTimeGMT) { DARABONBA_PTR_SET_VALUE(taskHoldTimeGMT_, taskHoldTimeGMT) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Result& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Result& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> actionExit_ {};
      shared_ptr<string> activeTimeGMT_ {};
      shared_ptr<string> activityId_ {};
      shared_ptr<int64_t> dataId_ {};
      shared_ptr<string> digitalSign_ {};
      shared_ptr<string> files_ {};
      shared_ptr<string> operateTimeGMT_ {};
      shared_ptr<string> operateType_ {};
      shared_ptr<string> operatorDisplayName_ {};
      shared_ptr<string> operatorName_ {};
      shared_ptr<string> operatorNickName_ {};
      shared_ptr<string> operatorPhotoUrl_ {};
      shared_ptr<string> operatorStatus_ {};
      shared_ptr<string> operatorUserId_ {};
      shared_ptr<string> processInstanceId_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> showName_ {};
      shared_ptr<int32_t> size_ {};
      shared_ptr<string> taskExecuteType_ {};
      shared_ptr<int64_t> taskHoldTimeGMT_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOperationRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetOperationRecordsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetOperationRecordsResponseBody::Result>) };
    inline vector<GetOperationRecordsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetOperationRecordsResponseBody::Result>) };
    inline GetOperationRecordsResponseBody& setResult(const vector<GetOperationRecordsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetOperationRecordsResponseBody& setResult(vector<GetOperationRecordsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetOperationRecordsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetOperationRecordsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetOperationRecordsResponseBody::Result>> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
