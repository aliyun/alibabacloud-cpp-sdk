// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODYPERMISSIONSPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODYPERMISSIONSPERMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecurityGroupAttributeResponseBodyPermissionsPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission() = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission(const DescribeSecurityGroupAttributeResponseBodyPermissionsPermission &) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission(DescribeSecurityGroupAttributeResponseBodyPermissionsPermission &&) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBodyPermissionsPermission() = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& operator=(const DescribeSecurityGroupAttributeResponseBodyPermissionsPermission &) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& operator=(DescribeSecurityGroupAttributeResponseBodyPermissionsPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->destCidrIp_ != nullptr && this->direction_ != nullptr && this->ipProtocol_ != nullptr && this->policy_ != nullptr
        && this->portRange_ != nullptr && this->priority_ != nullptr && this->sourceCidrIp_ != nullptr && this->sourcePortRange_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string destCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // The time at which the security group rule was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The range of destination IP addresses for outbound access control.
    std::shared_ptr<string> destCidrIp_ = nullptr;
    // The direction in which the security group rule is applied.
    std::shared_ptr<string> direction_ = nullptr;
    // The transport layer protocol.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The policy.
    std::shared_ptr<string> policy_ = nullptr;
    // The source port range.
    std::shared_ptr<string> portRange_ = nullptr;
    // The priority of the rule.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The range of source IP addresses for inbound access control.
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    // The source port number range for the security group.
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
