// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODYDEDICATEDHOSTCLUSTERSDEDICATEDHOSTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODYDEDICATEDHOSTCLUSTERSDEDICATEDHOSTCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity.hpp>
#include <alibabacloud/models/DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostIds.hpp>
#include <alibabacloud/models/DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterCapacity, dedicatedHostClusterCapacity_);
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterName, dedicatedHostClusterName_);
      DARABONBA_PTR_TO_JSON(DedicatedHostIds, dedicatedHostIds_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterCapacity, dedicatedHostClusterCapacity_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterName, dedicatedHostClusterName_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostIds, dedicatedHostIds_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster() = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster &) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster(DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster &&) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster() = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& operator=(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster &) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& operator=(DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedHostClusterCapacity_ != nullptr
        && this->dedicatedHostClusterId_ != nullptr && this->dedicatedHostClusterName_ != nullptr && this->dedicatedHostIds_ != nullptr && this->description_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->zoneId_ != nullptr; };
    // dedicatedHostClusterCapacity Field Functions 
    bool hasDedicatedHostClusterCapacity() const { return this->dedicatedHostClusterCapacity_ != nullptr;};
    void deleteDedicatedHostClusterCapacity() { this->dedicatedHostClusterCapacity_ = nullptr;};
    inline const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity & dedicatedHostClusterCapacity() const { DARABONBA_PTR_GET_CONST(dedicatedHostClusterCapacity_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity) };
    inline Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity dedicatedHostClusterCapacity() { DARABONBA_PTR_GET(dedicatedHostClusterCapacity_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setDedicatedHostClusterCapacity(const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity & dedicatedHostClusterCapacity) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterCapacity_, dedicatedHostClusterCapacity) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setDedicatedHostClusterCapacity(Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity && dedicatedHostClusterCapacity) { DARABONBA_PTR_SET_RVALUE(dedicatedHostClusterCapacity_, dedicatedHostClusterCapacity) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostClusterName Field Functions 
    bool hasDedicatedHostClusterName() const { return this->dedicatedHostClusterName_ != nullptr;};
    void deleteDedicatedHostClusterName() { this->dedicatedHostClusterName_ = nullptr;};
    inline string dedicatedHostClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterName_, "") };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setDedicatedHostClusterName(string dedicatedHostClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterName_, dedicatedHostClusterName) };


    // dedicatedHostIds Field Functions 
    bool hasDedicatedHostIds() const { return this->dedicatedHostIds_ != nullptr;};
    void deleteDedicatedHostIds() { this->dedicatedHostIds_ = nullptr;};
    inline const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostIds & dedicatedHostIds() const { DARABONBA_PTR_GET_CONST(dedicatedHostIds_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostIds) };
    inline Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostIds dedicatedHostIds() { DARABONBA_PTR_GET(dedicatedHostIds_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostIds) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setDedicatedHostIds(const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostIds & dedicatedHostIds) { DARABONBA_PTR_SET_VALUE(dedicatedHostIds_, dedicatedHostIds) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setDedicatedHostIds(Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostIds && dedicatedHostIds) { DARABONBA_PTR_SET_RVALUE(dedicatedHostIds_, dedicatedHostIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags) };
    inline Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setTags(const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setTags(Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The capacity of the host group.
    std::shared_ptr<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity> dedicatedHostClusterCapacity_ = nullptr;
    // The ID of the host group.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    // The name of the host group.
    std::shared_ptr<string> dedicatedHostClusterName_ = nullptr;
    // The IDs of dedicated hosts in the host group.
    std::shared_ptr<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostIds> dedicatedHostIds_ = nullptr;
    // The description of the host group.
    std::shared_ptr<string> description_ = nullptr;
    // The region ID of the host group.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID of the host group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the host group.
    std::shared_ptr<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags> tags_ = nullptr;
    // The zone ID of the host group.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
