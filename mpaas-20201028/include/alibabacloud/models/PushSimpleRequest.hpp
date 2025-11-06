// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHSIMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHSIMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushSimpleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushSimpleRequest& obj) { 
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
      DARABONBA_ANY_TO_JSON(NotifyLevel, notifyLevel_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(PushAction, pushAction_);
      DARABONBA_PTR_TO_JSON(PushStyle, pushStyle_);
      DARABONBA_PTR_TO_JSON(Silent, silent_);
      DARABONBA_PTR_TO_JSON(SmsSignName, smsSignName_);
      DARABONBA_PTR_TO_JSON(SmsStrategy, smsStrategy_);
      DARABONBA_PTR_TO_JSON(SmsTemplateCode, smsTemplateCode_);
      DARABONBA_PTR_TO_JSON(SmsTemplateParam, smsTemplateParam_);
      DARABONBA_PTR_TO_JSON(StrategyContent, strategyContent_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(TargetMsgkey, targetMsgkey_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_ANY_TO_JSON(ThirdChannelCategory, thirdChannelCategory_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_ANY_TO_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_TO_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PushSimpleRequest& obj) { 
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
      DARABONBA_ANY_FROM_JSON(NotifyLevel, notifyLevel_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(PushAction, pushAction_);
      DARABONBA_PTR_FROM_JSON(PushStyle, pushStyle_);
      DARABONBA_PTR_FROM_JSON(Silent, silent_);
      DARABONBA_PTR_FROM_JSON(SmsSignName, smsSignName_);
      DARABONBA_PTR_FROM_JSON(SmsStrategy, smsStrategy_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateCode, smsTemplateCode_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateParam, smsTemplateParam_);
      DARABONBA_PTR_FROM_JSON(StrategyContent, strategyContent_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(TargetMsgkey, targetMsgkey_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_ANY_FROM_JSON(ThirdChannelCategory, thirdChannelCategory_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_ANY_FROM_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_FROM_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PushSimpleRequest() = default ;
    PushSimpleRequest(const PushSimpleRequest &) = default ;
    PushSimpleRequest(PushSimpleRequest &&) = default ;
    PushSimpleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushSimpleRequest() = default ;
    PushSimpleRequest& operator=(const PushSimpleRequest &) = default ;
    PushSimpleRequest& operator=(PushSimpleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityContentState_ == nullptr
        && return this->activityEvent_ == nullptr && return this->appId_ == nullptr && return this->channelId_ == nullptr && return this->classification_ == nullptr && return this->content_ == nullptr
        && return this->deliveryType_ == nullptr && return this->dismissalDate_ == nullptr && return this->expiredSeconds_ == nullptr && return this->extendedParams_ == nullptr && return this->iconUrls_ == nullptr
        && return this->imageUrls_ == nullptr && return this->miChannelId_ == nullptr && return this->notifyLevel_ == nullptr && return this->notifyType_ == nullptr && return this->pushAction_ == nullptr
        && return this->pushStyle_ == nullptr && return this->silent_ == nullptr && return this->smsSignName_ == nullptr && return this->smsStrategy_ == nullptr && return this->smsTemplateCode_ == nullptr
        && return this->smsTemplateParam_ == nullptr && return this->strategyContent_ == nullptr && return this->strategyType_ == nullptr && return this->targetMsgkey_ == nullptr && return this->taskName_ == nullptr
        && return this->tenantId_ == nullptr && return this->thirdChannelCategory_ == nullptr && return this->title_ == nullptr && return this->transparentMessagePayload_ == nullptr && return this->transparentMessageUrgency_ == nullptr
        && return this->uri_ == nullptr && return this->workspaceId_ == nullptr; };
    // activityContentState Field Functions 
    bool hasActivityContentState() const { return this->activityContentState_ != nullptr;};
    void deleteActivityContentState() { this->activityContentState_ = nullptr;};
    inline     const Darabonba::Json & activityContentState() const { DARABONBA_GET(activityContentState_) };
    Darabonba::Json & activityContentState() { DARABONBA_GET(activityContentState_) };
    inline PushSimpleRequest& setActivityContentState(const Darabonba::Json & activityContentState) { DARABONBA_SET_VALUE(activityContentState_, activityContentState) };
    inline PushSimpleRequest& setActivityContentState(Darabonba::Json & activityContentState) { DARABONBA_SET_RVALUE(activityContentState_, activityContentState) };


    // activityEvent Field Functions 
    bool hasActivityEvent() const { return this->activityEvent_ != nullptr;};
    void deleteActivityEvent() { this->activityEvent_ = nullptr;};
    inline string activityEvent() const { DARABONBA_PTR_GET_DEFAULT(activityEvent_, "") };
    inline PushSimpleRequest& setActivityEvent(string activityEvent) { DARABONBA_PTR_SET_VALUE(activityEvent_, activityEvent) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PushSimpleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline PushSimpleRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline PushSimpleRequest& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PushSimpleRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline int64_t deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, 0L) };
    inline PushSimpleRequest& setDeliveryType(int64_t deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // dismissalDate Field Functions 
    bool hasDismissalDate() const { return this->dismissalDate_ != nullptr;};
    void deleteDismissalDate() { this->dismissalDate_ = nullptr;};
    inline int64_t dismissalDate() const { DARABONBA_PTR_GET_DEFAULT(dismissalDate_, 0L) };
    inline PushSimpleRequest& setDismissalDate(int64_t dismissalDate) { DARABONBA_PTR_SET_VALUE(dismissalDate_, dismissalDate) };


    // expiredSeconds Field Functions 
    bool hasExpiredSeconds() const { return this->expiredSeconds_ != nullptr;};
    void deleteExpiredSeconds() { this->expiredSeconds_ = nullptr;};
    inline int64_t expiredSeconds() const { DARABONBA_PTR_GET_DEFAULT(expiredSeconds_, 0L) };
    inline PushSimpleRequest& setExpiredSeconds(int64_t expiredSeconds) { DARABONBA_PTR_SET_VALUE(expiredSeconds_, expiredSeconds) };


    // extendedParams Field Functions 
    bool hasExtendedParams() const { return this->extendedParams_ != nullptr;};
    void deleteExtendedParams() { this->extendedParams_ = nullptr;};
    inline string extendedParams() const { DARABONBA_PTR_GET_DEFAULT(extendedParams_, "") };
    inline PushSimpleRequest& setExtendedParams(string extendedParams) { DARABONBA_PTR_SET_VALUE(extendedParams_, extendedParams) };


    // iconUrls Field Functions 
    bool hasIconUrls() const { return this->iconUrls_ != nullptr;};
    void deleteIconUrls() { this->iconUrls_ = nullptr;};
    inline string iconUrls() const { DARABONBA_PTR_GET_DEFAULT(iconUrls_, "") };
    inline PushSimpleRequest& setIconUrls(string iconUrls) { DARABONBA_PTR_SET_VALUE(iconUrls_, iconUrls) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline string imageUrls() const { DARABONBA_PTR_GET_DEFAULT(imageUrls_, "") };
    inline PushSimpleRequest& setImageUrls(string imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };


    // miChannelId Field Functions 
    bool hasMiChannelId() const { return this->miChannelId_ != nullptr;};
    void deleteMiChannelId() { this->miChannelId_ = nullptr;};
    inline string miChannelId() const { DARABONBA_PTR_GET_DEFAULT(miChannelId_, "") };
    inline PushSimpleRequest& setMiChannelId(string miChannelId) { DARABONBA_PTR_SET_VALUE(miChannelId_, miChannelId) };


    // notifyLevel Field Functions 
    bool hasNotifyLevel() const { return this->notifyLevel_ != nullptr;};
    void deleteNotifyLevel() { this->notifyLevel_ = nullptr;};
    inline     const Darabonba::Json & notifyLevel() const { DARABONBA_GET(notifyLevel_) };
    Darabonba::Json & notifyLevel() { DARABONBA_GET(notifyLevel_) };
    inline PushSimpleRequest& setNotifyLevel(const Darabonba::Json & notifyLevel) { DARABONBA_SET_VALUE(notifyLevel_, notifyLevel) };
    inline PushSimpleRequest& setNotifyLevel(Darabonba::Json & notifyLevel) { DARABONBA_SET_RVALUE(notifyLevel_, notifyLevel) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline PushSimpleRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // pushAction Field Functions 
    bool hasPushAction() const { return this->pushAction_ != nullptr;};
    void deletePushAction() { this->pushAction_ = nullptr;};
    inline int64_t pushAction() const { DARABONBA_PTR_GET_DEFAULT(pushAction_, 0L) };
    inline PushSimpleRequest& setPushAction(int64_t pushAction) { DARABONBA_PTR_SET_VALUE(pushAction_, pushAction) };


    // pushStyle Field Functions 
    bool hasPushStyle() const { return this->pushStyle_ != nullptr;};
    void deletePushStyle() { this->pushStyle_ = nullptr;};
    inline int32_t pushStyle() const { DARABONBA_PTR_GET_DEFAULT(pushStyle_, 0) };
    inline PushSimpleRequest& setPushStyle(int32_t pushStyle) { DARABONBA_PTR_SET_VALUE(pushStyle_, pushStyle) };


    // silent Field Functions 
    bool hasSilent() const { return this->silent_ != nullptr;};
    void deleteSilent() { this->silent_ = nullptr;};
    inline int64_t silent() const { DARABONBA_PTR_GET_DEFAULT(silent_, 0L) };
    inline PushSimpleRequest& setSilent(int64_t silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


    // smsSignName Field Functions 
    bool hasSmsSignName() const { return this->smsSignName_ != nullptr;};
    void deleteSmsSignName() { this->smsSignName_ = nullptr;};
    inline string smsSignName() const { DARABONBA_PTR_GET_DEFAULT(smsSignName_, "") };
    inline PushSimpleRequest& setSmsSignName(string smsSignName) { DARABONBA_PTR_SET_VALUE(smsSignName_, smsSignName) };


    // smsStrategy Field Functions 
    bool hasSmsStrategy() const { return this->smsStrategy_ != nullptr;};
    void deleteSmsStrategy() { this->smsStrategy_ = nullptr;};
    inline int32_t smsStrategy() const { DARABONBA_PTR_GET_DEFAULT(smsStrategy_, 0) };
    inline PushSimpleRequest& setSmsStrategy(int32_t smsStrategy) { DARABONBA_PTR_SET_VALUE(smsStrategy_, smsStrategy) };


    // smsTemplateCode Field Functions 
    bool hasSmsTemplateCode() const { return this->smsTemplateCode_ != nullptr;};
    void deleteSmsTemplateCode() { this->smsTemplateCode_ = nullptr;};
    inline string smsTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateCode_, "") };
    inline PushSimpleRequest& setSmsTemplateCode(string smsTemplateCode) { DARABONBA_PTR_SET_VALUE(smsTemplateCode_, smsTemplateCode) };


    // smsTemplateParam Field Functions 
    bool hasSmsTemplateParam() const { return this->smsTemplateParam_ != nullptr;};
    void deleteSmsTemplateParam() { this->smsTemplateParam_ = nullptr;};
    inline string smsTemplateParam() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateParam_, "") };
    inline PushSimpleRequest& setSmsTemplateParam(string smsTemplateParam) { DARABONBA_PTR_SET_VALUE(smsTemplateParam_, smsTemplateParam) };


    // strategyContent Field Functions 
    bool hasStrategyContent() const { return this->strategyContent_ != nullptr;};
    void deleteStrategyContent() { this->strategyContent_ = nullptr;};
    inline string strategyContent() const { DARABONBA_PTR_GET_DEFAULT(strategyContent_, "") };
    inline PushSimpleRequest& setStrategyContent(string strategyContent) { DARABONBA_PTR_SET_VALUE(strategyContent_, strategyContent) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline int32_t strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, 0) };
    inline PushSimpleRequest& setStrategyType(int32_t strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // targetMsgkey Field Functions 
    bool hasTargetMsgkey() const { return this->targetMsgkey_ != nullptr;};
    void deleteTargetMsgkey() { this->targetMsgkey_ = nullptr;};
    inline string targetMsgkey() const { DARABONBA_PTR_GET_DEFAULT(targetMsgkey_, "") };
    inline PushSimpleRequest& setTargetMsgkey(string targetMsgkey) { DARABONBA_PTR_SET_VALUE(targetMsgkey_, targetMsgkey) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline PushSimpleRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PushSimpleRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdChannelCategory Field Functions 
    bool hasThirdChannelCategory() const { return this->thirdChannelCategory_ != nullptr;};
    void deleteThirdChannelCategory() { this->thirdChannelCategory_ = nullptr;};
    inline     const Darabonba::Json & thirdChannelCategory() const { DARABONBA_GET(thirdChannelCategory_) };
    Darabonba::Json & thirdChannelCategory() { DARABONBA_GET(thirdChannelCategory_) };
    inline PushSimpleRequest& setThirdChannelCategory(const Darabonba::Json & thirdChannelCategory) { DARABONBA_SET_VALUE(thirdChannelCategory_, thirdChannelCategory) };
    inline PushSimpleRequest& setThirdChannelCategory(Darabonba::Json & thirdChannelCategory) { DARABONBA_SET_RVALUE(thirdChannelCategory_, thirdChannelCategory) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushSimpleRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // transparentMessagePayload Field Functions 
    bool hasTransparentMessagePayload() const { return this->transparentMessagePayload_ != nullptr;};
    void deleteTransparentMessagePayload() { this->transparentMessagePayload_ = nullptr;};
    inline     const Darabonba::Json & transparentMessagePayload() const { DARABONBA_GET(transparentMessagePayload_) };
    Darabonba::Json & transparentMessagePayload() { DARABONBA_GET(transparentMessagePayload_) };
    inline PushSimpleRequest& setTransparentMessagePayload(const Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_VALUE(transparentMessagePayload_, transparentMessagePayload) };
    inline PushSimpleRequest& setTransparentMessagePayload(Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_RVALUE(transparentMessagePayload_, transparentMessagePayload) };


    // transparentMessageUrgency Field Functions 
    bool hasTransparentMessageUrgency() const { return this->transparentMessageUrgency_ != nullptr;};
    void deleteTransparentMessageUrgency() { this->transparentMessageUrgency_ = nullptr;};
    inline string transparentMessageUrgency() const { DARABONBA_PTR_GET_DEFAULT(transparentMessageUrgency_, "") };
    inline PushSimpleRequest& setTransparentMessageUrgency(string transparentMessageUrgency) { DARABONBA_PTR_SET_VALUE(transparentMessageUrgency_, transparentMessageUrgency) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline PushSimpleRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PushSimpleRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    Darabonba::Json notifyLevel_ = nullptr;
    std::shared_ptr<string> notifyType_ = nullptr;
    std::shared_ptr<int64_t> pushAction_ = nullptr;
    std::shared_ptr<int32_t> pushStyle_ = nullptr;
    std::shared_ptr<int64_t> silent_ = nullptr;
    std::shared_ptr<string> smsSignName_ = nullptr;
    std::shared_ptr<int32_t> smsStrategy_ = nullptr;
    std::shared_ptr<string> smsTemplateCode_ = nullptr;
    std::shared_ptr<string> smsTemplateParam_ = nullptr;
    std::shared_ptr<string> strategyContent_ = nullptr;
    std::shared_ptr<int32_t> strategyType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetMsgkey_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    Darabonba::Json thirdChannelCategory_ = nullptr;
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
} // namespace MPaaS20201028
#endif
