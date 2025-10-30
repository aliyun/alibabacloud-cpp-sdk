// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICERESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICERESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServiceResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServiceResourcesResponseBodyResources& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServiceResourcesResponseBodyResources& obj) { 
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
    ListVpcEndpointServiceResourcesResponseBodyResources() = default ;
    ListVpcEndpointServiceResourcesResponseBodyResources(const ListVpcEndpointServiceResourcesResponseBodyResources &) = default ;
    ListVpcEndpointServiceResourcesResponseBodyResources(ListVpcEndpointServiceResourcesResponseBodyResources &&) = default ;
    ListVpcEndpointServiceResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServiceResourcesResponseBodyResources() = default ;
    ListVpcEndpointServiceResourcesResponseBodyResources& operator=(const ListVpcEndpointServiceResourcesResponseBodyResources &) = default ;
    ListVpcEndpointServiceResourcesResponseBodyResources& operator=(ListVpcEndpointServiceResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAllocatedEnabled_ == nullptr
        && return this->ip_ == nullptr && return this->regionId_ == nullptr && return this->relatedDeprecatedEndpointCount_ == nullptr && return this->relatedEndpointCount_ == nullptr && return this->resourceId_ == nullptr
        && return this->resourceSupportIPv6_ == nullptr && return this->resourceType_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // autoAllocatedEnabled Field Functions 
    bool hasAutoAllocatedEnabled() const { return this->autoAllocatedEnabled_ != nullptr;};
    void deleteAutoAllocatedEnabled() { this->autoAllocatedEnabled_ = nullptr;};
    inline bool autoAllocatedEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAllocatedEnabled_, false) };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setAutoAllocatedEnabled(bool autoAllocatedEnabled) { DARABONBA_PTR_SET_VALUE(autoAllocatedEnabled_, autoAllocatedEnabled) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedDeprecatedEndpointCount Field Functions 
    bool hasRelatedDeprecatedEndpointCount() const { return this->relatedDeprecatedEndpointCount_ != nullptr;};
    void deleteRelatedDeprecatedEndpointCount() { this->relatedDeprecatedEndpointCount_ = nullptr;};
    inline int64_t relatedDeprecatedEndpointCount() const { DARABONBA_PTR_GET_DEFAULT(relatedDeprecatedEndpointCount_, 0L) };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setRelatedDeprecatedEndpointCount(int64_t relatedDeprecatedEndpointCount) { DARABONBA_PTR_SET_VALUE(relatedDeprecatedEndpointCount_, relatedDeprecatedEndpointCount) };


    // relatedEndpointCount Field Functions 
    bool hasRelatedEndpointCount() const { return this->relatedEndpointCount_ != nullptr;};
    void deleteRelatedEndpointCount() { this->relatedEndpointCount_ = nullptr;};
    inline int64_t relatedEndpointCount() const { DARABONBA_PTR_GET_DEFAULT(relatedEndpointCount_, 0L) };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setRelatedEndpointCount(int64_t relatedEndpointCount) { DARABONBA_PTR_SET_VALUE(relatedEndpointCount_, relatedEndpointCount) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceSupportIPv6 Field Functions 
    bool hasResourceSupportIPv6() const { return this->resourceSupportIPv6_ != nullptr;};
    void deleteResourceSupportIPv6() { this->resourceSupportIPv6_ = nullptr;};
    inline bool resourceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(resourceSupportIPv6_, false) };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setResourceSupportIPv6(bool resourceSupportIPv6) { DARABONBA_PTR_SET_VALUE(resourceSupportIPv6_, resourceSupportIPv6) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListVpcEndpointServiceResourcesResponseBodyResources& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Indicates whether automatic resource allocation is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoAllocatedEnabled_ = nullptr;
    // The IP address of the service resource.
    std::shared_ptr<string> ip_ = nullptr;
    // The ID of the region where the service resource is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of endpoints that are associated with the service resource that is smoothly migrated.
    std::shared_ptr<int64_t> relatedDeprecatedEndpointCount_ = nullptr;
    // The number of endpoints that are associated with the service resource.
    std::shared_ptr<int64_t> relatedEndpointCount_ = nullptr;
    // The service resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // Indicates whether IPv6 is enabled for the endpoint service. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> resourceSupportIPv6_ = nullptr;
    // The type of the service resource.
    // 
    // Only **slb** is returned. This value indicates a Classic Load Balancer (CLB) instance.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the vSwitch to which the service resource belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the service resource belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone to which the service resource belongs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
