// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class DescribeSyncInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSyncInfoResponseBody() = default ;
    DescribeSyncInfoResponseBody(const DescribeSyncInfoResponseBody &) = default ;
    DescribeSyncInfoResponseBody(DescribeSyncInfoResponseBody &&) = default ;
    DescribeSyncInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncInfoResponseBody() = default ;
    DescribeSyncInfoResponseBody& operator=(const DescribeSyncInfoResponseBody &) = default ;
    DescribeSyncInfoResponseBody& operator=(DescribeSyncInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_TO_JSON(CustomName, customName_);
        DARABONBA_PTR_TO_JSON(EcsEip, ecsEip_);
        DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
        DARABONBA_PTR_TO_JSON(EcsInternetIp, ecsInternetIp_);
        DARABONBA_PTR_TO_JSON(EcsIntranetIp, ecsIntranetIp_);
        DARABONBA_PTR_TO_JSON(EcsNetworkType, ecsNetworkType_);
        DARABONBA_PTR_TO_JSON(EcsStatus, ecsStatus_);
        DARABONBA_PTR_TO_JSON(EcsUuid, ecsUuid_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(ImageVersionName, imageVersionName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PlanCode, planCode_);
        DARABONBA_PTR_TO_JSON(PlanName, planName_);
        DARABONBA_PTR_TO_JSON(PlanUpgradeStatus, planUpgradeStatus_);
        DARABONBA_PTR_TO_JSON(PlanUpgradeable, planUpgradeable_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(PublicAccessControl, publicAccessControl_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(Renewable, renewable_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_TO_JSON(VendorCode, vendorCode_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(ZoneNo, zoneNo_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_FROM_JSON(CustomName, customName_);
        DARABONBA_PTR_FROM_JSON(EcsEip, ecsEip_);
        DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
        DARABONBA_PTR_FROM_JSON(EcsInternetIp, ecsInternetIp_);
        DARABONBA_PTR_FROM_JSON(EcsIntranetIp, ecsIntranetIp_);
        DARABONBA_PTR_FROM_JSON(EcsNetworkType, ecsNetworkType_);
        DARABONBA_PTR_FROM_JSON(EcsStatus, ecsStatus_);
        DARABONBA_PTR_FROM_JSON(EcsUuid, ecsUuid_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(ImageVersionName, imageVersionName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PlanCode, planCode_);
        DARABONBA_PTR_FROM_JSON(PlanName, planName_);
        DARABONBA_PTR_FROM_JSON(PlanUpgradeStatus, planUpgradeStatus_);
        DARABONBA_PTR_FROM_JSON(PlanUpgradeable, planUpgradeable_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(PublicAccessControl, publicAccessControl_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(Renewable, renewable_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_FROM_JSON(VendorCode, vendorCode_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneNo, zoneNo_);
      };
      InstanceInfo() = default ;
      InstanceInfo(const InstanceInfo &) = default ;
      InstanceInfo(InstanceInfo &&) = default ;
      InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceInfo() = default ;
      InstanceInfo& operator=(const InstanceInfo &) = default ;
      InstanceInfo& operator=(InstanceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->aliuid_ == nullptr && this->customName_ == nullptr && this->ecsEip_ == nullptr && this->ecsInstanceId_ == nullptr && this->ecsInternetIp_ == nullptr
        && this->ecsIntranetIp_ == nullptr && this->ecsNetworkType_ == nullptr && this->ecsStatus_ == nullptr && this->ecsUuid_ == nullptr && this->expireTime_ == nullptr
        && this->imageVersionName_ == nullptr && this->instanceId_ == nullptr && this->planCode_ == nullptr && this->planName_ == nullptr && this->planUpgradeStatus_ == nullptr
        && this->planUpgradeable_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->publicAccessControl_ == nullptr && this->regionName_ == nullptr
        && this->regionNo_ == nullptr && this->renewable_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->upgradeStatus_ == nullptr
        && this->vendorCode_ == nullptr && this->vswitchId_ == nullptr && this->zoneNo_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline int32_t getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, 0) };
      inline InstanceInfo& setAccessType(int32_t accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
      inline InstanceInfo& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // customName Field Functions 
      bool hasCustomName() const { return this->customName_ != nullptr;};
      void deleteCustomName() { this->customName_ = nullptr;};
      inline string getCustomName() const { DARABONBA_PTR_GET_DEFAULT(customName_, "") };
      inline InstanceInfo& setCustomName(string customName) { DARABONBA_PTR_SET_VALUE(customName_, customName) };


      // ecsEip Field Functions 
      bool hasEcsEip() const { return this->ecsEip_ != nullptr;};
      void deleteEcsEip() { this->ecsEip_ = nullptr;};
      inline string getEcsEip() const { DARABONBA_PTR_GET_DEFAULT(ecsEip_, "") };
      inline InstanceInfo& setEcsEip(string ecsEip) { DARABONBA_PTR_SET_VALUE(ecsEip_, ecsEip) };


      // ecsInstanceId Field Functions 
      bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
      void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
      inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
      inline InstanceInfo& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


      // ecsInternetIp Field Functions 
      bool hasEcsInternetIp() const { return this->ecsInternetIp_ != nullptr;};
      void deleteEcsInternetIp() { this->ecsInternetIp_ = nullptr;};
      inline string getEcsInternetIp() const { DARABONBA_PTR_GET_DEFAULT(ecsInternetIp_, "") };
      inline InstanceInfo& setEcsInternetIp(string ecsInternetIp) { DARABONBA_PTR_SET_VALUE(ecsInternetIp_, ecsInternetIp) };


      // ecsIntranetIp Field Functions 
      bool hasEcsIntranetIp() const { return this->ecsIntranetIp_ != nullptr;};
      void deleteEcsIntranetIp() { this->ecsIntranetIp_ = nullptr;};
      inline string getEcsIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(ecsIntranetIp_, "") };
      inline InstanceInfo& setEcsIntranetIp(string ecsIntranetIp) { DARABONBA_PTR_SET_VALUE(ecsIntranetIp_, ecsIntranetIp) };


      // ecsNetworkType Field Functions 
      bool hasEcsNetworkType() const { return this->ecsNetworkType_ != nullptr;};
      void deleteEcsNetworkType() { this->ecsNetworkType_ = nullptr;};
      inline string getEcsNetworkType() const { DARABONBA_PTR_GET_DEFAULT(ecsNetworkType_, "") };
      inline InstanceInfo& setEcsNetworkType(string ecsNetworkType) { DARABONBA_PTR_SET_VALUE(ecsNetworkType_, ecsNetworkType) };


      // ecsStatus Field Functions 
      bool hasEcsStatus() const { return this->ecsStatus_ != nullptr;};
      void deleteEcsStatus() { this->ecsStatus_ = nullptr;};
      inline string getEcsStatus() const { DARABONBA_PTR_GET_DEFAULT(ecsStatus_, "") };
      inline InstanceInfo& setEcsStatus(string ecsStatus) { DARABONBA_PTR_SET_VALUE(ecsStatus_, ecsStatus) };


      // ecsUuid Field Functions 
      bool hasEcsUuid() const { return this->ecsUuid_ != nullptr;};
      void deleteEcsUuid() { this->ecsUuid_ = nullptr;};
      inline string getEcsUuid() const { DARABONBA_PTR_GET_DEFAULT(ecsUuid_, "") };
      inline InstanceInfo& setEcsUuid(string ecsUuid) { DARABONBA_PTR_SET_VALUE(ecsUuid_, ecsUuid) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline InstanceInfo& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // imageVersionName Field Functions 
      bool hasImageVersionName() const { return this->imageVersionName_ != nullptr;};
      void deleteImageVersionName() { this->imageVersionName_ = nullptr;};
      inline string getImageVersionName() const { DARABONBA_PTR_GET_DEFAULT(imageVersionName_, "") };
      inline InstanceInfo& setImageVersionName(string imageVersionName) { DARABONBA_PTR_SET_VALUE(imageVersionName_, imageVersionName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // planCode Field Functions 
      bool hasPlanCode() const { return this->planCode_ != nullptr;};
      void deletePlanCode() { this->planCode_ = nullptr;};
      inline string getPlanCode() const { DARABONBA_PTR_GET_DEFAULT(planCode_, "") };
      inline InstanceInfo& setPlanCode(string planCode) { DARABONBA_PTR_SET_VALUE(planCode_, planCode) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline InstanceInfo& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planUpgradeStatus Field Functions 
      bool hasPlanUpgradeStatus() const { return this->planUpgradeStatus_ != nullptr;};
      void deletePlanUpgradeStatus() { this->planUpgradeStatus_ = nullptr;};
      inline int32_t getPlanUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(planUpgradeStatus_, 0) };
      inline InstanceInfo& setPlanUpgradeStatus(int32_t planUpgradeStatus) { DARABONBA_PTR_SET_VALUE(planUpgradeStatus_, planUpgradeStatus) };


      // planUpgradeable Field Functions 
      bool hasPlanUpgradeable() const { return this->planUpgradeable_ != nullptr;};
      void deletePlanUpgradeable() { this->planUpgradeable_ = nullptr;};
      inline string getPlanUpgradeable() const { DARABONBA_PTR_GET_DEFAULT(planUpgradeable_, "") };
      inline InstanceInfo& setPlanUpgradeable(string planUpgradeable) { DARABONBA_PTR_SET_VALUE(planUpgradeable_, planUpgradeable) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline InstanceInfo& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline InstanceInfo& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // publicAccessControl Field Functions 
      bool hasPublicAccessControl() const { return this->publicAccessControl_ != nullptr;};
      void deletePublicAccessControl() { this->publicAccessControl_ = nullptr;};
      inline int32_t getPublicAccessControl() const { DARABONBA_PTR_GET_DEFAULT(publicAccessControl_, 0) };
      inline InstanceInfo& setPublicAccessControl(int32_t publicAccessControl) { DARABONBA_PTR_SET_VALUE(publicAccessControl_, publicAccessControl) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline InstanceInfo& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline InstanceInfo& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // renewable Field Functions 
      bool hasRenewable() const { return this->renewable_ != nullptr;};
      void deleteRenewable() { this->renewable_ = nullptr;};
      inline bool getRenewable() const { DARABONBA_PTR_GET_DEFAULT(renewable_, false) };
      inline InstanceInfo& setRenewable(bool renewable) { DARABONBA_PTR_SET_VALUE(renewable_, renewable) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline InstanceInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline InstanceInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // upgradeStatus Field Functions 
      bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
      void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
      inline int32_t getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, 0) };
      inline InstanceInfo& setUpgradeStatus(int32_t upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


      // vendorCode Field Functions 
      bool hasVendorCode() const { return this->vendorCode_ != nullptr;};
      void deleteVendorCode() { this->vendorCode_ = nullptr;};
      inline string getVendorCode() const { DARABONBA_PTR_GET_DEFAULT(vendorCode_, "") };
      inline InstanceInfo& setVendorCode(string vendorCode) { DARABONBA_PTR_SET_VALUE(vendorCode_, vendorCode) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline InstanceInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // zoneNo Field Functions 
      bool hasZoneNo() const { return this->zoneNo_ != nullptr;};
      void deleteZoneNo() { this->zoneNo_ = nullptr;};
      inline string getZoneNo() const { DARABONBA_PTR_GET_DEFAULT(zoneNo_, "") };
      inline InstanceInfo& setZoneNo(string zoneNo) { DARABONBA_PTR_SET_VALUE(zoneNo_, zoneNo) };


    protected:
      shared_ptr<int32_t> accessType_ {};
      shared_ptr<int64_t> aliuid_ {};
      shared_ptr<string> customName_ {};
      shared_ptr<string> ecsEip_ {};
      shared_ptr<string> ecsInstanceId_ {};
      shared_ptr<string> ecsInternetIp_ {};
      shared_ptr<string> ecsIntranetIp_ {};
      shared_ptr<string> ecsNetworkType_ {};
      shared_ptr<string> ecsStatus_ {};
      shared_ptr<string> ecsUuid_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> imageVersionName_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> planCode_ {};
      shared_ptr<string> planName_ {};
      shared_ptr<int32_t> planUpgradeStatus_ {};
      shared_ptr<string> planUpgradeable_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<int32_t> publicAccessControl_ {};
      shared_ptr<string> regionName_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<bool> renewable_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int32_t> upgradeStatus_ {};
      shared_ptr<string> vendorCode_ {};
      shared_ptr<string> vswitchId_ {};
      shared_ptr<string> zoneNo_ {};
    };

    virtual bool empty() const override { return this->instanceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const DescribeSyncInfoResponseBody::InstanceInfo & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, DescribeSyncInfoResponseBody::InstanceInfo) };
    inline DescribeSyncInfoResponseBody::InstanceInfo getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, DescribeSyncInfoResponseBody::InstanceInfo) };
    inline DescribeSyncInfoResponseBody& setInstanceInfo(const DescribeSyncInfoResponseBody::InstanceInfo & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline DescribeSyncInfoResponseBody& setInstanceInfo(DescribeSyncInfoResponseBody::InstanceInfo && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeSyncInfoResponseBody::InstanceInfo> instanceInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
