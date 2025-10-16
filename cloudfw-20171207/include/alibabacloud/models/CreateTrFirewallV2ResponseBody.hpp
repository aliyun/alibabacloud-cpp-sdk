// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRFIREWALLV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRFIREWALLV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateTrFirewallV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrFirewallV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrFirewallV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateTrFirewallV2ResponseBody() = default ;
    CreateTrFirewallV2ResponseBody(const CreateTrFirewallV2ResponseBody &) = default ;
    CreateTrFirewallV2ResponseBody(CreateTrFirewallV2ResponseBody &&) = default ;
    CreateTrFirewallV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrFirewallV2ResponseBody() = default ;
    CreateTrFirewallV2ResponseBody& operator=(const CreateTrFirewallV2ResponseBody &) = default ;
    CreateTrFirewallV2ResponseBody& operator=(CreateTrFirewallV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallId_ == nullptr
        && return this->requestId_ == nullptr; };
    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline CreateTrFirewallV2ResponseBody& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrFirewallV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> firewallId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
