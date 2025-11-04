// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHREQUEST_HPP_
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
  class DescribeElasticStrengthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticStrengthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskCategories, dataDiskCategories_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(PriorityStrategy, priorityStrategy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupIds, scalingGroupIds_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticStrengthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskCategories, dataDiskCategories_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(PriorityStrategy, priorityStrategy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupIds, scalingGroupIds_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    DescribeElasticStrengthRequest() = default ;
    DescribeElasticStrengthRequest(const DescribeElasticStrengthRequest &) = default ;
    DescribeElasticStrengthRequest(DescribeElasticStrengthRequest &&) = default ;
    DescribeElasticStrengthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticStrengthRequest() = default ;
    DescribeElasticStrengthRequest& operator=(const DescribeElasticStrengthRequest &) = default ;
    DescribeElasticStrengthRequest& operator=(DescribeElasticStrengthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiskCategories_ == nullptr
        && return this->imageFamily_ == nullptr && return this->imageId_ == nullptr && return this->imageName_ == nullptr && return this->instanceTypes_ == nullptr && return this->ipv6AddressCount_ == nullptr
        && return this->priorityStrategy_ == nullptr && return this->regionId_ == nullptr && return this->scalingGroupId_ == nullptr && return this->scalingGroupIds_ == nullptr && return this->spotStrategy_ == nullptr
        && return this->systemDiskCategories_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // dataDiskCategories Field Functions 
    bool hasDataDiskCategories() const { return this->dataDiskCategories_ != nullptr;};
    void deleteDataDiskCategories() { this->dataDiskCategories_ = nullptr;};
    inline const vector<string> & dataDiskCategories() const { DARABONBA_PTR_GET_CONST(dataDiskCategories_, vector<string>) };
    inline vector<string> dataDiskCategories() { DARABONBA_PTR_GET(dataDiskCategories_, vector<string>) };
    inline DescribeElasticStrengthRequest& setDataDiskCategories(const vector<string> & dataDiskCategories) { DARABONBA_PTR_SET_VALUE(dataDiskCategories_, dataDiskCategories) };
    inline DescribeElasticStrengthRequest& setDataDiskCategories(vector<string> && dataDiskCategories) { DARABONBA_PTR_SET_RVALUE(dataDiskCategories_, dataDiskCategories) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline DescribeElasticStrengthRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeElasticStrengthRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeElasticStrengthRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeElasticStrengthRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeElasticStrengthRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline DescribeElasticStrengthRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // priorityStrategy Field Functions 
    bool hasPriorityStrategy() const { return this->priorityStrategy_ != nullptr;};
    void deletePriorityStrategy() { this->priorityStrategy_ = nullptr;};
    inline string priorityStrategy() const { DARABONBA_PTR_GET_DEFAULT(priorityStrategy_, "") };
    inline DescribeElasticStrengthRequest& setPriorityStrategy(string priorityStrategy) { DARABONBA_PTR_SET_VALUE(priorityStrategy_, priorityStrategy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeElasticStrengthRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeElasticStrengthRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingGroupIds Field Functions 
    bool hasScalingGroupIds() const { return this->scalingGroupIds_ != nullptr;};
    void deleteScalingGroupIds() { this->scalingGroupIds_ = nullptr;};
    inline const vector<string> & scalingGroupIds() const { DARABONBA_PTR_GET_CONST(scalingGroupIds_, vector<string>) };
    inline vector<string> scalingGroupIds() { DARABONBA_PTR_GET(scalingGroupIds_, vector<string>) };
    inline DescribeElasticStrengthRequest& setScalingGroupIds(const vector<string> & scalingGroupIds) { DARABONBA_PTR_SET_VALUE(scalingGroupIds_, scalingGroupIds) };
    inline DescribeElasticStrengthRequest& setScalingGroupIds(vector<string> && scalingGroupIds) { DARABONBA_PTR_SET_RVALUE(scalingGroupIds_, scalingGroupIds) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeElasticStrengthRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline DescribeElasticStrengthRequest& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline DescribeElasticStrengthRequest& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeElasticStrengthRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeElasticStrengthRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The disk categories of the data disks. The disk categories that do not match the specified criteria are returned after you call this operation.
    // 
    // >  If you do not specify the scaling group ID, you must specify this parameter.
    std::shared_ptr<vector<string>> dataDiskCategories_ = nullptr;
    // The name of the image family. You can specify the ImageFamily request parameter to obtain the most recent available images in the current image family for instance creation. If you specify ImageId, you cannot specify ImageFamily.
    // 
    // >  If you do not specify the scaling group ID, you must specify at least one of ImageId, ImageName, and ImageFamily.
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The ID of the image file that provides the image resource for Auto Scaling to create instances.
    // 
    // >  If you do not specify the scaling group ID, you must specify at least one of ImageId, ImageName, and ImageFamily.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image. Each image name must be unique in a region. If you specify ImageId, ImageName is ignored.
    // 
    // You cannot use ImageName to specify an Alibaba Cloud Marketplace image.
    // 
    // >  If you do not specify the scaling group ID, you must specify at least one of ImageId, ImageName, and ImageFamily.
    std::shared_ptr<string> imageName_ = nullptr;
    // The instance types. The instance types specified by this parameter overwrite the instance types specified in the scaling configuration.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The number of IPv6 addresses. If the instance type that you specified does meet the requirement for the number of IPv6 addresses, the scaling strength is weak.
    // 
    // >  If you do not specify the scaling group ID, you must specify this parameter.
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // **
    // 
    // **Warning** This parameter is deprecated. We recommend that you use SpotStrategy.
    // 
    // The preemption policy that you want to apply to pay-as-you-go instances. The preemption policy specified by this parameter overwrites the preemption policy specified in the scaling configuration. Valid values:
    // 
    // *   NoSpot: The instances are created as regular pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are created as preemptible instances with a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instances are created as preemptible instances for which the market price at the time of purchase is automatically used as the bidding price.
    // 
    // Default value: NoSpot.
    std::shared_ptr<string> priorityStrategy_ = nullptr;
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The IDs of the scaling groups that you want to query.
    std::shared_ptr<vector<string>> scalingGroupIds_ = nullptr;
    // The instance bidding policy. Valid values:
    // 
    // *   NoSpot: The instances are created as pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are created as preemptible instances with a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instances are created as preemptible instances for which the market price at the time of purchase is used as the bid price.
    // 
    // Default value: NoSpot.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The categories of the system disks. The categories of the system disks specified by this parameter overwrite the categories of the system disks specified in the scaling configuration. Valid values:
    // 
    // *   cloud: basic disk.
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: standard SSD.
    // *   cloud_essd: Enterprise SSD (ESSD).
    // 
    // >  If you do not specify the scaling group ID, you must specify this parameter.
    std::shared_ptr<vector<string>> systemDiskCategories_ = nullptr;
    // The vSwitch IDs.
    // 
    // >  If you do not specify the scaling group ID, you must specify this parameter.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
