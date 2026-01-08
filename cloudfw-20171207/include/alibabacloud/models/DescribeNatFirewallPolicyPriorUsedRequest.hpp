// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPOLICYPRIORUSEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPOLICYPRIORUSEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallPolicyPriorUsedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallPolicyPriorUsedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallPolicyPriorUsedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
    };
    DescribeNatFirewallPolicyPriorUsedRequest() = default ;
    DescribeNatFirewallPolicyPriorUsedRequest(const DescribeNatFirewallPolicyPriorUsedRequest &) = default ;
    DescribeNatFirewallPolicyPriorUsedRequest(DescribeNatFirewallPolicyPriorUsedRequest &&) = default ;
    DescribeNatFirewallPolicyPriorUsedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallPolicyPriorUsedRequest() = default ;
    DescribeNatFirewallPolicyPriorUsedRequest& operator=(const DescribeNatFirewallPolicyPriorUsedRequest &) = default ;
    DescribeNatFirewallPolicyPriorUsedRequest& operator=(DescribeNatFirewallPolicyPriorUsedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->ipVersion_ == nullptr && this->lang_ == nullptr && this->natGatewayId_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeNatFirewallPolicyPriorUsedRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeNatFirewallPolicyPriorUsedRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNatFirewallPolicyPriorUsedRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallPolicyPriorUsedRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


  protected:
    // The direction of the traffic to which the access control policy applies.
    // 
    // Valid values:
    // 
    // *   **out**: outbound traffic
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The IP version supported by the access control policy. Valid values:
    // 
    // *   **4**: IPv4 (default)
    shared_ptr<string> ipVersion_ {};
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
