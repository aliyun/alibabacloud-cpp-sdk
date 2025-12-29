// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROBOTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROBOTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CreateRobotTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRobotTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(CorpName, corpName_);
      DARABONBA_PTR_TO_JSON(DialogId, dialogId_);
      DARABONBA_PTR_TO_JSON(IsSelfLine, isSelfLine_);
      DARABONBA_PTR_TO_JSON(NumberStatusIdent, numberStatusIdent_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecallInterval, recallInterval_);
      DARABONBA_PTR_TO_JSON(RecallStateCodes, recallStateCodes_);
      DARABONBA_PTR_TO_JSON(RecallTimes, recallTimes_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetryType, retryType_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRobotTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
      DARABONBA_PTR_FROM_JSON(DialogId, dialogId_);
      DARABONBA_PTR_FROM_JSON(IsSelfLine, isSelfLine_);
      DARABONBA_PTR_FROM_JSON(NumberStatusIdent, numberStatusIdent_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecallInterval, recallInterval_);
      DARABONBA_PTR_FROM_JSON(RecallStateCodes, recallStateCodes_);
      DARABONBA_PTR_FROM_JSON(RecallTimes, recallTimes_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetryType, retryType_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateRobotTaskRequest() = default ;
    CreateRobotTaskRequest(const CreateRobotTaskRequest &) = default ;
    CreateRobotTaskRequest(CreateRobotTaskRequest &&) = default ;
    CreateRobotTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRobotTaskRequest() = default ;
    CreateRobotTaskRequest& operator=(const CreateRobotTaskRequest &) = default ;
    CreateRobotTaskRequest& operator=(CreateRobotTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caller_ == nullptr
        && this->corpName_ == nullptr && this->dialogId_ == nullptr && this->isSelfLine_ == nullptr && this->numberStatusIdent_ == nullptr && this->ownerId_ == nullptr
        && this->recallInterval_ == nullptr && this->recallStateCodes_ == nullptr && this->recallTimes_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->retryType_ == nullptr && this->taskName_ == nullptr; };
    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline CreateRobotTaskRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline CreateRobotTaskRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // dialogId Field Functions 
    bool hasDialogId() const { return this->dialogId_ != nullptr;};
    void deleteDialogId() { this->dialogId_ = nullptr;};
    inline int64_t getDialogId() const { DARABONBA_PTR_GET_DEFAULT(dialogId_, 0L) };
    inline CreateRobotTaskRequest& setDialogId(int64_t dialogId) { DARABONBA_PTR_SET_VALUE(dialogId_, dialogId) };


    // isSelfLine Field Functions 
    bool hasIsSelfLine() const { return this->isSelfLine_ != nullptr;};
    void deleteIsSelfLine() { this->isSelfLine_ = nullptr;};
    inline bool getIsSelfLine() const { DARABONBA_PTR_GET_DEFAULT(isSelfLine_, false) };
    inline CreateRobotTaskRequest& setIsSelfLine(bool isSelfLine) { DARABONBA_PTR_SET_VALUE(isSelfLine_, isSelfLine) };


    // numberStatusIdent Field Functions 
    bool hasNumberStatusIdent() const { return this->numberStatusIdent_ != nullptr;};
    void deleteNumberStatusIdent() { this->numberStatusIdent_ = nullptr;};
    inline bool getNumberStatusIdent() const { DARABONBA_PTR_GET_DEFAULT(numberStatusIdent_, false) };
    inline CreateRobotTaskRequest& setNumberStatusIdent(bool numberStatusIdent) { DARABONBA_PTR_SET_VALUE(numberStatusIdent_, numberStatusIdent) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRobotTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recallInterval Field Functions 
    bool hasRecallInterval() const { return this->recallInterval_ != nullptr;};
    void deleteRecallInterval() { this->recallInterval_ = nullptr;};
    inline int32_t getRecallInterval() const { DARABONBA_PTR_GET_DEFAULT(recallInterval_, 0) };
    inline CreateRobotTaskRequest& setRecallInterval(int32_t recallInterval) { DARABONBA_PTR_SET_VALUE(recallInterval_, recallInterval) };


    // recallStateCodes Field Functions 
    bool hasRecallStateCodes() const { return this->recallStateCodes_ != nullptr;};
    void deleteRecallStateCodes() { this->recallStateCodes_ = nullptr;};
    inline string getRecallStateCodes() const { DARABONBA_PTR_GET_DEFAULT(recallStateCodes_, "") };
    inline CreateRobotTaskRequest& setRecallStateCodes(string recallStateCodes) { DARABONBA_PTR_SET_VALUE(recallStateCodes_, recallStateCodes) };


    // recallTimes Field Functions 
    bool hasRecallTimes() const { return this->recallTimes_ != nullptr;};
    void deleteRecallTimes() { this->recallTimes_ = nullptr;};
    inline int32_t getRecallTimes() const { DARABONBA_PTR_GET_DEFAULT(recallTimes_, 0) };
    inline CreateRobotTaskRequest& setRecallTimes(int32_t recallTimes) { DARABONBA_PTR_SET_VALUE(recallTimes_, recallTimes) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateRobotTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateRobotTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retryType Field Functions 
    bool hasRetryType() const { return this->retryType_ != nullptr;};
    void deleteRetryType() { this->retryType_ = nullptr;};
    inline int32_t getRetryType() const { DARABONBA_PTR_GET_DEFAULT(retryType_, 0) };
    inline CreateRobotTaskRequest& setRetryType(int32_t retryType) { DARABONBA_PTR_SET_VALUE(retryType_, retryType) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateRobotTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The calling number.
    // 
    // You must use the phone numbers that you have purchased and separate multiple numbers with commas (,). You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home) and choose **Real Number Service** > **Real Number Management** to view the numbers you purchased.
    // 
    // This parameter is required.
    shared_ptr<string> caller_ {};
    // The company name, which must be the same as the **enterprise name** on the qualification management page.
    shared_ptr<string> corpName_ {};
    // The ID of the robot or communication script that is used to initiate the call.
    // 
    // You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home) and choose **Intelligent Voice Robot** > **Communication Script Management** to view the communication script ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dialogId_ {};
    // Specifies whether to call the self-managed line. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    // 
    // > If you set this parameter to **true**, calling numbers are not verified.
    shared_ptr<bool> isSelfLine_ {};
    // Specifies whether to enable number status identification. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    // 
    // > If you set this parameter to **true**, the reason why a call is not answered is recorded.
    // 
    // This parameter is required.
    shared_ptr<bool> numberStatusIdent_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The redial interval. Unit: minutes. The value must be greater than 1.
    // 
    // > The maximum redial interval is 30 minutes.
    shared_ptr<int32_t> recallInterval_ {};
    // The call state in which redial is required. Separate multiple call states with commas (,). Valid values:
    // 
    // *   **200010**: The phone of the called party is powered off.
    // *   **200011**: The number of the called party is out of service.
    // *   **200002**: The line is busy.
    // *   **200012**: The call is lost.
    // *   **200005**: The called party cannot be connected.
    // *   **200003**: The called party does not respond to the call.
    shared_ptr<string> recallStateCodes_ {};
    // The number of redial times.
    shared_ptr<int32_t> recallTimes_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable auto-redial. Valid values:
    // 
    // *   **1**: enables auto-redial.
    // *   **0**: disables auto-redial.
    // 
    // This parameter is required.
    shared_ptr<int32_t> retryType_ {};
    // The task name. The task name can be up to 30 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
