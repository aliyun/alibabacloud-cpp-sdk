// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPSSECURITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPSSECURITYGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupInstanceIds.hpp>
#include <alibabacloud/models/DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup(const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup(DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup &&) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& operator=(const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& operator=(DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->instanceCount_ == nullptr && return this->instanceIds_ == nullptr && return this->networkInterfaceIds_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->securityGroupName_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupInstanceIds & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupInstanceIds) };
    inline Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupInstanceIds instanceIds() { DARABONBA_PTR_GET(instanceIds_, Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupInstanceIds) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setInstanceIds(const Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupInstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setInstanceIds(Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupInstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds) };
    inline Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setNetworkInterfaceIds(const Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setNetworkInterfaceIds(Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The creation time. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the security group.
    std::shared_ptr<string> description_ = nullptr;
    // The number of associated instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The IDs of the instances that are associated with the security group.
    std::shared_ptr<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupInstanceIds> instanceIds_ = nullptr;
    // The IDs of the ENIs that are associated with the security group.
    std::shared_ptr<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupNetworkInterfaceIds> networkInterfaceIds_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the security group.
    std::shared_ptr<string> securityGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
