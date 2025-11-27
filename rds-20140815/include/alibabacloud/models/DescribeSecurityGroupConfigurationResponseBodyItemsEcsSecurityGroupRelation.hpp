// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPCONFIGURATIONRESPONSEBODYITEMSECSSECURITYGROUPRELATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPCONFIGURATIONRESPONSEBODYITEMSECSSECURITYGROUPRELATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation() = default ;
    DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation(const DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation &) = default ;
    DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation(DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation &&) = default ;
    DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation() = default ;
    DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& operator=(const DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation &) = default ;
    DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& operator=(DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkType_ == nullptr
        && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupName_ == nullptr; };
    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The network type of the ECS security group. Valid values:
    // 
    // *   **Classic**
    // *   **VPC**
    std::shared_ptr<string> networkType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the ECS security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The security group name.
    std::shared_ptr<string> securityGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
