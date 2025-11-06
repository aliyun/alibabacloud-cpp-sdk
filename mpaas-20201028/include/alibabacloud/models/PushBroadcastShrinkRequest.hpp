// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHBROADCASTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHBROADCASTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushBroadcastShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushBroadcastShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(NotifyLevel, notifyLevelShrink_);
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
      DARABONBA_PTR_TO_JSON(ThirdChannelCategory, thirdChannelCategoryShrink_);
      DARABONBA_PTR_TO_JSON(TimeMode, timeMode_);
      DARABONBA_ANY_TO_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_TO_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_TO_JSON(UnBindEndTime, unBindEndTime_);
      DARABONBA_PTR_TO_JSON(UnBindPeriod, unBindPeriod_);
      DARABONBA_PTR_TO_JSON(UnBindStartTime, unBindStartTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PushBroadcastShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(NotifyLevel, notifyLevelShrink_);
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
      DARABONBA_PTR_FROM_JSON(ThirdChannelCategory, thirdChannelCategoryShrink_);
      DARABONBA_PTR_FROM_JSON(TimeMode, timeMode_);
      DARABONBA_ANY_FROM_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_FROM_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_FROM_JSON(UnBindEndTime, unBindEndTime_);
      DARABONBA_PTR_FROM_JSON(UnBindPeriod, unBindPeriod_);
      DARABONBA_PTR_FROM_JSON(UnBindStartTime, unBindStartTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PushBroadcastShrinkRequest() = default ;
    PushBroadcastShrinkRequest(const PushBroadcastShrinkRequest &) = default ;
    PushBroadcastShrinkRequest(PushBroadcastShrinkRequest &&) = default ;
    PushBroadcastShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushBroadcastShrinkRequest() = default ;
    PushBroadcastShrinkRequest& operator=(const PushBroadcastShrinkRequest &) = default ;
    PushBroadcastShrinkRequest& operator=(PushBroadcastShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidChannel_ == nullptr
        && return this->appId_ == nullptr && return this->bindEndTime_ == nullptr && return this->bindPeriod_ == nullptr && return this->bindStartTime_ == nullptr && return this->channelId_ == nullptr
        && return this->classification_ == nullptr && return this->deliveryType_ == nullptr && return this->expiredSeconds_ == nullptr && return this->extendedParams_ == nullptr && return this->miChannelId_ == nullptr
        && return this->msgkey_ == nullptr && return this->notifyLevelShrink_ == nullptr && return this->notifyType_ == nullptr && return this->pushAction_ == nullptr && return this->pushStatus_ == nullptr
        && return this->silent_ == nullptr && return this->strategyContent_ == nullptr && return this->strategyType_ == nullptr && return this->taskName_ == nullptr && return this->templateKeyValue_ == nullptr
        && return this->templateName_ == nullptr && return this->tenantId_ == nullptr && return this->thirdChannelCategoryShrink_ == nullptr && return this->timeMode_ == nullptr && return this->transparentMessagePayload_ == nullptr
        && return this->transparentMessageUrgency_ == nullptr && return this->unBindEndTime_ == nullptr && return this->unBindPeriod_ == nullptr && return this->unBindStartTime_ == nullptr && return this->workspaceId_ == nullptr; };
    // androidChannel Field Functions 
    bool hasAndroidChannel() const { return this->androidChannel_ != nullptr;};
    void deleteAndroidChannel() { this->androidChannel_ = nullptr;};
    inline int32_t androidChannel() const { DARABONBA_PTR_GET_DEFAULT(androidChannel_, 0) };
    inline PushBroadcastShrinkRequest& setAndroidChannel(int32_t androidChannel) { DARABONBA_PTR_SET_VALUE(androidChannel_, androidChannel) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PushBroadcastShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bindEndTime Field Functions 
    bool hasBindEndTime() const { return this->bindEndTime_ != nullptr;};
    void deleteBindEndTime() { this->bindEndTime_ = nullptr;};
    inline int64_t bindEndTime() const { DARABONBA_PTR_GET_DEFAULT(bindEndTime_, 0L) };
    inline PushBroadcastShrinkRequest& setBindEndTime(int64_t bindEndTime) { DARABONBA_PTR_SET_VALUE(bindEndTime_, bindEndTime) };


    // bindPeriod Field Functions 
    bool hasBindPeriod() const { return this->bindPeriod_ != nullptr;};
    void deleteBindPeriod() { this->bindPeriod_ = nullptr;};
    inline int32_t bindPeriod() const { DARABONBA_PTR_GET_DEFAULT(bindPeriod_, 0) };
    inline PushBroadcastShrinkRequest& setBindPeriod(int32_t bindPeriod) { DARABONBA_PTR_SET_VALUE(bindPeriod_, bindPeriod) };


    // bindStartTime Field Functions 
    bool hasBindStartTime() const { return this->bindStartTime_ != nullptr;};
    void deleteBindStartTime() { this->bindStartTime_ = nullptr;};
    inline int64_t bindStartTime() const { DARABONBA_PTR_GET_DEFAULT(bindStartTime_, 0L) };
    inline PushBroadcastShrinkRequest& setBindStartTime(int64_t bindStartTime) { DARABONBA_PTR_SET_VALUE(bindStartTime_, bindStartTime) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline PushBroadcastShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline PushBroadcastShrinkRequest& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline int64_t deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, 0L) };
    inline PushBroadcastShrinkRequest& setDeliveryType(int64_t deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // expiredSeconds Field Functions 
    bool hasExpiredSeconds() const { return this->expiredSeconds_ != nullptr;};
    void deleteExpiredSeconds() { this->expiredSeconds_ = nullptr;};
    inline int64_t expiredSeconds() const { DARABONBA_PTR_GET_DEFAULT(expiredSeconds_, 0L) };
    inline PushBroadcastShrinkRequest& setExpiredSeconds(int64_t expiredSeconds) { DARABONBA_PTR_SET_VALUE(expiredSeconds_, expiredSeconds) };


    // extendedParams Field Functions 
    bool hasExtendedParams() const { return this->extendedParams_ != nullptr;};
    void deleteExtendedParams() { this->extendedParams_ = nullptr;};
    inline string extendedParams() const { DARABONBA_PTR_GET_DEFAULT(extendedParams_, "") };
    inline PushBroadcastShrinkRequest& setExtendedParams(string extendedParams) { DARABONBA_PTR_SET_VALUE(extendedParams_, extendedParams) };


    // miChannelId Field Functions 
    bool hasMiChannelId() const { return this->miChannelId_ != nullptr;};
    void deleteMiChannelId() { this->miChannelId_ = nullptr;};
    inline string miChannelId() const { DARABONBA_PTR_GET_DEFAULT(miChannelId_, "") };
    inline PushBroadcastShrinkRequest& setMiChannelId(string miChannelId) { DARABONBA_PTR_SET_VALUE(miChannelId_, miChannelId) };


    // msgkey Field Functions 
    bool hasMsgkey() const { return this->msgkey_ != nullptr;};
    void deleteMsgkey() { this->msgkey_ = nullptr;};
    inline string msgkey() const { DARABONBA_PTR_GET_DEFAULT(msgkey_, "") };
    inline PushBroadcastShrinkRequest& setMsgkey(string msgkey) { DARABONBA_PTR_SET_VALUE(msgkey_, msgkey) };


    // notifyLevelShrink Field Functions 
    bool hasNotifyLevelShrink() const { return this->notifyLevelShrink_ != nullptr;};
    void deleteNotifyLevelShrink() { this->notifyLevelShrink_ = nullptr;};
    inline string notifyLevelShrink() const { DARABONBA_PTR_GET_DEFAULT(notifyLevelShrink_, "") };
    inline PushBroadcastShrinkRequest& setNotifyLevelShrink(string notifyLevelShrink) { DARABONBA_PTR_SET_VALUE(notifyLevelShrink_, notifyLevelShrink) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline PushBroadcastShrinkRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // pushAction Field Functions 
    bool hasPushAction() const { return this->pushAction_ != nullptr;};
    void deletePushAction() { this->pushAction_ = nullptr;};
    inline int64_t pushAction() const { DARABONBA_PTR_GET_DEFAULT(pushAction_, 0L) };
    inline PushBroadcastShrinkRequest& setPushAction(int64_t pushAction) { DARABONBA_PTR_SET_VALUE(pushAction_, pushAction) };


    // pushStatus Field Functions 
    bool hasPushStatus() const { return this->pushStatus_ != nullptr;};
    void deletePushStatus() { this->pushStatus_ = nullptr;};
    inline int64_t pushStatus() const { DARABONBA_PTR_GET_DEFAULT(pushStatus_, 0L) };
    inline PushBroadcastShrinkRequest& setPushStatus(int64_t pushStatus) { DARABONBA_PTR_SET_VALUE(pushStatus_, pushStatus) };


    // silent Field Functions 
    bool hasSilent() const { return this->silent_ != nullptr;};
    void deleteSilent() { this->silent_ = nullptr;};
    inline int64_t silent() const { DARABONBA_PTR_GET_DEFAULT(silent_, 0L) };
    inline PushBroadcastShrinkRequest& setSilent(int64_t silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


    // strategyContent Field Functions 
    bool hasStrategyContent() const { return this->strategyContent_ != nullptr;};
    void deleteStrategyContent() { this->strategyContent_ = nullptr;};
    inline string strategyContent() const { DARABONBA_PTR_GET_DEFAULT(strategyContent_, "") };
    inline PushBroadcastShrinkRequest& setStrategyContent(string strategyContent) { DARABONBA_PTR_SET_VALUE(strategyContent_, strategyContent) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline int32_t strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, 0) };
    inline PushBroadcastShrinkRequest& setStrategyType(int32_t strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline PushBroadcastShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // templateKeyValue Field Functions 
    bool hasTemplateKeyValue() const { return this->templateKeyValue_ != nullptr;};
    void deleteTemplateKeyValue() { this->templateKeyValue_ = nullptr;};
    inline string templateKeyValue() const { DARABONBA_PTR_GET_DEFAULT(templateKeyValue_, "") };
    inline PushBroadcastShrinkRequest& setTemplateKeyValue(string templateKeyValue) { DARABONBA_PTR_SET_VALUE(templateKeyValue_, templateKeyValue) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline PushBroadcastShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PushBroadcastShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdChannelCategoryShrink Field Functions 
    bool hasThirdChannelCategoryShrink() const { return this->thirdChannelCategoryShrink_ != nullptr;};
    void deleteThirdChannelCategoryShrink() { this->thirdChannelCategoryShrink_ = nullptr;};
    inline string thirdChannelCategoryShrink() const { DARABONBA_PTR_GET_DEFAULT(thirdChannelCategoryShrink_, "") };
    inline PushBroadcastShrinkRequest& setThirdChannelCategoryShrink(string thirdChannelCategoryShrink) { DARABONBA_PTR_SET_VALUE(thirdChannelCategoryShrink_, thirdChannelCategoryShrink) };


    // timeMode Field Functions 
    bool hasTimeMode() const { return this->timeMode_ != nullptr;};
    void deleteTimeMode() { this->timeMode_ = nullptr;};
    inline int32_t timeMode() const { DARABONBA_PTR_GET_DEFAULT(timeMode_, 0) };
    inline PushBroadcastShrinkRequest& setTimeMode(int32_t timeMode) { DARABONBA_PTR_SET_VALUE(timeMode_, timeMode) };


    // transparentMessagePayload Field Functions 
    bool hasTransparentMessagePayload() const { return this->transparentMessagePayload_ != nullptr;};
    void deleteTransparentMessagePayload() { this->transparentMessagePayload_ = nullptr;};
    inline     const Darabonba::Json & transparentMessagePayload() const { DARABONBA_GET(transparentMessagePayload_) };
    Darabonba::Json & transparentMessagePayload() { DARABONBA_GET(transparentMessagePayload_) };
    inline PushBroadcastShrinkRequest& setTransparentMessagePayload(const Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_VALUE(transparentMessagePayload_, transparentMessagePayload) };
    inline PushBroadcastShrinkRequest& setTransparentMessagePayload(Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_RVALUE(transparentMessagePayload_, transparentMessagePayload) };


    // transparentMessageUrgency Field Functions 
    bool hasTransparentMessageUrgency() const { return this->transparentMessageUrgency_ != nullptr;};
    void deleteTransparentMessageUrgency() { this->transparentMessageUrgency_ = nullptr;};
    inline string transparentMessageUrgency() const { DARABONBA_PTR_GET_DEFAULT(transparentMessageUrgency_, "") };
    inline PushBroadcastShrinkRequest& setTransparentMessageUrgency(string transparentMessageUrgency) { DARABONBA_PTR_SET_VALUE(transparentMessageUrgency_, transparentMessageUrgency) };


    // unBindEndTime Field Functions 
    bool hasUnBindEndTime() const { return this->unBindEndTime_ != nullptr;};
    void deleteUnBindEndTime() { this->unBindEndTime_ = nullptr;};
    inline int64_t unBindEndTime() const { DARABONBA_PTR_GET_DEFAULT(unBindEndTime_, 0L) };
    inline PushBroadcastShrinkRequest& setUnBindEndTime(int64_t unBindEndTime) { DARABONBA_PTR_SET_VALUE(unBindEndTime_, unBindEndTime) };


    // unBindPeriod Field Functions 
    bool hasUnBindPeriod() const { return this->unBindPeriod_ != nullptr;};
    void deleteUnBindPeriod() { this->unBindPeriod_ = nullptr;};
    inline int64_t unBindPeriod() const { DARABONBA_PTR_GET_DEFAULT(unBindPeriod_, 0L) };
    inline PushBroadcastShrinkRequest& setUnBindPeriod(int64_t unBindPeriod) { DARABONBA_PTR_SET_VALUE(unBindPeriod_, unBindPeriod) };


    // unBindStartTime Field Functions 
    bool hasUnBindStartTime() const { return this->unBindStartTime_ != nullptr;};
    void deleteUnBindStartTime() { this->unBindStartTime_ = nullptr;};
    inline int64_t unBindStartTime() const { DARABONBA_PTR_GET_DEFAULT(unBindStartTime_, 0L) };
    inline PushBroadcastShrinkRequest& setUnBindStartTime(int64_t unBindStartTime) { DARABONBA_PTR_SET_VALUE(unBindStartTime_, unBindStartTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PushBroadcastShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int32_t> androidChannel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int64_t> bindEndTime_ = nullptr;
    std::shared_ptr<int32_t> bindPeriod_ = nullptr;
    std::shared_ptr<int64_t> bindStartTime_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> classification_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> deliveryType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> expiredSeconds_ = nullptr;
    std::shared_ptr<string> extendedParams_ = nullptr;
    std::shared_ptr<string> miChannelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> msgkey_ = nullptr;
    std::shared_ptr<string> notifyLevelShrink_ = nullptr;
    std::shared_ptr<string> notifyType_ = nullptr;
    std::shared_ptr<int64_t> pushAction_ = nullptr;
    std::shared_ptr<int64_t> pushStatus_ = nullptr;
    std::shared_ptr<int64_t> silent_ = nullptr;
    std::shared_ptr<string> strategyContent_ = nullptr;
    std::shared_ptr<int32_t> strategyType_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> templateKeyValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> thirdChannelCategoryShrink_ = nullptr;
    std::shared_ptr<int32_t> timeMode_ = nullptr;
    Darabonba::Json transparentMessagePayload_ = nullptr;
    std::shared_ptr<string> transparentMessageUrgency_ = nullptr;
    std::shared_ptr<int64_t> unBindEndTime_ = nullptr;
    std::shared_ptr<int64_t> unBindPeriod_ = nullptr;
    std::shared_ptr<int64_t> unBindStartTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
