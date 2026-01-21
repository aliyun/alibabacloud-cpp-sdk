// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServiceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServiceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServiceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListVpcEndpointServiceResourcesResponseBody() = default ;
    ListVpcEndpointServiceResourcesResponseBody(const ListVpcEndpointServiceResourcesResponseBody &) = default ;
    ListVpcEndpointServiceResourcesResponseBody(ListVpcEndpointServiceResourcesResponseBody &&) = default ;
    ListVpcEndpointServiceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServiceResourcesResponseBody() = default ;
    ListVpcEndpointServiceResourcesResponseBody& operator=(const ListVpcEndpointServiceResourcesResponseBody &) = default ;
    ListVpcEndpointServiceResourcesResponseBody& operator=(ListVpcEndpointServiceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(AutoAllocatedEnabled, autoAllocatedEnabled_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RelatedDeprecatedEndpointCount, relatedDeprecatedEndpointCount_);
        DARABONBA_PTR_TO_JSON(RelatedEndpointCount, relatedEndpointCount_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceSupportIPv6, resourceSupportIPv6_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoAllocatedEnabled, autoAllocatedEnabled_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RelatedDeprecatedEndpointCount, relatedDeprecatedEndpointCount_);
        DARABONBA_PTR_FROM_JSON(RelatedEndpointCount, relatedEndpointCount_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceSupportIPv6, resourceSupportIPv6_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoAllocatedEnabled_ == nullptr
        && this->ip_ == nullptr && this->regionId_ == nullptr && this->relatedDeprecatedEndpointCount_ == nullptr && this->relatedEndpointCount_ == nullptr && this->resourceId_ == nullptr
        && this->resourceSupportIPv6_ == nullptr && this->resourceType_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // autoAllocatedEnabled Field Functions 
      bool hasAutoAllocatedEnabled() const { return this->autoAllocatedEnabled_ != nullptr;};
      void deleteAutoAllocatedEnabled() { this->autoAllocatedEnabled_ = nullptr;};
      inline bool getAutoAllocatedEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAllocatedEnabled_, false) };
      inline Resources& setAutoAllocatedEnabled(bool autoAllocatedEnabled) { DARABONBA_PTR_SET_VALUE(autoAllocatedEnabled_, autoAllocatedEnabled) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Resources& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Resources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // relatedDeprecatedEndpointCount Field Functions 
      bool hasRelatedDeprecatedEndpointCount() const { return this->relatedDeprecatedEndpointCount_ != nullptr;};
      void deleteRelatedDeprecatedEndpointCount() { this->relatedDeprecatedEndpointCount_ = nullptr;};
      inline int64_t getRelatedDeprecatedEndpointCount() const { DARABONBA_PTR_GET_DEFAULT(relatedDeprecatedEndpointCount_, 0L) };
      inline Resources& setRelatedDeprecatedEndpointCount(int64_t relatedDeprecatedEndpointCount) { DARABONBA_PTR_SET_VALUE(relatedDeprecatedEndpointCount_, relatedDeprecatedEndpointCount) };


      // relatedEndpointCount Field Functions 
      bool hasRelatedEndpointCount() const { return this->relatedEndpointCount_ != nullptr;};
      void deleteRelatedEndpointCount() { this->relatedEndpointCount_ = nullptr;};
      inline int64_t getRelatedEndpointCount() const { DARABONBA_PTR_GET_DEFAULT(relatedEndpointCount_, 0L) };
      inline Resources& setRelatedEndpointCount(int64_t relatedEndpointCount) { DARABONBA_PTR_SET_VALUE(relatedEndpointCount_, relatedEndpointCount) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceSupportIPv6 Field Functions 
      bool hasResourceSupportIPv6() const { return this->resourceSupportIPv6_ != nullptr;};
      void deleteResourceSupportIPv6() { this->resourceSupportIPv6_ = nullptr;};
      inline bool getResourceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(resourceSupportIPv6_, false) };
      inline Resources& setResourceSupportIPv6(bool resourceSupportIPv6) { DARABONBA_PTR_SET_VALUE(resourceSupportIPv6_, resourceSupportIPv6) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Resources& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Resources& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Resources& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Indicates whether automatic resource allocation is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> autoAllocatedEnabled_ {};
      // The IP address of the service resource.
      shared_ptr<string> ip_ {};
      // The ID of the region where the service resource is deployed.
      shared_ptr<string> regionId_ {};
      // The number of endpoints that are associated with the service resource that is smoothly migrated.
      shared_ptr<int64_t> relatedDeprecatedEndpointCount_ {};
      // The number of endpoints that are associated with the service resource.
      shared_ptr<int64_t> relatedEndpointCount_ {};
      // The service resource ID.
      shared_ptr<string> resourceId_ {};
      // Indicates whether IPv6 is enabled for the endpoint service. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> resourceSupportIPv6_ {};
      // The type of the service resource.
      // 
      // Only **slb** is returned. This value indicates a Classic Load Balancer (CLB) instance.
      shared_ptr<string> resourceType_ {};
      // The ID of the vSwitch to which the service resource belongs.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the virtual private cloud (VPC) to which the service resource belongs.
      shared_ptr<string> vpcId_ {};
      // The ID of the zone to which the service resource belongs.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServiceResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServiceResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointServiceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListVpcEndpointServiceResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListVpcEndpointServiceResourcesResponseBody::Resources>) };
    inline vector<ListVpcEndpointServiceResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<ListVpcEndpointServiceResourcesResponseBody::Resources>) };
    inline ListVpcEndpointServiceResourcesResponseBody& setResources(const vector<ListVpcEndpointServiceResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListVpcEndpointServiceResourcesResponseBody& setResources(vector<ListVpcEndpointServiceResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service resources.
    shared_ptr<vector<ListVpcEndpointServiceResourcesResponseBody::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
