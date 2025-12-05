// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODYINSTANCEMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODYINSTANCEMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAndroidInstancesResponseBodyInstanceModelBizTags.hpp>
#include <alibabacloud/models/DescribeAndroidInstancesResponseBodyInstanceModelDisks.hpp>
#include <alibabacloud/models/DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig.hpp>
#include <alibabacloud/models/DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo.hpp>
#include <alibabacloud/models/DescribeAndroidInstancesResponseBodyInstanceModelTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstancesResponseBodyInstanceModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstancesResponseBodyInstanceModel& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceGroupId, androidInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AndroidInstanceGroupName, androidInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_TO_JSON(AndroidInstanceName, androidInstanceName_);
      DARABONBA_PTR_TO_JSON(AndroidInstanceStatus, androidInstanceStatus_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppManagePolicy, appManagePolicy_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(BindUserId, bindUserId_);
      DARABONBA_PTR_TO_JSON(BizImageType, bizImageType_);
      DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfig_);
      DARABONBA_PTR_TO_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetStatus, internetStatus_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIpv6Address, networkInterfaceIpv6Address_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PersistentAppInstanceId, persistentAppInstanceId_);
      DARABONBA_PTR_TO_JSON(PhoneDataInfo, phoneDataInfo_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(PublicIpv6Address, publicIpv6Address_);
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RenderingType, renderingType_);
      DARABONBA_PTR_TO_JSON(ServerStatus, serverStatus_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_TO_JSON(SystemVersion, systemVersion_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpBandwidthLimit, upBandwidthLimit_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstancesResponseBodyInstanceModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceGroupId, androidInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AndroidInstanceGroupName, androidInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_FROM_JSON(AndroidInstanceName, androidInstanceName_);
      DARABONBA_PTR_FROM_JSON(AndroidInstanceStatus, androidInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppManagePolicy, appManagePolicy_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(BindUserId, bindUserId_);
      DARABONBA_PTR_FROM_JSON(BizImageType, bizImageType_);
      DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfig_);
      DARABONBA_PTR_FROM_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetStatus, internetStatus_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIpv6Address, networkInterfaceIpv6Address_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PersistentAppInstanceId, persistentAppInstanceId_);
      DARABONBA_PTR_FROM_JSON(PhoneDataInfo, phoneDataInfo_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(PublicIpv6Address, publicIpv6Address_);
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RenderingType, renderingType_);
      DARABONBA_PTR_FROM_JSON(ServerStatus, serverStatus_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_FROM_JSON(SystemVersion, systemVersion_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpBandwidthLimit, upBandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAndroidInstancesResponseBodyInstanceModel() = default ;
    DescribeAndroidInstancesResponseBodyInstanceModel(const DescribeAndroidInstancesResponseBodyInstanceModel &) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModel(DescribeAndroidInstancesResponseBodyInstanceModel &&) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstancesResponseBodyInstanceModel() = default ;
    DescribeAndroidInstancesResponseBodyInstanceModel& operator=(const DescribeAndroidInstancesResponseBodyInstanceModel &) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModel& operator=(DescribeAndroidInstancesResponseBodyInstanceModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceGroupId_ == nullptr
        && return this->androidInstanceGroupName_ == nullptr && return this->androidInstanceId_ == nullptr && return this->androidInstanceName_ == nullptr && return this->androidInstanceStatus_ == nullptr && return this->appInstanceGroupId_ == nullptr
        && return this->appInstanceId_ == nullptr && return this->appManagePolicy_ == nullptr && return this->authorizedUserId_ == nullptr && return this->bandwidthPackageId_ == nullptr && return this->bandwidthPackageType_ == nullptr
        && return this->bindUserId_ == nullptr && return this->bizImageType_ == nullptr && return this->bizTags_ == nullptr && return this->chargeType_ == nullptr && return this->cpu_ == nullptr
        && return this->disks_ == nullptr && return this->displayConfig_ == nullptr && return this->downBandwidthLimit_ == nullptr && return this->errorCode_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtExpired_ == nullptr && return this->gmtModified_ == nullptr && return this->imageId_ == nullptr && return this->imageVersion_ == nullptr && return this->instanceType_ == nullptr
        && return this->internetStatus_ == nullptr && return this->keyPairId_ == nullptr && return this->memory_ == nullptr && return this->networkInterfaceIp_ == nullptr && return this->networkInterfaceIpv6Address_ == nullptr
        && return this->networkType_ == nullptr && return this->officeSiteId_ == nullptr && return this->persistentAppInstanceId_ == nullptr && return this->phoneDataInfo_ == nullptr && return this->policyGroupId_ == nullptr
        && return this->publicIpAddress_ == nullptr && return this->publicIpv6Address_ == nullptr && return this->qosRuleId_ == nullptr && return this->rate_ == nullptr && return this->regionId_ == nullptr
        && return this->renderingType_ == nullptr && return this->serverStatus_ == nullptr && return this->serverType_ == nullptr && return this->sessionStatus_ == nullptr && return this->streamMode_ == nullptr
        && return this->systemVersion_ == nullptr && return this->tags_ == nullptr && return this->upBandwidthLimit_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // androidInstanceGroupId Field Functions 
    bool hasAndroidInstanceGroupId() const { return this->androidInstanceGroupId_ != nullptr;};
    void deleteAndroidInstanceGroupId() { this->androidInstanceGroupId_ = nullptr;};
    inline string androidInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceGroupId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAndroidInstanceGroupId(string androidInstanceGroupId) { DARABONBA_PTR_SET_VALUE(androidInstanceGroupId_, androidInstanceGroupId) };


    // androidInstanceGroupName Field Functions 
    bool hasAndroidInstanceGroupName() const { return this->androidInstanceGroupName_ != nullptr;};
    void deleteAndroidInstanceGroupName() { this->androidInstanceGroupName_ = nullptr;};
    inline string androidInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceGroupName_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAndroidInstanceGroupName(string androidInstanceGroupName) { DARABONBA_PTR_SET_VALUE(androidInstanceGroupName_, androidInstanceGroupName) };


    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // androidInstanceName Field Functions 
    bool hasAndroidInstanceName() const { return this->androidInstanceName_ != nullptr;};
    void deleteAndroidInstanceName() { this->androidInstanceName_ = nullptr;};
    inline string androidInstanceName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceName_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAndroidInstanceName(string androidInstanceName) { DARABONBA_PTR_SET_VALUE(androidInstanceName_, androidInstanceName) };


    // androidInstanceStatus Field Functions 
    bool hasAndroidInstanceStatus() const { return this->androidInstanceStatus_ != nullptr;};
    void deleteAndroidInstanceStatus() { this->androidInstanceStatus_ = nullptr;};
    inline string androidInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceStatus_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAndroidInstanceStatus(string androidInstanceStatus) { DARABONBA_PTR_SET_VALUE(androidInstanceStatus_, androidInstanceStatus) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appManagePolicy Field Functions 
    bool hasAppManagePolicy() const { return this->appManagePolicy_ != nullptr;};
    void deleteAppManagePolicy() { this->appManagePolicy_ = nullptr;};
    inline const Models::DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy & appManagePolicy() const { DARABONBA_PTR_GET_CONST(appManagePolicy_, Models::DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy) };
    inline Models::DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy appManagePolicy() { DARABONBA_PTR_GET(appManagePolicy_, Models::DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAppManagePolicy(const Models::DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy & appManagePolicy) { DARABONBA_PTR_SET_VALUE(appManagePolicy_, appManagePolicy) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAppManagePolicy(Models::DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy && appManagePolicy) { DARABONBA_PTR_SET_RVALUE(appManagePolicy_, appManagePolicy) };


    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline string authorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setAuthorizedUserId(string authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string bandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // bindUserId Field Functions 
    bool hasBindUserId() const { return this->bindUserId_ != nullptr;};
    void deleteBindUserId() { this->bindUserId_ = nullptr;};
    inline string bindUserId() const { DARABONBA_PTR_GET_DEFAULT(bindUserId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setBindUserId(string bindUserId) { DARABONBA_PTR_SET_VALUE(bindUserId_, bindUserId) };


    // bizImageType Field Functions 
    bool hasBizImageType() const { return this->bizImageType_ != nullptr;};
    void deleteBizImageType() { this->bizImageType_ = nullptr;};
    inline string bizImageType() const { DARABONBA_PTR_GET_DEFAULT(bizImageType_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setBizImageType(string bizImageType) { DARABONBA_PTR_SET_VALUE(bizImageType_, bizImageType) };


    // bizTags Field Functions 
    bool hasBizTags() const { return this->bizTags_ != nullptr;};
    void deleteBizTags() { this->bizTags_ = nullptr;};
    inline const vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelBizTags> & bizTags() const { DARABONBA_PTR_GET_CONST(bizTags_, vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelBizTags>) };
    inline vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelBizTags> bizTags() { DARABONBA_PTR_GET(bizTags_, vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelBizTags>) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setBizTags(const vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelBizTags> & bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setBizTags(vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelBizTags> && bizTags) { DARABONBA_PTR_SET_RVALUE(bizTags_, bizTags) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelDisks>) };
    inline vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelDisks>) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setDisks(const vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setDisks(vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // displayConfig Field Functions 
    bool hasDisplayConfig() const { return this->displayConfig_ != nullptr;};
    void deleteDisplayConfig() { this->displayConfig_ = nullptr;};
    inline const Models::DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig & displayConfig() const { DARABONBA_PTR_GET_CONST(displayConfig_, Models::DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig) };
    inline Models::DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig displayConfig() { DARABONBA_PTR_GET(displayConfig_, Models::DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setDisplayConfig(const Models::DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig & displayConfig) { DARABONBA_PTR_SET_VALUE(displayConfig_, displayConfig) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setDisplayConfig(Models::DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig && displayConfig) { DARABONBA_PTR_SET_RVALUE(displayConfig_, displayConfig) };


    // downBandwidthLimit Field Functions 
    bool hasDownBandwidthLimit() const { return this->downBandwidthLimit_ != nullptr;};
    void deleteDownBandwidthLimit() { this->downBandwidthLimit_ = nullptr;};
    inline int32_t downBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(downBandwidthLimit_, 0) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setDownBandwidthLimit(int32_t downBandwidthLimit) { DARABONBA_PTR_SET_VALUE(downBandwidthLimit_, downBandwidthLimit) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtExpired Field Functions 
    bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
    void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
    inline string gmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetStatus Field Functions 
    bool hasInternetStatus() const { return this->internetStatus_ != nullptr;};
    void deleteInternetStatus() { this->internetStatus_ = nullptr;};
    inline string internetStatus() const { DARABONBA_PTR_GET_DEFAULT(internetStatus_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setInternetStatus(string internetStatus) { DARABONBA_PTR_SET_VALUE(internetStatus_, internetStatus) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaceIp Field Functions 
    bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
    void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
    inline string networkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


    // networkInterfaceIpv6Address Field Functions 
    bool hasNetworkInterfaceIpv6Address() const { return this->networkInterfaceIpv6Address_ != nullptr;};
    void deleteNetworkInterfaceIpv6Address() { this->networkInterfaceIpv6Address_ = nullptr;};
    inline string networkInterfaceIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIpv6Address_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setNetworkInterfaceIpv6Address(string networkInterfaceIpv6Address) { DARABONBA_PTR_SET_VALUE(networkInterfaceIpv6Address_, networkInterfaceIpv6Address) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // persistentAppInstanceId Field Functions 
    bool hasPersistentAppInstanceId() const { return this->persistentAppInstanceId_ != nullptr;};
    void deletePersistentAppInstanceId() { this->persistentAppInstanceId_ = nullptr;};
    inline string persistentAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(persistentAppInstanceId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setPersistentAppInstanceId(string persistentAppInstanceId) { DARABONBA_PTR_SET_VALUE(persistentAppInstanceId_, persistentAppInstanceId) };


    // phoneDataInfo Field Functions 
    bool hasPhoneDataInfo() const { return this->phoneDataInfo_ != nullptr;};
    void deletePhoneDataInfo() { this->phoneDataInfo_ = nullptr;};
    inline const Models::DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo & phoneDataInfo() const { DARABONBA_PTR_GET_CONST(phoneDataInfo_, Models::DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo) };
    inline Models::DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo phoneDataInfo() { DARABONBA_PTR_GET(phoneDataInfo_, Models::DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setPhoneDataInfo(const Models::DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo & phoneDataInfo) { DARABONBA_PTR_SET_VALUE(phoneDataInfo_, phoneDataInfo) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setPhoneDataInfo(Models::DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo && phoneDataInfo) { DARABONBA_PTR_SET_RVALUE(phoneDataInfo_, phoneDataInfo) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline string publicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


    // publicIpv6Address Field Functions 
    bool hasPublicIpv6Address() const { return this->publicIpv6Address_ != nullptr;};
    void deletePublicIpv6Address() { this->publicIpv6Address_ = nullptr;};
    inline string publicIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(publicIpv6Address_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setPublicIpv6Address(string publicIpv6Address) { DARABONBA_PTR_SET_VALUE(publicIpv6Address_, publicIpv6Address) };


    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string qosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int32_t rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renderingType Field Functions 
    bool hasRenderingType() const { return this->renderingType_ != nullptr;};
    void deleteRenderingType() { this->renderingType_ = nullptr;};
    inline string renderingType() const { DARABONBA_PTR_GET_DEFAULT(renderingType_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setRenderingType(string renderingType) { DARABONBA_PTR_SET_VALUE(renderingType_, renderingType) };


    // serverStatus Field Functions 
    bool hasServerStatus() const { return this->serverStatus_ != nullptr;};
    void deleteServerStatus() { this->serverStatus_ = nullptr;};
    inline string serverStatus() const { DARABONBA_PTR_GET_DEFAULT(serverStatus_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setServerStatus(string serverStatus) { DARABONBA_PTR_SET_VALUE(serverStatus_, serverStatus) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // streamMode Field Functions 
    bool hasStreamMode() const { return this->streamMode_ != nullptr;};
    void deleteStreamMode() { this->streamMode_ = nullptr;};
    inline int32_t streamMode() const { DARABONBA_PTR_GET_DEFAULT(streamMode_, 0) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setStreamMode(int32_t streamMode) { DARABONBA_PTR_SET_VALUE(streamMode_, streamMode) };


    // systemVersion Field Functions 
    bool hasSystemVersion() const { return this->systemVersion_ != nullptr;};
    void deleteSystemVersion() { this->systemVersion_ = nullptr;};
    inline string systemVersion() const { DARABONBA_PTR_GET_DEFAULT(systemVersion_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setSystemVersion(string systemVersion) { DARABONBA_PTR_SET_VALUE(systemVersion_, systemVersion) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelTags>) };
    inline vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelTags>) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setTags(const vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setTags(vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // upBandwidthLimit Field Functions 
    bool hasUpBandwidthLimit() const { return this->upBandwidthLimit_ != nullptr;};
    void deleteUpBandwidthLimit() { this->upBandwidthLimit_ = nullptr;};
    inline int32_t upBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(upBandwidthLimit_, 0) };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setUpBandwidthLimit(int32_t upBandwidthLimit) { DARABONBA_PTR_SET_VALUE(upBandwidthLimit_, upBandwidthLimit) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModel& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the instance group.
    std::shared_ptr<string> androidInstanceGroupId_ = nullptr;
    // The name of the instance group.
    std::shared_ptr<string> androidInstanceGroupName_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> androidInstanceName_ = nullptr;
    // The state of the instance.
    std::shared_ptr<string> androidInstanceStatus_ = nullptr;
    // The ID of the delivery group.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The ID of the physical instance.
    std::shared_ptr<string> appInstanceId_ = nullptr;
    std::shared_ptr<Models::DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy> appManagePolicy_ = nullptr;
    // The ID of the user to whom the instance is assigned.
    std::shared_ptr<string> authorizedUserId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageType_ = nullptr;
    // The ID of the bound user.
    std::shared_ptr<string> bindUserId_ = nullptr;
    std::shared_ptr<string> bizImageType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelBizTags>> bizTags_ = nullptr;
    // The billing method of the instance.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<string> cpu_ = nullptr;
    // The disks.
    std::shared_ptr<vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelDisks>> disks_ = nullptr;
    std::shared_ptr<Models::DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig> displayConfig_ = nullptr;
    std::shared_ptr<int32_t> downBandwidthLimit_ = nullptr;
    // The cause of the instance data backup failure or restoration failure.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the subscription instance group expires.
    std::shared_ptr<string> gmtExpired_ = nullptr;
    // The time when the instance was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> internetStatus_ = nullptr;
    // The ID of the key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The memory size.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The IP address of the ENI.
    std::shared_ptr<string> networkInterfaceIp_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> networkInterfaceIpv6Address_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The ID of the persistent session.
    std::shared_ptr<string> persistentAppInstanceId_ = nullptr;
    std::shared_ptr<Models::DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo> phoneDataInfo_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> publicIpAddress_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> publicIpv6Address_ = nullptr;
    std::shared_ptr<string> qosRuleId_ = nullptr;
    // The progress of instance data backup or restoration.
    std::shared_ptr<int32_t> rate_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The rendering type.
    std::shared_ptr<string> renderingType_ = nullptr;
    std::shared_ptr<string> serverStatus_ = nullptr;
    std::shared_ptr<string> serverType_ = nullptr;
    // The session status.
    // 
    // Valid values:
    // 
    // *   disConnect: The session is disconnected.
    // *   connect: The session is connected.
    std::shared_ptr<string> sessionStatus_ = nullptr;
    std::shared_ptr<int32_t> streamMode_ = nullptr;
    std::shared_ptr<string> systemVersion_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeAndroidInstancesResponseBodyInstanceModelTags>> tags_ = nullptr;
    std::shared_ptr<int32_t> upBandwidthLimit_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
