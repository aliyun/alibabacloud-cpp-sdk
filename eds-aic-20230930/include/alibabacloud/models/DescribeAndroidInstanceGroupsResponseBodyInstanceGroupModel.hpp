// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODYINSTANCEGROUPMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODYINSTANCEGROUPMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks.hpp>
#include <alibabacloud/models/DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_TO_JSON(AvailableInstanceAmount, availableInstanceAmount_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageStatus, bandwidthPackageStatus_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(InstalledAppList, installedAppList_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_TO_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_TO_JSON(InstanceGroupSpecDescribe, instanceGroupSpecDescribe_);
      DARABONBA_PTR_TO_JSON(InstanceGroupStatus, instanceGroupStatus_);
      DARABONBA_PTR_TO_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RenderingType, renderingType_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(SystemVersion, systemVersion_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_FROM_JSON(AvailableInstanceAmount, availableInstanceAmount_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageStatus, bandwidthPackageStatus_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(InstalledAppList, installedAppList_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupSpecDescribe, instanceGroupSpecDescribe_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupStatus, instanceGroupStatus_);
      DARABONBA_PTR_FROM_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RenderingType, renderingType_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(SystemVersion, systemVersion_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel() = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel(const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel &) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel(DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel &&) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel() = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& operator=(const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel &) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& operator=(DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && return this->architectureType_ == nullptr && return this->availableInstanceAmount_ == nullptr && return this->bandwidthPackageId_ == nullptr && return this->bandwidthPackageStatus_ == nullptr && return this->bandwidthPackageType_ == nullptr
        && return this->chargeType_ == nullptr && return this->cpu_ == nullptr && return this->disks_ == nullptr && return this->enableIpv6_ == nullptr && return this->errorCode_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtExpired_ == nullptr && return this->gmtModified_ == nullptr && return this->imageId_ == nullptr && return this->imageVersion_ == nullptr
        && return this->installedAppList_ == nullptr && return this->instanceGroupId_ == nullptr && return this->instanceGroupName_ == nullptr && return this->instanceGroupSpec_ == nullptr && return this->instanceGroupSpecDescribe_ == nullptr
        && return this->instanceGroupStatus_ == nullptr && return this->ipv6Bandwidth_ == nullptr && return this->memory_ == nullptr && return this->networkType_ == nullptr && return this->numberOfInstances_ == nullptr
        && return this->officeSiteId_ == nullptr && return this->policyGroupId_ == nullptr && return this->regionId_ == nullptr && return this->renderingType_ == nullptr && return this->resolutionHeight_ == nullptr
        && return this->resolutionWidth_ == nullptr && return this->saleMode_ == nullptr && return this->systemVersion_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // architectureType Field Functions 
    bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
    void deleteArchitectureType() { this->architectureType_ = nullptr;};
    inline string architectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


    // availableInstanceAmount Field Functions 
    bool hasAvailableInstanceAmount() const { return this->availableInstanceAmount_ != nullptr;};
    void deleteAvailableInstanceAmount() { this->availableInstanceAmount_ = nullptr;};
    inline int32_t availableInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(availableInstanceAmount_, 0) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setAvailableInstanceAmount(int32_t availableInstanceAmount) { DARABONBA_PTR_SET_VALUE(availableInstanceAmount_, availableInstanceAmount) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageStatus Field Functions 
    bool hasBandwidthPackageStatus() const { return this->bandwidthPackageStatus_ != nullptr;};
    void deleteBandwidthPackageStatus() { this->bandwidthPackageStatus_ = nullptr;};
    inline string bandwidthPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageStatus_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setBandwidthPackageStatus(string bandwidthPackageStatus) { DARABONBA_PTR_SET_VALUE(bandwidthPackageStatus_, bandwidthPackageStatus) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string bandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks>) };
    inline vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks>) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setDisks(const vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setDisks(vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool enableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtExpired Field Functions 
    bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
    void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
    inline string gmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // installedAppList Field Functions 
    bool hasInstalledAppList() const { return this->installedAppList_ != nullptr;};
    void deleteInstalledAppList() { this->installedAppList_ = nullptr;};
    inline string installedAppList() const { DARABONBA_PTR_GET_DEFAULT(installedAppList_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setInstalledAppList(string installedAppList) { DARABONBA_PTR_SET_VALUE(installedAppList_, installedAppList) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string instanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // instanceGroupName Field Functions 
    bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
    void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
    inline string instanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


    // instanceGroupSpec Field Functions 
    bool hasInstanceGroupSpec() const { return this->instanceGroupSpec_ != nullptr;};
    void deleteInstanceGroupSpec() { this->instanceGroupSpec_ = nullptr;};
    inline string instanceGroupSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpec_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setInstanceGroupSpec(string instanceGroupSpec) { DARABONBA_PTR_SET_VALUE(instanceGroupSpec_, instanceGroupSpec) };


    // instanceGroupSpecDescribe Field Functions 
    bool hasInstanceGroupSpecDescribe() const { return this->instanceGroupSpecDescribe_ != nullptr;};
    void deleteInstanceGroupSpecDescribe() { this->instanceGroupSpecDescribe_ = nullptr;};
    inline string instanceGroupSpecDescribe() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpecDescribe_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setInstanceGroupSpecDescribe(string instanceGroupSpecDescribe) { DARABONBA_PTR_SET_VALUE(instanceGroupSpecDescribe_, instanceGroupSpecDescribe) };


    // instanceGroupStatus Field Functions 
    bool hasInstanceGroupStatus() const { return this->instanceGroupStatus_ != nullptr;};
    void deleteInstanceGroupStatus() { this->instanceGroupStatus_ = nullptr;};
    inline string instanceGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupStatus_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setInstanceGroupStatus(string instanceGroupStatus) { DARABONBA_PTR_SET_VALUE(instanceGroupStatus_, instanceGroupStatus) };


    // ipv6Bandwidth Field Functions 
    bool hasIpv6Bandwidth() const { return this->ipv6Bandwidth_ != nullptr;};
    void deleteIpv6Bandwidth() { this->ipv6Bandwidth_ = nullptr;};
    inline int32_t ipv6Bandwidth() const { DARABONBA_PTR_GET_DEFAULT(ipv6Bandwidth_, 0) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setIpv6Bandwidth(int32_t ipv6Bandwidth) { DARABONBA_PTR_SET_VALUE(ipv6Bandwidth_, ipv6Bandwidth) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // numberOfInstances Field Functions 
    bool hasNumberOfInstances() const { return this->numberOfInstances_ != nullptr;};
    void deleteNumberOfInstances() { this->numberOfInstances_ = nullptr;};
    inline string numberOfInstances() const { DARABONBA_PTR_GET_DEFAULT(numberOfInstances_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setNumberOfInstances(string numberOfInstances) { DARABONBA_PTR_SET_VALUE(numberOfInstances_, numberOfInstances) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renderingType Field Functions 
    bool hasRenderingType() const { return this->renderingType_ != nullptr;};
    void deleteRenderingType() { this->renderingType_ = nullptr;};
    inline string renderingType() const { DARABONBA_PTR_GET_DEFAULT(renderingType_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setRenderingType(string renderingType) { DARABONBA_PTR_SET_VALUE(renderingType_, renderingType) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string saleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // systemVersion Field Functions 
    bool hasSystemVersion() const { return this->systemVersion_ != nullptr;};
    void deleteSystemVersion() { this->systemVersion_ = nullptr;};
    inline string systemVersion() const { DARABONBA_PTR_GET_DEFAULT(systemVersion_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setSystemVersion(string systemVersion) { DARABONBA_PTR_SET_VALUE(systemVersion_, systemVersion) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelTags>) };
    inline vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelTags>) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setTags(const vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setTags(vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the delivery group.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The type of the architecture.
    std::shared_ptr<string> architectureType_ = nullptr;
    // The number of available instances.
    // 
    // >  Available instances are those not in the Deleting or Deleted state.
    std::shared_ptr<int32_t> availableInstanceAmount_ = nullptr;
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageStatus_ = nullptr;
    std::shared_ptr<string> bandwidthPackageType_ = nullptr;
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<string> cpu_ = nullptr;
    // The disks.
    std::shared_ptr<vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks>> disks_ = nullptr;
    std::shared_ptr<bool> enableIpv6_ = nullptr;
    // The cause of the creation failure.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The time when the instance group was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the subscription instance group expires.
    std::shared_ptr<string> gmtExpired_ = nullptr;
    // The time when the instance group was updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageVersion_ = nullptr;
    // The list of installed applications.
    std::shared_ptr<string> installedAppList_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> instanceGroupId_ = nullptr;
    // The name of the instance group.
    std::shared_ptr<string> instanceGroupName_ = nullptr;
    // The specifications of the instance group.
    std::shared_ptr<string> instanceGroupSpec_ = nullptr;
    // The description of the instance group specifications.
    std::shared_ptr<string> instanceGroupSpecDescribe_ = nullptr;
    // The status of the instance group.
    std::shared_ptr<string> instanceGroupStatus_ = nullptr;
    std::shared_ptr<int32_t> ipv6Bandwidth_ = nullptr;
    // The memory size.
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    // The number of instances in the instance group.
    std::shared_ptr<string> numberOfInstances_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The rendering mode of the instance group.
    // 
    // Valid values:
    // 
    // *   GPURemote: GPU remote rendering.
    // *   CPU: CPU rendering.
    // *   GPUocal: GPU local rendering.
    std::shared_ptr<string> renderingType_ = nullptr;
    // The height of the resolution.
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    // The width of the resolution.
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
    // The sales mode.
    std::shared_ptr<string> saleMode_ = nullptr;
    // The version of the operating system.
    std::shared_ptr<string> systemVersion_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelTags>> tags_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
