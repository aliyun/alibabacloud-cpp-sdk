// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERCSECURITYGROUPPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERCSECURITYGROUPPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AuthorizeRCSecurityGroupPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeRCSecurityGroupPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupPermissions, securityGroupPermissions_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeRCSecurityGroupPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupPermissions, securityGroupPermissions_);
    };
    AuthorizeRCSecurityGroupPermissionRequest() = default ;
    AuthorizeRCSecurityGroupPermissionRequest(const AuthorizeRCSecurityGroupPermissionRequest &) = default ;
    AuthorizeRCSecurityGroupPermissionRequest(AuthorizeRCSecurityGroupPermissionRequest &&) = default ;
    AuthorizeRCSecurityGroupPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeRCSecurityGroupPermissionRequest() = default ;
    AuthorizeRCSecurityGroupPermissionRequest& operator=(const AuthorizeRCSecurityGroupPermissionRequest &) = default ;
    AuthorizeRCSecurityGroupPermissionRequest& operator=(AuthorizeRCSecurityGroupPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityGroupPermissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroupPermissions& obj) { 
        DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroupPermissions& obj) { 
        DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      };
      SecurityGroupPermissions() = default ;
      SecurityGroupPermissions(const SecurityGroupPermissions &) = default ;
      SecurityGroupPermissions(SecurityGroupPermissions &&) = default ;
      SecurityGroupPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroupPermissions() = default ;
      SecurityGroupPermissions& operator=(const SecurityGroupPermissions &) = default ;
      SecurityGroupPermissions& operator=(SecurityGroupPermissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destCidrIp_ == nullptr
        && this->ipProtocol_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr && this->priority_ == nullptr && this->sourceCidrIp_ == nullptr
        && this->sourcePortRange_ == nullptr; };
      // destCidrIp Field Functions 
      bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
      void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
      inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
      inline SecurityGroupPermissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline SecurityGroupPermissions& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline SecurityGroupPermissions& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline SecurityGroupPermissions& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline SecurityGroupPermissions& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline SecurityGroupPermissions& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline SecurityGroupPermissions& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    protected:
      // The destination CIDR block for outbound access control. CIDR blocks and IPv4 addresses are supported.
      shared_ptr<string> destCidrIp_ {};
      // The protocol type supported by the rule. The value is not case-sensitive. Valid values:
      // 
      // *   **ICMP**
      // *   **GRE**
      // *   **TCP**
      // *   **UDP**
      // *   **ALL**: All protocols are supported.
      shared_ptr<string> ipProtocol_ {};
      // The action that you want to specify in the rule.
      shared_ptr<string> policy_ {};
      // The range of destination ports that correspond to the transport layer protocol of the destination security group. Valid values:
      // 
      // *   The value is in the X/Y format when IpProtocol is set to TCP or UDP. X specifies the start port number and Y specifies the end port number. X and Y range from **1** to **65535**. The start port number and the end port number are separated by a forward slash (/). Correct example: **1/200**. Incorrect example: **200/1**.
      // *   Valid value when IpProtocol is set to ICMP: **-1/-1**.
      // *   Valid value when IpProtocol is set to GRE: **-1/-1**.
      // *   Valid value when IpProtocol is set to ALL: **-1/-1**.
      shared_ptr<string> portRange_ {};
      // The priority of the rule. Valid values: 1 to 100. A smaller value indicates a higher priority. When multiple security group rules have the same priority, drop rules take precedence.
      shared_ptr<int32_t> priority_ {};
      // The source CIDR block for inbound access control. CIDR blocks and IPv4 addresses are supported.
      shared_ptr<string> sourceCidrIp_ {};
      // The range of port numbers that correspond to the transport layer protocol for the source security group. Valid values:
      // 
      // *   The value is in the X/Y format when IpProtocol is set to TCP or UDP. X specifies the start port number and Y specifies the end port number. X and Y range from **1** to **65535**. The start port number and the end port number are separated by a forward slash (/). Correct example: **1/200**. Incorrect example: **200/1**.
      // *   Valid value when IpProtocol is set to ICMP: **-1/-1**.
      // *   Valid value when IpProtocol is set to GRE: **-1/-1**.
      // *   Valid value when IpProtocol is set to ALL: **-1/-1**.
      shared_ptr<string> sourcePortRange_ {};
    };

    virtual bool empty() const override { return this->direction_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupPermissions_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline AuthorizeRCSecurityGroupPermissionRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupPermissions Field Functions 
    bool hasSecurityGroupPermissions() const { return this->securityGroupPermissions_ != nullptr;};
    void deleteSecurityGroupPermissions() { this->securityGroupPermissions_ = nullptr;};
    inline const vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions> & getSecurityGroupPermissions() const { DARABONBA_PTR_GET_CONST(securityGroupPermissions_, vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions>) };
    inline vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions> getSecurityGroupPermissions() { DARABONBA_PTR_GET(securityGroupPermissions_, vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions>) };
    inline AuthorizeRCSecurityGroupPermissionRequest& setSecurityGroupPermissions(const vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions> & securityGroupPermissions) { DARABONBA_PTR_SET_VALUE(securityGroupPermissions_, securityGroupPermissions) };
    inline AuthorizeRCSecurityGroupPermissionRequest& setSecurityGroupPermissions(vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions> && securityGroupPermissions) { DARABONBA_PTR_SET_RVALUE(securityGroupPermissions_, securityGroupPermissions) };


  protected:
    // The direction of the rule. Valid values:
    // 
    // *   **ingress**: the inbound security group rule.
    // *   **egress**: the outbound security group rule.
    shared_ptr<string> direction_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the security group.
    shared_ptr<string> securityGroupId_ {};
    // The information about the security group.
    shared_ptr<vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions>> securityGroupPermissions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
