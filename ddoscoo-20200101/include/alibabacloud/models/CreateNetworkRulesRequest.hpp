// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class CreateNetworkRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpMode, ipMode_);
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpMode, ipMode_);
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
    };
    CreateNetworkRulesRequest() = default ;
    CreateNetworkRulesRequest(const CreateNetworkRulesRequest &) = default ;
    CreateNetworkRulesRequest(CreateNetworkRulesRequest &&) = default ;
    CreateNetworkRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkRulesRequest() = default ;
    CreateNetworkRulesRequest& operator=(const CreateNetworkRulesRequest &) = default ;
    CreateNetworkRulesRequest& operator=(CreateNetworkRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipMode_ == nullptr
        && this->networkRules_ == nullptr; };
    // ipMode Field Functions 
    bool hasIpMode() const { return this->ipMode_ != nullptr;};
    void deleteIpMode() { this->ipMode_ = nullptr;};
    inline string getIpMode() const { DARABONBA_PTR_GET_DEFAULT(ipMode_, "") };
    inline CreateNetworkRulesRequest& setIpMode(string ipMode) { DARABONBA_PTR_SET_VALUE(ipMode_, ipMode) };


    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline string getNetworkRules() const { DARABONBA_PTR_GET_DEFAULT(networkRules_, "") };
    inline CreateNetworkRulesRequest& setNetworkRules(string networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };


  protected:
    shared_ptr<string> ipMode_ {};
    // The details of the port forwarding rules, expressed as a character string in JSON format with the following structure:
    // - **InstanceId**: String. Required. The Anti-DDoS Pro or Anti-DDoS Premium instance ID.
    // - **Protocol**: String. Required. The forwarding protocol type. Valid values: **tcp**, **udp**.
    // - **FrontendPort**: Integer. Required. The Redirection Port.
    // - **BackendPort**: Integer. Required. The origin server port.
    // - **RealServers**: JSON array. Required. The list of origin server IP addresses. A maximum of 20 IP addresses are supported.
    // 
    // This parameter is required.
    shared_ptr<string> networkRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
