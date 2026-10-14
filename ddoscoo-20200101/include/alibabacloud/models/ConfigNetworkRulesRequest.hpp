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
    virtual bool empty() const override { return this->networkRules_ == nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline string getNetworkRules() const { DARABONBA_PTR_GET_DEFAULT(networkRules_, "") };
    inline ConfigNetworkRulesRequest& setNetworkRules(string networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };


  protected:
    // The details of the port forwarding rules. The value is a JSON format character string that contains the following structure:
    // - **InstanceId**: String. Required. The instance ID of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    // - **Protocol**: String. Required. The forwarding protocol type. Valid values: **tcp**, **udp**.
    // - **FrontendPort**: Integer. Required. The Redirection Port.
    // - **BackendPort**: Integer. Required. The origin server port.
    // - **RealServers**: JSON array. Required. The list of origin server IP addresses. A maximum of 20 IP addresses are supported.
    // 
    // > When you edit port forwarding rules, you can modify only **RealServers**, which specifies the origin server IP addresses.
    // 
    // This parameter is required.
    shared_ptr<string> networkRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
