// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeSecurityGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    DescribeSecurityGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Permissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
        DARABONBA_PTR_TO_JSON(Permission, permission_);
      };
      friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
        DARABONBA_PTR_FROM_JSON(Permission, permission_);
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
      class Permission : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Permission& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
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
        friend void from_json(const Darabonba::Json& j, Permission& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
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
        Permission() = default ;
        Permission(const Permission &) = default ;
        Permission(Permission &&) = default ;
        Permission(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Permission() = default ;
        Permission& operator=(const Permission &) = default ;
        Permission& operator=(Permission &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->destCidrIp_ == nullptr && this->direction_ == nullptr && this->ipProtocol_ == nullptr && this->ipv6DestCidrIp_ == nullptr
        && this->ipv6SourceCidrIp_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr && this->priority_ == nullptr && this->sourceCidrIp_ == nullptr
        && this->sourcePortRange_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Permission& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Permission& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // destCidrIp Field Functions 
        bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
        void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
        inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
        inline Permission& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


        // direction Field Functions 
        bool hasDirection() const { return this->direction_ != nullptr;};
        void deleteDirection() { this->direction_ = nullptr;};
        inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
        inline Permission& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


        // ipProtocol Field Functions 
        bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
        void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
        inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
        inline Permission& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


        // ipv6DestCidrIp Field Functions 
        bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
        void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
        inline string getIpv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
        inline Permission& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


        // ipv6SourceCidrIp Field Functions 
        bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
        void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
        inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
        inline Permission& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline Permission& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // portRange Field Functions 
        bool hasPortRange() const { return this->portRange_ != nullptr;};
        void deletePortRange() { this->portRange_ = nullptr;};
        inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
        inline Permission& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Permission& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // sourceCidrIp Field Functions 
        bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
        void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
        inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
        inline Permission& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


        // sourcePortRange Field Functions 
        bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
        void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
        inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
        inline Permission& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


      protected:
        // The time at which the security group rule was created. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The range of destination IP addresses for outbound access control.
        shared_ptr<string> destCidrIp_ {};
        // The direction in which the security group rule is applied.
        shared_ptr<string> direction_ {};
        // The transport layer protocol.
        shared_ptr<string> ipProtocol_ {};
        shared_ptr<string> ipv6DestCidrIp_ {};
        shared_ptr<string> ipv6SourceCidrIp_ {};
        // The policy.
        shared_ptr<string> policy_ {};
        // The source port range.
        shared_ptr<string> portRange_ {};
        // The priority of the rule.
        shared_ptr<int32_t> priority_ {};
        // The range of source IP addresses for inbound access control.
        shared_ptr<string> sourceCidrIp_ {};
        // The source port number range for the security group.
        shared_ptr<string> sourcePortRange_ {};
      };

      virtual bool empty() const override { return this->permission_ == nullptr; };
      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline const vector<Permissions::Permission> & getPermission() const { DARABONBA_PTR_GET_CONST(permission_, vector<Permissions::Permission>) };
      inline vector<Permissions::Permission> getPermission() { DARABONBA_PTR_GET(permission_, vector<Permissions::Permission>) };
      inline Permissions& setPermission(const vector<Permissions::Permission> & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
      inline Permissions& setPermission(vector<Permissions::Permission> && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


    protected:
      shared_ptr<vector<Permissions::Permission>> permission_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->permissions_ == nullptr && this->requestId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const DescribeSecurityGroupAttributeResponseBody::Permissions & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, DescribeSecurityGroupAttributeResponseBody::Permissions) };
    inline DescribeSecurityGroupAttributeResponseBody::Permissions getPermissions() { DARABONBA_PTR_GET(permissions_, DescribeSecurityGroupAttributeResponseBody::Permissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setPermissions(const DescribeSecurityGroupAttributeResponseBody::Permissions & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setPermissions(DescribeSecurityGroupAttributeResponseBody::Permissions && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The description of the security group.
    shared_ptr<string> description_ {};
    // Details about the rules.
    shared_ptr<DescribeSecurityGroupAttributeResponseBody::Permissions> permissions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the destination security group.
    shared_ptr<string> securityGroupId_ {};
    // The name of the destination security group.
    shared_ptr<string> securityGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
