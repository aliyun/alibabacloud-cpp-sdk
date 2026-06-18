// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallString, callString_);
      DARABONBA_PTR_TO_JSON(CallStringType, callStringType_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_TO_JSON(RetryFlag, retryFlag_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(RetryStatusCode, retryStatusCode_);
      DARABONBA_PTR_TO_JSON(RobotId, robotId_);
      DARABONBA_PTR_TO_JSON(SeatCount, seatCount_);
      DARABONBA_PTR_TO_JSON(StartNow, startNow_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(WorkDay, workDay_);
      DARABONBA_PTR_TO_JSON(WorkTimeList, workTimeList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallString, callString_);
      DARABONBA_PTR_FROM_JSON(CallStringType, callStringType_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_FROM_JSON(RetryFlag, retryFlag_);
      DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_FROM_JSON(RetryStatusCode, retryStatusCode_);
      DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
      DARABONBA_PTR_FROM_JSON(SeatCount, seatCount_);
      DARABONBA_PTR_FROM_JSON(StartNow, startNow_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(WorkDay, workDay_);
      DARABONBA_PTR_FROM_JSON(WorkTimeList, workTimeList_);
    };
    CreateTaskRequest() = default ;
    CreateTaskRequest(const CreateTaskRequest &) = default ;
    CreateTaskRequest(CreateTaskRequest &&) = default ;
    CreateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequest() = default ;
    CreateTaskRequest& operator=(const CreateTaskRequest &) = default ;
    CreateTaskRequest& operator=(CreateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callString_ == nullptr
        && this->callStringType_ == nullptr && this->caller_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->retryCount_ == nullptr && this->retryFlag_ == nullptr && this->retryInterval_ == nullptr && this->retryStatusCode_ == nullptr && this->robotId_ == nullptr
        && this->seatCount_ == nullptr && this->startNow_ == nullptr && this->taskName_ == nullptr && this->workDay_ == nullptr && this->workTimeList_ == nullptr; };
    // callString Field Functions 
    bool hasCallString() const { return this->callString_ != nullptr;};
    void deleteCallString() { this->callString_ = nullptr;};
    inline string getCallString() const { DARABONBA_PTR_GET_DEFAULT(callString_, "") };
    inline CreateTaskRequest& setCallString(string callString) { DARABONBA_PTR_SET_VALUE(callString_, callString) };


    // callStringType Field Functions 
    bool hasCallStringType() const { return this->callStringType_ != nullptr;};
    void deleteCallStringType() { this->callStringType_ = nullptr;};
    inline string getCallStringType() const { DARABONBA_PTR_GET_DEFAULT(callStringType_, "") };
    inline CreateTaskRequest& setCallStringType(string callStringType) { DARABONBA_PTR_SET_VALUE(callStringType_, callStringType) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline CreateTaskRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline CreateTaskRequest& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // retryFlag Field Functions 
    bool hasRetryFlag() const { return this->retryFlag_ != nullptr;};
    void deleteRetryFlag() { this->retryFlag_ = nullptr;};
    inline int32_t getRetryFlag() const { DARABONBA_PTR_GET_DEFAULT(retryFlag_, 0) };
    inline CreateTaskRequest& setRetryFlag(int32_t retryFlag) { DARABONBA_PTR_SET_VALUE(retryFlag_, retryFlag) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t getRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline CreateTaskRequest& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // retryStatusCode Field Functions 
    bool hasRetryStatusCode() const { return this->retryStatusCode_ != nullptr;};
    void deleteRetryStatusCode() { this->retryStatusCode_ = nullptr;};
    inline string getRetryStatusCode() const { DARABONBA_PTR_GET_DEFAULT(retryStatusCode_, "") };
    inline CreateTaskRequest& setRetryStatusCode(string retryStatusCode) { DARABONBA_PTR_SET_VALUE(retryStatusCode_, retryStatusCode) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline string getRobotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, "") };
    inline CreateTaskRequest& setRobotId(string robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // seatCount Field Functions 
    bool hasSeatCount() const { return this->seatCount_ != nullptr;};
    void deleteSeatCount() { this->seatCount_ = nullptr;};
    inline string getSeatCount() const { DARABONBA_PTR_GET_DEFAULT(seatCount_, "") };
    inline CreateTaskRequest& setSeatCount(string seatCount) { DARABONBA_PTR_SET_VALUE(seatCount_, seatCount) };


    // startNow Field Functions 
    bool hasStartNow() const { return this->startNow_ != nullptr;};
    void deleteStartNow() { this->startNow_ = nullptr;};
    inline bool getStartNow() const { DARABONBA_PTR_GET_DEFAULT(startNow_, false) };
    inline CreateTaskRequest& setStartNow(bool startNow) { DARABONBA_PTR_SET_VALUE(startNow_, startNow) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // workDay Field Functions 
    bool hasWorkDay() const { return this->workDay_ != nullptr;};
    void deleteWorkDay() { this->workDay_ = nullptr;};
    inline string getWorkDay() const { DARABONBA_PTR_GET_DEFAULT(workDay_, "") };
    inline CreateTaskRequest& setWorkDay(string workDay) { DARABONBA_PTR_SET_VALUE(workDay_, workDay) };


    // workTimeList Field Functions 
    bool hasWorkTimeList() const { return this->workTimeList_ != nullptr;};
    void deleteWorkTimeList() { this->workTimeList_ = nullptr;};
    inline string getWorkTimeList() const { DARABONBA_PTR_GET_DEFAULT(workTimeList_, "") };
    inline CreateTaskRequest& setWorkTimeList(string workTimeList) { DARABONBA_PTR_SET_VALUE(workTimeList_, workTimeList) };


  protected:
    // Call string (callee information and parameter list). Valid values:
    // 
    // - **LIST**: `05715678****,05715679****`
    // - **JSON**: `{"ParamNames":["name","age"],"CalleeList":[{"Callee":"1810000****","Params":["Zhang San","20"]},{"Callee":"1810001****","Params":["Li Si","21"]}]}`. In this example, ParamNames represents the List of Parameter Names; Params represents the List of parameter values.
    // 
    // > - The order of the Parameter Name List and the parameter value List must correspond.  
    // - A maximum of 1 000 callee numbers is allowed.
    shared_ptr<string> callString_ {};
    // Call string type. Valid values:  
    // - **LIST**  
    // - **JSON**
    // 
    // This parameter is required.
    shared_ptr<string> callStringType_ {};
    // Outbound caller number.
    // 
    // > The number must be a purchased number. Separate multiple numbers with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> caller_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Retry Count.
    shared_ptr<int32_t> retryCount_ {};
    // Whether to enable automatic retry. Valid values:
    // 
    // - **1**: Retry.
    // - **0**: No retry.
    shared_ptr<int32_t> retryFlag_ {};
    // Retry interval. Unit: minute. Must be greater than 1.
    shared_ptr<int32_t> retryInterval_ {};
    // Call statuses that require redialing. Separate multiple statuses with commas (,). Valid values:  
    // - **200010**: Power off  
    // - **200011**: Service suspended  
    // - **200002**: Busy  
    // - **200012**: Call failed  
    // - **200005**: Unable to connect  
    // - **200003**: No acknowledgement
    shared_ptr<string> retryStatusCode_ {};
    // ID of the specified robot (script ID), indicating which robot script to use for initiating calls.  
    // 
    // You can obtain the script ID on the [Script Management](https://aiccs.console.aliyun.com/patter/list) page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> robotId_ {};
    // Concurrency (number of agents).
    // 
    // This parameter is required.
    shared_ptr<string> seatCount_ {};
    // Indicates whether to start immediately.  
    // - **true**: Yes.  
    // - **false**: No.
    shared_ptr<bool> startNow_ {};
    // Task Name. Supports Chinese and English characters. Length: 0 to 30 characters.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // Work day. Valid values:
    // 
    // - **1**: Monday.
    // - **2**: Tuesday.
    // - **3**: Wednesday.
    // - **4**: Thursday.
    // - **5**: Friday.
    // - **6**: Saturday.
    // - **7**: Sunday.
    // 
    // This parameter is required.
    shared_ptr<string> workDay_ {};
    // List of working hours (accurate to the minute).
    // 
    // This parameter is required.
    shared_ptr<string> workTimeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
