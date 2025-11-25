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
    inline string listeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline ConfigLayer4RulePolicyRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


  protected:
    // The port forwarding rule that you want to manage.
    // 
    // This parameter is a string that consists of JSON arrays. Each element in a JSON array indicates a port forwarding rule. You can perform this operation only on one port forwarding rule at a time.
    // 
    // > You can call the [DescribeNetworkRules](https://help.aliyun.com/document_detail/157484.html) to query existing port forwarding rules.
    // 
    // Each port forwarding rule contains the following fields:
    // 
    // *   **InstanceId**: the ID of the instance. This field is required and must be of the STRING type.
    // 
    // *   **Protocol**: the forwarding protocol. This field is required and must be of the STRING type. Valid values: **tcp** and **udp**.
    // 
    // *   **FrontendPort**: the forwarding port. This field is required and must be of the INTEGER type.
    // 
    // *   **BackendPort**: the port of the origin server. This field is required and must be of the INTEGER type.
    // 
    // *   **PriRealServers**: the IP addresses of the primary origin server. This field is required and must be a JSON array. Each element in a JSON array indicates an IP address of the primary origin server. You can configure a maximum of 20 IP addresses.
    // 
    //     Each element in the JSON array contains the following field:
    // 
    //     *   **RealServer**: the IP address of the primary origin server. This field is required and must be of the STRING type.
    // 
    // *   **SecRealServers**: the IP addresses of the secondary origin server. This field is required and must be a JSON array. Each element in a JSON array indicates an IP address of the secondary origin server. You can configure a maximum of 20 IP addresses.
    // 
    //     Each element in the JSON array contains the following field:
    // 
    //     *   **RealServer**: the IP address of the secondary origin server. This field is required and must be of the STRING type.
    // 
    // *   **CurrentRsIndex**: the origin server that you want to use to receive service traffic. This field is required and must be of the INTEGER type. Valid values:
    // 
    //     *   **1**: the primary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the primary origin server.
    //     *   **2**: the secondary origin server, which indicates that Anti-DDoS Pro or Anti-DDoS Premium forwards service traffic to the IP addresses of the secondary origin server.
    // 
    // This parameter is required.
    std::shared_ptr<string> listeners_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
