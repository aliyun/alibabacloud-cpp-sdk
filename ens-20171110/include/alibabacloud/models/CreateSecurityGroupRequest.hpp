// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYGROUPREQUEST_HPP_
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
  class CreateSecurityGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    CreateSecurityGroupRequest() = default ;
    CreateSecurityGroupRequest(const CreateSecurityGroupRequest &) = default ;
    CreateSecurityGroupRequest(CreateSecurityGroupRequest &&) = default ;
    CreateSecurityGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityGroupRequest() = default ;
    CreateSecurityGroupRequest& operator=(const CreateSecurityGroupRequest &) = default ;
    CreateSecurityGroupRequest& operator=(CreateSecurityGroupRequest &&) = default ;
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
      // The description. It must be 2 to 256 characters in length and cannot start with http:// or https://.
      shared_ptr<string> description_ {};
      // The destination IPv4 CIDR block. IPv4 CIDR blocks and IPv4 addresses are supported.
      shared_ptr<string> destCidrIp_ {};
      // The direction in which the security group rule is applied.
      // 
      // *   egress
      // *   ingress
      // 
      // This parameter is required.
      shared_ptr<string> direction_ {};
      // The protocol type. Valid values:
      // 
      // *   TCP
      // *   UDP
      // *   ICMP
      // *   ALL: All protocols are supported.
      // 
      // This parameter is required.
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<string> ipv6DestCidrIp_ {};
      shared_ptr<string> ipv6SourceCidrIp_ {};
      // The action of the security group rule. Valid values:
      // 
      // *   Accept
      // *   Drop
      // 
      // This parameter is required.
      shared_ptr<string> policy_ {};
      // The range of destination port numbers for the protocols specified in the security group rule. Valid values:
      // 
      // *   If you set IpProtocol to TCP or UDP, the port number range is 1 to 65535. Specify a port range in the format of \\<Start port number>/\\<End port number>. Example: 1/200.
      // *   If you set IpProtocol to ICMP, the port number range is -1/-1.
      // *   If you set IpProtocol to ALL, the port number range is -1/-1.
      // 
      // This parameter is required.
      shared_ptr<string> portRange_ {};
      // The priority of the security group rule. A smaller value specifies a higher priority. Valid values: 1 to 100.
      // 
      // This parameter is required.
      shared_ptr<int32_t> priority_ {};
      // The source IPv4 CIDR block. IPv4 CIDR blocks and IPv4 addresses are supported.
      shared_ptr<string> sourceCidrIp_ {};
      // The range of source port numbers for the protocols specified in the security group rule. Valid values:
      // 
      // *   If you set IpProtocol to TCP or UDP, the port number range is 1 to 65535. Specify a port range in the format of \\<Start port number>/\\<End port number>. Example: 1/200.
      // *   If you set IpProtocol to ICMP, the port number range is -1/-1.
      // *   If you set IpProtocol to ALL, the port number range is -1/-1, which indicates all port numbers.
      shared_ptr<string> sourcePortRange_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->permissions_ == nullptr && this->securityGroupName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSecurityGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<CreateSecurityGroupRequest::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<CreateSecurityGroupRequest::Permissions>) };
    inline vector<CreateSecurityGroupRequest::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<CreateSecurityGroupRequest::Permissions>) };
    inline CreateSecurityGroupRequest& setPermissions(const vector<CreateSecurityGroupRequest::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline CreateSecurityGroupRequest& setPermissions(vector<CreateSecurityGroupRequest::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline CreateSecurityGroupRequest& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The description. The description must be 2 to 256 characters in length. It must start with a letter but cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // An array of security group rules. You can specify up to 200 IDs of security group rules.
    shared_ptr<vector<CreateSecurityGroupRequest::Permissions>> permissions_ {};
    // The name of the security group. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). It must start with a letter but cannot start with http:// or https://. It can contain letters, digits, colons (:), underscores (_), and hyphens (-). By default, this parameter is empty.
    shared_ptr<string> securityGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
