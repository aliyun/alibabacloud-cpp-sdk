// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER4RULEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER4RULEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigLayer4RulePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer4RulePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer4RulePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
    };
    ConfigLayer4RulePolicyRequest() = default ;
    ConfigLayer4RulePolicyRequest(const ConfigLayer4RulePolicyRequest &) = default ;
    ConfigLayer4RulePolicyRequest(ConfigLayer4RulePolicyRequest &&) = default ;
    ConfigLayer4RulePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer4RulePolicyRequest() = default ;
    ConfigLayer4RulePolicyRequest& operator=(const ConfigLayer4RulePolicyRequest &) = default ;
    ConfigLayer4RulePolicyRequest& operator=(ConfigLayer4RulePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listeners_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string getListeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline ConfigLayer4RulePolicyRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


  protected:
    // The port forwarding rules.
    // 
    // This parameter is a string that represents a JSON array converted from a character string. Each element in the JSON array represents a created port forwarding rule. You can specify up to one port forwarding rule at a time.
    // 
    // > You can invoke [DescribeNetworkRules](https://help.aliyun.com/document_detail/157484.html) to query all created port forwarding rules.
    // 
    // Each port forwarding rule contains the following fields:
    // 
    // - **InstanceId**: string. Required. The ID of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    // - **Protocol**: string. Required. The forwarding protocol type. Valid values: **tcp**, **udp**.
    // - **FrontendPort**: integer. Required. The Redirection Port.
    // - **BackendPort**: integer. Required. The origin server port.
    // - **PriRealServers**: JSON array. Required. The list of primary origin server IP addresses. Each element in the JSON array represents a primary origin server IP address. You can specify up to 20 primary origin server IP addresses.
    // 
    //     Each primary origin server IP address contains the following fields:
    // 
    //     - **RealServer**: string. Required. The primary origin server IP address.
    // 
    // - **SecRealServers**: JSON array. Required. The list of secondary origin server IP addresses. Each element in the JSON array represents a secondary origin server IP address. You can specify up to 20 secondary origin server IP addresses.
    // 
    //     Each secondary origin server IP address contains the following fields:
    //     
    //     - **RealServer**: string. Required. The secondary origin server IP address.
    //  
    // - **CurrentRsIndex**: integer. Required. The type of origin server to activate. Valid values:
    //     - **1**: The primary origin server settings take effect. Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the primary origin server IP addresses.
    //     - **2**: The secondary origin server settings take effect. Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the secondary origin server IP addresses.
    // 
    // This parameter is required.
    shared_ptr<string> listeners_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
