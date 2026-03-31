// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudResourcesResponseBody() = default ;
    DescribeCloudResourcesResponseBody(const DescribeCloudResourcesResponseBody &) = default ;
    DescribeCloudResourcesResponseBody(DescribeCloudResourcesResponseBody &&) = default ;
    DescribeCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourcesResponseBody() = default ;
    DescribeCloudResourcesResponseBody& operator=(const DescribeCloudResourcesResponseBody &) = default ;
    DescribeCloudResourcesResponseBody& operator=(DescribeCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudResources& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CloudResources& obj) { 
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
      CloudResources() = default ;
      CloudResources(const CloudResources &) = default ;
      CloudResources(CloudResources &&) = default ;
      CloudResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudResources() = default ;
      CloudResources& operator=(const CloudResources &) = default ;
      CloudResources& operator=(CloudResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->httpPortCount_ == nullptr
        && this->httpsPortCount_ == nullptr && this->ownerUserId_ == nullptr && this->resourceDomain_ == nullptr && this->resourceFunction_ == nullptr && this->resourceInstance_ == nullptr
        && this->resourceInstanceId_ == nullptr && this->resourceInstanceIp_ == nullptr && this->resourceInstanceName_ == nullptr && this->resourceName_ == nullptr && this->resourceProduct_ == nullptr
        && this->resourceRegionId_ == nullptr && this->resourceRouteName_ == nullptr && this->resourceService_ == nullptr; };
      // httpPortCount Field Functions 
      bool hasHttpPortCount() const { return this->httpPortCount_ != nullptr;};
      void deleteHttpPortCount() { this->httpPortCount_ = nullptr;};
      inline int32_t getHttpPortCount() const { DARABONBA_PTR_GET_DEFAULT(httpPortCount_, 0) };
      inline CloudResources& setHttpPortCount(int32_t httpPortCount) { DARABONBA_PTR_SET_VALUE(httpPortCount_, httpPortCount) };


      // httpsPortCount Field Functions 
      bool hasHttpsPortCount() const { return this->httpsPortCount_ != nullptr;};
      void deleteHttpsPortCount() { this->httpsPortCount_ = nullptr;};
      inline int32_t getHttpsPortCount() const { DARABONBA_PTR_GET_DEFAULT(httpsPortCount_, 0) };
      inline CloudResources& setHttpsPortCount(int32_t httpsPortCount) { DARABONBA_PTR_SET_VALUE(httpsPortCount_, httpsPortCount) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline CloudResources& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // resourceDomain Field Functions 
      bool hasResourceDomain() const { return this->resourceDomain_ != nullptr;};
      void deleteResourceDomain() { this->resourceDomain_ = nullptr;};
      inline string getResourceDomain() const { DARABONBA_PTR_GET_DEFAULT(resourceDomain_, "") };
      inline CloudResources& setResourceDomain(string resourceDomain) { DARABONBA_PTR_SET_VALUE(resourceDomain_, resourceDomain) };


      // resourceFunction Field Functions 
      bool hasResourceFunction() const { return this->resourceFunction_ != nullptr;};
      void deleteResourceFunction() { this->resourceFunction_ = nullptr;};
      inline string getResourceFunction() const { DARABONBA_PTR_GET_DEFAULT(resourceFunction_, "") };
      inline CloudResources& setResourceFunction(string resourceFunction) { DARABONBA_PTR_SET_VALUE(resourceFunction_, resourceFunction) };


      // resourceInstance Field Functions 
      bool hasResourceInstance() const { return this->resourceInstance_ != nullptr;};
      void deleteResourceInstance() { this->resourceInstance_ = nullptr;};
      inline string getResourceInstance() const { DARABONBA_PTR_GET_DEFAULT(resourceInstance_, "") };
      inline CloudResources& setResourceInstance(string resourceInstance) { DARABONBA_PTR_SET_VALUE(resourceInstance_, resourceInstance) };


      // resourceInstanceId Field Functions 
      bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
      void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
      inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
      inline CloudResources& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


      // resourceInstanceIp Field Functions 
      bool hasResourceInstanceIp() const { return this->resourceInstanceIp_ != nullptr;};
      void deleteResourceInstanceIp() { this->resourceInstanceIp_ = nullptr;};
      inline string getResourceInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceIp_, "") };
      inline CloudResources& setResourceInstanceIp(string resourceInstanceIp) { DARABONBA_PTR_SET_VALUE(resourceInstanceIp_, resourceInstanceIp) };


      // resourceInstanceName Field Functions 
      bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
      void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
      inline string getResourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
      inline CloudResources& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline CloudResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceProduct Field Functions 
      bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
      void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
      inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
      inline CloudResources& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline CloudResources& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // resourceRouteName Field Functions 
      bool hasResourceRouteName() const { return this->resourceRouteName_ != nullptr;};
      void deleteResourceRouteName() { this->resourceRouteName_ = nullptr;};
      inline string getResourceRouteName() const { DARABONBA_PTR_GET_DEFAULT(resourceRouteName_, "") };
      inline CloudResources& setResourceRouteName(string resourceRouteName) { DARABONBA_PTR_SET_VALUE(resourceRouteName_, resourceRouteName) };


      // resourceService Field Functions 
      bool hasResourceService() const { return this->resourceService_ != nullptr;};
      void deleteResourceService() { this->resourceService_ = nullptr;};
      inline string getResourceService() const { DARABONBA_PTR_GET_DEFAULT(resourceService_, "") };
      inline CloudResources& setResourceService(string resourceService) { DARABONBA_PTR_SET_VALUE(resourceService_, resourceService) };


    protected:
      // The number of the HTTP ports that are added to WAF.
      // 
      // >  This parameter is returned only if the cloud service is ECS or CLB.
      shared_ptr<int32_t> httpPortCount_ {};
      // The number of the HTTPS ports that are added to WAF.
      // 
      // >  This parameter is returned only if the cloud service is ECS or CLB.
      shared_ptr<int32_t> httpsPortCount_ {};
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<string> ownerUserId_ {};
      // The domain name. This parameter has a value only if the value of ResourceProduct is fc or sae.
      shared_ptr<string> resourceDomain_ {};
      // The function name. This parameter has a value only if the value of ResourceProduct is fc.
      shared_ptr<string> resourceFunction_ {};
      // The ID of the resource.
      shared_ptr<string> resourceInstance_ {};
      // The ID of the instance that is added to WAF.
      shared_ptr<string> resourceInstanceId_ {};
      // The IP address of the instance that is added to WAF.
      shared_ptr<string> resourceInstanceIp_ {};
      // The name of the instance that is added to WAF.
      shared_ptr<string> resourceInstanceName_ {};
      // The name of the resource.
      shared_ptr<string> resourceName_ {};
      // The cloud service to which the resource belongs. Valid values:
      // 
      // *   **alb**: ALB.
      // *   **mse**: MSE.
      // *   **fc**: Function Compute.
      // *   **sae**: SAE.
      // *   **ecs**: ECS.
      // *   **clb4**: Layer 4 CLB.
      // *   **clb7**: Layer 7 CLB.
      shared_ptr<string> resourceProduct_ {};
      // The region ID of the resource.
      shared_ptr<string> resourceRegionId_ {};
      // The route name. This parameter has a value only if the value of ResourceProduct is mse.
      shared_ptr<string> resourceRouteName_ {};
      // The service name. This parameter has a value only if the value of ResourceProduct is fc.
      shared_ptr<string> resourceService_ {};
    };

    virtual bool empty() const override { return this->cloudResources_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudResources Field Functions 
    bool hasCloudResources() const { return this->cloudResources_ != nullptr;};
    void deleteCloudResources() { this->cloudResources_ = nullptr;};
    inline const vector<DescribeCloudResourcesResponseBody::CloudResources> & getCloudResources() const { DARABONBA_PTR_GET_CONST(cloudResources_, vector<DescribeCloudResourcesResponseBody::CloudResources>) };
    inline vector<DescribeCloudResourcesResponseBody::CloudResources> getCloudResources() { DARABONBA_PTR_GET(cloudResources_, vector<DescribeCloudResourcesResponseBody::CloudResources>) };
    inline DescribeCloudResourcesResponseBody& setCloudResources(const vector<DescribeCloudResourcesResponseBody::CloudResources> & cloudResources) { DARABONBA_PTR_SET_VALUE(cloudResources_, cloudResources) };
    inline DescribeCloudResourcesResponseBody& setCloudResources(vector<DescribeCloudResourcesResponseBody::CloudResources> && cloudResources) { DARABONBA_PTR_SET_RVALUE(cloudResources_, cloudResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCloudResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cloud service resources that are added to WAF.
    shared_ptr<vector<DescribeCloudResourcesResponseBody::CloudResources>> cloudResources_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of cloud service resources returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
