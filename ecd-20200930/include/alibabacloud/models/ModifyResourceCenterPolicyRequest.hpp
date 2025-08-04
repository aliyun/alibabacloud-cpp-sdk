// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCECENTERPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCECENTERPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyResourceCenterPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceCenterPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyGroupIds, policyGroupIds_);
      DARABONBA_PTR_TO_JSON(PolicyGroupType, policyGroupType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceCenterPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyGroupIds, policyGroupIds_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupType, policyGroupType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ModifyResourceCenterPolicyRequest() = default ;
    ModifyResourceCenterPolicyRequest(const ModifyResourceCenterPolicyRequest &) = default ;
    ModifyResourceCenterPolicyRequest(ModifyResourceCenterPolicyRequest &&) = default ;
    ModifyResourceCenterPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceCenterPolicyRequest() = default ;
    ModifyResourceCenterPolicyRequest& operator=(const ModifyResourceCenterPolicyRequest &) = default ;
    ModifyResourceCenterPolicyRequest& operator=(ModifyResourceCenterPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyGroupIds_ != nullptr
        && this->policyGroupType_ != nullptr && this->productType_ != nullptr && this->resourceIds_ != nullptr && this->resourceRegionId_ != nullptr && this->resourceType_ != nullptr; };
    // policyGroupIds Field Functions 
    bool hasPolicyGroupIds() const { return this->policyGroupIds_ != nullptr;};
    void deletePolicyGroupIds() { this->policyGroupIds_ = nullptr;};
    inline const vector<string> & policyGroupIds() const { DARABONBA_PTR_GET_CONST(policyGroupIds_, vector<string>) };
    inline vector<string> policyGroupIds() { DARABONBA_PTR_GET(policyGroupIds_, vector<string>) };
    inline ModifyResourceCenterPolicyRequest& setPolicyGroupIds(const vector<string> & policyGroupIds) { DARABONBA_PTR_SET_VALUE(policyGroupIds_, policyGroupIds) };
    inline ModifyResourceCenterPolicyRequest& setPolicyGroupIds(vector<string> && policyGroupIds) { DARABONBA_PTR_SET_RVALUE(policyGroupIds_, policyGroupIds) };


    // policyGroupType Field Functions 
    bool hasPolicyGroupType() const { return this->policyGroupType_ != nullptr;};
    void deletePolicyGroupType() { this->policyGroupType_ = nullptr;};
    inline string policyGroupType() const { DARABONBA_PTR_GET_DEFAULT(policyGroupType_, "") };
    inline ModifyResourceCenterPolicyRequest& setPolicyGroupType(string policyGroupType) { DARABONBA_PTR_SET_VALUE(policyGroupType_, policyGroupType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyResourceCenterPolicyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline ModifyResourceCenterPolicyRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline ModifyResourceCenterPolicyRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ModifyResourceCenterPolicyRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ModifyResourceCenterPolicyRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The IDs of the cloud computer policies that you want to associate with cloud computers.
    // 
    // >  You can specify up to one cloud computer policy that takes effect globally, and up to four cloud computer policies that apply to specific IP addresses. If multiple cloud computer policies are configured for global enforcement, only the earliest-associated policy will take effect
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> policyGroupIds_ = nullptr;
    // The policy type.
    // 
    // Valid values:
    // 
    // *   general: a general policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyGroupType_ = nullptr;
    // The service type.
    // 
    // Valid values:
    // 
    // *   app: cloud applications.
    // *   resourceGroup: resource groups.
    // *   desktop: cloud computers.
    // *   desktopGroup: cloud computer shares.
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // The resource IDs. You can specify up to 100 resource IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    // The region ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The resource type.
    // 
    // Valid values:
    // 
    // *   app: cloud applications.
    // *   desktop: cloud computers.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
