// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPPERMISSIONRESPONSEBODYSECURITYGROUPPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPPERMISSIONRESPONSEBODYSECURITYGROUPPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& obj) { 
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
    DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions() = default ;
    DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions(const DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions &) = default ;
    DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions(DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions &&) = default ;
    DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions() = default ;
    DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& operator=(const DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions &) = default ;
    DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& operator=(DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->destCidrIp_ == nullptr && return this->direction_ == nullptr && return this->ipProtocol_ == nullptr && return this->policy_ == nullptr && return this->portRange_ == nullptr
        && return this->priority_ == nullptr && return this->securityGroupRuleId_ == nullptr && return this->sourceCidrIp_ == nullptr && return this->sourcePortRange_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string destCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // securityGroupRuleId Field Functions 
    bool hasSecurityGroupRuleId() const { return this->securityGroupRuleId_ != nullptr;};
    void deleteSecurityGroupRuleId() { this->securityGroupRuleId_ = nullptr;};
    inline string securityGroupRuleId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupRuleId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setSecurityGroupRuleId(string securityGroupRuleId) { DARABONBA_PTR_SET_VALUE(securityGroupRuleId_, securityGroupRuleId) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> destCidrIp_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> ipProtocol_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> portRange_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<string> securityGroupRuleId_ = nullptr;
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
