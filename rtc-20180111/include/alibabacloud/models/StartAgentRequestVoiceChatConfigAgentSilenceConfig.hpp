// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGAGENTSILENCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGAGENTSILENCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentRequestVoiceChatConfigAgentSilenceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequestVoiceChatConfigAgentSilenceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTimeout, alertTimeout_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(WebhookTriggerTimeout, webhookTriggerTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequestVoiceChatConfigAgentSilenceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTimeout, alertTimeout_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(WebhookTriggerTimeout, webhookTriggerTimeout_);
    };
    StartAgentRequestVoiceChatConfigAgentSilenceConfig() = default ;
    StartAgentRequestVoiceChatConfigAgentSilenceConfig(const StartAgentRequestVoiceChatConfigAgentSilenceConfig &) = default ;
    StartAgentRequestVoiceChatConfigAgentSilenceConfig(StartAgentRequestVoiceChatConfigAgentSilenceConfig &&) = default ;
    StartAgentRequestVoiceChatConfigAgentSilenceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequestVoiceChatConfigAgentSilenceConfig() = default ;
    StartAgentRequestVoiceChatConfigAgentSilenceConfig& operator=(const StartAgentRequestVoiceChatConfigAgentSilenceConfig &) = default ;
    StartAgentRequestVoiceChatConfigAgentSilenceConfig& operator=(StartAgentRequestVoiceChatConfigAgentSilenceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertTimeout_ == nullptr
        && return this->content_ == nullptr && return this->enable_ == nullptr && return this->strategy_ == nullptr && return this->webhookTriggerTimeout_ == nullptr; };
    // alertTimeout Field Functions 
    bool hasAlertTimeout() const { return this->alertTimeout_ != nullptr;};
    void deleteAlertTimeout() { this->alertTimeout_ = nullptr;};
    inline int32_t alertTimeout() const { DARABONBA_PTR_GET_DEFAULT(alertTimeout_, 0) };
    inline StartAgentRequestVoiceChatConfigAgentSilenceConfig& setAlertTimeout(int32_t alertTimeout) { DARABONBA_PTR_SET_VALUE(alertTimeout_, alertTimeout) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline StartAgentRequestVoiceChatConfigAgentSilenceConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline StartAgentRequestVoiceChatConfigAgentSilenceConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline int32_t strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
    inline StartAgentRequestVoiceChatConfigAgentSilenceConfig& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // webhookTriggerTimeout Field Functions 
    bool hasWebhookTriggerTimeout() const { return this->webhookTriggerTimeout_ != nullptr;};
    void deleteWebhookTriggerTimeout() { this->webhookTriggerTimeout_ = nullptr;};
    inline int32_t webhookTriggerTimeout() const { DARABONBA_PTR_GET_DEFAULT(webhookTriggerTimeout_, 0) };
    inline StartAgentRequestVoiceChatConfigAgentSilenceConfig& setWebhookTriggerTimeout(int32_t webhookTriggerTimeout) { DARABONBA_PTR_SET_VALUE(webhookTriggerTimeout_, webhookTriggerTimeout) };


  protected:
    std::shared_ptr<int32_t> alertTimeout_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<int32_t> strategy_ = nullptr;
    std::shared_ptr<int32_t> webhookTriggerTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
