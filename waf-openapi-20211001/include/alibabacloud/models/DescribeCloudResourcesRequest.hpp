// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceDomain, resourceDomain_);
      DARABONBA_PTR_TO_JSON(ResourceFunction, resourceFunction_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceRouteName, resourceRouteName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceDomain, resourceDomain_);
      DARABONBA_PTR_FROM_JSON(ResourceFunction, resourceFunction_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceRouteName, resourceRouteName_);
    };
    DescribeCloudResourcesRequest() = default ;
    DescribeCloudResourcesRequest(const DescribeCloudResourcesRequest &) = default ;
    DescribeCloudResourcesRequest(DescribeCloudResourcesRequest &&) = default ;
    DescribeCloudResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourcesRequest() = default ;
    DescribeCloudResourcesRequest& operator=(const DescribeCloudResourcesRequest &) = default ;
    DescribeCloudResourcesRequest& operator=(DescribeCloudResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->ownerUserId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceDomain_ != nullptr
        && this->resourceFunction_ != nullptr && this->resourceInstanceId_ != nullptr && this->resourceInstanceName_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->resourceName_ != nullptr
        && this->resourceProduct_ != nullptr && this->resourceRegionId_ != nullptr && this->resourceRouteName_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCloudResourcesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline DescribeCloudResourcesRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeCloudResourcesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeCloudResourcesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCloudResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceDomain Field Functions 
    bool hasResourceDomain() const { return this->resourceDomain_ != nullptr;};
    void deleteResourceDomain() { this->resourceDomain_ = nullptr;};
    inline string resourceDomain() const { DARABONBA_PTR_GET_DEFAULT(resourceDomain_, "") };
    inline DescribeCloudResourcesRequest& setResourceDomain(string resourceDomain) { DARABONBA_PTR_SET_VALUE(resourceDomain_, resourceDomain) };


    // resourceFunction Field Functions 
    bool hasResourceFunction() const { return this->resourceFunction_ != nullptr;};
    void deleteResourceFunction() { this->resourceFunction_ = nullptr;};
    inline string resourceFunction() const { DARABONBA_PTR_GET_DEFAULT(resourceFunction_, "") };
    inline DescribeCloudResourcesRequest& setResourceFunction(string resourceFunction) { DARABONBA_PTR_SET_VALUE(resourceFunction_, resourceFunction) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeCloudResourcesRequest& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeCloudResourcesRequest& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeCloudResourcesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeCloudResourcesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string resourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline DescribeCloudResourcesRequest& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeCloudResourcesRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceRouteName Field Functions 
    bool hasResourceRouteName() const { return this->resourceRouteName_ != nullptr;};
    void deleteResourceRouteName() { this->resourceRouteName_ = nullptr;};
    inline string resourceRouteName() const { DARABONBA_PTR_GET_DEFAULT(resourceRouteName_, "") };
    inline DescribeCloudResourcesRequest& setResourceRouteName(string resourceRouteName) { DARABONBA_PTR_SET_VALUE(resourceRouteName_, resourceRouteName) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **10**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The domain name. You can use this parameter if you set ResourceProduct to fc or sae.
    std::shared_ptr<string> resourceDomain_ = nullptr;
    // The function name. You can use this parameter if you set ResourceProduct to fc.
    std::shared_ptr<string> resourceFunction_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // The name of the instance that is added to WAF.
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The cloud service to which the resource belongs. If you do not specify this parameter, the system automatically returns the Application Load Balancer (ALB), Microservices Engine (MSE), Function Compute, and Serverless App Engine (SAE) resources that are added to WAF. Valid values:
    // 
    // *   **alb**: ALB.
    // *   **mse**: MSE.
    // *   **fc**: Function Compute.
    // *   **sae**: SAE.
    // *   **ecs**: Elastic Compute Service (ECS).
    // *   **clb4**: Layer 4 Classic Load Balancer (CLB).
    // *   **clb7**: Layer 7 CLB.
    // *   **nlb**: Network Load Balancer (NLB).
    // 
    // >  Different cloud services are available in different regions. The specified cloud service must be available in the specified region.
    std::shared_ptr<string> resourceProduct_ = nullptr;
    // The region ID of the resource. For information about region IDs, see the following table.
    // 
    // >  Different cloud services are available in different regions. The specified cloud service must be available in the specified region.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The route name. You can use this parameter if you set ResourceProduct to mse.
    std::shared_ptr<string> resourceRouteName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
