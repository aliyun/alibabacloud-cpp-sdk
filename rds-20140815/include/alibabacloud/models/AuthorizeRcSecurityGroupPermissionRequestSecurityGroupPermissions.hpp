// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERCSECURITYGROUPPERMISSIONREQUESTSECURITYGROUPPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERCSECURITYGROUPPERMISSIONREQUESTSECURITYGROUPPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions() = default ;
    AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions(const AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions &) = default ;
    AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions(AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions &&) = default ;
    AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions() = default ;
    AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& operator=(const AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions &) = default ;
    AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& operator=(AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destCidrIp_ == nullptr
        && return this->ipProtocol_ == nullptr && return this->policy_ == nullptr && return this->portRange_ == nullptr && return this->priority_ == nullptr && return this->sourceCidrIp_ == nullptr
        && return this->sourcePortRange_ == nullptr; };
    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string destCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequestSecurityGroupPermissions& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // The destination CIDR block for outbound access control. CIDR blocks and IPv4 addresses are supported.
    std::shared_ptr<string> destCidrIp_ = nullptr;
    // The protocol type supported by the rule. The value is not case-sensitive. Valid values:
    // 
    // *   **ICMP**
    // *   **GRE**
    // *   **TCP**
    // *   **UDP**
    // *   **ALL**: All protocols are supported.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The action that you want to specify in the rule.
    std::shared_ptr<string> policy_ = nullptr;
    // The range of destination ports that correspond to the transport layer protocol of the destination security group. Valid values:
    // 
    // *   The value is in the X/Y format when IpProtocol is set to TCP or UDP. X specifies the start port number and Y specifies the end port number. X and Y range from **1** to **65535**. The start port number and the end port number are separated by a forward slash (/). Correct example: **1/200**. Incorrect example: **200/1**.
    // *   Valid value when IpProtocol is set to ICMP: **-1/-1**.
    // *   Valid value when IpProtocol is set to GRE: **-1/-1**.
    // *   Valid value when IpProtocol is set to ALL: **-1/-1**.
    std::shared_ptr<string> portRange_ = nullptr;
    // The priority of the rule. Valid values: 1 to 100. A smaller value indicates a higher priority. When multiple security group rules have the same priority, drop rules take precedence.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The source CIDR block for inbound access control. CIDR blocks and IPv4 addresses are supported.
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    // The range of port numbers that correspond to the transport layer protocol for the source security group. Valid values:
    // 
    // *   The value is in the X/Y format when IpProtocol is set to TCP or UDP. X specifies the start port number and Y specifies the end port number. X and Y range from **1** to **65535**. The start port number and the end port number are separated by a forward slash (/). Correct example: **1/200**. Incorrect example: **200/1**.
    // *   Valid value when IpProtocol is set to ICMP: **-1/-1**.
    // *   Valid value when IpProtocol is set to GRE: **-1/-1**.
    // *   Valid value when IpProtocol is set to ALL: **-1/-1**.
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
