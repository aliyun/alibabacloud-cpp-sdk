// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMYAGENTICNOTIFICATIONCHANNELCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMYAGENTICNOTIFICATIONCHANNELCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateMyAgenticNotificationChannelConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMyAgenticNotificationChannelConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMyAgenticNotificationChannelConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    UpdateMyAgenticNotificationChannelConfigRequest() = default ;
    UpdateMyAgenticNotificationChannelConfigRequest(const UpdateMyAgenticNotificationChannelConfigRequest &) = default ;
    UpdateMyAgenticNotificationChannelConfigRequest(UpdateMyAgenticNotificationChannelConfigRequest &&) = default ;
    UpdateMyAgenticNotificationChannelConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMyAgenticNotificationChannelConfigRequest() = default ;
    UpdateMyAgenticNotificationChannelConfigRequest& operator=(const UpdateMyAgenticNotificationChannelConfigRequest &) = default ;
    UpdateMyAgenticNotificationChannelConfigRequest& operator=(UpdateMyAgenticNotificationChannelConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && this->config_ == nullptr && this->enabled_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline UpdateMyAgenticNotificationChannelConfigRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateMyAgenticNotificationChannelConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateMyAgenticNotificationChannelConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // The notification channel type. Currently, only FEISHU (Lark) is supported. Specifying other values results in a parameter error.
    // 
    // This parameter is required.
    shared_ptr<string> channel_ {};
    // The channel configuration in the format of a JSON object string. This parameter is not required if you do not update the binding information. Supports mobile (phone number) or email. You can bind or rebind a Lark account by using one of them at a time. If the existing masked values of mobile or email are passed as ******, they are not modified. openId is a read-only field and cannot be specified.
    shared_ptr<string> config_ {};
    // Specifies whether to enable the notification channel. If this parameter is not specified, the original value is retained. When you only modify the switch, the Config parameter is not required, and the existing binding information remains unchanged.
    shared_ptr<bool> enabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
