// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMULTIPLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHMULTIPLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushMultipleShrinkRequestTargetMsg.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushMultipleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMultipleShrinkRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ActivityContentState, activityContentState_);
      DARABONBA_PTR_TO_JSON(ActivityEvent, activityEvent_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(DismissalDate, dismissalDate_);
      DARABONBA_PTR_TO_JSON(ExpiredSeconds, expiredSeconds_);
      DARABONBA_PTR_TO_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_TO_JSON(MiChannelId, miChannelId_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(PushAction, pushAction_);
      DARABONBA_PTR_TO_JSON(Silent, silent_);
      DARABONBA_PTR_TO_JSON(StrategyContent, strategyContent_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(TargetMsg, targetMsg_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ThirdChannelCategory, thirdChannelCategoryShrink_);
      DARABONBA_ANY_TO_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_TO_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PushMultipleShrinkRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ActivityContentState, activityContentState_);
      DARABONBA_PTR_FROM_JSON(ActivityEvent, activityEvent_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(DismissalDate, dismissalDate_);
      DARABONBA_PTR_FROM_JSON(ExpiredSeconds, expiredSeconds_);
      DARABONBA_PTR_FROM_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_FROM_JSON(MiChannelId, miChannelId_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(PushAction, pushAction_);
      DARABONBA_PTR_FROM_JSON(Silent, silent_);
      DARABONBA_PTR_FROM_JSON(StrategyContent, strategyContent_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(TargetMsg, targetMsg_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ThirdChannelCategory, thirdChannelCategoryShrink_);
      DARABONBA_ANY_FROM_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_FROM_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PushMultipleShrinkRequest() = default ;
    PushMultipleShrinkRequest(const PushMultipleShrinkRequest &) = default ;
    PushMultipleShrinkRequest(PushMultipleShrinkRequest &&) = default ;
    PushMultipleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMultipleShrinkRequest() = default ;
    PushMultipleShrinkRequest& operator=(const PushMultipleShrinkRequest &) = default ;
    PushMultipleShrinkRequest& operator=(PushMultipleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityContentState_ != nullptr
        && this->activityEvent_ != nullptr && this->appId_ != nullptr && this->channelId_ != nullptr && this->classification_ != nullptr && this->deliveryType_ != nullptr
        && this->dismissalDate_ != nullptr && this->expiredSeconds_ != nullptr && this->extendedParams_ != nullptr && this->miChannelId_ != nullptr && this->notifyType_ != nullptr
        && this->pushAction_ != nullptr && this->silent_ != nullptr && this->strategyContent_ != nullptr && this->strategyType_ != nullptr && this->targetMsg_ != nullptr
        && this->taskName_ != nullptr && this->templateName_ != nullptr && this->tenantId_ != nullptr && this->thirdChannelCategoryShrink_ != nullptr && this->transparentMessagePayload_ != nullptr
        && this->transparentMessageUrgency_ != nullptr && this->workspaceId_ != nullptr; };
    // activityContentState Field Functions 
    bool hasActivityContentState() const { return this->activityContentState_ != nullptr;};
    void deleteActivityContentState() { this->activityContentState_ = nullptr;};
    inline     const Darabonba::Json & activityContentState() const { DARABONBA_GET(activityContentState_) };
    Darabonba::Json & activityContentState() { DARABONBA_GET(activityContentState_) };
    inline PushMultipleShrinkRequest& setActivityContentState(const Darabonba::Json & activityContentState) { DARABONBA_SET_VALUE(activityContentState_, activityContentState) };
    inline PushMultipleShrinkRequest& setActivityContentState(Darabonba::Json & activityContentState) { DARABONBA_SET_RVALUE(activityContentState_, activityContentState) };


    // activityEvent Field Functions 
    bool hasActivityEvent() const { return this->activityEvent_ != nullptr;};
    void deleteActivityEvent() { this->activityEvent_ = nullptr;};
    inline string activityEvent() const { DARABONBA_PTR_GET_DEFAULT(activityEvent_, "") };
    inline PushMultipleShrinkRequest& setActivityEvent(string activityEvent) { DARABONBA_PTR_SET_VALUE(activityEvent_, activityEvent) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PushMultipleShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline PushMultipleShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline PushMultipleShrinkRequest& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline int64_t deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, 0L) };
    inline PushMultipleShrinkRequest& setDeliveryType(int64_t deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // dismissalDate Field Functions 
    bool hasDismissalDate() const { return this->dismissalDate_ != nullptr;};
    void deleteDismissalDate() { this->dismissalDate_ = nullptr;};
    inline int64_t dismissalDate() const { DARABONBA_PTR_GET_DEFAULT(dismissalDate_, 0L) };
    inline PushMultipleShrinkRequest& setDismissalDate(int64_t dismissalDate) { DARABONBA_PTR_SET_VALUE(dismissalDate_, dismissalDate) };


    // expiredSeconds Field Functions 
    bool hasExpiredSeconds() const { return this->expiredSeconds_ != nullptr;};
    void deleteExpiredSeconds() { this->expiredSeconds_ = nullptr;};
    inline int64_t expiredSeconds() const { DARABONBA_PTR_GET_DEFAULT(expiredSeconds_, 0L) };
    inline PushMultipleShrinkRequest& setExpiredSeconds(int64_t expiredSeconds) { DARABONBA_PTR_SET_VALUE(expiredSeconds_, expiredSeconds) };


    // extendedParams Field Functions 
    bool hasExtendedParams() const { return this->extendedParams_ != nullptr;};
    void deleteExtendedParams() { this->extendedParams_ = nullptr;};
    inline string extendedParams() const { DARABONBA_PTR_GET_DEFAULT(extendedParams_, "") };
    inline PushMultipleShrinkRequest& setExtendedParams(string extendedParams) { DARABONBA_PTR_SET_VALUE(extendedParams_, extendedParams) };


    // miChannelId Field Functions 
    bool hasMiChannelId() const { return this->miChannelId_ != nullptr;};
    void deleteMiChannelId() { this->miChannelId_ = nullptr;};
    inline string miChannelId() const { DARABONBA_PTR_GET_DEFAULT(miChannelId_, "") };
    inline PushMultipleShrinkRequest& setMiChannelId(string miChannelId) { DARABONBA_PTR_SET_VALUE(miChannelId_, miChannelId) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline PushMultipleShrinkRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // pushAction Field Functions 
    bool hasPushAction() const { return this->pushAction_ != nullptr;};
    void deletePushAction() { this->pushAction_ = nullptr;};
    inline int64_t pushAction() const { DARABONBA_PTR_GET_DEFAULT(pushAction_, 0L) };
    inline PushMultipleShrinkRequest& setPushAction(int64_t pushAction) { DARABONBA_PTR_SET_VALUE(pushAction_, pushAction) };


    // silent Field Functions 
    bool hasSilent() const { return this->silent_ != nullptr;};
    void deleteSilent() { this->silent_ = nullptr;};
    inline int64_t silent() const { DARABONBA_PTR_GET_DEFAULT(silent_, 0L) };
    inline PushMultipleShrinkRequest& setSilent(int64_t silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


    // strategyContent Field Functions 
    bool hasStrategyContent() const { return this->strategyContent_ != nullptr;};
    void deleteStrategyContent() { this->strategyContent_ = nullptr;};
    inline string strategyContent() const { DARABONBA_PTR_GET_DEFAULT(strategyContent_, "") };
    inline PushMultipleShrinkRequest& setStrategyContent(string strategyContent) { DARABONBA_PTR_SET_VALUE(strategyContent_, strategyContent) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline int32_t strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, 0) };
    inline PushMultipleShrinkRequest& setStrategyType(int32_t strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // targetMsg Field Functions 
    bool hasTargetMsg() const { return this->targetMsg_ != nullptr;};
    void deleteTargetMsg() { this->targetMsg_ = nullptr;};
    inline const vector<PushMultipleShrinkRequestTargetMsg> & targetMsg() const { DARABONBA_PTR_GET_CONST(targetMsg_, vector<PushMultipleShrinkRequestTargetMsg>) };
    inline vector<PushMultipleShrinkRequestTargetMsg> targetMsg() { DARABONBA_PTR_GET(targetMsg_, vector<PushMultipleShrinkRequestTargetMsg>) };
    inline PushMultipleShrinkRequest& setTargetMsg(const vector<PushMultipleShrinkRequestTargetMsg> & targetMsg) { DARABONBA_PTR_SET_VALUE(targetMsg_, targetMsg) };
    inline PushMultipleShrinkRequest& setTargetMsg(vector<PushMultipleShrinkRequestTargetMsg> && targetMsg) { DARABONBA_PTR_SET_RVALUE(targetMsg_, targetMsg) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline PushMultipleShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline PushMultipleShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PushMultipleShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdChannelCategoryShrink Field Functions 
    bool hasThirdChannelCategoryShrink() const { return this->thirdChannelCategoryShrink_ != nullptr;};
    void deleteThirdChannelCategoryShrink() { this->thirdChannelCategoryShrink_ = nullptr;};
    inline string thirdChannelCategoryShrink() const { DARABONBA_PTR_GET_DEFAULT(thirdChannelCategoryShrink_, "") };
    inline PushMultipleShrinkRequest& setThirdChannelCategoryShrink(string thirdChannelCategoryShrink) { DARABONBA_PTR_SET_VALUE(thirdChannelCategoryShrink_, thirdChannelCategoryShrink) };


    // transparentMessagePayload Field Functions 
    bool hasTransparentMessagePayload() const { return this->transparentMessagePayload_ != nullptr;};
    void deleteTransparentMessagePayload() { this->transparentMessagePayload_ = nullptr;};
    inline     const Darabonba::Json & transparentMessagePayload() const { DARABONBA_GET(transparentMessagePayload_) };
    Darabonba::Json & transparentMessagePayload() { DARABONBA_GET(transparentMessagePayload_) };
    inline PushMultipleShrinkRequest& setTransparentMessagePayload(const Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_VALUE(transparentMessagePayload_, transparentMessagePayload) };
    inline PushMultipleShrinkRequest& setTransparentMessagePayload(Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_RVALUE(transparentMessagePayload_, transparentMessagePayload) };


    // transparentMessageUrgency Field Functions 
    bool hasTransparentMessageUrgency() const { return this->transparentMessageUrgency_ != nullptr;};
    void deleteTransparentMessageUrgency() { this->transparentMessageUrgency_ = nullptr;};
    inline string transparentMessageUrgency() const { DARABONBA_PTR_GET_DEFAULT(transparentMessageUrgency_, "") };
    inline PushMultipleShrinkRequest& setTransparentMessageUrgency(string transparentMessageUrgency) { DARABONBA_PTR_SET_VALUE(transparentMessageUrgency_, transparentMessageUrgency) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PushMultipleShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    Darabonba::Json activityContentState_ = nullptr;
    std::shared_ptr<string> activityEvent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> classification_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> deliveryType_ = nullptr;
    std::shared_ptr<int64_t> dismissalDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> expiredSeconds_ = nullptr;
    std::shared_ptr<string> extendedParams_ = nullptr;
    std::shared_ptr<string> miChannelId_ = nullptr;
    std::shared_ptr<string> notifyType_ = nullptr;
    std::shared_ptr<int64_t> pushAction_ = nullptr;
    std::shared_ptr<int64_t> silent_ = nullptr;
    std::shared_ptr<string> strategyContent_ = nullptr;
    std::shared_ptr<int32_t> strategyType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<PushMultipleShrinkRequestTargetMsg>> targetMsg_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> thirdChannelCategoryShrink_ = nullptr;
    Darabonba::Json transparentMessagePayload_ = nullptr;
    std::shared_ptr<string> transparentMessageUrgency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
