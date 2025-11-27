// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPLISTRESPONSEBODYRCSECURITYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPLISTRESPONSEBODYRCSECURITYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCSecurityGroupListResponseBodyRCSecurityGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableInstanceAmount, availableInstanceAmount_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupType, securityGroupType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableInstanceAmount, availableInstanceAmount_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupType, securityGroupType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeRCSecurityGroupListResponseBodyRCSecurityGroups() = default ;
    DescribeRCSecurityGroupListResponseBodyRCSecurityGroups(const DescribeRCSecurityGroupListResponseBodyRCSecurityGroups &) = default ;
    DescribeRCSecurityGroupListResponseBodyRCSecurityGroups(DescribeRCSecurityGroupListResponseBodyRCSecurityGroups &&) = default ;
    DescribeRCSecurityGroupListResponseBodyRCSecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCSecurityGroupListResponseBodyRCSecurityGroups() = default ;
    DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& operator=(const DescribeRCSecurityGroupListResponseBodyRCSecurityGroups &) = default ;
    DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& operator=(DescribeRCSecurityGroupListResponseBodyRCSecurityGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableInstanceAmount_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->instanceCount_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupType_ == nullptr
        && return this->vpcId_ == nullptr; };
    // availableInstanceAmount Field Functions 
    bool hasAvailableInstanceAmount() const { return this->availableInstanceAmount_ != nullptr;};
    void deleteAvailableInstanceAmount() { this->availableInstanceAmount_ = nullptr;};
    inline int32_t availableInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(availableInstanceAmount_, 0) };
    inline DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& setAvailableInstanceAmount(int32_t availableInstanceAmount) { DARABONBA_PTR_SET_VALUE(availableInstanceAmount_, availableInstanceAmount) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupType Field Functions 
    bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
    void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
    inline string securityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
    inline DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRCSecurityGroupListResponseBodyRCSecurityGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of instances that can be added to the security group.
    std::shared_ptr<int32_t> availableInstanceAmount_ = nullptr;
    // The time when the security group was created. The time follows the ISO 8601 standard and is in the `yyyy-MM-ddThh:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the security group.
    std::shared_ptr<string> description_ = nullptr;
    // The number of instances that are added to the security group.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The type of the security group. Valid values:
    // 
    // *   **normal**: a normal security group.
    // *   **enterprise**: an advanced security group.
    std::shared_ptr<string> securityGroupType_ = nullptr;
    // The ID of the VPC to which the security group belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
