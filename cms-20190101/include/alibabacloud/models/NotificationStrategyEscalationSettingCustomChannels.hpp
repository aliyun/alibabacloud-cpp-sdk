// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYESCALATIONSETTINGCUSTOMCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYESCALATIONSETTINGCUSTOMCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyEscalationSettingCustomChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyEscalationSettingCustomChannels& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(Severities, severities_);
      DARABONBA_PTR_TO_JSON(TemplateUuid, templateUuid_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyEscalationSettingCustomChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(Severities, severities_);
      DARABONBA_PTR_FROM_JSON(TemplateUuid, templateUuid_);
    };
    NotificationStrategyEscalationSettingCustomChannels() = default ;
    NotificationStrategyEscalationSettingCustomChannels(const NotificationStrategyEscalationSettingCustomChannels &) = default ;
    NotificationStrategyEscalationSettingCustomChannels(NotificationStrategyEscalationSettingCustomChannels &&) = default ;
    NotificationStrategyEscalationSettingCustomChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyEscalationSettingCustomChannels() = default ;
    NotificationStrategyEscalationSettingCustomChannels& operator=(const NotificationStrategyEscalationSettingCustomChannels &) = default ;
    NotificationStrategyEscalationSettingCustomChannels& operator=(NotificationStrategyEscalationSettingCustomChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr
        && return this->severities_ == nullptr && return this->templateUuid_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline NotificationStrategyEscalationSettingCustomChannels& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // severities Field Functions 
    bool hasSeverities() const { return this->severities_ != nullptr;};
    void deleteSeverities() { this->severities_ = nullptr;};
    inline const vector<string> & severities() const { DARABONBA_PTR_GET_CONST(severities_, vector<string>) };
    inline vector<string> severities() { DARABONBA_PTR_GET(severities_, vector<string>) };
    inline NotificationStrategyEscalationSettingCustomChannels& setSeverities(const vector<string> & severities) { DARABONBA_PTR_SET_VALUE(severities_, severities) };
    inline NotificationStrategyEscalationSettingCustomChannels& setSeverities(vector<string> && severities) { DARABONBA_PTR_SET_RVALUE(severities_, severities) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string templateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline NotificationStrategyEscalationSettingCustomChannels& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channelType_ = nullptr;
    std::shared_ptr<vector<string>> severities_ = nullptr;
    std::shared_ptr<string> templateUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
