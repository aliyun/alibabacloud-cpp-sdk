// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSRESPONSEBODYDEDICATEDBLOCKSTORAGECLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSRESPONSEBODYDEDICATEDBLOCKSTORAGECLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DedicatedBlockStorageClusterCapacity, dedicatedBlockStorageClusterCapacity_);
      DARABONBA_PTR_TO_JSON(DedicatedBlockStorageClusterId, dedicatedBlockStorageClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedBlockStorageClusterName, dedicatedBlockStorageClusterName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableThinProvision, enableThinProvision_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SizeOverSoldRatio, sizeOverSoldRatio_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageDomain, storageDomain_);
      DARABONBA_PTR_TO_JSON(SupportedCategory, supportedCategory_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DedicatedBlockStorageClusterCapacity, dedicatedBlockStorageClusterCapacity_);
      DARABONBA_PTR_FROM_JSON(DedicatedBlockStorageClusterId, dedicatedBlockStorageClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedBlockStorageClusterName, dedicatedBlockStorageClusterName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableThinProvision, enableThinProvision_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SizeOverSoldRatio, sizeOverSoldRatio_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageDomain, storageDomain_);
      DARABONBA_PTR_FROM_JSON(SupportedCategory, supportedCategory_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters() = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters(const DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters &) = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters(DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters &&) = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters() = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& operator=(const DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters &) = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& operator=(DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->category_ == nullptr && return this->createTime_ == nullptr && return this->dedicatedBlockStorageClusterCapacity_ == nullptr && return this->dedicatedBlockStorageClusterId_ == nullptr && return this->dedicatedBlockStorageClusterName_ == nullptr
        && return this->description_ == nullptr && return this->enableThinProvision_ == nullptr && return this->expiredTime_ == nullptr && return this->performanceLevel_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->sizeOverSoldRatio_ == nullptr && return this->status_ == nullptr && return this->storageDomain_ == nullptr && return this->supportedCategory_ == nullptr
        && return this->tags_ == nullptr && return this->type_ == nullptr && return this->zoneId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dedicatedBlockStorageClusterCapacity Field Functions 
    bool hasDedicatedBlockStorageClusterCapacity() const { return this->dedicatedBlockStorageClusterCapacity_ != nullptr;};
    void deleteDedicatedBlockStorageClusterCapacity() { this->dedicatedBlockStorageClusterCapacity_ = nullptr;};
    inline const Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity & dedicatedBlockStorageClusterCapacity() const { DARABONBA_PTR_GET_CONST(dedicatedBlockStorageClusterCapacity_, Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity) };
    inline Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity dedicatedBlockStorageClusterCapacity() { DARABONBA_PTR_GET(dedicatedBlockStorageClusterCapacity_, Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setDedicatedBlockStorageClusterCapacity(const Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity & dedicatedBlockStorageClusterCapacity) { DARABONBA_PTR_SET_VALUE(dedicatedBlockStorageClusterCapacity_, dedicatedBlockStorageClusterCapacity) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setDedicatedBlockStorageClusterCapacity(Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity && dedicatedBlockStorageClusterCapacity) { DARABONBA_PTR_SET_RVALUE(dedicatedBlockStorageClusterCapacity_, dedicatedBlockStorageClusterCapacity) };


    // dedicatedBlockStorageClusterId Field Functions 
    bool hasDedicatedBlockStorageClusterId() const { return this->dedicatedBlockStorageClusterId_ != nullptr;};
    void deleteDedicatedBlockStorageClusterId() { this->dedicatedBlockStorageClusterId_ = nullptr;};
    inline string dedicatedBlockStorageClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedBlockStorageClusterId_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setDedicatedBlockStorageClusterId(string dedicatedBlockStorageClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedBlockStorageClusterId_, dedicatedBlockStorageClusterId) };


    // dedicatedBlockStorageClusterName Field Functions 
    bool hasDedicatedBlockStorageClusterName() const { return this->dedicatedBlockStorageClusterName_ != nullptr;};
    void deleteDedicatedBlockStorageClusterName() { this->dedicatedBlockStorageClusterName_ = nullptr;};
    inline string dedicatedBlockStorageClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedBlockStorageClusterName_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setDedicatedBlockStorageClusterName(string dedicatedBlockStorageClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedBlockStorageClusterName_, dedicatedBlockStorageClusterName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableThinProvision Field Functions 
    bool hasEnableThinProvision() const { return this->enableThinProvision_ != nullptr;};
    void deleteEnableThinProvision() { this->enableThinProvision_ = nullptr;};
    inline bool enableThinProvision() const { DARABONBA_PTR_GET_DEFAULT(enableThinProvision_, false) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setEnableThinProvision(bool enableThinProvision) { DARABONBA_PTR_SET_VALUE(enableThinProvision_, enableThinProvision) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sizeOverSoldRatio Field Functions 
    bool hasSizeOverSoldRatio() const { return this->sizeOverSoldRatio_ != nullptr;};
    void deleteSizeOverSoldRatio() { this->sizeOverSoldRatio_ = nullptr;};
    inline double sizeOverSoldRatio() const { DARABONBA_PTR_GET_DEFAULT(sizeOverSoldRatio_, 0.0) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setSizeOverSoldRatio(double sizeOverSoldRatio) { DARABONBA_PTR_SET_VALUE(sizeOverSoldRatio_, sizeOverSoldRatio) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageDomain Field Functions 
    bool hasStorageDomain() const { return this->storageDomain_ != nullptr;};
    void deleteStorageDomain() { this->storageDomain_ = nullptr;};
    inline string storageDomain() const { DARABONBA_PTR_GET_DEFAULT(storageDomain_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setStorageDomain(string storageDomain) { DARABONBA_PTR_SET_VALUE(storageDomain_, storageDomain) };


    // supportedCategory Field Functions 
    bool hasSupportedCategory() const { return this->supportedCategory_ != nullptr;};
    void deleteSupportedCategory() { this->supportedCategory_ = nullptr;};
    inline string supportedCategory() const { DARABONBA_PTR_GET_DEFAULT(supportedCategory_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setSupportedCategory(string supportedCategory) { DARABONBA_PTR_SET_VALUE(supportedCategory_, supportedCategory) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags>) };
    inline vector<Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags>) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setTags(const vector<Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setTags(vector<Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The user ID.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The category of disks that can be created in the dedicated block storage cluster.
    std::shared_ptr<string> category_ = nullptr;
    // The time when the dedicated block storage cluster was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // Details about the storage capacity of the dedicated block storage cluster.
    std::shared_ptr<Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity> dedicatedBlockStorageClusterCapacity_ = nullptr;
    // The ID of the dedicated block storage cluster.
    std::shared_ptr<string> dedicatedBlockStorageClusterId_ = nullptr;
    // The name of the dedicated block storage cluster.
    std::shared_ptr<string> dedicatedBlockStorageClusterName_ = nullptr;
    // The description of the dedicated block storage cluster.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether Thin Provision is enabled.
    std::shared_ptr<bool> enableThinProvision_ = nullptr;
    // The time when the dedicated block storage cluster expires. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The performance level of disks. Valid values:
    // 
    // *   PL0
    // *   PL1
    // *   PL2
    // *   PL3
    // 
    // >  This parameter is valid only when the SupportedCategory value is cloud_essd.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The region ID of the dedicated block storage cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the dedicated block storage cluster belongs. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to obtain the ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The capacity oversold ratio.
    std::shared_ptr<double> sizeOverSoldRatio_ = nullptr;
    // The state of the dedicated block storage cluster. Valid values:
    // 
    // *   Preparing
    // *   Running
    // *   Expired
    // *   Offline
    std::shared_ptr<string> status_ = nullptr;
    // StorageDomain
    std::shared_ptr<string> storageDomain_ = nullptr;
    // This parameter is not supported.
    std::shared_ptr<string> supportedCategory_ = nullptr;
    // The tags of the dedicated block storage cluster.
    std::shared_ptr<vector<Models::DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags>> tags_ = nullptr;
    // The type of the dedicated block storage cluster. Valid values:
    // 
    // *   Standard: basic dedicated block storage cluster. ESSDs at performance level 0 (PL0 ESSDs) can be created in basic dedicated block storage clusters.
    // *   Premium: performance dedicated block storage cluster. ESSDs at performance level 1 (PL1 ESSDs) can be created in performance dedicated block storage clusters.
    std::shared_ptr<string> type_ = nullptr;
    // The zone ID of the dedicated block storage cluster.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
