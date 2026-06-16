// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECANDIDATEINSTANCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECANDIDATEINSTANCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeCandidateInstanceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCandidateInstanceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCrossAz, allowCrossAz_);
      DARABONBA_PTR_TO_JSON(AllowDifferentGeneration, allowDifferentGeneration_);
      DARABONBA_PTR_TO_JSON(DataDiskCategories, dataDiskCategories_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCandidateInstanceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCrossAz, allowCrossAz_);
      DARABONBA_PTR_FROM_JSON(AllowDifferentGeneration, allowDifferentGeneration_);
      DARABONBA_PTR_FROM_JSON(DataDiskCategories, dataDiskCategories_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    DescribeCandidateInstanceTypeRequest() = default ;
    DescribeCandidateInstanceTypeRequest(const DescribeCandidateInstanceTypeRequest &) = default ;
    DescribeCandidateInstanceTypeRequest(DescribeCandidateInstanceTypeRequest &&) = default ;
    DescribeCandidateInstanceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCandidateInstanceTypeRequest() = default ;
    DescribeCandidateInstanceTypeRequest& operator=(const DescribeCandidateInstanceTypeRequest &) = default ;
    DescribeCandidateInstanceTypeRequest& operator=(DescribeCandidateInstanceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowCrossAz_ == nullptr
        && this->allowDifferentGeneration_ == nullptr && this->dataDiskCategories_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr
        && this->instanceTypes_ == nullptr && this->ipv6AddressCount_ == nullptr && this->maxPrice_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->spotStrategy_ == nullptr && this->systemDiskCategories_ == nullptr && this->zoneIds_ == nullptr; };
    // allowCrossAz Field Functions 
    bool hasAllowCrossAz() const { return this->allowCrossAz_ != nullptr;};
    void deleteAllowCrossAz() { this->allowCrossAz_ = nullptr;};
    inline bool getAllowCrossAz() const { DARABONBA_PTR_GET_DEFAULT(allowCrossAz_, false) };
    inline DescribeCandidateInstanceTypeRequest& setAllowCrossAz(bool allowCrossAz) { DARABONBA_PTR_SET_VALUE(allowCrossAz_, allowCrossAz) };


    // allowDifferentGeneration Field Functions 
    bool hasAllowDifferentGeneration() const { return this->allowDifferentGeneration_ != nullptr;};
    void deleteAllowDifferentGeneration() { this->allowDifferentGeneration_ = nullptr;};
    inline bool getAllowDifferentGeneration() const { DARABONBA_PTR_GET_DEFAULT(allowDifferentGeneration_, false) };
    inline DescribeCandidateInstanceTypeRequest& setAllowDifferentGeneration(bool allowDifferentGeneration) { DARABONBA_PTR_SET_VALUE(allowDifferentGeneration_, allowDifferentGeneration) };


    // dataDiskCategories Field Functions 
    bool hasDataDiskCategories() const { return this->dataDiskCategories_ != nullptr;};
    void deleteDataDiskCategories() { this->dataDiskCategories_ = nullptr;};
    inline const vector<string> & getDataDiskCategories() const { DARABONBA_PTR_GET_CONST(dataDiskCategories_, vector<string>) };
    inline vector<string> getDataDiskCategories() { DARABONBA_PTR_GET(dataDiskCategories_, vector<string>) };
    inline DescribeCandidateInstanceTypeRequest& setDataDiskCategories(const vector<string> & dataDiskCategories) { DARABONBA_PTR_SET_VALUE(dataDiskCategories_, dataDiskCategories) };
    inline DescribeCandidateInstanceTypeRequest& setDataDiskCategories(vector<string> && dataDiskCategories) { DARABONBA_PTR_SET_RVALUE(dataDiskCategories_, dataDiskCategories) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline DescribeCandidateInstanceTypeRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeCandidateInstanceTypeRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeCandidateInstanceTypeRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeCandidateInstanceTypeRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeCandidateInstanceTypeRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline DescribeCandidateInstanceTypeRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline float getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline DescribeCandidateInstanceTypeRequest& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCandidateInstanceTypeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCandidateInstanceTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeCandidateInstanceTypeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCandidateInstanceTypeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeCandidateInstanceTypeRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & getSystemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> getSystemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline DescribeCandidateInstanceTypeRequest& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline DescribeCandidateInstanceTypeRequest& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline const vector<string> & getZoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
    inline vector<string> getZoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
    inline DescribeCandidateInstanceTypeRequest& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
    inline DescribeCandidateInstanceTypeRequest& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


  protected:
    // Specifies whether to include vSwitches from other availability zones as candidates.
    // 
    // > The instance types remain unchanged. Only new availability zones are added as candidates. If a scaling group fails to scale out in all selected availability zones due to issues such as insufficient inventory, Auto Scaling automatically adds a vSwitch in a new availability zone to the scaling group based on this setting.
    // > For example, if a scaling group is configured for the cn-hangzhou-h and cn-hangzhou-g availability zones and a scale-out fails in both zones, Auto Scaling may create a vSwitch in the cn-hangzhou-k availability zone and add it to the scaling group based on real-time inventory.
    shared_ptr<bool> allowCrossAz_ {};
    // Specifies whether to include instance types from other generations as candidates.
    // 
    // - For example, if the current instance type is ecs.c7.large, you can set this parameter to true to include instance types such as ecs.c6.large and ecs.c8.large in the list of candidates.
    shared_ptr<bool> allowDifferentGeneration_ {};
    // The data disk categories, ordered by priority from high to low. If Auto Scaling cannot create a data disk by using a higher-priority category, it tries the next one in the list.
    shared_ptr<vector<string>> dataDiskCategories_ {};
    // The name of the image family. When specified, the latest image in this family is used to create instances. This parameter cannot be used with ImageId.
    // 
    // > If you do not specify the scaling group ID, you must specify at least one of ImageId, ImageName, and ImageFamily.
    shared_ptr<string> imageFamily_ {};
    // The ID of the image used to create instances.
    // 
    // > If the specified image contains both a system disk and data disks, any existing data disk information in the scaling configuration is cleared.
    shared_ptr<string> imageId_ {};
    // The name of the image. The name must be unique within a region. You cannot use this parameter to specify an image from Alibaba Cloud Marketplace.
    // 
    // > This parameter is an alternative to the `ImageId` parameter. If you specify `ImageId`, `ImageName` is ignored.
    shared_ptr<string> imageName_ {};
    // The specified ECS instance types.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The number of IPv6 addresses.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // The maximum price for a candidate instance type.
    shared_ptr<float> maxPrice_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the scaling group is located.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The bidding strategy for pay-as-you-go instances. Valid values:
    // 
    // - NoSpot: a standard pay-as-you-go instance.
    // 
    // - SpotWithPriceLimit: a spot instance with a user-defined maximum price.
    // 
    // - SpotAsPriceGo: a spot instance where the system automatically bids at the market price.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The system disk categories, ordered by priority from high to low. If Auto Scaling cannot create a system disk by using a higher-priority category, it tries the next one in the list.
    shared_ptr<vector<string>> systemDiskCategories_ {};
    // The specified availability zones.
    shared_ptr<vector<string>> zoneIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
