// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHBROADCASTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHBROADCASTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushBroadcastRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushBroadcastRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidChannel, androidChannel_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BindEndTime, bindEndTime_);
      DARABONBA_PTR_TO_JSON(BindPeriod, bindPeriod_);
      DARABONBA_PTR_TO_JSON(BindStartTime, bindStartTime_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(ExpiredSeconds, expiredSeconds_);
      DARABONBA_PTR_TO_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_TO_JSON(MiChannelId, miChannelId_);
      DARABONBA_PTR_TO_JSON(Msgkey, msgkey_);
      DARABONBA_ANY_TO_JSON(NotifyLevel, notifyLevel_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(PushAction, pushAction_);
      DARABONBA_PTR_TO_JSON(PushStatus, pushStatus_);
      DARABONBA_PTR_TO_JSON(Silent, silent_);
      DARABONBA_PTR_TO_JSON(StrategyContent, strategyContent_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TemplateKeyValue, templateKeyValue_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_ANY_TO_JSON(ThirdChannelCategory, thirdChannelCategory_);
      DARABONBA_PTR_TO_JSON(TimeMode, timeMode_);
      DARABONBA_ANY_TO_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_TO_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_TO_JSON(UnBindEndTime, unBindEndTime_);
      DARABONBA_PTR_TO_JSON(UnBindPeriod, unBindPeriod_);
      DARABONBA_PTR_TO_JSON(UnBindStartTime, unBindStartTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PushBroadcastRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidChannel, androidChannel_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BindEndTime, bindEndTime_);
      DARABONBA_PTR_FROM_JSON(BindPeriod, bindPeriod_);
      DARABONBA_PTR_FROM_JSON(BindStartTime, bindStartTime_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(ExpiredSeconds, expiredSeconds_);
      DARABONBA_PTR_FROM_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_FROM_JSON(MiChannelId, miChannelId_);
      DARABONBA_PTR_FROM_JSON(Msgkey, msgkey_);
      DARABONBA_ANY_FROM_JSON(NotifyLevel, notifyLevel_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(PushAction, pushAction_);
      DARABONBA_PTR_FROM_JSON(PushStatus, pushStatus_);
      DARABONBA_PTR_FROM_JSON(Silent, silent_);
      DARABONBA_PTR_FROM_JSON(StrategyContent, strategyContent_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TemplateKeyValue, templateKeyValue_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_ANY_FROM_JSON(ThirdChannelCategory, thirdChannelCategory_);
      DARABONBA_PTR_FROM_JSON(TimeMode, timeMode_);
      DARABONBA_ANY_FROM_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_FROM_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_FROM_JSON(UnBindEndTime, unBindEndTime_);
      DARABONBA_PTR_FROM_JSON(UnBindPeriod, unBindPeriod_);
      DARABONBA_PTR_FROM_JSON(UnBindStartTime, unBindStartTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PushBroadcastRequest() = default ;
    PushBroadcastRequest(const PushBroadcastRequest &) = default ;
    PushBroadcastRequest(PushBroadcastRequest &&) = default ;
    PushBroadcastRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushBroadcastRequest() = default ;
    PushBroadcastRequest& operator=(const PushBroadcastRequest &) = default ;
    PushBroadcastRequest& operator=(PushBroadcastRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidChannel_ == nullptr
        && this->appId_ == nullptr && this->bindEndTime_ == nullptr && this->bindPeriod_ == nullptr && this->bindStartTime_ == nullptr && this->channelId_ == nullptr
        && this->classification_ == nullptr && this->deliveryType_ == nullptr && this->expiredSeconds_ == nullptr && this->extendedParams_ == nullptr && this->miChannelId_ == nullptr
        && this->msgkey_ == nullptr && this->notifyLevel_ == nullptr && this->notifyType_ == nullptr && this->pushAction_ == nullptr && this->pushStatus_ == nullptr
        && this->silent_ == nullptr && this->strategyContent_ == nullptr && this->strategyType_ == nullptr && this->taskName_ == nullptr && this->templateKeyValue_ == nullptr
        && this->templateName_ == nullptr && this->tenantId_ == nullptr && this->thirdChannelCategory_ == nullptr && this->timeMode_ == nullptr && this->transparentMessagePayload_ == nullptr
        && this->transparentMessageUrgency_ == nullptr && this->unBindEndTime_ == nullptr && this->unBindPeriod_ == nullptr && this->unBindStartTime_ == nullptr && this->workspaceId_ == nullptr; };
    // androidChannel Field Functions 
    bool hasAndroidChannel() const { return this->androidChannel_ != nullptr;};
    void deleteAndroidChannel() { this->androidChannel_ = nullptr;};
    inline int32_t getAndroidChannel() const { DARABONBA_PTR_GET_DEFAULT(androidChannel_, 0) };
    inline PushBroadcastRequest& setAndroidChannel(int32_t androidChannel) { DARABONBA_PTR_SET_VALUE(androidChannel_, androidChannel) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PushBroadcastRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bindEndTime Field Functions 
    bool hasBindEndTime() const { return this->bindEndTime_ != nullptr;};
    void deleteBindEndTime() { this->bindEndTime_ = nullptr;};
    inline int64_t getBindEndTime() const { DARABONBA_PTR_GET_DEFAULT(bindEndTime_, 0L) };
    inline PushBroadcastRequest& setBindEndTime(int64_t bindEndTime) { DARABONBA_PTR_SET_VALUE(bindEndTime_, bindEndTime) };


    // bindPeriod Field Functions 
    bool hasBindPeriod() const { return this->bindPeriod_ != nullptr;};
    void deleteBindPeriod() { this->bindPeriod_ = nullptr;};
    inline int32_t getBindPeriod() const { DARABONBA_PTR_GET_DEFAULT(bindPeriod_, 0) };
    inline PushBroadcastRequest& setBindPeriod(int32_t bindPeriod) { DARABONBA_PTR_SET_VALUE(bindPeriod_, bindPeriod) };


    // bindStartTime Field Functions 
    bool hasBindStartTime() const { return this->bindStartTime_ != nullptr;};
    void deleteBindStartTime() { this->bindStartTime_ = nullptr;};
    inline int64_t getBindStartTime() const { DARABONBA_PTR_GET_DEFAULT(bindStartTime_, 0L) };
    inline PushBroadcastRequest& setBindStartTime(int64_t bindStartTime) { DARABONBA_PTR_SET_VALUE(bindStartTime_, bindStartTime) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline PushBroadcastRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string getClassification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline PushBroadcastRequest& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline int64_t getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, 0L) };
    inline PushBroadcastRequest& setDeliveryType(int64_t deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // expiredSeconds Field Functions 
    bool hasExpiredSeconds() const { return this->expiredSeconds_ != nullptr;};
    void deleteExpiredSeconds() { this->expiredSeconds_ = nullptr;};
    inline int64_t getExpiredSeconds() const { DARABONBA_PTR_GET_DEFAULT(expiredSeconds_, 0L) };
    inline PushBroadcastRequest& setExpiredSeconds(int64_t expiredSeconds) { DARABONBA_PTR_SET_VALUE(expiredSeconds_, expiredSeconds) };


    // extendedParams Field Functions 
    bool hasExtendedParams() const { return this->extendedParams_ != nullptr;};
    void deleteExtendedParams() { this->extendedParams_ = nullptr;};
    inline string getExtendedParams() const { DARABONBA_PTR_GET_DEFAULT(extendedParams_, "") };
    inline PushBroadcastRequest& setExtendedParams(string extendedParams) { DARABONBA_PTR_SET_VALUE(extendedParams_, extendedParams) };


    // miChannelId Field Functions 
    bool hasMiChannelId() const { return this->miChannelId_ != nullptr;};
    void deleteMiChannelId() { this->miChannelId_ = nullptr;};
    inline string getMiChannelId() const { DARABONBA_PTR_GET_DEFAULT(miChannelId_, "") };
    inline PushBroadcastRequest& setMiChannelId(string miChannelId) { DARABONBA_PTR_SET_VALUE(miChannelId_, miChannelId) };


    // msgkey Field Functions 
    bool hasMsgkey() const { return this->msgkey_ != nullptr;};
    void deleteMsgkey() { this->msgkey_ = nullptr;};
    inline string getMsgkey() const { DARABONBA_PTR_GET_DEFAULT(msgkey_, "") };
    inline PushBroadcastRequest& setMsgkey(string msgkey) { DARABONBA_PTR_SET_VALUE(msgkey_, msgkey) };


    // notifyLevel Field Functions 
    bool hasNotifyLevel() const { return this->notifyLevel_ != nullptr;};
    void deleteNotifyLevel() { this->notifyLevel_ = nullptr;};
    inline     const Darabonba::Json & getNotifyLevel() const { DARABONBA_GET(notifyLevel_) };
    Darabonba::Json & getNotifyLevel() { DARABONBA_GET(notifyLevel_) };
    inline PushBroadcastRequest& setNotifyLevel(const Darabonba::Json & notifyLevel) { DARABONBA_SET_VALUE(notifyLevel_, notifyLevel) };
    inline PushBroadcastRequest& setNotifyLevel(Darabonba::Json && notifyLevel) { DARABONBA_SET_RVALUE(notifyLevel_, notifyLevel) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline PushBroadcastRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // pushAction Field Functions 
    bool hasPushAction() const { return this->pushAction_ != nullptr;};
    void deletePushAction() { this->pushAction_ = nullptr;};
    inline int64_t getPushAction() const { DARABONBA_PTR_GET_DEFAULT(pushAction_, 0L) };
    inline PushBroadcastRequest& setPushAction(int64_t pushAction) { DARABONBA_PTR_SET_VALUE(pushAction_, pushAction) };


    // pushStatus Field Functions 
    bool hasPushStatus() const { return this->pushStatus_ != nullptr;};
    void deletePushStatus() { this->pushStatus_ = nullptr;};
    inline int64_t getPushStatus() const { DARABONBA_PTR_GET_DEFAULT(pushStatus_, 0L) };
    inline PushBroadcastRequest& setPushStatus(int64_t pushStatus) { DARABONBA_PTR_SET_VALUE(pushStatus_, pushStatus) };


    // silent Field Functions 
    bool hasSilent() const { return this->silent_ != nullptr;};
    void deleteSilent() { this->silent_ = nullptr;};
    inline int64_t getSilent() const { DARABONBA_PTR_GET_DEFAULT(silent_, 0L) };
    inline PushBroadcastRequest& setSilent(int64_t silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


    // strategyContent Field Functions 
    bool hasStrategyContent() const { return this->strategyContent_ != nullptr;};
    void deleteStrategyContent() { this->strategyContent_ = nullptr;};
    inline string getStrategyContent() const { DARABONBA_PTR_GET_DEFAULT(strategyContent_, "") };
    inline PushBroadcastRequest& setStrategyContent(string strategyContent) { DARABONBA_PTR_SET_VALUE(strategyContent_, strategyContent) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline int32_t getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, 0) };
    inline PushBroadcastRequest& setStrategyType(int32_t strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline PushBroadcastRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // templateKeyValue Field Functions 
    bool hasTemplateKeyValue() const { return this->templateKeyValue_ != nullptr;};
    void deleteTemplateKeyValue() { this->templateKeyValue_ = nullptr;};
    inline string getTemplateKeyValue() const { DARABONBA_PTR_GET_DEFAULT(templateKeyValue_, "") };
    inline PushBroadcastRequest& setTemplateKeyValue(string templateKeyValue) { DARABONBA_PTR_SET_VALUE(templateKeyValue_, templateKeyValue) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline PushBroadcastRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PushBroadcastRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdChannelCategory Field Functions 
    bool hasThirdChannelCategory() const { return this->thirdChannelCategory_ != nullptr;};
    void deleteThirdChannelCategory() { this->thirdChannelCategory_ = nullptr;};
    inline     const Darabonba::Json & getThirdChannelCategory() const { DARABONBA_GET(thirdChannelCategory_) };
    Darabonba::Json & getThirdChannelCategory() { DARABONBA_GET(thirdChannelCategory_) };
    inline PushBroadcastRequest& setThirdChannelCategory(const Darabonba::Json & thirdChannelCategory) { DARABONBA_SET_VALUE(thirdChannelCategory_, thirdChannelCategory) };
    inline PushBroadcastRequest& setThirdChannelCategory(Darabonba::Json && thirdChannelCategory) { DARABONBA_SET_RVALUE(thirdChannelCategory_, thirdChannelCategory) };


    // timeMode Field Functions 
    bool hasTimeMode() const { return this->timeMode_ != nullptr;};
    void deleteTimeMode() { this->timeMode_ = nullptr;};
    inline int32_t getTimeMode() const { DARABONBA_PTR_GET_DEFAULT(timeMode_, 0) };
    inline PushBroadcastRequest& setTimeMode(int32_t timeMode) { DARABONBA_PTR_SET_VALUE(timeMode_, timeMode) };


    // transparentMessagePayload Field Functions 
    bool hasTransparentMessagePayload() const { return this->transparentMessagePayload_ != nullptr;};
    void deleteTransparentMessagePayload() { this->transparentMessagePayload_ = nullptr;};
    inline     const Darabonba::Json & getTransparentMessagePayload() const { DARABONBA_GET(transparentMessagePayload_) };
    Darabonba::Json & getTransparentMessagePayload() { DARABONBA_GET(transparentMessagePayload_) };
    inline PushBroadcastRequest& setTransparentMessagePayload(const Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_VALUE(transparentMessagePayload_, transparentMessagePayload) };
    inline PushBroadcastRequest& setTransparentMessagePayload(Darabonba::Json && transparentMessagePayload) { DARABONBA_SET_RVALUE(transparentMessagePayload_, transparentMessagePayload) };


    // transparentMessageUrgency Field Functions 
    bool hasTransparentMessageUrgency() const { return this->transparentMessageUrgency_ != nullptr;};
    void deleteTransparentMessageUrgency() { this->transparentMessageUrgency_ = nullptr;};
    inline string getTransparentMessageUrgency() const { DARABONBA_PTR_GET_DEFAULT(transparentMessageUrgency_, "") };
    inline PushBroadcastRequest& setTransparentMessageUrgency(string transparentMessageUrgency) { DARABONBA_PTR_SET_VALUE(transparentMessageUrgency_, transparentMessageUrgency) };


    // unBindEndTime Field Functions 
    bool hasUnBindEndTime() const { return this->unBindEndTime_ != nullptr;};
    void deleteUnBindEndTime() { this->unBindEndTime_ = nullptr;};
    inline int64_t getUnBindEndTime() const { DARABONBA_PTR_GET_DEFAULT(unBindEndTime_, 0L) };
    inline PushBroadcastRequest& setUnBindEndTime(int64_t unBindEndTime) { DARABONBA_PTR_SET_VALUE(unBindEndTime_, unBindEndTime) };


    // unBindPeriod Field Functions 
    bool hasUnBindPeriod() const { return this->unBindPeriod_ != nullptr;};
    void deleteUnBindPeriod() { this->unBindPeriod_ = nullptr;};
    inline int64_t getUnBindPeriod() const { DARABONBA_PTR_GET_DEFAULT(unBindPeriod_, 0L) };
    inline PushBroadcastRequest& setUnBindPeriod(int64_t unBindPeriod) { DARABONBA_PTR_SET_VALUE(unBindPeriod_, unBindPeriod) };


    // unBindStartTime Field Functions 
    bool hasUnBindStartTime() const { return this->unBindStartTime_ != nullptr;};
    void deleteUnBindStartTime() { this->unBindStartTime_ = nullptr;};
    inline int64_t getUnBindStartTime() const { DARABONBA_PTR_GET_DEFAULT(unBindStartTime_, 0L) };
    inline PushBroadcastRequest& setUnBindStartTime(int64_t unBindStartTime) { DARABONBA_PTR_SET_VALUE(unBindStartTime_, unBindStartTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PushBroadcastRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int32_t> androidChannel_ {};
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<int64_t> bindEndTime_ {};
    shared_ptr<int32_t> bindPeriod_ {};
    shared_ptr<int64_t> bindStartTime_ {};
    shared_ptr<string> channelId_ {};
    shared_ptr<string> classification_ {};
    // This parameter is required.
    shared_ptr<int64_t> deliveryType_ {};
    // This parameter is required.
    shared_ptr<int64_t> expiredSeconds_ {};
    shared_ptr<string> extendedParams_ {};
    shared_ptr<string> miChannelId_ {};
    // This parameter is required.
    shared_ptr<string> msgkey_ {};
    Darabonba::Json notifyLevel_ {};
    shared_ptr<string> notifyType_ {};
    shared_ptr<int64_t> pushAction_ {};
    shared_ptr<int64_t> pushStatus_ {};
    shared_ptr<int64_t> silent_ {};
    shared_ptr<string> strategyContent_ {};
    shared_ptr<int32_t> strategyType_ {};
    shared_ptr<string> taskName_ {};
    shared_ptr<string> templateKeyValue_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    shared_ptr<string> tenantId_ {};
    Darabonba::Json thirdChannelCategory_ {};
    shared_ptr<int32_t> timeMode_ {};
    Darabonba::Json transparentMessagePayload_ {};
    shared_ptr<string> transparentMessageUrgency_ {};
    shared_ptr<int64_t> unBindEndTime_ {};
    shared_ptr<int64_t> unBindPeriod_ {};
    shared_ptr<int64_t> unBindStartTime_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
