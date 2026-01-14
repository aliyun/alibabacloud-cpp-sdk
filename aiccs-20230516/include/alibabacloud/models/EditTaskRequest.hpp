// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class EditTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallTimeList, callTimeList_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(FlashSmsTemplateId, flashSmsTemplateId_);
      DARABONBA_PTR_TO_JSON(FlashSmsType, flashSmsType_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlaySleepVal, playSleepVal_);
      DARABONBA_PTR_TO_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_TO_JSON(RecallType, recallType_);
      DARABONBA_PTR_TO_JSON(RecordPath, recordPath_);
      DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_TO_JSON(RepeatReason, repeatReason_);
      DARABONBA_PTR_TO_JSON(RepeatTimes, repeatTimes_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SendSmsPlan, sendSmsPlan_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, EditTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallTimeList, callTimeList_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(FlashSmsTemplateId, flashSmsTemplateId_);
      DARABONBA_PTR_FROM_JSON(FlashSmsType, flashSmsType_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlaySleepVal, playSleepVal_);
      DARABONBA_PTR_FROM_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
      DARABONBA_PTR_FROM_JSON(RecordPath, recordPath_);
      DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_FROM_JSON(RepeatReason, repeatReason_);
      DARABONBA_PTR_FROM_JSON(RepeatTimes, repeatTimes_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SendSmsPlan, sendSmsPlan_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    EditTaskRequest() = default ;
    EditTaskRequest(const EditTaskRequest &) = default ;
    EditTaskRequest(EditTaskRequest &&) = default ;
    EditTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditTaskRequest() = default ;
    EditTaskRequest& operator=(const EditTaskRequest &) = default ;
    EditTaskRequest& operator=(EditTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SendSmsPlan : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SendSmsPlan& obj) { 
        DARABONBA_PTR_TO_JSON(IntentTags, intentTags_);
        DARABONBA_PTR_TO_JSON(SmsTemplateId, smsTemplateId_);
      };
      friend void from_json(const Darabonba::Json& j, SendSmsPlan& obj) { 
        DARABONBA_PTR_FROM_JSON(IntentTags, intentTags_);
        DARABONBA_PTR_FROM_JSON(SmsTemplateId, smsTemplateId_);
      };
      SendSmsPlan() = default ;
      SendSmsPlan(const SendSmsPlan &) = default ;
      SendSmsPlan(SendSmsPlan &&) = default ;
      SendSmsPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SendSmsPlan() = default ;
      SendSmsPlan& operator=(const SendSmsPlan &) = default ;
      SendSmsPlan& operator=(SendSmsPlan &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->intentTags_ == nullptr
        && this->smsTemplateId_ == nullptr; };
      // intentTags Field Functions 
      bool hasIntentTags() const { return this->intentTags_ != nullptr;};
      void deleteIntentTags() { this->intentTags_ = nullptr;};
      inline const vector<string> & getIntentTags() const { DARABONBA_PTR_GET_CONST(intentTags_, vector<string>) };
      inline vector<string> getIntentTags() { DARABONBA_PTR_GET(intentTags_, vector<string>) };
      inline SendSmsPlan& setIntentTags(const vector<string> & intentTags) { DARABONBA_PTR_SET_VALUE(intentTags_, intentTags) };
      inline SendSmsPlan& setIntentTags(vector<string> && intentTags) { DARABONBA_PTR_SET_RVALUE(intentTags_, intentTags) };


      // smsTemplateId Field Functions 
      bool hasSmsTemplateId() const { return this->smsTemplateId_ != nullptr;};
      void deleteSmsTemplateId() { this->smsTemplateId_ = nullptr;};
      inline int64_t getSmsTemplateId() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateId_, 0L) };
      inline SendSmsPlan& setSmsTemplateId(int64_t smsTemplateId) { DARABONBA_PTR_SET_VALUE(smsTemplateId_, smsTemplateId) };


    protected:
      // 意向标签
      shared_ptr<vector<string>> intentTags_ {};
      // 短信模板ID
      shared_ptr<int64_t> smsTemplateId_ {};
    };

    class CallTimeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallTimeList& obj) { 
        DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      };
      friend void from_json(const Darabonba::Json& j, CallTimeList& obj) { 
        DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      };
      CallTimeList() = default ;
      CallTimeList(const CallTimeList &) = default ;
      CallTimeList(CallTimeList &&) = default ;
      CallTimeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallTimeList() = default ;
      CallTimeList& operator=(const CallTimeList &) = default ;
      CallTimeList& operator=(CallTimeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callTime_ == nullptr; };
      // callTime Field Functions 
      bool hasCallTime() const { return this->callTime_ != nullptr;};
      void deleteCallTime() { this->callTime_ = nullptr;};
      inline const vector<string> & getCallTime() const { DARABONBA_PTR_GET_CONST(callTime_, vector<string>) };
      inline vector<string> getCallTime() { DARABONBA_PTR_GET(callTime_, vector<string>) };
      inline CallTimeList& setCallTime(const vector<string> & callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };
      inline CallTimeList& setCallTime(vector<string> && callTime) { DARABONBA_PTR_SET_RVALUE(callTime_, callTime) };


    protected:
      shared_ptr<vector<string>> callTime_ {};
    };

    virtual bool empty() const override { return this->callTimeList_ == nullptr
        && this->callbackUrl_ == nullptr && this->flashSmsTemplateId_ == nullptr && this->flashSmsType_ == nullptr && this->maxConcurrency_ == nullptr && this->name_ == nullptr
        && this->ownerId_ == nullptr && this->playSleepVal_ == nullptr && this->playTimes_ == nullptr && this->recallType_ == nullptr && this->recordPath_ == nullptr
        && this->repeatCount_ == nullptr && this->repeatInterval_ == nullptr && this->repeatReason_ == nullptr && this->repeatTimes_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->sendSmsPlan_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr
        && this->templateType_ == nullptr; };
    // callTimeList Field Functions 
    bool hasCallTimeList() const { return this->callTimeList_ != nullptr;};
    void deleteCallTimeList() { this->callTimeList_ = nullptr;};
    inline const vector<EditTaskRequest::CallTimeList> & getCallTimeList() const { DARABONBA_PTR_GET_CONST(callTimeList_, vector<EditTaskRequest::CallTimeList>) };
    inline vector<EditTaskRequest::CallTimeList> getCallTimeList() { DARABONBA_PTR_GET(callTimeList_, vector<EditTaskRequest::CallTimeList>) };
    inline EditTaskRequest& setCallTimeList(const vector<EditTaskRequest::CallTimeList> & callTimeList) { DARABONBA_PTR_SET_VALUE(callTimeList_, callTimeList) };
    inline EditTaskRequest& setCallTimeList(vector<EditTaskRequest::CallTimeList> && callTimeList) { DARABONBA_PTR_SET_RVALUE(callTimeList_, callTimeList) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline EditTaskRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // flashSmsTemplateId Field Functions 
    bool hasFlashSmsTemplateId() const { return this->flashSmsTemplateId_ != nullptr;};
    void deleteFlashSmsTemplateId() { this->flashSmsTemplateId_ = nullptr;};
    inline int64_t getFlashSmsTemplateId() const { DARABONBA_PTR_GET_DEFAULT(flashSmsTemplateId_, 0L) };
    inline EditTaskRequest& setFlashSmsTemplateId(int64_t flashSmsTemplateId) { DARABONBA_PTR_SET_VALUE(flashSmsTemplateId_, flashSmsTemplateId) };


    // flashSmsType Field Functions 
    bool hasFlashSmsType() const { return this->flashSmsType_ != nullptr;};
    void deleteFlashSmsType() { this->flashSmsType_ = nullptr;};
    inline int64_t getFlashSmsType() const { DARABONBA_PTR_GET_DEFAULT(flashSmsType_, 0L) };
    inline EditTaskRequest& setFlashSmsType(int64_t flashSmsType) { DARABONBA_PTR_SET_VALUE(flashSmsType_, flashSmsType) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int64_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0L) };
    inline EditTaskRequest& setMaxConcurrency(int64_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EditTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EditTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playSleepVal Field Functions 
    bool hasPlaySleepVal() const { return this->playSleepVal_ != nullptr;};
    void deletePlaySleepVal() { this->playSleepVal_ = nullptr;};
    inline int64_t getPlaySleepVal() const { DARABONBA_PTR_GET_DEFAULT(playSleepVal_, 0L) };
    inline EditTaskRequest& setPlaySleepVal(int64_t playSleepVal) { DARABONBA_PTR_SET_VALUE(playSleepVal_, playSleepVal) };


    // playTimes Field Functions 
    bool hasPlayTimes() const { return this->playTimes_ != nullptr;};
    void deletePlayTimes() { this->playTimes_ = nullptr;};
    inline int64_t getPlayTimes() const { DARABONBA_PTR_GET_DEFAULT(playTimes_, 0L) };
    inline EditTaskRequest& setPlayTimes(int64_t playTimes) { DARABONBA_PTR_SET_VALUE(playTimes_, playTimes) };


    // recallType Field Functions 
    bool hasRecallType() const { return this->recallType_ != nullptr;};
    void deleteRecallType() { this->recallType_ = nullptr;};
    inline int64_t getRecallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, 0L) };
    inline EditTaskRequest& setRecallType(int64_t recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


    // recordPath Field Functions 
    bool hasRecordPath() const { return this->recordPath_ != nullptr;};
    void deleteRecordPath() { this->recordPath_ = nullptr;};
    inline string getRecordPath() const { DARABONBA_PTR_GET_DEFAULT(recordPath_, "") };
    inline EditTaskRequest& setRecordPath(string recordPath) { DARABONBA_PTR_SET_VALUE(recordPath_, recordPath) };


    // repeatCount Field Functions 
    bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
    void deleteRepeatCount() { this->repeatCount_ = nullptr;};
    inline int64_t getRepeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0L) };
    inline EditTaskRequest& setRepeatCount(int64_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline EditTaskRequest& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // repeatReason Field Functions 
    bool hasRepeatReason() const { return this->repeatReason_ != nullptr;};
    void deleteRepeatReason() { this->repeatReason_ = nullptr;};
    inline const vector<int64_t> & getRepeatReason() const { DARABONBA_PTR_GET_CONST(repeatReason_, vector<int64_t>) };
    inline vector<int64_t> getRepeatReason() { DARABONBA_PTR_GET(repeatReason_, vector<int64_t>) };
    inline EditTaskRequest& setRepeatReason(const vector<int64_t> & repeatReason) { DARABONBA_PTR_SET_VALUE(repeatReason_, repeatReason) };
    inline EditTaskRequest& setRepeatReason(vector<int64_t> && repeatReason) { DARABONBA_PTR_SET_RVALUE(repeatReason_, repeatReason) };


    // repeatTimes Field Functions 
    bool hasRepeatTimes() const { return this->repeatTimes_ != nullptr;};
    void deleteRepeatTimes() { this->repeatTimes_ = nullptr;};
    inline const vector<string> & getRepeatTimes() const { DARABONBA_PTR_GET_CONST(repeatTimes_, vector<string>) };
    inline vector<string> getRepeatTimes() { DARABONBA_PTR_GET(repeatTimes_, vector<string>) };
    inline EditTaskRequest& setRepeatTimes(const vector<string> & repeatTimes) { DARABONBA_PTR_SET_VALUE(repeatTimes_, repeatTimes) };
    inline EditTaskRequest& setRepeatTimes(vector<string> && repeatTimes) { DARABONBA_PTR_SET_RVALUE(repeatTimes_, repeatTimes) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EditTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EditTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sendSmsPlan Field Functions 
    bool hasSendSmsPlan() const { return this->sendSmsPlan_ != nullptr;};
    void deleteSendSmsPlan() { this->sendSmsPlan_ = nullptr;};
    inline const vector<EditTaskRequest::SendSmsPlan> & getSendSmsPlan() const { DARABONBA_PTR_GET_CONST(sendSmsPlan_, vector<EditTaskRequest::SendSmsPlan>) };
    inline vector<EditTaskRequest::SendSmsPlan> getSendSmsPlan() { DARABONBA_PTR_GET(sendSmsPlan_, vector<EditTaskRequest::SendSmsPlan>) };
    inline EditTaskRequest& setSendSmsPlan(const vector<EditTaskRequest::SendSmsPlan> & sendSmsPlan) { DARABONBA_PTR_SET_VALUE(sendSmsPlan_, sendSmsPlan) };
    inline EditTaskRequest& setSendSmsPlan(vector<EditTaskRequest::SendSmsPlan> && sendSmsPlan) { DARABONBA_PTR_SET_RVALUE(sendSmsPlan_, sendSmsPlan) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline EditTaskRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline EditTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline EditTaskRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int64_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0L) };
    inline EditTaskRequest& setTemplateType(int64_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // 外呼时间
    shared_ptr<vector<EditTaskRequest::CallTimeList>> callTimeList_ {};
    // 回调地址
    shared_ptr<string> callbackUrl_ {};
    // 当发送闪信配置为1时，闪信模板ID必填
    shared_ptr<int64_t> flashSmsTemplateId_ {};
    // 发送闪信配置,默认为0,0不发送闪信.1发送闪信
    shared_ptr<int64_t> flashSmsType_ {};
    // 并发数
    shared_ptr<int64_t> maxConcurrency_ {};
    // 任务名称
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 播放间隔时长
    shared_ptr<int64_t> playSleepVal_ {};
    // 录音播放次数
    shared_ptr<int64_t> playTimes_ {};
    // 重呼配置
    shared_ptr<int64_t> recallType_ {};
    // 录音地址
    shared_ptr<string> recordPath_ {};
    // 重呼次数
    shared_ptr<int64_t> repeatCount_ {};
    // 重呼间隔
    shared_ptr<int64_t> repeatInterval_ {};
    // 重呼条件
    shared_ptr<vector<int64_t>> repeatReason_ {};
    // 重呼时间
    shared_ptr<vector<string>> repeatTimes_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 短信发送规则
    shared_ptr<vector<EditTaskRequest::SendSmsPlan>> sendSmsPlan_ {};
    // 任务状态
    shared_ptr<int64_t> status_ {};
    // 任务id
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
    // 话术模板ID
    shared_ptr<int64_t> templateId_ {};
    // 话术模板类型
    shared_ptr<int64_t> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
