// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTAUTHORIZESECURITYPOLICYRULE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTAUTHORIZESECURITYPOLICYRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& obj) { 
      DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule() = default ;
    ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule(const ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule &) = default ;
    ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule(ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule &&) = default ;
    ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule() = default ;
    ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& operator=(const ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule &) = default ;
    ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& operator=(ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrIp_ != nullptr
        && this->description_ != nullptr && this->ipProtocol_ != nullptr && this->policy_ != nullptr && this->portRange_ != nullptr && this->priority_ != nullptr
        && this->type_ != nullptr; };
    // cidrIp Field Functions 
    bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
    void deleteCidrIp() { this->cidrIp_ = nullptr;};
    inline string cidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
    inline ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The object of the security group rule. Specify an IPv4 CIDR block.
    std::shared_ptr<string> cidrIp_ = nullptr;
    // The description of the security group rule.
    std::shared_ptr<string> description_ = nullptr;
    // The protocol type of the security group rule.
    // 
    // Valid values:
    // 
    // *   TCP: the Transmission Control Protocol (TCP) protocol.
    // *   UDP: the User Datagram Protocol (UDP) protocol.
    // *   ALL: any type of protocol.
    // *   GRE: the Generic Routing Encapsulation (GRE) protocol.
    // *   ICMP: the Internet Control Message Protocol (ICMP) for (IPv4).
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The authorization policy of the security group rule.
    // 
    // Valid values:
    // 
    // *   drop: denies all access requests. If no \\"\\"access denied\\"\\" messages are returned, the requests either timed out or failed.
    // *   accept (default): accepts all requests.
    std::shared_ptr<string> policy_ = nullptr;
    // The port range of the security group rule. The value range of this parameter varies based on the value of IpProtocol.
    // 
    // *   If IpProtocol is set to TCP or UDP, the port range is 1 to 65535. Separate the start port number and the end port number with a forward slash (/). Example: 1/200.
    // *   If IpProtocol is set to ICMP, set the value to -1/-1.
    // *   If IpProtocol is set to GRE, set the value to -1/-1.
    // *   If IpProtocol is set to ALL, set the value to -1/-1.
    // 
    // For more information about the common ports, see [Common ports](https://help.aliyun.com/document_detail/40724.html).
    std::shared_ptr<string> portRange_ = nullptr;
    // The priority of the security group rule. A smaller value specifies a higher priority. Valid values: 1 to 60. Default value: 1.
    std::shared_ptr<string> priority_ = nullptr;
    // The direction of the security group rule.
    // 
    // Valid values:
    // 
    // *   outflow: outbound.
    // *   inflow: inbound.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
