// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGNETWORKRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGNETWORKRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigNetworkRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigNetworkRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigNetworkRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
    };
    ConfigNetworkRulesRequest() = default ;
    ConfigNetworkRulesRequest(const ConfigNetworkRulesRequest &) = default ;
    ConfigNetworkRulesRequest(ConfigNetworkRulesRequest &&) = default ;
    ConfigNetworkRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigNetworkRulesRequest() = default ;
    ConfigNetworkRulesRequest& operator=(const ConfigNetworkRulesRequest &) = default ;
    ConfigNetworkRulesRequest& operator=(ConfigNetworkRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkRules_ != nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline string networkRules() const { DARABONBA_PTR_GET_DEFAULT(networkRules_, "") };
    inline ConfigNetworkRulesRequest& setNetworkRules(string networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };


  protected:
    // The details of the port forwarding rule. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **InstanceId**: the ID of the instance. This field is required and must be of the STRING type.
    // *   **Protocol**: the forwarding protocol. This field is required and must be of the STRING type. Valid values: **tcp** and **udp**.
    // *   **FrontendPort**: the forwarding port. This field is required and must be of the INTEGER type.
    // *   **BackendPort**: the port of the origin server. This field is required and must be of the INTEGER type.
    // *   **RealServers**: the IP addresses of the origin server. This field is required and must be a JSON array. You can specify up to 20 IP addresses.
    // 
    // > You can modify only the value of **RealServers** when you modify a port forwarding rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
