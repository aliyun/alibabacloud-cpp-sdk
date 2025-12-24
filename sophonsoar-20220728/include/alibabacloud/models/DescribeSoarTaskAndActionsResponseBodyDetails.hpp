// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODYDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARTASKANDACTIONSRESPONSEBODYDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSoarTaskAndActionsResponseBodyDetailsActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarTaskAndActionsResponseBodyDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarTaskAndActionsResponseBodyDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ActionLogNum, actionLogNum_);
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RawEventReq, rawEventReq_);
      DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskFlowMd5, taskFlowMd5_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(TriggerUser, triggerUser_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarTaskAndActionsResponseBodyDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionLogNum, actionLogNum_);
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RawEventReq, rawEventReq_);
      DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskFlowMd5, taskFlowMd5_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(TriggerUser, triggerUser_);
    };
    DescribeSoarTaskAndActionsResponseBodyDetails() = default ;
    DescribeSoarTaskAndActionsResponseBodyDetails(const DescribeSoarTaskAndActionsResponseBodyDetails &) = default ;
    DescribeSoarTaskAndActionsResponseBodyDetails(DescribeSoarTaskAndActionsResponseBodyDetails &&) = default ;
    DescribeSoarTaskAndActionsResponseBodyDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarTaskAndActionsResponseBodyDetails() = default ;
    DescribeSoarTaskAndActionsResponseBodyDetails& operator=(const DescribeSoarTaskAndActionsResponseBodyDetails &) = default ;
    DescribeSoarTaskAndActionsResponseBodyDetails& operator=(DescribeSoarTaskAndActionsResponseBodyDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionLogNum_ == nullptr
        && return this->actions_ == nullptr && return this->endTime_ == nullptr && return this->errorMsg_ == nullptr && return this->rawEventReq_ == nullptr && return this->requestUuid_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->taskFlowMd5_ == nullptr && return this->taskName_ == nullptr && return this->triggerType_ == nullptr
        && return this->triggerUser_ == nullptr; };
    // actionLogNum Field Functions 
    bool hasActionLogNum() const { return this->actionLogNum_ != nullptr;};
    void deleteActionLogNum() { this->actionLogNum_ = nullptr;};
    inline int32_t actionLogNum() const { DARABONBA_PTR_GET_DEFAULT(actionLogNum_, 0) };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setActionLogNum(int32_t actionLogNum) { DARABONBA_PTR_SET_VALUE(actionLogNum_, actionLogNum) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::DescribeSoarTaskAndActionsResponseBodyDetailsActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::DescribeSoarTaskAndActionsResponseBodyDetailsActions>) };
    inline vector<Models::DescribeSoarTaskAndActionsResponseBodyDetailsActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::DescribeSoarTaskAndActionsResponseBodyDetailsActions>) };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setActions(const vector<Models::DescribeSoarTaskAndActionsResponseBodyDetailsActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setActions(vector<Models::DescribeSoarTaskAndActionsResponseBodyDetailsActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // rawEventReq Field Functions 
    bool hasRawEventReq() const { return this->rawEventReq_ != nullptr;};
    void deleteRawEventReq() { this->rawEventReq_ = nullptr;};
    inline string rawEventReq() const { DARABONBA_PTR_GET_DEFAULT(rawEventReq_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setRawEventReq(string rawEventReq) { DARABONBA_PTR_SET_VALUE(rawEventReq_, rawEventReq) };


    // requestUuid Field Functions 
    bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
    void deleteRequestUuid() { this->requestUuid_ = nullptr;};
    inline string requestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskFlowMd5 Field Functions 
    bool hasTaskFlowMd5() const { return this->taskFlowMd5_ != nullptr;};
    void deleteTaskFlowMd5() { this->taskFlowMd5_ = nullptr;};
    inline string taskFlowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskFlowMd5_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setTaskFlowMd5(string taskFlowMd5) { DARABONBA_PTR_SET_VALUE(taskFlowMd5_, taskFlowMd5) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // triggerUser Field Functions 
    bool hasTriggerUser() const { return this->triggerUser_ != nullptr;};
    void deleteTriggerUser() { this->triggerUser_ = nullptr;};
    inline string triggerUser() const { DARABONBA_PTR_GET_DEFAULT(triggerUser_, "") };
    inline DescribeSoarTaskAndActionsResponseBodyDetails& setTriggerUser(string triggerUser) { DARABONBA_PTR_SET_VALUE(triggerUser_, triggerUser) };


  protected:
    std::shared_ptr<int32_t> actionLogNum_ = nullptr;
    // The list of component actions during the running of the playbook.
    std::shared_ptr<vector<Models::DescribeSoarTaskAndActionsResponseBodyDetailsActions>> actions_ = nullptr;
    // The end of the time range during which the playbook is run. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The error message of the task. If the task is successful, this field is empty.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The request parameters of the task.
    std::shared_ptr<string> rawEventReq_ = nullptr;
    // The request ID of the task. The value is unique.
    std::shared_ptr<string> requestUuid_ = nullptr;
    // The beginning of the time range during which the playbook is run. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The task status. Valid values:
    // 
    // *   **success**
    // *   **fail**
    // *   **running**
    std::shared_ptr<string> status_ = nullptr;
    // The MD5 value of the playbook.
    std::shared_ptr<string> taskFlowMd5_ = nullptr;
    // The name of the task. The value is the same as the playbook UUID.
    std::shared_ptr<string> taskName_ = nullptr;
    // The task type. Valid values:
    // 
    // *   **debug**: a debugging task
    // *   **manual**: a manual task
    // *   **siem**: an event-triggered task
    std::shared_ptr<string> triggerType_ = nullptr;
    // The ID of the Alibaba Cloud account that triggers the task.
    std::shared_ptr<string> triggerUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
