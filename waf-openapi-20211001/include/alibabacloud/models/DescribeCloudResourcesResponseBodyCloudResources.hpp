// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESRESPONSEBODYCLOUDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESRESPONSEBODYCLOUDRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourcesResponseBodyCloudResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourcesResponseBodyCloudResources& obj) { 
      DARABONBA_PTR_TO_JSON(HttpPortCount, httpPortCount_);
      DARABONBA_PTR_TO_JSON(HttpsPortCount, httpsPortCount_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ResourceDomain, resourceDomain_);
      DARABONBA_PTR_TO_JSON(ResourceFunction, resourceFunction_);
      DARABONBA_PTR_TO_JSON(ResourceInstance, resourceInstance_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceIp, resourceInstanceIp_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceRouteName, resourceRouteName_);
      DARABONBA_PTR_TO_JSON(ResourceService, resourceService_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourcesResponseBodyCloudResources& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpPortCount, httpPortCount_);
      DARABONBA_PTR_FROM_JSON(HttpsPortCount, httpsPortCount_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceDomain, resourceDomain_);
      DARABONBA_PTR_FROM_JSON(ResourceFunction, resourceFunction_);
      DARABONBA_PTR_FROM_JSON(ResourceInstance, resourceInstance_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceIp, resourceInstanceIp_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceRouteName, resourceRouteName_);
      DARABONBA_PTR_FROM_JSON(ResourceService, resourceService_);
    };
    DescribeCloudResourcesResponseBodyCloudResources() = default ;
    DescribeCloudResourcesResponseBodyCloudResources(const DescribeCloudResourcesResponseBodyCloudResources &) = default ;
    DescribeCloudResourcesResponseBodyCloudResources(DescribeCloudResourcesResponseBodyCloudResources &&) = default ;
    DescribeCloudResourcesResponseBodyCloudResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourcesResponseBodyCloudResources() = default ;
    DescribeCloudResourcesResponseBodyCloudResources& operator=(const DescribeCloudResourcesResponseBodyCloudResources &) = default ;
    DescribeCloudResourcesResponseBodyCloudResources& operator=(DescribeCloudResourcesResponseBodyCloudResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpPortCount_ == nullptr
        && return this->httpsPortCount_ == nullptr && return this->ownerUserId_ == nullptr && return this->resourceDomain_ == nullptr && return this->resourceFunction_ == nullptr && return this->resourceInstance_ == nullptr
        && return this->resourceInstanceId_ == nullptr && return this->resourceInstanceIp_ == nullptr && return this->resourceInstanceName_ == nullptr && return this->resourceName_ == nullptr && return this->resourceProduct_ == nullptr
        && return this->resourceRegionId_ == nullptr && return this->resourceRouteName_ == nullptr && return this->resourceService_ == nullptr; };
    // httpPortCount Field Functions 
    bool hasHttpPortCount() const { return this->httpPortCount_ != nullptr;};
    void deleteHttpPortCount() { this->httpPortCount_ = nullptr;};
    inline int32_t httpPortCount() const { DARABONBA_PTR_GET_DEFAULT(httpPortCount_, 0) };
    inline DescribeCloudResourcesResponseBodyCloudResources& setHttpPortCount(int32_t httpPortCount) { DARABONBA_PTR_SET_VALUE(httpPortCount_, httpPortCount) };


    // httpsPortCount Field Functions 
    bool hasHttpsPortCount() const { return this->httpsPortCount_ != nullptr;};
    void deleteHttpsPortCount() { this->httpsPortCount_ = nullptr;};
    inline int32_t httpsPortCount() const { DARABONBA_PTR_GET_DEFAULT(httpsPortCount_, 0) };
    inline DescribeCloudResourcesResponseBodyCloudResources& setHttpsPortCount(int32_t httpsPortCount) { DARABONBA_PTR_SET_VALUE(httpsPortCount_, httpsPortCount) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // resourceDomain Field Functions 
    bool hasResourceDomain() const { return this->resourceDomain_ != nullptr;};
    void deleteResourceDomain() { this->resourceDomain_ = nullptr;};
    inline string resourceDomain() const { DARABONBA_PTR_GET_DEFAULT(resourceDomain_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceDomain(string resourceDomain) { DARABONBA_PTR_SET_VALUE(resourceDomain_, resourceDomain) };


    // resourceFunction Field Functions 
    bool hasResourceFunction() const { return this->resourceFunction_ != nullptr;};
    void deleteResourceFunction() { this->resourceFunction_ = nullptr;};
    inline string resourceFunction() const { DARABONBA_PTR_GET_DEFAULT(resourceFunction_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceFunction(string resourceFunction) { DARABONBA_PTR_SET_VALUE(resourceFunction_, resourceFunction) };


    // resourceInstance Field Functions 
    bool hasResourceInstance() const { return this->resourceInstance_ != nullptr;};
    void deleteResourceInstance() { this->resourceInstance_ = nullptr;};
    inline string resourceInstance() const { DARABONBA_PTR_GET_DEFAULT(resourceInstance_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceInstance(string resourceInstance) { DARABONBA_PTR_SET_VALUE(resourceInstance_, resourceInstance) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceIp Field Functions 
    bool hasResourceInstanceIp() const { return this->resourceInstanceIp_ != nullptr;};
    void deleteResourceInstanceIp() { this->resourceInstanceIp_ = nullptr;};
    inline string resourceInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceIp_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceInstanceIp(string resourceInstanceIp) { DARABONBA_PTR_SET_VALUE(resourceInstanceIp_, resourceInstanceIp) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string resourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceRouteName Field Functions 
    bool hasResourceRouteName() const { return this->resourceRouteName_ != nullptr;};
    void deleteResourceRouteName() { this->resourceRouteName_ = nullptr;};
    inline string resourceRouteName() const { DARABONBA_PTR_GET_DEFAULT(resourceRouteName_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceRouteName(string resourceRouteName) { DARABONBA_PTR_SET_VALUE(resourceRouteName_, resourceRouteName) };


    // resourceService Field Functions 
    bool hasResourceService() const { return this->resourceService_ != nullptr;};
    void deleteResourceService() { this->resourceService_ = nullptr;};
    inline string resourceService() const { DARABONBA_PTR_GET_DEFAULT(resourceService_, "") };
    inline DescribeCloudResourcesResponseBodyCloudResources& setResourceService(string resourceService) { DARABONBA_PTR_SET_VALUE(resourceService_, resourceService) };


  protected:
    // The number of the HTTP ports that are added to WAF.
    // 
    // >  This parameter is returned only if the cloud service is ECS or CLB.
    std::shared_ptr<int32_t> httpPortCount_ = nullptr;
    // The number of the HTTPS ports that are added to WAF.
    // 
    // >  This parameter is returned only if the cloud service is ECS or CLB.
    std::shared_ptr<int32_t> httpsPortCount_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    // The domain name. This parameter has a value only if the value of ResourceProduct is fc or sae.
    std::shared_ptr<string> resourceDomain_ = nullptr;
    // The function name. This parameter has a value only if the value of ResourceProduct is fc.
    std::shared_ptr<string> resourceFunction_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceInstance_ = nullptr;
    // The ID of the instance that is added to WAF.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // The IP address of the instance that is added to WAF.
    std::shared_ptr<string> resourceInstanceIp_ = nullptr;
    // The name of the instance that is added to WAF.
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The cloud service to which the resource belongs. Valid values:
    // 
    // *   **alb**: ALB.
    // *   **mse**: MSE.
    // *   **fc**: Function Compute.
    // *   **sae**: SAE.
    // *   **ecs**: ECS.
    // *   **clb4**: Layer 4 CLB.
    // *   **clb7**: Layer 7 CLB.
    std::shared_ptr<string> resourceProduct_ = nullptr;
    // The region ID of the resource.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The route name. This parameter has a value only if the value of ResourceProduct is mse.
    std::shared_ptr<string> resourceRouteName_ = nullptr;
    // The service name. This parameter has a value only if the value of ResourceProduct is fc.
    std::shared_ptr<string> resourceService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
