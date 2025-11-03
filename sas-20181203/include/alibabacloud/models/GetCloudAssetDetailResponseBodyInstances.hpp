// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetDetailResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetDetailResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetSubTypeName, assetSubTypeName_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AssetTypeName, assetTypeName_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DetailLink, detailLink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(OriginalAssetInfo, originalAssetInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(SecurityInfo, securityInfo_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VendorUid, vendorUid_);
      DARABONBA_PTR_TO_JSON(VendorUserName, vendorUserName_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetDetailResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetSubTypeName, assetSubTypeName_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AssetTypeName, assetTypeName_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DetailLink, detailLink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(OriginalAssetInfo, originalAssetInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(SecurityInfo, securityInfo_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VendorUid, vendorUid_);
      DARABONBA_PTR_FROM_JSON(VendorUserName, vendorUserName_);
    };
    GetCloudAssetDetailResponseBodyInstances() = default ;
    GetCloudAssetDetailResponseBodyInstances(const GetCloudAssetDetailResponseBodyInstances &) = default ;
    GetCloudAssetDetailResponseBodyInstances(GetCloudAssetDetailResponseBodyInstances &&) = default ;
    GetCloudAssetDetailResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetDetailResponseBodyInstances() = default ;
    GetCloudAssetDetailResponseBodyInstances& operator=(const GetCloudAssetDetailResponseBodyInstances &) = default ;
    GetCloudAssetDetailResponseBodyInstances& operator=(GetCloudAssetDetailResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmStatus_ == nullptr
        && return this->assetSubType_ == nullptr && return this->assetSubTypeName_ == nullptr && return this->assetType_ == nullptr && return this->assetTypeName_ == nullptr && return this->createdTime_ == nullptr
        && return this->detailLink_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->originalAssetInfo_ == nullptr
        && return this->regionId_ == nullptr && return this->riskStatus_ == nullptr && return this->securityInfo_ == nullptr && return this->vendor_ == nullptr && return this->vendorUid_ == nullptr
        && return this->vendorUserName_ == nullptr; };
    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string alarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline GetCloudAssetDetailResponseBodyInstances& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetSubTypeName Field Functions 
    bool hasAssetSubTypeName() const { return this->assetSubTypeName_ != nullptr;};
    void deleteAssetSubTypeName() { this->assetSubTypeName_ = nullptr;};
    inline string assetSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetSubTypeName_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setAssetSubTypeName(string assetSubTypeName) { DARABONBA_PTR_SET_VALUE(assetSubTypeName_, assetSubTypeName) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline GetCloudAssetDetailResponseBodyInstances& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // assetTypeName Field Functions 
    bool hasAssetTypeName() const { return this->assetTypeName_ != nullptr;};
    void deleteAssetTypeName() { this->assetTypeName_ = nullptr;};
    inline string assetTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetTypeName_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setAssetTypeName(string assetTypeName) { DARABONBA_PTR_SET_VALUE(assetTypeName_, assetTypeName) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline GetCloudAssetDetailResponseBodyInstances& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // detailLink Field Functions 
    bool hasDetailLink() const { return this->detailLink_ != nullptr;};
    void deleteDetailLink() { this->detailLink_ = nullptr;};
    inline string detailLink() const { DARABONBA_PTR_GET_DEFAULT(detailLink_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setDetailLink(string detailLink) { DARABONBA_PTR_SET_VALUE(detailLink_, detailLink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // originalAssetInfo Field Functions 
    bool hasOriginalAssetInfo() const { return this->originalAssetInfo_ != nullptr;};
    void deleteOriginalAssetInfo() { this->originalAssetInfo_ = nullptr;};
    inline string originalAssetInfo() const { DARABONBA_PTR_GET_DEFAULT(originalAssetInfo_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setOriginalAssetInfo(string originalAssetInfo) { DARABONBA_PTR_SET_VALUE(originalAssetInfo_, originalAssetInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // securityInfo Field Functions 
    bool hasSecurityInfo() const { return this->securityInfo_ != nullptr;};
    void deleteSecurityInfo() { this->securityInfo_ = nullptr;};
    inline string securityInfo() const { DARABONBA_PTR_GET_DEFAULT(securityInfo_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setSecurityInfo(string securityInfo) { DARABONBA_PTR_SET_VALUE(securityInfo_, securityInfo) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline GetCloudAssetDetailResponseBodyInstances& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorUid Field Functions 
    bool hasVendorUid() const { return this->vendorUid_ != nullptr;};
    void deleteVendorUid() { this->vendorUid_ = nullptr;};
    inline string vendorUid() const { DARABONBA_PTR_GET_DEFAULT(vendorUid_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setVendorUid(string vendorUid) { DARABONBA_PTR_SET_VALUE(vendorUid_, vendorUid) };


    // vendorUserName Field Functions 
    bool hasVendorUserName() const { return this->vendorUserName_ != nullptr;};
    void deleteVendorUserName() { this->vendorUserName_ = nullptr;};
    inline string vendorUserName() const { DARABONBA_PTR_GET_DEFAULT(vendorUserName_, "") };
    inline GetCloudAssetDetailResponseBodyInstances& setVendorUserName(string vendorUserName) { DARABONBA_PTR_SET_VALUE(vendorUserName_, vendorUserName) };


  protected:
    // Indicates whether alerts are generated for the current cloud asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> alarmStatus_ = nullptr;
    // The subtype of the cloud asset.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The name of the cloud asset subtype.
    std::shared_ptr<string> assetSubTypeName_ = nullptr;
    // The type of the cloud asset. Valid values:
    // 
    // *   **0**: ECS.
    // *   **1**: SLB.
    // *   **3**: ApsaraDB RDS.
    // *   **4**: ApsaraDB for MongoDB.
    // *   **5**: ApsaraDB for Redis.
    // *   **6**: Container Registry.
    // *   **8**: Container Service for Kubernetes.
    // *   **9**: VPC.
    // *   **11**: ActionTrail.
    // *   **12**: CDN.
    // *   **13**: Certificate Management Service.
    // *   **14**: Apsara Devops.
    // *   **15**: RAM.
    // *   **16**: Anti-DDoS.
    // *   **17**: WAF.
    // *   **18**: OSS.
    // *   **19**: PolarDB.
    // *   **20**: ApsaraDB RDS for PostgreSQL.
    // *   **21**: MSE.
    // *   **22**: NAS.
    // *   **23**: DSC.
    // *   **24**: EIP.
    // *   **25**: IDaaS-EIAM.
    // *   **26**: PolarDB-X.
    // *   **27**: Elasticsearch.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The name of the cloud asset type.
    std::shared_ptr<string> assetTypeName_ = nullptr;
    // The time when the instance was created. The value is a timestamp.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The detailed address of the cloud asset.
    std::shared_ptr<string> detailLink_ = nullptr;
    // The instance ID of the cloud asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the cloud asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the instance.
    std::shared_ptr<string> internetIp_ = nullptr;
    // Detailed asset information.
    std::shared_ptr<string> originalAssetInfo_ = nullptr;
    // The region in which the cloud asset resides.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether risks are detected on the current cloud asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The security information about the cloud asset.
    std::shared_ptr<string> securityInfo_ = nullptr;
    // The service provider of the cloud asset. Valid values:
    // 
    // *   **0**: Alibaba Cloud.
    // *   **1**: service provider that is unrecognized.
    // *   **2**: data center.
    // *   **3**, **4**, **5**, and **7**: third-party service provider.
    // *   **8**: simple application server.
    std::shared_ptr<int32_t> vendor_ = nullptr;
    // Account id for multi-cloud instances.
    std::shared_ptr<string> vendorUid_ = nullptr;
    // The account name of the multi-cloud instance.
    std::shared_ptr<string> vendorUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
