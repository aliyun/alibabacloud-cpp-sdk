// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHROBOTSMARTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHROBOTSMARTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class BatchRobotSmartCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRobotSmartCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_TO_JSON(CorpName, corpName_);
      DARABONBA_PTR_TO_JSON(DialogId, dialogId_);
      DARABONBA_PTR_TO_JSON(EarlyMediaAsr, earlyMediaAsr_);
      DARABONBA_PTR_TO_JSON(IsSelfLine, isSelfLine_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScheduleCall, scheduleCall_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TtsParam, ttsParam_);
      DARABONBA_PTR_TO_JSON(TtsParamHead, ttsParamHead_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRobotSmartCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
      DARABONBA_PTR_FROM_JSON(DialogId, dialogId_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaAsr, earlyMediaAsr_);
      DARABONBA_PTR_FROM_JSON(IsSelfLine, isSelfLine_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScheduleCall, scheduleCall_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TtsParam, ttsParam_);
      DARABONBA_PTR_FROM_JSON(TtsParamHead, ttsParamHead_);
    };
    BatchRobotSmartCallRequest() = default ;
    BatchRobotSmartCallRequest(const BatchRobotSmartCallRequest &) = default ;
    BatchRobotSmartCallRequest(BatchRobotSmartCallRequest &&) = default ;
    BatchRobotSmartCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRobotSmartCallRequest() = default ;
    BatchRobotSmartCallRequest& operator=(const BatchRobotSmartCallRequest &) = default ;
    BatchRobotSmartCallRequest& operator=(BatchRobotSmartCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumber_ == nullptr
        && this->calledShowNumber_ == nullptr && this->corpName_ == nullptr && this->dialogId_ == nullptr && this->earlyMediaAsr_ == nullptr && this->isSelfLine_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scheduleCall_ == nullptr && this->scheduleTime_ == nullptr
        && this->taskName_ == nullptr && this->ttsParam_ == nullptr && this->ttsParamHead_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline BatchRobotSmartCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledShowNumber Field Functions 
    bool hasCalledShowNumber() const { return this->calledShowNumber_ != nullptr;};
    void deleteCalledShowNumber() { this->calledShowNumber_ = nullptr;};
    inline string getCalledShowNumber() const { DARABONBA_PTR_GET_DEFAULT(calledShowNumber_, "") };
    inline BatchRobotSmartCallRequest& setCalledShowNumber(string calledShowNumber) { DARABONBA_PTR_SET_VALUE(calledShowNumber_, calledShowNumber) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline BatchRobotSmartCallRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // dialogId Field Functions 
    bool hasDialogId() const { return this->dialogId_ != nullptr;};
    void deleteDialogId() { this->dialogId_ = nullptr;};
    inline string getDialogId() const { DARABONBA_PTR_GET_DEFAULT(dialogId_, "") };
    inline BatchRobotSmartCallRequest& setDialogId(string dialogId) { DARABONBA_PTR_SET_VALUE(dialogId_, dialogId) };


    // earlyMediaAsr Field Functions 
    bool hasEarlyMediaAsr() const { return this->earlyMediaAsr_ != nullptr;};
    void deleteEarlyMediaAsr() { this->earlyMediaAsr_ = nullptr;};
    inline bool getEarlyMediaAsr() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaAsr_, false) };
    inline BatchRobotSmartCallRequest& setEarlyMediaAsr(bool earlyMediaAsr) { DARABONBA_PTR_SET_VALUE(earlyMediaAsr_, earlyMediaAsr) };


    // isSelfLine Field Functions 
    bool hasIsSelfLine() const { return this->isSelfLine_ != nullptr;};
    void deleteIsSelfLine() { this->isSelfLine_ = nullptr;};
    inline bool getIsSelfLine() const { DARABONBA_PTR_GET_DEFAULT(isSelfLine_, false) };
    inline BatchRobotSmartCallRequest& setIsSelfLine(bool isSelfLine) { DARABONBA_PTR_SET_VALUE(isSelfLine_, isSelfLine) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchRobotSmartCallRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BatchRobotSmartCallRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BatchRobotSmartCallRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scheduleCall Field Functions 
    bool hasScheduleCall() const { return this->scheduleCall_ != nullptr;};
    void deleteScheduleCall() { this->scheduleCall_ = nullptr;};
    inline bool getScheduleCall() const { DARABONBA_PTR_GET_DEFAULT(scheduleCall_, false) };
    inline BatchRobotSmartCallRequest& setScheduleCall(bool scheduleCall) { DARABONBA_PTR_SET_VALUE(scheduleCall_, scheduleCall) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline int64_t getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, 0L) };
    inline BatchRobotSmartCallRequest& setScheduleTime(int64_t scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline BatchRobotSmartCallRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // ttsParam Field Functions 
    bool hasTtsParam() const { return this->ttsParam_ != nullptr;};
    void deleteTtsParam() { this->ttsParam_ = nullptr;};
    inline string getTtsParam() const { DARABONBA_PTR_GET_DEFAULT(ttsParam_, "") };
    inline BatchRobotSmartCallRequest& setTtsParam(string ttsParam) { DARABONBA_PTR_SET_VALUE(ttsParam_, ttsParam) };


    // ttsParamHead Field Functions 
    bool hasTtsParamHead() const { return this->ttsParamHead_ != nullptr;};
    void deleteTtsParamHead() { this->ttsParamHead_ = nullptr;};
    inline string getTtsParamHead() const { DARABONBA_PTR_GET_DEFAULT(ttsParamHead_, "") };
    inline BatchRobotSmartCallRequest& setTtsParamHead(string ttsParamHead) { DARABONBA_PTR_SET_VALUE(ttsParamHead_, ttsParamHead) };


  protected:
    // The called number. Only mobile phone numbers in the Chinese mainland are supported.
    // 
    // You can set up to 1,000 called numbers and separate the numbers with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> calledNumber_ {};
    // The number displayed to called parties, which must be a number you purchased. You can view the numbers you purchased in the [Voice Messaging Service console](https://dyvms.console.aliyun.com/dyvms.htm#/number/normal).
    // 
    // You can set up to 100 numbers and separate the numbers with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> calledShowNumber_ {};
    // The company name, which must be the same as the **company name** specified on the [qualification management page](https://dyvms.console.aliyun.com/dyvms.htm#/corp/normal).
    // 
    // > This parameter is optional if **isSelfLine** is set to **true**.
    shared_ptr<string> corpName_ {};
    // The ID of the robot or communication script that is used to initiate a call.
    // 
    // You can obtain the **communication script ID** from the [Communication script management](https://dyvms.console.aliyun.com/dyvms.htm#/smart-call/saas/robot/list) page.
    // 
    // This parameter is required.
    shared_ptr<string> dialogId_ {};
    // The speech recognition identifier of early media. The default value is **false**, which means that the speech recognition identifier of early media is not enabled.
    // 
    // Set the parameter to **true** if you want to enable the speech recognition identifier of early media.
    shared_ptr<bool> earlyMediaAsr_ {};
    // Specifies whether to call the self-managed line. Default value: **false**.
    shared_ptr<bool> isSelfLine_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether the call is scheduled. If you set this parameter to **true**, the **ScheduleTime** parameter is required.
    shared_ptr<bool> scheduleCall_ {};
    // The preset call time. This value is a UNIX timestamp. Unit: milliseconds.
    // 
    // >  This parameter is required only when **ScheduleCall** is set to **true**.
    shared_ptr<int64_t> scheduleTime_ {};
    // The task name. The task name can be up to 30 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The variable value of the TTS template, in the JSON format.
    // 
    // The variable value must correspond to a number. The TtsParam parameter must be used together with the TtsParamHead parameter.
    shared_ptr<string> ttsParam_ {};
    // The call tasks with variables, in the JSON format.
    // 
    // The parameter value is a list of variable names. The TtsParamHead parameter must be used together with the TtsParam parameter.
    shared_ptr<string> ttsParamHead_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
