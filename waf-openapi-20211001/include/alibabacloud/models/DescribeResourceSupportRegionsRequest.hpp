// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESUPPORTREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESUPPORTREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceSupportRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceSupportRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceSupportRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
    };
    DescribeResourceSupportRegionsRequest() = default ;
    DescribeResourceSupportRegionsRequest(const DescribeResourceSupportRegionsRequest &) = default ;
    DescribeResourceSupportRegionsRequest(DescribeResourceSupportRegionsRequest &&) = default ;
    DescribeResourceSupportRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceSupportRegionsRequest() = default ;
    DescribeResourceSupportRegionsRequest& operator=(const DescribeResourceSupportRegionsRequest &) = default ;
    DescribeResourceSupportRegionsRequest& operator=(DescribeResourceSupportRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->resourceProduct_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeResourceSupportRegionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeResourceSupportRegionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeResourceSupportRegionsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline DescribeResourceSupportRegionsRequest& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The cloud service. Valid values:
    // 
    // *   **clb4**: Layer 4 CLB.
    // *   **clb7**: Layer 7 CLB.
    // *   **ecs**: ECS.
    shared_ptr<string> resourceProduct_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
