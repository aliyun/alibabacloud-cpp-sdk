// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKESECURITYGROUPEGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKESECURITYGROUPEGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RevokeSecurityGroupEgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeSecurityGroupEgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeSecurityGroupEgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    RevokeSecurityGroupEgressRequest() = default ;
    RevokeSecurityGroupEgressRequest(const RevokeSecurityGroupEgressRequest &) = default ;
    RevokeSecurityGroupEgressRequest(RevokeSecurityGroupEgressRequest &&) = default ;
    RevokeSecurityGroupEgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeSecurityGroupEgressRequest() = default ;
    RevokeSecurityGroupEgressRequest& operator=(const RevokeSecurityGroupEgressRequest &) = default ;
    RevokeSecurityGroupEgressRequest& operator=(RevokeSecurityGroupEgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destCidrIp_ == nullptr
        && this->ipProtocol_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr && this->priority_ == nullptr && this->securityGroupId_ == nullptr
        && this->sourcePortRange_ == nullptr; };
    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline RevokeSecurityGroupEgressRequest& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline RevokeSecurityGroupEgressRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline RevokeSecurityGroupEgressRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline RevokeSecurityGroupEgressRequest& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline RevokeSecurityGroupEgressRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline RevokeSecurityGroupEgressRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline RevokeSecurityGroupEgressRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // The destination IP addresses. CIDR blocks and IPv4 addresses are supported.
    // 
    // By default, this parameter is empty.
    // 
    // This parameter is required.
    shared_ptr<string> destCidrIp_ {};
    // The transport layer protocol. The value of this parameter is case-sensitive. Valid values:
    // 
    // *   tcp
    // *   udp
    // *   icmp
    // *   gre
    // *   all: All protocols are supported.
    // 
    // This parameter is required.
    shared_ptr<string> ipProtocol_ {};
    // The action of the security group rule. Valid values:
    // 
    // *   **accept**: allows access.
    // *   **drop**: denies access and returns no responses.
    // 
    // Default value: **accept**.
    shared_ptr<string> policy_ {};
    // The range of destination ports that correspond to the transport layer protocol for the security group rule. Valid values:
    // 
    // *   If you set the IpProtocol parameter to tcp or udp, the port number ranges from **1** to **65535**. The start port number and the end port number are separated by a forward slash (/). Correct example: **1/200**. Incorrect example: **200/1**.
    // *   When the IpProtocol parameter is set to icmp, the port number range is **-1/-1**, which indicates all ports.
    // *   When the IpProtocol parameter is set to gre, the port number range is **-1/-1**, which indicates all ports.
    // *   When the IpProtocol parameter is set to all, the port number range is **-1/-1**, which indicates all ports.
    // 
    // This parameter is required.
    shared_ptr<string> portRange_ {};
    // The priority of the security group rule. Valid values: **1** to **100**. A smaller value indicates a higher priority.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> priority_ {};
    // The ID of the security group.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The range of port numbers that correspond to the transport layer protocol for the source security group. Valid values:
    // 
    // *   If you set the IpProtocol parameter to tcp or udp, the port number ranges from **1** to **65535**. The start port number and the end port number are separated by a forward slash (/). Correct example: **1/200**. Incorrect example: **200/1**.
    // *   When the IpProtocol parameter is set to icmp, the port number range is **-1/-1**, which indicates all ports.
    // *   When the IpProtocol parameter is set to gre, the port number range is **-1/-1**, which indicates all ports.
    // *   When the IpProtocol parameter is set to all, the port number range is **-1/-1**, which indicates all ports.
    shared_ptr<string> sourcePortRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
