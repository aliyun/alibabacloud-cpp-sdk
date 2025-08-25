// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHSIMPLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHSIMPLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class PushSimpleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushSimpleShrinkRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ActivityContentState, activityContentState_);
      DARABONBA_PTR_TO_JSON(ActivityEvent, activityEvent_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(DismissalDate, dismissalDate_);
      DARABONBA_PTR_TO_JSON(ExpiredSeconds, expiredSeconds_);
      DARABONBA_PTR_TO_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_TO_JSON(IconUrls, iconUrls_);
      DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(MiChannelId, miChannelId_);
      DARABONBA_PTR_TO_JSON(NotifyLevel, notifyLevelShrink_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(PushAction, pushAction_);
      DARABONBA_PTR_TO_JSON(PushStyle, pushStyle_);
      DARABONBA_PTR_TO_JSON(Silent, silent_);
      DARABONBA_PTR_TO_JSON(StrategyContent, strategyContent_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(TargetMsgkey, targetMsgkey_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ThirdChannelCategory, thirdChannelCategoryShrink_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_ANY_TO_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_TO_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PushSimpleShrinkRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ActivityContentState, activityContentState_);
      DARABONBA_PTR_FROM_JSON(ActivityEvent, activityEvent_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(DismissalDate, dismissalDate_);
      DARABONBA_PTR_FROM_JSON(ExpiredSeconds, expiredSeconds_);
      DARABONBA_PTR_FROM_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_FROM_JSON(IconUrls, iconUrls_);
      DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(MiChannelId, miChannelId_);
      DARABONBA_PTR_FROM_JSON(NotifyLevel, notifyLevelShrink_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(PushAction, pushAction_);
      DARABONBA_PTR_FROM_JSON(PushStyle, pushStyle_);
      DARABONBA_PTR_FROM_JSON(Silent, silent_);
      DARABONBA_PTR_FROM_JSON(StrategyContent, strategyContent_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(TargetMsgkey, targetMsgkey_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ThirdChannelCategory, thirdChannelCategoryShrink_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_ANY_FROM_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_FROM_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PushSimpleShrinkRequest() = default ;
    PushSimpleShrinkRequest(const PushSimpleShrinkRequest &) = default ;
    PushSimpleShrinkRequest(PushSimpleShrinkRequest &&) = default ;
    PushSimpleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushSimpleShrinkRequest() = default ;
    PushSimpleShrinkRequest& operator=(const PushSimpleShrinkRequest &) = default ;
    PushSimpleShrinkRequest& operator=(PushSimpleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityContentState_ != nullptr
        && this->activityEvent_ != nullptr && this->appId_ != nullptr && this->channelId_ != nullptr && this->classification_ != nullptr && this->content_ != nullptr
        && this->deliveryType_ != nullptr && this->dismissalDate_ != nullptr && this->expiredSeconds_ != nullptr && this->extendedParams_ != nullptr && this->iconUrls_ != nullptr
        && this->imageUrls_ != nullptr && this->miChannelId_ != nullptr && this->notifyLevelShrink_ != nullptr && this->notifyType_ != nullptr && this->pushAction_ != nullptr
        && this->pushStyle_ != nullptr && this->silent_ != nullptr && this->strategyContent_ != nullptr && this->strategyType_ != nullptr && this->targetMsgkey_ != nullptr
        && this->taskName_ != nullptr && this->tenantId_ != nullptr && this->thirdChannelCategoryShrink_ != nullptr && this->title_ != nullptr && this->transparentMessagePayload_ != nullptr
        && this->transparentMessageUrgency_ != nullptr && this->uri_ != nullptr && this->workspaceId_ != nullptr; };
    // activityContentState Field Functions 
    bool hasActivityContentState() const { return this->activityContentState_ != nullptr;};
    void deleteActivityContentState() { this->activityContentState_ = nullptr;};
    inline     const Darabonba::Json & activityContentState() const { DARABONBA_GET(activityContentState_) };
    Darabonba::Json & activityContentState() { DARABONBA_GET(activityContentState_) };
    inline PushSimpleShrinkRequest& setActivityContentState(const Darabonba::Json & activityContentState) { DARABONBA_SET_VALUE(activityContentState_, activityContentState) };
    inline PushSimpleShrinkRequest& setActivityContentState(Darabonba::Json & activityContentState) { DARABONBA_SET_RVALUE(activityContentState_, activityContentState) };


    // activityEvent Field Functions 
    bool hasActivityEvent() const { return this->activityEvent_ != nullptr;};
    void deleteActivityEvent() { this->activityEvent_ = nullptr;};
    inline string activityEvent() const { DARABONBA_PTR_GET_DEFAULT(activityEvent_, "") };
    inline PushSimpleShrinkRequest& setActivityEvent(string activityEvent) { DARABONBA_PTR_SET_VALUE(activityEvent_, activityEvent) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PushSimpleShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline PushSimpleShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline PushSimpleShrinkRequest& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PushSimpleShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline int64_t deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, 0L) };
    inline PushSimpleShrinkRequest& setDeliveryType(int64_t deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // dismissalDate Field Functions 
    bool hasDismissalDate() const { return this->dismissalDate_ != nullptr;};
    void deleteDismissalDate() { this->dismissalDate_ = nullptr;};
    inline int64_t dismissalDate() const { DARABONBA_PTR_GET_DEFAULT(dismissalDate_, 0L) };
    inline PushSimpleShrinkRequest& setDismissalDate(int64_t dismissalDate) { DARABONBA_PTR_SET_VALUE(dismissalDate_, dismissalDate) };


    // expiredSeconds Field Functions 
    bool hasExpiredSeconds() const { return this->expiredSeconds_ != nullptr;};
    void deleteExpiredSeconds() { this->expiredSeconds_ = nullptr;};
    inline int64_t expiredSeconds() const { DARABONBA_PTR_GET_DEFAULT(expiredSeconds_, 0L) };
    inline PushSimpleShrinkRequest& setExpiredSeconds(int64_t expiredSeconds) { DARABONBA_PTR_SET_VALUE(expiredSeconds_, expiredSeconds) };


    // extendedParams Field Functions 
    bool hasExtendedParams() const { return this->extendedParams_ != nullptr;};
    void deleteExtendedParams() { this->extendedParams_ = nullptr;};
    inline string extendedParams() const { DARABONBA_PTR_GET_DEFAULT(extendedParams_, "") };
    inline PushSimpleShrinkRequest& setExtendedParams(string extendedParams) { DARABONBA_PTR_SET_VALUE(extendedParams_, extendedParams) };


    // iconUrls Field Functions 
    bool hasIconUrls() const { return this->iconUrls_ != nullptr;};
    void deleteIconUrls() { this->iconUrls_ = nullptr;};
    inline string iconUrls() const { DARABONBA_PTR_GET_DEFAULT(iconUrls_, "") };
    inline PushSimpleShrinkRequest& setIconUrls(string iconUrls) { DARABONBA_PTR_SET_VALUE(iconUrls_, iconUrls) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline string imageUrls() const { DARABONBA_PTR_GET_DEFAULT(imageUrls_, "") };
    inline PushSimpleShrinkRequest& setImageUrls(string imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };


    // miChannelId Field Functions 
    bool hasMiChannelId() const { return this->miChannelId_ != nullptr;};
    void deleteMiChannelId() { this->miChannelId_ = nullptr;};
    inline string miChannelId() const { DARABONBA_PTR_GET_DEFAULT(miChannelId_, "") };
    inline PushSimpleShrinkRequest& setMiChannelId(string miChannelId) { DARABONBA_PTR_SET_VALUE(miChannelId_, miChannelId) };


    // notifyLevelShrink Field Functions 
    bool hasNotifyLevelShrink() const { return this->notifyLevelShrink_ != nullptr;};
    void deleteNotifyLevelShrink() { this->notifyLevelShrink_ = nullptr;};
    inline string notifyLevelShrink() const { DARABONBA_PTR_GET_DEFAULT(notifyLevelShrink_, "") };
    inline PushSimpleShrinkRequest& setNotifyLevelShrink(string notifyLevelShrink) { DARABONBA_PTR_SET_VALUE(notifyLevelShrink_, notifyLevelShrink) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline PushSimpleShrinkRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // pushAction Field Functions 
    bool hasPushAction() const { return this->pushAction_ != nullptr;};
    void deletePushAction() { this->pushAction_ = nullptr;};
    inline int64_t pushAction() const { DARABONBA_PTR_GET_DEFAULT(pushAction_, 0L) };
    inline PushSimpleShrinkRequest& setPushAction(int64_t pushAction) { DARABONBA_PTR_SET_VALUE(pushAction_, pushAction) };


    // pushStyle Field Functions 
    bool hasPushStyle() const { return this->pushStyle_ != nullptr;};
    void deletePushStyle() { this->pushStyle_ = nullptr;};
    inline int32_t pushStyle() const { DARABONBA_PTR_GET_DEFAULT(pushStyle_, 0) };
    inline PushSimpleShrinkRequest& setPushStyle(int32_t pushStyle) { DARABONBA_PTR_SET_VALUE(pushStyle_, pushStyle) };


    // silent Field Functions 
    bool hasSilent() const { return this->silent_ != nullptr;};
    void deleteSilent() { this->silent_ = nullptr;};
    inline int64_t silent() const { DARABONBA_PTR_GET_DEFAULT(silent_, 0L) };
    inline PushSimpleShrinkRequest& setSilent(int64_t silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


    // strategyContent Field Functions 
    bool hasStrategyContent() const { return this->strategyContent_ != nullptr;};
    void deleteStrategyContent() { this->strategyContent_ = nullptr;};
    inline string strategyContent() const { DARABONBA_PTR_GET_DEFAULT(strategyContent_, "") };
    inline PushSimpleShrinkRequest& setStrategyContent(string strategyContent) { DARABONBA_PTR_SET_VALUE(strategyContent_, strategyContent) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline int32_t strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, 0) };
    inline PushSimpleShrinkRequest& setStrategyType(int32_t strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // targetMsgkey Field Functions 
    bool hasTargetMsgkey() const { return this->targetMsgkey_ != nullptr;};
    void deleteTargetMsgkey() { this->targetMsgkey_ = nullptr;};
    inline string targetMsgkey() const { DARABONBA_PTR_GET_DEFAULT(targetMsgkey_, "") };
    inline PushSimpleShrinkRequest& setTargetMsgkey(string targetMsgkey) { DARABONBA_PTR_SET_VALUE(targetMsgkey_, targetMsgkey) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline PushSimpleShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PushSimpleShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdChannelCategoryShrink Field Functions 
    bool hasThirdChannelCategoryShrink() const { return this->thirdChannelCategoryShrink_ != nullptr;};
    void deleteThirdChannelCategoryShrink() { this->thirdChannelCategoryShrink_ = nullptr;};
    inline string thirdChannelCategoryShrink() const { DARABONBA_PTR_GET_DEFAULT(thirdChannelCategoryShrink_, "") };
    inline PushSimpleShrinkRequest& setThirdChannelCategoryShrink(string thirdChannelCategoryShrink) { DARABONBA_PTR_SET_VALUE(thirdChannelCategoryShrink_, thirdChannelCategoryShrink) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushSimpleShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // transparentMessagePayload Field Functions 
    bool hasTransparentMessagePayload() const { return this->transparentMessagePayload_ != nullptr;};
    void deleteTransparentMessagePayload() { this->transparentMessagePayload_ = nullptr;};
    inline     const Darabonba::Json & transparentMessagePayload() const { DARABONBA_GET(transparentMessagePayload_) };
    Darabonba::Json & transparentMessagePayload() { DARABONBA_GET(transparentMessagePayload_) };
    inline PushSimpleShrinkRequest& setTransparentMessagePayload(const Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_VALUE(transparentMessagePayload_, transparentMessagePayload) };
    inline PushSimpleShrinkRequest& setTransparentMessagePayload(Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_RVALUE(transparentMessagePayload_, transparentMessagePayload) };


    // transparentMessageUrgency Field Functions 
    bool hasTransparentMessageUrgency() const { return this->transparentMessageUrgency_ != nullptr;};
    void deleteTransparentMessageUrgency() { this->transparentMessageUrgency_ = nullptr;};
    inline string transparentMessageUrgency() const { DARABONBA_PTR_GET_DEFAULT(transparentMessageUrgency_, "") };
    inline PushSimpleShrinkRequest& setTransparentMessageUrgency(string transparentMessageUrgency) { DARABONBA_PTR_SET_VALUE(transparentMessageUrgency_, transparentMessageUrgency) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline PushSimpleShrinkRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PushSimpleShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    Darabonba::Json activityContentState_ = nullptr;
    std::shared_ptr<string> activityEvent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> classification_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> deliveryType_ = nullptr;
    std::shared_ptr<int64_t> dismissalDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> expiredSeconds_ = nullptr;
    std::shared_ptr<string> extendedParams_ = nullptr;
    std::shared_ptr<string> iconUrls_ = nullptr;
    std::shared_ptr<string> imageUrls_ = nullptr;
    std::shared_ptr<string> miChannelId_ = nullptr;
    std::shared_ptr<string> notifyLevelShrink_ = nullptr;
    std::shared_ptr<string> notifyType_ = nullptr;
    std::shared_ptr<int64_t> pushAction_ = nullptr;
    std::shared_ptr<int32_t> pushStyle_ = nullptr;
    std::shared_ptr<int64_t> silent_ = nullptr;
    std::shared_ptr<string> strategyContent_ = nullptr;
    std::shared_ptr<int32_t> strategyType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetMsgkey_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> thirdChannelCategoryShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    Darabonba::Json transparentMessagePayload_ = nullptr;
    std::shared_ptr<string> transparentMessageUrgency_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
