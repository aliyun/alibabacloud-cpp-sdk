// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPPERMISSIONRESPONSEBODY_HPP_
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
  class DescribeRCSecurityGroupPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCSecurityGroupPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InnerAccessPolicy, innerAccessPolicy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupPermissions, securityGroupPermissions_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCSecurityGroupPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InnerAccessPolicy, innerAccessPolicy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupPermissions, securityGroupPermissions_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeRCSecurityGroupPermissionResponseBody() = default ;
    DescribeRCSecurityGroupPermissionResponseBody(const DescribeRCSecurityGroupPermissionResponseBody &) = default ;
    DescribeRCSecurityGroupPermissionResponseBody(DescribeRCSecurityGroupPermissionResponseBody &&) = default ;
    DescribeRCSecurityGroupPermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCSecurityGroupPermissionResponseBody() = default ;
    DescribeRCSecurityGroupPermissionResponseBody& operator=(const DescribeRCSecurityGroupPermissionResponseBody &) = default ;
    DescribeRCSecurityGroupPermissionResponseBody& operator=(DescribeRCSecurityGroupPermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityGroupPermissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroupPermissions& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SecurityGroupRuleId, securityGroupRuleId_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroupPermissions& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupRuleId, securityGroupRuleId_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->destCidrIp_ == nullptr && this->direction_ == nullptr && this->ipProtocol_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr
        && this->priority_ == nullptr && this->securityGroupRuleId_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourcePortRange_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SecurityGroupPermissions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // destCidrIp Field Functions 
      bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
      void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
      inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
      inline SecurityGroupPermissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline SecurityGroupPermissions& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


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
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline SecurityGroupPermissions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // securityGroupRuleId Field Functions 
      bool hasSecurityGroupRuleId() const { return this->securityGroupRuleId_ != nullptr;};
      void deleteSecurityGroupRuleId() { this->securityGroupRuleId_ = nullptr;};
      inline string getSecurityGroupRuleId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupRuleId_, "") };
      inline SecurityGroupPermissions& setSecurityGroupRuleId(string securityGroupRuleId) { DARABONBA_PTR_SET_VALUE(securityGroupRuleId_, securityGroupRuleId) };


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
      shared_ptr<string> createTime_ {};
      shared_ptr<string> destCidrIp_ {};
      shared_ptr<string> direction_ {};
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<string> policy_ {};
      shared_ptr<string> portRange_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<string> securityGroupRuleId_ {};
      shared_ptr<string> sourceCidrIp_ {};
      shared_ptr<string> sourcePortRange_ {};
    };

    virtual bool empty() const override { return this->innerAccessPolicy_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupPermissions_ == nullptr && this->vpcId_ == nullptr; };
    // innerAccessPolicy Field Functions 
    bool hasInnerAccessPolicy() const { return this->innerAccessPolicy_ != nullptr;};
    void deleteInnerAccessPolicy() { this->innerAccessPolicy_ = nullptr;};
    inline string getInnerAccessPolicy() const { DARABONBA_PTR_GET_DEFAULT(innerAccessPolicy_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setInnerAccessPolicy(string innerAccessPolicy) { DARABONBA_PTR_SET_VALUE(innerAccessPolicy_, innerAccessPolicy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupPermissions Field Functions 
    bool hasSecurityGroupPermissions() const { return this->securityGroupPermissions_ != nullptr;};
    void deleteSecurityGroupPermissions() { this->securityGroupPermissions_ = nullptr;};
    inline const vector<DescribeRCSecurityGroupPermissionResponseBody::SecurityGroupPermissions> & getSecurityGroupPermissions() const { DARABONBA_PTR_GET_CONST(securityGroupPermissions_, vector<DescribeRCSecurityGroupPermissionResponseBody::SecurityGroupPermissions>) };
    inline vector<DescribeRCSecurityGroupPermissionResponseBody::SecurityGroupPermissions> getSecurityGroupPermissions() { DARABONBA_PTR_GET(securityGroupPermissions_, vector<DescribeRCSecurityGroupPermissionResponseBody::SecurityGroupPermissions>) };
    inline DescribeRCSecurityGroupPermissionResponseBody& setSecurityGroupPermissions(const vector<DescribeRCSecurityGroupPermissionResponseBody::SecurityGroupPermissions> & securityGroupPermissions) { DARABONBA_PTR_SET_VALUE(securityGroupPermissions_, securityGroupPermissions) };
    inline DescribeRCSecurityGroupPermissionResponseBody& setSecurityGroupPermissions(vector<DescribeRCSecurityGroupPermissionResponseBody::SecurityGroupPermissions> && securityGroupPermissions) { DARABONBA_PTR_SET_RVALUE(securityGroupPermissions_, securityGroupPermissions) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> innerAccessPolicy_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<vector<DescribeRCSecurityGroupPermissionResponseBody::SecurityGroupPermissions>> securityGroupPermissions_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
