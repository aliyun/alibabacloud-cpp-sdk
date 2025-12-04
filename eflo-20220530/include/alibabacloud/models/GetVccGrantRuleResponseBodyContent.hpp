// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCGRANTRULERESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETVCCGRANTRULERESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccGrantRuleResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccGrantRuleResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(GrantRuleId, grantRuleId_);
      DARABONBA_PTR_TO_JSON(GrantTenantId, grantTenantId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Used, used_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccGrantRuleResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(GrantRuleId, grantRuleId_);
      DARABONBA_PTR_FROM_JSON(GrantTenantId, grantTenantId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Used, used_);
    };
    GetVccGrantRuleResponseBodyContent() = default ;
    GetVccGrantRuleResponseBodyContent(const GetVccGrantRuleResponseBodyContent &) = default ;
    GetVccGrantRuleResponseBodyContent(GetVccGrantRuleResponseBodyContent &&) = default ;
    GetVccGrantRuleResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccGrantRuleResponseBodyContent() = default ;
    GetVccGrantRuleResponseBodyContent& operator=(const GetVccGrantRuleResponseBodyContent &) = default ;
    GetVccGrantRuleResponseBodyContent& operator=(GetVccGrantRuleResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->erId_ == nullptr && return this->grantRuleId_ == nullptr && return this->grantTenantId_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->product_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tenantId_ == nullptr && return this->used_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVccGrantRuleResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline GetVccGrantRuleResponseBodyContent& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // grantRuleId Field Functions 
    bool hasGrantRuleId() const { return this->grantRuleId_ != nullptr;};
    void deleteGrantRuleId() { this->grantRuleId_ = nullptr;};
    inline string grantRuleId() const { DARABONBA_PTR_GET_DEFAULT(grantRuleId_, "") };
    inline GetVccGrantRuleResponseBodyContent& setGrantRuleId(string grantRuleId) { DARABONBA_PTR_SET_VALUE(grantRuleId_, grantRuleId) };


    // grantTenantId Field Functions 
    bool hasGrantTenantId() const { return this->grantTenantId_ != nullptr;};
    void deleteGrantTenantId() { this->grantTenantId_ = nullptr;};
    inline string grantTenantId() const { DARABONBA_PTR_GET_DEFAULT(grantTenantId_, "") };
    inline GetVccGrantRuleResponseBodyContent& setGrantTenantId(string grantTenantId) { DARABONBA_PTR_SET_VALUE(grantTenantId_, grantTenantId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetVccGrantRuleResponseBodyContent& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetVccGrantRuleResponseBodyContent& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetVccGrantRuleResponseBodyContent& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVccGrantRuleResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVccGrantRuleResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetVccGrantRuleResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline bool used() const { DARABONBA_PTR_GET_DEFAULT(used_, false) };
    inline GetVccGrantRuleResponseBodyContent& setUsed(bool used) { DARABONBA_PTR_SET_VALUE(used_, used) };


  protected:
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Lingjun HUB Instance ID
    std::shared_ptr<string> erId_ = nullptr;
    // Authorized Resource ID
    std::shared_ptr<string> grantRuleId_ = nullptr;
    // Authorized Tenant ID
    std::shared_ptr<string> grantTenantId_ = nullptr;
    // Network Instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // Network Instance Name
    std::shared_ptr<string> instanceName_ = nullptr;
    // Network Product Code:
    // 
    // *   **VPD**: Lingjun CIDR block
    // *   **VCC**: Lingjun Connection
    std::shared_ptr<string> product_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
    // Whether the current authorization information has been used; optional values:
    // 
    // *   **true**: Used
    // *   **false**: Not used
    std::shared_ptr<bool> used_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
