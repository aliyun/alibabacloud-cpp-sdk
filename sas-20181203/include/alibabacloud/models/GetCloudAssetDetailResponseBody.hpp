// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudAssetDetailResponseBody() = default ;
    GetCloudAssetDetailResponseBody(const GetCloudAssetDetailResponseBody &) = default ;
    GetCloudAssetDetailResponseBody(GetCloudAssetDetailResponseBody &&) = default ;
    GetCloudAssetDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetDetailResponseBody() = default ;
    GetCloudAssetDetailResponseBody& operator=(const GetCloudAssetDetailResponseBody &) = default ;
    GetCloudAssetDetailResponseBody& operator=(GetCloudAssetDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
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
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmStatus_ == nullptr
        && this->assetSubType_ == nullptr && this->assetSubTypeName_ == nullptr && this->assetType_ == nullptr && this->assetTypeName_ == nullptr && this->createdTime_ == nullptr
        && this->detailLink_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->originalAssetInfo_ == nullptr
        && this->regionId_ == nullptr && this->riskStatus_ == nullptr && this->securityInfo_ == nullptr && this->vendor_ == nullptr && this->vendorUid_ == nullptr
        && this->vendorUserName_ == nullptr; };
      // alarmStatus Field Functions 
      bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
      void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
      inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
      inline Instances& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline Instances& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetSubTypeName Field Functions 
      bool hasAssetSubTypeName() const { return this->assetSubTypeName_ != nullptr;};
      void deleteAssetSubTypeName() { this->assetSubTypeName_ = nullptr;};
      inline string getAssetSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetSubTypeName_, "") };
      inline Instances& setAssetSubTypeName(string assetSubTypeName) { DARABONBA_PTR_SET_VALUE(assetSubTypeName_, assetSubTypeName) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline Instances& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // assetTypeName Field Functions 
      bool hasAssetTypeName() const { return this->assetTypeName_ != nullptr;};
      void deleteAssetTypeName() { this->assetTypeName_ = nullptr;};
      inline string getAssetTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetTypeName_, "") };
      inline Instances& setAssetTypeName(string assetTypeName) { DARABONBA_PTR_SET_VALUE(assetTypeName_, assetTypeName) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Instances& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // detailLink Field Functions 
      bool hasDetailLink() const { return this->detailLink_ != nullptr;};
      void deleteDetailLink() { this->detailLink_ = nullptr;};
      inline string getDetailLink() const { DARABONBA_PTR_GET_DEFAULT(detailLink_, "") };
      inline Instances& setDetailLink(string detailLink) { DARABONBA_PTR_SET_VALUE(detailLink_, detailLink) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Instances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // originalAssetInfo Field Functions 
      bool hasOriginalAssetInfo() const { return this->originalAssetInfo_ != nullptr;};
      void deleteOriginalAssetInfo() { this->originalAssetInfo_ = nullptr;};
      inline string getOriginalAssetInfo() const { DARABONBA_PTR_GET_DEFAULT(originalAssetInfo_, "") };
      inline Instances& setOriginalAssetInfo(string originalAssetInfo) { DARABONBA_PTR_SET_VALUE(originalAssetInfo_, originalAssetInfo) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // riskStatus Field Functions 
      bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
      void deleteRiskStatus() { this->riskStatus_ = nullptr;};
      inline string getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
      inline Instances& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


      // securityInfo Field Functions 
      bool hasSecurityInfo() const { return this->securityInfo_ != nullptr;};
      void deleteSecurityInfo() { this->securityInfo_ = nullptr;};
      inline string getSecurityInfo() const { DARABONBA_PTR_GET_DEFAULT(securityInfo_, "") };
      inline Instances& setSecurityInfo(string securityInfo) { DARABONBA_PTR_SET_VALUE(securityInfo_, securityInfo) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline Instances& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      // vendorUid Field Functions 
      bool hasVendorUid() const { return this->vendorUid_ != nullptr;};
      void deleteVendorUid() { this->vendorUid_ = nullptr;};
      inline string getVendorUid() const { DARABONBA_PTR_GET_DEFAULT(vendorUid_, "") };
      inline Instances& setVendorUid(string vendorUid) { DARABONBA_PTR_SET_VALUE(vendorUid_, vendorUid) };


      // vendorUserName Field Functions 
      bool hasVendorUserName() const { return this->vendorUserName_ != nullptr;};
      void deleteVendorUserName() { this->vendorUserName_ = nullptr;};
      inline string getVendorUserName() const { DARABONBA_PTR_GET_DEFAULT(vendorUserName_, "") };
      inline Instances& setVendorUserName(string vendorUserName) { DARABONBA_PTR_SET_VALUE(vendorUserName_, vendorUserName) };


    protected:
      // Indicates whether alerts are generated for the current cloud asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> alarmStatus_ {};
      // The subtype of the cloud asset.
      shared_ptr<int32_t> assetSubType_ {};
      // The name of the cloud asset subtype.
      shared_ptr<string> assetSubTypeName_ {};
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
      shared_ptr<int32_t> assetType_ {};
      // The name of the cloud asset type.
      shared_ptr<string> assetTypeName_ {};
      // The time when the instance was created. The value is a timestamp.
      shared_ptr<int64_t> createdTime_ {};
      // The detailed address of the cloud asset.
      shared_ptr<string> detailLink_ {};
      // The instance ID of the cloud asset.
      shared_ptr<string> instanceId_ {};
      // The instance name of the cloud asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the instance.
      shared_ptr<string> internetIp_ {};
      // Detailed asset information.
      shared_ptr<string> originalAssetInfo_ {};
      // The region in which the cloud asset resides.
      // 
      // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
      shared_ptr<string> regionId_ {};
      // Indicates whether risks are detected on the current cloud asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> riskStatus_ {};
      // The security information about the cloud asset.
      shared_ptr<string> securityInfo_ {};
      // The service provider of the cloud asset. Valid values:
      // 
      // *   **0**: Alibaba Cloud.
      // *   **1**: service provider that is unrecognized.
      // *   **2**: data center.
      // *   **3**, **4**, **5**, and **7**: third-party service provider.
      // *   **8**: simple application server.
      shared_ptr<int32_t> vendor_ {};
      // Account id for multi-cloud instances.
      shared_ptr<string> vendorUid_ {};
      // The account name of the multi-cloud instance.
      shared_ptr<string> vendorUserName_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->instances_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetCloudAssetDetailResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<GetCloudAssetDetailResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<GetCloudAssetDetailResponseBody::Instances>) };
    inline vector<GetCloudAssetDetailResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<GetCloudAssetDetailResponseBody::Instances>) };
    inline GetCloudAssetDetailResponseBody& setInstances(const vector<GetCloudAssetDetailResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetCloudAssetDetailResponseBody& setInstances(vector<GetCloudAssetDetailResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudAssetDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of instances in the list of cloud assets returned.
    shared_ptr<int32_t> count_ {};
    // An array that consists of the details of the cloud assets.
    shared_ptr<vector<GetCloudAssetDetailResponseBody::Instances>> instances_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
