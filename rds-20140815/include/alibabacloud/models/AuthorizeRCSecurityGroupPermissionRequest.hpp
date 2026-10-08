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
      // The destination IP address range for outbound authorization. CIDR format and IPv4 IP address ranges are supported.
      shared_ptr<string> destCidrIp_ {};
      // The protocol type. This parameter is case-insensitive. Valid values: 
      //          
      // - **ICMP**
      // - **GRE**
      // - **TCP**
      // - **UDP**
      // - **ALL**: all protocols.
      shared_ptr<string> ipProtocol_ {};
      // The authorization policy.
      shared_ptr<string> policy_ {};
      // The range of destination ports for the transport layer protocol. Valid values:
      // - TCP/UDP: valid values are **1** to **65535**. Separate the start port and the end port with a forward slash (/). Example of a valid value: **1/200**. Example of an invalid value: **200/1**.
      // - ICMP: **-1/-1**.
      // - GRE: **-1/-1**.
      // - If IpProtocol is set to all: **-1/-1**.
      shared_ptr<string> portRange_ {};
      // The priority of the rule. Valid values: 1 to 100. A smaller value indicates a higher priority. If two security group rules have the same priority, the deny rule takes precedence.
      shared_ptr<int32_t> priority_ {};
      // The source IP address range for inbound authorization. CIDR format and IPv4 IP address ranges are supported.
      shared_ptr<string> sourceCidrIp_ {};
      // The range of source ports for the transport layer protocol. Valid values:
      // 
      // - TCP/UDP: valid values are **1** to **65535**. Separate the start port and the end port with a forward slash (/). Example of a valid value: **1/200**. Example of an invalid value: **200/1**.
      // - ICMP: **-1/-1**.
      // - GRE: **-1/-1**.
      // - If IpProtocol is set to all: **-1/-1**.
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
    // - **ingress**: inbound.
    // - **egress**: outbound.
    shared_ptr<string> direction_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The security group information.
    shared_ptr<vector<AuthorizeRCSecurityGroupPermissionRequest::SecurityGroupPermissions>> securityGroupPermissions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
