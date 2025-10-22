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
        && return this->callStringType_ == nullptr && return this->caller_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->retryCount_ == nullptr && return this->retryFlag_ == nullptr && return this->retryInterval_ == nullptr && return this->retryStatusCode_ == nullptr && return this->robotId_ == nullptr
        && return this->seatCount_ == nullptr && return this->startNow_ == nullptr && return this->taskName_ == nullptr && return this->workDay_ == nullptr && return this->workTimeList_ == nullptr; };
    // callString Field Functions 
    bool hasCallString() const { return this->callString_ != nullptr;};
    void deleteCallString() { this->callString_ = nullptr;};
    inline string callString() const { DARABONBA_PTR_GET_DEFAULT(callString_, "") };
    inline CreateTaskRequest& setCallString(string callString) { DARABONBA_PTR_SET_VALUE(callString_, callString) };


    // callStringType Field Functions 
    bool hasCallStringType() const { return this->callStringType_ != nullptr;};
    void deleteCallStringType() { this->callStringType_ = nullptr;};
    inline string callStringType() const { DARABONBA_PTR_GET_DEFAULT(callStringType_, "") };
    inline CreateTaskRequest& setCallStringType(string callStringType) { DARABONBA_PTR_SET_VALUE(callStringType_, callStringType) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline CreateTaskRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t retryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline CreateTaskRequest& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // retryFlag Field Functions 
    bool hasRetryFlag() const { return this->retryFlag_ != nullptr;};
    void deleteRetryFlag() { this->retryFlag_ = nullptr;};
    inline int32_t retryFlag() const { DARABONBA_PTR_GET_DEFAULT(retryFlag_, 0) };
    inline CreateTaskRequest& setRetryFlag(int32_t retryFlag) { DARABONBA_PTR_SET_VALUE(retryFlag_, retryFlag) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t retryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline CreateTaskRequest& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // retryStatusCode Field Functions 
    bool hasRetryStatusCode() const { return this->retryStatusCode_ != nullptr;};
    void deleteRetryStatusCode() { this->retryStatusCode_ = nullptr;};
    inline string retryStatusCode() const { DARABONBA_PTR_GET_DEFAULT(retryStatusCode_, "") };
    inline CreateTaskRequest& setRetryStatusCode(string retryStatusCode) { DARABONBA_PTR_SET_VALUE(retryStatusCode_, retryStatusCode) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline string robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, "") };
    inline CreateTaskRequest& setRobotId(string robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // seatCount Field Functions 
    bool hasSeatCount() const { return this->seatCount_ != nullptr;};
    void deleteSeatCount() { this->seatCount_ = nullptr;};
    inline string seatCount() const { DARABONBA_PTR_GET_DEFAULT(seatCount_, "") };
    inline CreateTaskRequest& setSeatCount(string seatCount) { DARABONBA_PTR_SET_VALUE(seatCount_, seatCount) };


    // startNow Field Functions 
    bool hasStartNow() const { return this->startNow_ != nullptr;};
    void deleteStartNow() { this->startNow_ = nullptr;};
    inline bool startNow() const { DARABONBA_PTR_GET_DEFAULT(startNow_, false) };
    inline CreateTaskRequest& setStartNow(bool startNow) { DARABONBA_PTR_SET_VALUE(startNow_, startNow) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // workDay Field Functions 
    bool hasWorkDay() const { return this->workDay_ != nullptr;};
    void deleteWorkDay() { this->workDay_ = nullptr;};
    inline string workDay() const { DARABONBA_PTR_GET_DEFAULT(workDay_, "") };
    inline CreateTaskRequest& setWorkDay(string workDay) { DARABONBA_PTR_SET_VALUE(workDay_, workDay) };


    // workTimeList Field Functions 
    bool hasWorkTimeList() const { return this->workTimeList_ != nullptr;};
    void deleteWorkTimeList() { this->workTimeList_ = nullptr;};
    inline string workTimeList() const { DARABONBA_PTR_GET_DEFAULT(workTimeList_, "") };
    inline CreateTaskRequest& setWorkTimeList(string workTimeList) { DARABONBA_PTR_SET_VALUE(workTimeList_, workTimeList) };


  protected:
    std::shared_ptr<string> callString_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callStringType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> caller_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int32_t> retryCount_ = nullptr;
    std::shared_ptr<int32_t> retryFlag_ = nullptr;
    std::shared_ptr<int32_t> retryInterval_ = nullptr;
    std::shared_ptr<string> retryStatusCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> robotId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> seatCount_ = nullptr;
    std::shared_ptr<bool> startNow_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workDay_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workTimeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
