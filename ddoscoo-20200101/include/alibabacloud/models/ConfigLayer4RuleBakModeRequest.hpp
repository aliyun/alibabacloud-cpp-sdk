// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER4RULEBAKMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER4RULEBAKMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigLayer4RuleBakModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer4RuleBakModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BakMode, bakMode_);
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer4RuleBakModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BakMode, bakMode_);
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
    };
    ConfigLayer4RuleBakModeRequest() = default ;
    ConfigLayer4RuleBakModeRequest(const ConfigLayer4RuleBakModeRequest &) = default ;
    ConfigLayer4RuleBakModeRequest(ConfigLayer4RuleBakModeRequest &&) = default ;
    ConfigLayer4RuleBakModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer4RuleBakModeRequest() = default ;
    ConfigLayer4RuleBakModeRequest& operator=(const ConfigLayer4RuleBakModeRequest &) = default ;
    ConfigLayer4RuleBakModeRequest& operator=(ConfigLayer4RuleBakModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bakMode_ == nullptr
        && this->listeners_ == nullptr; };
    // bakMode Field Functions 
    bool hasBakMode() const { return this->bakMode_ != nullptr;};
    void deleteBakMode() { this->bakMode_ = nullptr;};
    inline string getBakMode() const { DARABONBA_PTR_GET_DEFAULT(bakMode_, "") };
    inline ConfigLayer4RuleBakModeRequest& setBakMode(string bakMode) { DARABONBA_PTR_SET_VALUE(bakMode_, bakMode) };


    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string getListeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline ConfigLayer4RuleBakModeRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


  protected:
    // The back-to-origin mode. Valid values:
    // - **0**: The default back-to-origin mode. Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the origin server IP address that you specified when you called [CreateNetworkRules](https://help.aliyun.com/document_detail/157482.html) to create the port forwarding rule.
    // - **1**: The origin redundancy mode. Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the primary origin server IP address or secondary origin server IP address that you configured by calling [ConfigLayer4RulePolicy](https://help.aliyun.com/document_detail/312684.html).
    // 
    // This parameter is required.
    shared_ptr<string> bakMode_ {};
    // The port forwarding rule to configure.
    // 
    // This parameter is a string converted from a JSON array. Each element in the JSON array represents a created port forwarding rule. You can configure up to one port forwarding rule at a time.
    // 
    // > You can call [DescribeNetworkRules](https://help.aliyun.com/document_detail/157484.html) to query all created port forwarding rules.
    // 
    // Each port forwarding rule contains the following fields:
    // 
    // - **InstanceId**: String type. Required. The ID of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    // - **Protocol**: String type. Required. The forwarding protocol type. Valid values: **tcp**, **udp**.
    // - **FrontendPort**: Integer type. Required. The Redirection Port.
    // 
    // This parameter is required.
    shared_ptr<string> listeners_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
