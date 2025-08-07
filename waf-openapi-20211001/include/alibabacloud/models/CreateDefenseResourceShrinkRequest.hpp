// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEFENSERESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEFENSERESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDefenseResourceShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDefenseResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDefenseResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHeaders, customHeadersShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOrigin, resourceOrigin_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(XffStatus, xffStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDefenseResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHeaders, customHeadersShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOrigin, resourceOrigin_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(XffStatus, xffStatus_);
    };
    CreateDefenseResourceShrinkRequest() = default ;
    CreateDefenseResourceShrinkRequest(const CreateDefenseResourceShrinkRequest &) = default ;
    CreateDefenseResourceShrinkRequest(CreateDefenseResourceShrinkRequest &&) = default ;
    CreateDefenseResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDefenseResourceShrinkRequest() = default ;
    CreateDefenseResourceShrinkRequest& operator=(const CreateDefenseResourceShrinkRequest &) = default ;
    CreateDefenseResourceShrinkRequest& operator=(CreateDefenseResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customHeadersShrink_ != nullptr
        && this->description_ != nullptr && this->detail_ != nullptr && this->instanceId_ != nullptr && this->ownerUserId_ != nullptr && this->pattern_ != nullptr
        && this->product_ != nullptr && this->regionId_ != nullptr && this->resource_ != nullptr && this->resourceGroup_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr
        && this->resourceOrigin_ != nullptr && this->tag_ != nullptr && this->xffStatus_ != nullptr; };
    // customHeadersShrink Field Functions 
    bool hasCustomHeadersShrink() const { return this->customHeadersShrink_ != nullptr;};
    void deleteCustomHeadersShrink() { this->customHeadersShrink_ = nullptr;};
    inline string customHeadersShrink() const { DARABONBA_PTR_GET_DEFAULT(customHeadersShrink_, "") };
    inline CreateDefenseResourceShrinkRequest& setCustomHeadersShrink(string customHeadersShrink) { DARABONBA_PTR_SET_VALUE(customHeadersShrink_, customHeadersShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDefenseResourceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline CreateDefenseResourceShrinkRequest& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDefenseResourceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline CreateDefenseResourceShrinkRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline CreateDefenseResourceShrinkRequest& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline CreateDefenseResourceShrinkRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDefenseResourceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateDefenseResourceShrinkRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline CreateDefenseResourceShrinkRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateDefenseResourceShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceOrigin Field Functions 
    bool hasResourceOrigin() const { return this->resourceOrigin_ != nullptr;};
    void deleteResourceOrigin() { this->resourceOrigin_ = nullptr;};
    inline string resourceOrigin() const { DARABONBA_PTR_GET_DEFAULT(resourceOrigin_, "") };
    inline CreateDefenseResourceShrinkRequest& setResourceOrigin(string resourceOrigin) { DARABONBA_PTR_SET_VALUE(resourceOrigin_, resourceOrigin) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDefenseResourceShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDefenseResourceShrinkRequestTag>) };
    inline vector<CreateDefenseResourceShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDefenseResourceShrinkRequestTag>) };
    inline CreateDefenseResourceShrinkRequest& setTag(const vector<CreateDefenseResourceShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDefenseResourceShrinkRequest& setTag(vector<CreateDefenseResourceShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // xffStatus Field Functions 
    bool hasXffStatus() const { return this->xffStatus_ != nullptr;};
    void deleteXffStatus() { this->xffStatus_ = nullptr;};
    inline int32_t xffStatus() const { DARABONBA_PTR_GET_DEFAULT(xffStatus_, 0) };
    inline CreateDefenseResourceShrinkRequest& setXffStatus(int32_t xffStatus) { DARABONBA_PTR_SET_VALUE(xffStatus_, xffStatus) };


  protected:
    std::shared_ptr<string> customHeadersShrink_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> detail_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pattern_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceOrigin_ = nullptr;
    std::shared_ptr<vector<CreateDefenseResourceShrinkRequestTag>> tag_ = nullptr;
    std::shared_ptr<int32_t> xffStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
