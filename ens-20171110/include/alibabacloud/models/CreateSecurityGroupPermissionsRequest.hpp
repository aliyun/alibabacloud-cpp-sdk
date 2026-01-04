// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYGROUPPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYGROUPPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateSecurityGroupPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityGroupPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityGroupPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    CreateSecurityGroupPermissionsRequest() = default ;
    CreateSecurityGroupPermissionsRequest(const CreateSecurityGroupPermissionsRequest &) = default ;
    CreateSecurityGroupPermissionsRequest(CreateSecurityGroupPermissionsRequest &&) = default ;
    CreateSecurityGroupPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityGroupPermissionsRequest() = default ;
    CreateSecurityGroupPermissionsRequest& operator=(const CreateSecurityGroupPermissionsRequest &) = default ;
    CreateSecurityGroupPermissionsRequest& operator=(CreateSecurityGroupPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Permissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
        DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
        DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      };
      Permissions() = default ;
      Permissions(const Permissions &) = default ;
      Permissions(Permissions &&) = default ;
      Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Permissions() = default ;
      Permissions& operator=(const Permissions &) = default ;
      Permissions& operator=(Permissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destCidrIp_ == nullptr && this->direction_ == nullptr && this->ipProtocol_ == nullptr && this->ipv6DestCidrIp_ == nullptr && this->ipv6SourceCidrIp_ == nullptr
        && this->policy_ == nullptr && this->portRange_ == nullptr && this->priority_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourcePortRange_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Permissions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destCidrIp Field Functions 
      bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
      void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
      inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
      inline Permissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline Permissions& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline Permissions& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // ipv6DestCidrIp Field Functions 
      bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
      void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
      inline string getIpv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
      inline Permissions& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


      // ipv6SourceCidrIp Field Functions 
      bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
      void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
      inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
      inline Permissions& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Permissions& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline Permissions& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Permissions& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline Permissions& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline Permissions& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    protected:
      // The description of the storage gateway. It must be 2 to 256 characters in length and cannot start with http:// or https://.
      shared_ptr<string> description_ {};
      // The destination IPv4 CIDR block. CIDR blocks and IPv4 addresses are supported.
      shared_ptr<string> destCidrIp_ {};
      // The direction in which the security group rule is applied.
      // 
      // *   egress
      // *   ingress
      // 
      // This parameter is required.
      shared_ptr<string> direction_ {};
      // Protocol type. Valid values:
      // 
      // *   TCP
      // *   UDP
      // *   ICMP: the ICMP protocol
      // *   ICMPv6: the ICMP protocol for IPv6.
      // *   ALL: All protocols are supported.
      // 
      // This parameter is required.
      shared_ptr<string> ipProtocol_ {};
      // The destination IPv6 CIDR block. IPv6 CIDR blocks and IPv6 addresses are supported.
      // 
      // >  This parameter and the `DestCidrIp` parameter cannot be set at the same time.
      shared_ptr<string> ipv6DestCidrIp_ {};
      // The source IPv6 CIDR block of the security group rule. or IPv6 address.
      // 
      // >  This parameter and the `DestCidrIp` parameter cannot be set at the same time.
      shared_ptr<string> ipv6SourceCidrIp_ {};
      // The action specified in the security group rule. Valid values:
      // 
      // *   Accept
      // *   Drop
      // 
      // This parameter is required.
      shared_ptr<string> policy_ {};
      // The destination port range of the security group rule. Valid values:
      // 
      // *   If you set IpProtocol to TCP or UDP, the valid values of this parameter are 1 to 65535. Specify a port range in the format of \\<Start port number>/\\<End port number>. Example: 1/200.
      // *   If you set IpProtocol to ICMP, the port range is -1/-1.
      // *   ICMPv6:-1/-1.
      // *   If you set IpProtocol to ALL, the port number range is -1/-1.
      // 
      // This parameter is required.
      shared_ptr<string> portRange_ {};
      // The priority of the security group rule. A smaller value specifies a higher priority. Valid values: 1 to 100.
      // 
      // This parameter is required.
      shared_ptr<int32_t> priority_ {};
      // The source IPv4 CIDR block. CIDR blocks and IPv4 addresses are supported.
      shared_ptr<string> sourceCidrIp_ {};
      // The range of source port numbers for the protocols specified in the security group rule. Valid values:
      // 
      // *   If you set IpProtocol to TCP or UDP, the valid values of this parameter are 1 to 65535. Specify a port range in the format of \\<Start port number>/\\<End port number>. Example: 1/200.
      // *   If you set IpProtocol to ICMP, the port range is -1/-1.
      // *   ICMPv6:-1/-1.
      // *   If you set IpProtocol to ALL, the port range is -1/-1.
      shared_ptr<string> sourcePortRange_ {};
    };

    virtual bool empty() const override { return this->permissions_ == nullptr
        && this->securityGroupId_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<CreateSecurityGroupPermissionsRequest::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<CreateSecurityGroupPermissionsRequest::Permissions>) };
    inline vector<CreateSecurityGroupPermissionsRequest::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<CreateSecurityGroupPermissionsRequest::Permissions>) };
    inline CreateSecurityGroupPermissionsRequest& setPermissions(const vector<CreateSecurityGroupPermissionsRequest::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline CreateSecurityGroupPermissionsRequest& setPermissions(vector<CreateSecurityGroupPermissionsRequest::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateSecurityGroupPermissionsRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The security group rules.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateSecurityGroupPermissionsRequest::Permissions>> permissions_ {};
    // The IDs of the security groups.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
