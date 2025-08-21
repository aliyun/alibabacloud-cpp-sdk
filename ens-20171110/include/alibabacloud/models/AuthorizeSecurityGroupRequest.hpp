// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZESECURITYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZESECURITYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AuthorizeSecurityGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeSecurityGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeSecurityGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    AuthorizeSecurityGroupRequest() = default ;
    AuthorizeSecurityGroupRequest(const AuthorizeSecurityGroupRequest &) = default ;
    AuthorizeSecurityGroupRequest(AuthorizeSecurityGroupRequest &&) = default ;
    AuthorizeSecurityGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeSecurityGroupRequest() = default ;
    AuthorizeSecurityGroupRequest& operator=(const AuthorizeSecurityGroupRequest &) = default ;
    AuthorizeSecurityGroupRequest& operator=(AuthorizeSecurityGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipProtocol_ != nullptr
        && this->policy_ != nullptr && this->portRange_ != nullptr && this->priority_ != nullptr && this->securityGroupId_ != nullptr && this->sourceCidrIp_ != nullptr
        && this->sourcePortRange_ != nullptr; };
    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline AuthorizeSecurityGroupRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AuthorizeSecurityGroupRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline AuthorizeSecurityGroupRequest& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline AuthorizeSecurityGroupRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline AuthorizeSecurityGroupRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline AuthorizeSecurityGroupRequest& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline AuthorizeSecurityGroupRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // The transport layer protocol. The values of this parameter are case-sensitive. Valid values:
    // 
    // *   tcp
    // *   udp
    // *   icmp
    // *   gre
    // *   all: All protocols are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The action of security group rule N that determines whether to allow inbound access. Valid values:
    // 
    // *   accept: allows access.
    // *   drop: denies access and returns no responses.
    // 
    // Default value: accept.
    std::shared_ptr<string> policy_ = nullptr;
    // The range of destination ports that correspond to the transport layer protocol for security group rule N. Valid values:
    // 
    // *   When the IpProtocol parameter is set to tcp or udp, the port number range is **1** to **65535**. The start port number and the end port number are separated by a forward slash (/). Correct example: **1/200**. Incorrect example: **200/1**.
    // *   When the IpProtocol parameter is set to icmp, the port number range is **-1/-1**, which indicates all ports.
    // *   When the IpProtocol parameter is set to gre, the port number range is **-1/-1**, which indicates all ports.
    // *   When the IpProtocol parameter is set to all, the port number range is **-1/-1**, which indicates all ports.
    // 
    // This parameter is required.
    std::shared_ptr<string> portRange_ = nullptr;
    // The priority of security group rule N. Valid values: **1** to **100**.
    // 
    // Default value: **1**.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the security group.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The source IPv4 CIDR block. CIDR blocks and IPv4 addresses are supported.
    // 
    // This parameter is empty by default.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    // The range of port numbers that correspond to the transport layer protocol for the source security group. Valid values:
    // 
    // *   When the IpProtocol parameter is set to tcp or udp, the port number range is **1 to 65535**. The start port number and the end port number are separated by a forward slash (/). Correct example: **1/200**. Incorrect example: **200/1**.
    // *   When the IpProtocol parameter is set to icmp, the port number range is **-1/-1**, which indicates all ports.
    // *   When the IpProtocol parameter is set to gre, the port number range is **-1/-1**, which indicates all ports.
    // *   When the IpProtocol parameter is set to all, the port number range is **-1/-1**, which indicates all ports.
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
