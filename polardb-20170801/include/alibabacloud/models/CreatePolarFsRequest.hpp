// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARFSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARFSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarFsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarFsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateStorageSize, accelerateStorageSize_);
      DARABONBA_PTR_TO_JSON(AccelerateSwitch, accelerateSwitch_);
      DARABONBA_PTR_TO_JSON(AccelerateType, accelerateType_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserIds, authorizedUserIds_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_TO_JSON(CustomBucketCount, customBucketCount_);
      DARABONBA_PTR_TO_JSON(CustomBucketPath, customBucketPath_);
      DARABONBA_PTR_TO_JSON(CustomBucketPathList, customBucketPathList_);
      DARABONBA_PTR_TO_JSON(CustomOssAk, customOssAk_);
      DARABONBA_PTR_TO_JSON(CustomOssSk, customOssSk_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarFsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateStorageSize, accelerateStorageSize_);
      DARABONBA_PTR_FROM_JSON(AccelerateSwitch, accelerateSwitch_);
      DARABONBA_PTR_FROM_JSON(AccelerateType, accelerateType_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserIds, authorizedUserIds_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_FROM_JSON(CustomBucketCount, customBucketCount_);
      DARABONBA_PTR_FROM_JSON(CustomBucketPath, customBucketPath_);
      DARABONBA_PTR_FROM_JSON(CustomBucketPathList, customBucketPathList_);
      DARABONBA_PTR_FROM_JSON(CustomOssAk, customOssAk_);
      DARABONBA_PTR_FROM_JSON(CustomOssSk, customOssSk_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreatePolarFsRequest() = default ;
    CreatePolarFsRequest(const CreatePolarFsRequest &) = default ;
    CreatePolarFsRequest(CreatePolarFsRequest &&) = default ;
    CreatePolarFsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarFsRequest() = default ;
    CreatePolarFsRequest& operator=(const CreatePolarFsRequest &) = default ;
    CreatePolarFsRequest& operator=(CreatePolarFsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomBucketPathList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomBucketPathList& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, CustomBucketPathList& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      CustomBucketPathList() = default ;
      CustomBucketPathList(const CustomBucketPathList &) = default ;
      CustomBucketPathList(CustomBucketPathList &&) = default ;
      CustomBucketPathList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomBucketPathList() = default ;
      CustomBucketPathList& operator=(const CustomBucketPathList &) = default ;
      CustomBucketPathList& operator=(CustomBucketPathList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->path_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline CustomBucketPathList& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline CustomBucketPathList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The custom storage bucket.
      shared_ptr<string> bucket_ {};
      // The custom storage path.
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->accelerateStorageSize_ == nullptr
        && this->accelerateSwitch_ == nullptr && this->accelerateType_ == nullptr && this->authorizedUserIds_ == nullptr && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr
        && this->creationCategory_ == nullptr && this->customBucketCount_ == nullptr && this->customBucketPath_ == nullptr && this->customBucketPathList_ == nullptr && this->customOssAk_ == nullptr
        && this->customOssSk_ == nullptr && this->DBClusterId_ == nullptr && this->DBType_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr
        && this->promotionCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->storageSpace_ == nullptr && this->storageType_ == nullptr
        && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // accelerateStorageSize Field Functions 
    bool hasAccelerateStorageSize() const { return this->accelerateStorageSize_ != nullptr;};
    void deleteAccelerateStorageSize() { this->accelerateStorageSize_ = nullptr;};
    inline int64_t getAccelerateStorageSize() const { DARABONBA_PTR_GET_DEFAULT(accelerateStorageSize_, 0L) };
    inline CreatePolarFsRequest& setAccelerateStorageSize(int64_t accelerateStorageSize) { DARABONBA_PTR_SET_VALUE(accelerateStorageSize_, accelerateStorageSize) };


    // accelerateSwitch Field Functions 
    bool hasAccelerateSwitch() const { return this->accelerateSwitch_ != nullptr;};
    void deleteAccelerateSwitch() { this->accelerateSwitch_ = nullptr;};
    inline string getAccelerateSwitch() const { DARABONBA_PTR_GET_DEFAULT(accelerateSwitch_, "") };
    inline CreatePolarFsRequest& setAccelerateSwitch(string accelerateSwitch) { DARABONBA_PTR_SET_VALUE(accelerateSwitch_, accelerateSwitch) };


    // accelerateType Field Functions 
    bool hasAccelerateType() const { return this->accelerateType_ != nullptr;};
    void deleteAccelerateType() { this->accelerateType_ = nullptr;};
    inline string getAccelerateType() const { DARABONBA_PTR_GET_DEFAULT(accelerateType_, "") };
    inline CreatePolarFsRequest& setAccelerateType(string accelerateType) { DARABONBA_PTR_SET_VALUE(accelerateType_, accelerateType) };


    // authorizedUserIds Field Functions 
    bool hasAuthorizedUserIds() const { return this->authorizedUserIds_ != nullptr;};
    void deleteAuthorizedUserIds() { this->authorizedUserIds_ = nullptr;};
    inline string getAuthorizedUserIds() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserIds_, "") };
    inline CreatePolarFsRequest& setAuthorizedUserIds(string authorizedUserIds) { DARABONBA_PTR_SET_VALUE(authorizedUserIds_, authorizedUserIds) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreatePolarFsRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreatePolarFsRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // creationCategory Field Functions 
    bool hasCreationCategory() const { return this->creationCategory_ != nullptr;};
    void deleteCreationCategory() { this->creationCategory_ = nullptr;};
    inline string getCreationCategory() const { DARABONBA_PTR_GET_DEFAULT(creationCategory_, "") };
    inline CreatePolarFsRequest& setCreationCategory(string creationCategory) { DARABONBA_PTR_SET_VALUE(creationCategory_, creationCategory) };


    // customBucketCount Field Functions 
    bool hasCustomBucketCount() const { return this->customBucketCount_ != nullptr;};
    void deleteCustomBucketCount() { this->customBucketCount_ = nullptr;};
    inline int32_t getCustomBucketCount() const { DARABONBA_PTR_GET_DEFAULT(customBucketCount_, 0) };
    inline CreatePolarFsRequest& setCustomBucketCount(int32_t customBucketCount) { DARABONBA_PTR_SET_VALUE(customBucketCount_, customBucketCount) };


    // customBucketPath Field Functions 
    bool hasCustomBucketPath() const { return this->customBucketPath_ != nullptr;};
    void deleteCustomBucketPath() { this->customBucketPath_ = nullptr;};
    inline string getCustomBucketPath() const { DARABONBA_PTR_GET_DEFAULT(customBucketPath_, "") };
    inline CreatePolarFsRequest& setCustomBucketPath(string customBucketPath) { DARABONBA_PTR_SET_VALUE(customBucketPath_, customBucketPath) };


    // customBucketPathList Field Functions 
    bool hasCustomBucketPathList() const { return this->customBucketPathList_ != nullptr;};
    void deleteCustomBucketPathList() { this->customBucketPathList_ = nullptr;};
    inline const vector<CreatePolarFsRequest::CustomBucketPathList> & getCustomBucketPathList() const { DARABONBA_PTR_GET_CONST(customBucketPathList_, vector<CreatePolarFsRequest::CustomBucketPathList>) };
    inline vector<CreatePolarFsRequest::CustomBucketPathList> getCustomBucketPathList() { DARABONBA_PTR_GET(customBucketPathList_, vector<CreatePolarFsRequest::CustomBucketPathList>) };
    inline CreatePolarFsRequest& setCustomBucketPathList(const vector<CreatePolarFsRequest::CustomBucketPathList> & customBucketPathList) { DARABONBA_PTR_SET_VALUE(customBucketPathList_, customBucketPathList) };
    inline CreatePolarFsRequest& setCustomBucketPathList(vector<CreatePolarFsRequest::CustomBucketPathList> && customBucketPathList) { DARABONBA_PTR_SET_RVALUE(customBucketPathList_, customBucketPathList) };


    // customOssAk Field Functions 
    bool hasCustomOssAk() const { return this->customOssAk_ != nullptr;};
    void deleteCustomOssAk() { this->customOssAk_ = nullptr;};
    inline string getCustomOssAk() const { DARABONBA_PTR_GET_DEFAULT(customOssAk_, "") };
    inline CreatePolarFsRequest& setCustomOssAk(string customOssAk) { DARABONBA_PTR_SET_VALUE(customOssAk_, customOssAk) };


    // customOssSk Field Functions 
    bool hasCustomOssSk() const { return this->customOssSk_ != nullptr;};
    void deleteCustomOssSk() { this->customOssSk_ = nullptr;};
    inline string getCustomOssSk() const { DARABONBA_PTR_GET_DEFAULT(customOssSk_, "") };
    inline CreatePolarFsRequest& setCustomOssSk(string customOssSk) { DARABONBA_PTR_SET_VALUE(customOssSk_, customOssSk) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreatePolarFsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline CreatePolarFsRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreatePolarFsRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreatePolarFsRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreatePolarFsRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePolarFsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePolarFsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline CreatePolarFsRequest& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreatePolarFsRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreatePolarFsRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreatePolarFsRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreatePolarFsRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreatePolarFsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The acceleration space size. Unit: GB. The value must be no less than 5000 and must be a multiple of 1000. This parameter is required when acceleration is enabled for the basic edition.
    shared_ptr<int64_t> accelerateStorageSize_ {};
    // The acceleration startup mode. Valid values:
    // 
    // - **ONLY**: enables acceleration only.
    // - **ON**: enables cold data and acceleration.
    shared_ptr<string> accelerateSwitch_ {};
    // The acceleration type. Valid values: 
    // 
    // - **juice**: file system acceleration.
    // - **alluxio**: transparent acceleration.
    shared_ptr<string> accelerateType_ {};
    // The list of authorized accounts for the cold storage edition instance. Separate multiple accounts with commas (`,`).
    shared_ptr<string> authorizedUserIds_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // - **true**: enables auto-renewal.
    // - **false**: disables auto-renewal.
    // 
    // Default value: **false**.
    // 
    // > This parameter takes effect only when the **PayType** parameter is set to **Prepaid**.
    shared_ptr<bool> autoRenew_ {};
    // Specifies whether to automatically use coupons. Valid values:
    // - **true**: uses coupons (default).
    // - **false**: does not use coupons.
    shared_ptr<bool> autoUseCoupon_ {};
    // The edition. Valid values: basic (Basic Edition, default), high_performance (High-performance Edition), and cold (Cold Storage Edition). For the basic edition, you must specify the AccelerateSwitch and AccelerateStorageSize parameters. For the high_performance edition, you must specify the StorageType parameter (essdpl0 or essdpl1). For the cold edition, the StorageType parameter (local_redundancy or city_redundancy) is optional.
    shared_ptr<string> creationCategory_ {};
    // The number of buckets.
    // 
    // > This parameter is required only when acceleration (file system acceleration) is enabled.
    shared_ptr<int32_t> customBucketCount_ {};
    // The bucket path.
    // 
    // > This parameter is required only when acceleration (file system acceleration) is enabled.
    shared_ptr<string> customBucketPath_ {};
    // The bucket and corresponding path information.
    // 
    // > This parameter is required for transparent acceleration scenarios.
    shared_ptr<vector<CreatePolarFsRequest::CustomBucketPathList>> customBucketPathList_ {};
    // The custom AccessKey ID.
    shared_ptr<string> customOssAk_ {};
    // The custom AccessKey secret.
    shared_ptr<string> customOssSk_ {};
    // The PolarDB cluster ID. This parameter is required when you call this operation. If this parameter is not specified, the InvalidDBClusterId.Malformed error is returned.
    shared_ptr<string> DBClusterId_ {};
    // The database ecosystem. Valid values: polardb_mysql (PolarDB for MySQL), polardb_pg (PolarDB for PostgreSQL), and polar_agentic_db (AgenticDB). The gateway maps these values to the mysql, postgresql, and agentic_db backends respectively. Pass the request value instead of the display name such as MySQL or PostgreSQL. If an ActionUnauthorized (HTTP 403) error is returned, check the call permissions.
    shared_ptr<string> DBType_ {};
    // The billing method. Valid values: 
    // 
    // - **Postpaid**: pay-as-you-go.
    // - **Prepaid**: subscription.
    shared_ptr<string> payType_ {};
    // If the billing method is **Prepaid**, this is a required pass parameter. Specifies whether the subscription cluster is billed by year or by month. 
    // 
    // - **Year**: year. If you select subscription, the unit is year.
    // - **Month**: month. If you select subscription, the unit is month.
    shared_ptr<string> period_ {};
    // The coupon code. If this parameter is not specified, the default coupon is used.
    shared_ptr<string> promotionCode_ {};
    // The region ID.
    // >You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The storage space. Unit: GB.
    shared_ptr<int64_t> storageSpace_ {};
    // The storage type. For the high_performance edition, use lowercase essdpl0 or essdpl1. For the cold edition, use local_redundancy or city_redundancy. Select the value based on the edition. The value is case-sensitive.
    shared_ptr<string> storageType_ {};
    // The subscription duration. This parameter is required when the **PayType** parameter is set to **Prepaid**.
    // - If the **Period** parameter is set to **Month**, the value of **UsedTime** must be an integer in the range of `[1-9]`.
    // - If the **Period** parameter is set to **Year**, the value of **UsedTime** must be an integer in the range of `[1-3]`.
    shared_ptr<string> usedTime_ {};
    // The VPC ID.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
