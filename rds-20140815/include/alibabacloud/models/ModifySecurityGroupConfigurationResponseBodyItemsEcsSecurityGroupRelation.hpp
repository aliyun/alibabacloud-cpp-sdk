// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPCONFIGURATIONRESPONSEBODYITEMSECSSECURITYGROUPRELATION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPCONFIGURATIONRESPONSEBODYITEMSECSSECURITYGROUPRELATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation() = default ;
    ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation(const ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation &) = default ;
    ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation(ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation &&) = default ;
    ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation() = default ;
    ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& operator=(const ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation &) = default ;
    ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& operator=(ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkType_ == nullptr
        && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr; };
    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifySecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
