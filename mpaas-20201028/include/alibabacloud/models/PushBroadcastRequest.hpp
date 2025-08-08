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
      DARABONBA_PTR_TO_JSON(BindPeriod, bindPeriod_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(ExpiredSeconds, expiredSeconds_);
      DARABONBA_PTR_TO_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_TO_JSON(MiChannelId, miChannelId_);
      DARABONBA_PTR_TO_JSON(Msgkey, msgkey_);
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
      DARABONBA_ANY_TO_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_TO_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_TO_JSON(UnBindPeriod, unBindPeriod_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PushBroadcastRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidChannel, androidChannel_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BindPeriod, bindPeriod_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(ExpiredSeconds, expiredSeconds_);
      DARABONBA_PTR_FROM_JSON(ExtendedParams, extendedParams_);
      DARABONBA_PTR_FROM_JSON(MiChannelId, miChannelId_);
      DARABONBA_PTR_FROM_JSON(Msgkey, msgkey_);
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
      DARABONBA_ANY_FROM_JSON(TransparentMessagePayload, transparentMessagePayload_);
      DARABONBA_PTR_FROM_JSON(TransparentMessageUrgency, transparentMessageUrgency_);
      DARABONBA_PTR_FROM_JSON(UnBindPeriod, unBindPeriod_);
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
    virtual bool empty() const override { this->androidChannel_ != nullptr
        && this->appId_ != nullptr && this->bindPeriod_ != nullptr && this->channelId_ != nullptr && this->classification_ != nullptr && this->deliveryType_ != nullptr
        && this->expiredSeconds_ != nullptr && this->extendedParams_ != nullptr && this->miChannelId_ != nullptr && this->msgkey_ != nullptr && this->notifyType_ != nullptr
        && this->pushAction_ != nullptr && this->pushStatus_ != nullptr && this->silent_ != nullptr && this->strategyContent_ != nullptr && this->strategyType_ != nullptr
        && this->taskName_ != nullptr && this->templateKeyValue_ != nullptr && this->templateName_ != nullptr && this->tenantId_ != nullptr && this->thirdChannelCategory_ != nullptr
        && this->transparentMessagePayload_ != nullptr && this->transparentMessageUrgency_ != nullptr && this->unBindPeriod_ != nullptr && this->workspaceId_ != nullptr; };
    // androidChannel Field Functions 
    bool hasAndroidChannel() const { return this->androidChannel_ != nullptr;};
    void deleteAndroidChannel() { this->androidChannel_ = nullptr;};
    inline int32_t androidChannel() const { DARABONBA_PTR_GET_DEFAULT(androidChannel_, 0) };
    inline PushBroadcastRequest& setAndroidChannel(int32_t androidChannel) { DARABONBA_PTR_SET_VALUE(androidChannel_, androidChannel) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PushBroadcastRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bindPeriod Field Functions 
    bool hasBindPeriod() const { return this->bindPeriod_ != nullptr;};
    void deleteBindPeriod() { this->bindPeriod_ = nullptr;};
    inline int32_t bindPeriod() const { DARABONBA_PTR_GET_DEFAULT(bindPeriod_, 0) };
    inline PushBroadcastRequest& setBindPeriod(int32_t bindPeriod) { DARABONBA_PTR_SET_VALUE(bindPeriod_, bindPeriod) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline PushBroadcastRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline PushBroadcastRequest& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline int64_t deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, 0L) };
    inline PushBroadcastRequest& setDeliveryType(int64_t deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // expiredSeconds Field Functions 
    bool hasExpiredSeconds() const { return this->expiredSeconds_ != nullptr;};
    void deleteExpiredSeconds() { this->expiredSeconds_ = nullptr;};
    inline int64_t expiredSeconds() const { DARABONBA_PTR_GET_DEFAULT(expiredSeconds_, 0L) };
    inline PushBroadcastRequest& setExpiredSeconds(int64_t expiredSeconds) { DARABONBA_PTR_SET_VALUE(expiredSeconds_, expiredSeconds) };


    // extendedParams Field Functions 
    bool hasExtendedParams() const { return this->extendedParams_ != nullptr;};
    void deleteExtendedParams() { this->extendedParams_ = nullptr;};
    inline string extendedParams() const { DARABONBA_PTR_GET_DEFAULT(extendedParams_, "") };
    inline PushBroadcastRequest& setExtendedParams(string extendedParams) { DARABONBA_PTR_SET_VALUE(extendedParams_, extendedParams) };


    // miChannelId Field Functions 
    bool hasMiChannelId() const { return this->miChannelId_ != nullptr;};
    void deleteMiChannelId() { this->miChannelId_ = nullptr;};
    inline string miChannelId() const { DARABONBA_PTR_GET_DEFAULT(miChannelId_, "") };
    inline PushBroadcastRequest& setMiChannelId(string miChannelId) { DARABONBA_PTR_SET_VALUE(miChannelId_, miChannelId) };


    // msgkey Field Functions 
    bool hasMsgkey() const { return this->msgkey_ != nullptr;};
    void deleteMsgkey() { this->msgkey_ = nullptr;};
    inline string msgkey() const { DARABONBA_PTR_GET_DEFAULT(msgkey_, "") };
    inline PushBroadcastRequest& setMsgkey(string msgkey) { DARABONBA_PTR_SET_VALUE(msgkey_, msgkey) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline PushBroadcastRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // pushAction Field Functions 
    bool hasPushAction() const { return this->pushAction_ != nullptr;};
    void deletePushAction() { this->pushAction_ = nullptr;};
    inline int64_t pushAction() const { DARABONBA_PTR_GET_DEFAULT(pushAction_, 0L) };
    inline PushBroadcastRequest& setPushAction(int64_t pushAction) { DARABONBA_PTR_SET_VALUE(pushAction_, pushAction) };


    // pushStatus Field Functions 
    bool hasPushStatus() const { return this->pushStatus_ != nullptr;};
    void deletePushStatus() { this->pushStatus_ = nullptr;};
    inline int64_t pushStatus() const { DARABONBA_PTR_GET_DEFAULT(pushStatus_, 0L) };
    inline PushBroadcastRequest& setPushStatus(int64_t pushStatus) { DARABONBA_PTR_SET_VALUE(pushStatus_, pushStatus) };


    // silent Field Functions 
    bool hasSilent() const { return this->silent_ != nullptr;};
    void deleteSilent() { this->silent_ = nullptr;};
    inline int64_t silent() const { DARABONBA_PTR_GET_DEFAULT(silent_, 0L) };
    inline PushBroadcastRequest& setSilent(int64_t silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


    // strategyContent Field Functions 
    bool hasStrategyContent() const { return this->strategyContent_ != nullptr;};
    void deleteStrategyContent() { this->strategyContent_ = nullptr;};
    inline string strategyContent() const { DARABONBA_PTR_GET_DEFAULT(strategyContent_, "") };
    inline PushBroadcastRequest& setStrategyContent(string strategyContent) { DARABONBA_PTR_SET_VALUE(strategyContent_, strategyContent) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline int32_t strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, 0) };
    inline PushBroadcastRequest& setStrategyType(int32_t strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline PushBroadcastRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // templateKeyValue Field Functions 
    bool hasTemplateKeyValue() const { return this->templateKeyValue_ != nullptr;};
    void deleteTemplateKeyValue() { this->templateKeyValue_ = nullptr;};
    inline string templateKeyValue() const { DARABONBA_PTR_GET_DEFAULT(templateKeyValue_, "") };
    inline PushBroadcastRequest& setTemplateKeyValue(string templateKeyValue) { DARABONBA_PTR_SET_VALUE(templateKeyValue_, templateKeyValue) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline PushBroadcastRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PushBroadcastRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdChannelCategory Field Functions 
    bool hasThirdChannelCategory() const { return this->thirdChannelCategory_ != nullptr;};
    void deleteThirdChannelCategory() { this->thirdChannelCategory_ = nullptr;};
    inline     const Darabonba::Json & thirdChannelCategory() const { DARABONBA_GET(thirdChannelCategory_) };
    Darabonba::Json & thirdChannelCategory() { DARABONBA_GET(thirdChannelCategory_) };
    inline PushBroadcastRequest& setThirdChannelCategory(const Darabonba::Json & thirdChannelCategory) { DARABONBA_SET_VALUE(thirdChannelCategory_, thirdChannelCategory) };
    inline PushBroadcastRequest& setThirdChannelCategory(Darabonba::Json & thirdChannelCategory) { DARABONBA_SET_RVALUE(thirdChannelCategory_, thirdChannelCategory) };


    // transparentMessagePayload Field Functions 
    bool hasTransparentMessagePayload() const { return this->transparentMessagePayload_ != nullptr;};
    void deleteTransparentMessagePayload() { this->transparentMessagePayload_ = nullptr;};
    inline     const Darabonba::Json & transparentMessagePayload() const { DARABONBA_GET(transparentMessagePayload_) };
    Darabonba::Json & transparentMessagePayload() { DARABONBA_GET(transparentMessagePayload_) };
    inline PushBroadcastRequest& setTransparentMessagePayload(const Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_VALUE(transparentMessagePayload_, transparentMessagePayload) };
    inline PushBroadcastRequest& setTransparentMessagePayload(Darabonba::Json & transparentMessagePayload) { DARABONBA_SET_RVALUE(transparentMessagePayload_, transparentMessagePayload) };


    // transparentMessageUrgency Field Functions 
    bool hasTransparentMessageUrgency() const { return this->transparentMessageUrgency_ != nullptr;};
    void deleteTransparentMessageUrgency() { this->transparentMessageUrgency_ = nullptr;};
    inline string transparentMessageUrgency() const { DARABONBA_PTR_GET_DEFAULT(transparentMessageUrgency_, "") };
    inline PushBroadcastRequest& setTransparentMessageUrgency(string transparentMessageUrgency) { DARABONBA_PTR_SET_VALUE(transparentMessageUrgency_, transparentMessageUrgency) };


    // unBindPeriod Field Functions 
    bool hasUnBindPeriod() const { return this->unBindPeriod_ != nullptr;};
    void deleteUnBindPeriod() { this->unBindPeriod_ = nullptr;};
    inline int64_t unBindPeriod() const { DARABONBA_PTR_GET_DEFAULT(unBindPeriod_, 0L) };
    inline PushBroadcastRequest& setUnBindPeriod(int64_t unBindPeriod) { DARABONBA_PTR_SET_VALUE(unBindPeriod_, unBindPeriod) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PushBroadcastRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int32_t> androidChannel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> bindPeriod_ = nullptr;
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
    Darabonba::Json thirdChannelCategory_ = nullptr;
    Darabonba::Json transparentMessagePayload_ = nullptr;
    std::shared_ptr<string> transparentMessageUrgency_ = nullptr;
    std::shared_ptr<int64_t> unBindPeriod_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
