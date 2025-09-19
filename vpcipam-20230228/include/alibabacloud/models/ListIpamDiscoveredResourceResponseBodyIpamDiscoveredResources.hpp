// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCERESPONSEBODYIPAMDISCOVEREDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCERESPONSEBODYIPAMDISCOVEREDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(DiscoveryTime, discoveryTime_);
      DARABONBA_PTR_TO_JSON(IpCountDetail, ipCountDetail_);
      DARABONBA_PTR_TO_JSON(IpUsage, ipUsage_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(DiscoveryTime, discoveryTime_);
      DARABONBA_PTR_FROM_JSON(IpCountDetail, ipCountDetail_);
      DARABONBA_PTR_FROM_JSON(IpUsage, ipUsage_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources() = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources(const ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources &) = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources(ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources &&) = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources() = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& operator=(const ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources &) = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& operator=(ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->cidr_ != nullptr && this->discoveryTime_ != nullptr && this->ipCountDetail_ != nullptr && this->ipUsage_ != nullptr && this->ipamResourceDiscoveryId_ != nullptr
        && this->resourceId_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourceRegionId_ != nullptr && this->resourceType_ != nullptr && this->sourceCidr_ != nullptr
        && this->vpcId_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // discoveryTime Field Functions 
    bool hasDiscoveryTime() const { return this->discoveryTime_ != nullptr;};
    void deleteDiscoveryTime() { this->discoveryTime_ = nullptr;};
    inline string discoveryTime() const { DARABONBA_PTR_GET_DEFAULT(discoveryTime_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setDiscoveryTime(string discoveryTime) { DARABONBA_PTR_SET_VALUE(discoveryTime_, discoveryTime) };


    // ipCountDetail Field Functions 
    bool hasIpCountDetail() const { return this->ipCountDetail_ != nullptr;};
    void deleteIpCountDetail() { this->ipCountDetail_ = nullptr;};
    inline const Models::ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail & ipCountDetail() const { DARABONBA_PTR_GET_CONST(ipCountDetail_, Models::ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail) };
    inline Models::ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail ipCountDetail() { DARABONBA_PTR_GET(ipCountDetail_, Models::ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail) };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setIpCountDetail(const Models::ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail & ipCountDetail) { DARABONBA_PTR_SET_VALUE(ipCountDetail_, ipCountDetail) };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setIpCountDetail(Models::ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail && ipCountDetail) { DARABONBA_PTR_SET_RVALUE(ipCountDetail_, ipCountDetail) };


    // ipUsage Field Functions 
    bool hasIpUsage() const { return this->ipUsage_ != nullptr;};
    void deleteIpUsage() { this->ipUsage_ = nullptr;};
    inline string ipUsage() const { DARABONBA_PTR_GET_DEFAULT(ipUsage_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setIpUsage(string ipUsage) { DARABONBA_PTR_SET_VALUE(ipUsage_, ipUsage) };


    // ipamResourceDiscoveryId Field Functions 
    bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
    void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
    inline string ipamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string sourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The CIDR block of the resource.
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the resource was discovered.
    // 
    // >  If the resource has not been modified since it was created, the discovery time remains unchanged.
    std::shared_ptr<string> discoveryTime_ = nullptr;
    std::shared_ptr<Models::ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail> ipCountDetail_ = nullptr;
    // The IP usage in decimal form.
    std::shared_ptr<string> ipUsage_ = nullptr;
    // The ID of resource discovery instance.
    std::shared_ptr<string> ipamResourceDiscoveryId_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the region to which the resource belongs.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The resource type. Valid values:
    // 
    // *   **VPC**
    // *   **VSwitch**
    std::shared_ptr<string> resourceType_ = nullptr;
    // The source CIDR block.
    std::shared_ptr<string> sourceCidr_ = nullptr;
    // The ID of the VPC to which the resource belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
