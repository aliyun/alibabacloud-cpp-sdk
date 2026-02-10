// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESRESPONSEBODY_HPP_
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
  class ListCloudAssetInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudAssetInstancesResponseBody() = default ;
    ListCloudAssetInstancesResponseBody(const ListCloudAssetInstancesResponseBody &) = default ;
    ListCloudAssetInstancesResponseBody(ListCloudAssetInstancesResponseBody &&) = default ;
    ListCloudAssetInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetInstancesResponseBody() = default ;
    ListCloudAssetInstancesResponseBody& operator=(const ListCloudAssetInstancesResponseBody &) = default ;
    ListCloudAssetInstancesResponseBody& operator=(ListCloudAssetInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of cloud assets.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetSubTypeName, assetSubTypeName_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(AssetTypeName, assetTypeName_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
        DARABONBA_PTR_TO_JSON(SecurityInfo, securityInfo_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
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
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
        DARABONBA_PTR_FROM_JSON(SecurityInfo, securityInfo_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->regionId_ == nullptr && this->riskStatus_ == nullptr
        && this->securityInfo_ == nullptr && this->tags_ == nullptr && this->vendor_ == nullptr && this->vendorUid_ == nullptr && this->vendorUserName_ == nullptr; };
      // alarmStatus Field Functions 
      bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
      void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
      inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
      inline Instances& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline string getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, "") };
      inline Instances& setAssetSubType(string assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


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


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Instances& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Instances& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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
      // Indicates whether alerts are generated for the cloud asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> alarmStatus_ {};
      // The subtype of the cloud service. The subtype of the cloud asset. Valid values:
      // 
      // *   **0**: ECS
      // 
      //     *   **0**: instance
      //     *   **1**: disk (storage)
      //     *   **2**: security group
      // 
      // *   **1**: SLB
      // 
      //     *   **0**: SLB
      //     *   **1**: Application Load Balancer (ALB)
      // 
      // *   **3**: ApsaraDB RDS
      // 
      //     *   **0**: instance
      // 
      // *   **4**: ApsaraDB for MongoDB
      // 
      //     *   **0**: instance
      // 
      // *   **5**: ApsaraDB for Redis
      // 
      //     *   **0**: instance
      // 
      // *   **6**: Container Registry
      // 
      //     *   **1**: Enterprise Edition
      //     *   **2**: Personal Edition
      // 
      // *   **8**: ACK
      // 
      //     *   **0**: cluster
      // 
      // *   **9**: VPC
      // 
      //     *   **0**: NAT gateway
      //     *   **1**: EIP
      //     *   **2**: VPN
      //     *   **3**: FLOW_LOG
      // 
      // *   **11**: ActionTrail
      // 
      //     *   **0**: trail
      // 
      // *   **12**: Alibaba Cloud CDN
      // 
      //     *   **0**: instance
      // 
      // *   **13**: Certificate Management Service (formerly SSL Certificates Service)
      // 
      //     *   **0**: certificate
      // 
      // *   **14**: Apsara Devops
      // 
      //     *   **0**: organization
      // 
      // *   **16**: Anti-DDoS
      // 
      //     *   **0**: instance
      // 
      // *   **17**: WAF
      // 
      //     *   **0**: domain name
      // 
      // *   **18**: OSS
      // 
      //     *   **0**: bucket
      // 
      // *   **19**: PolarDB
      // 
      //     *   **0**: cluster
      // 
      // *   **20**: ApsaraDB RDS for PostgreSQL
      // 
      //     *   **0**: instance
      // 
      // *   **21**: MSE
      // 
      //     *   **0**: cluster
      // 
      // *   **22**: NAS
      // 
      //     *   **0**: file system
      // 
      // *   **23**: DSC
      // 
      //     *   **0**: instance
      // 
      // *   **24**: EIP
      // 
      //     *   **0**: Anycast EIP
      // 
      // *   **25**: IDaaS EIAM
      // 
      //     *   **0**: instance
      // 
      // *   **26**: PolarDB-X
      // 
      //     *   **0**: instance
      // 
      // *   **27**: Elasticsearch
      // 
      //     *   **0**: instance
      shared_ptr<string> assetSubType_ {};
      // The subtype name of the cloud asset.
      shared_ptr<string> assetSubTypeName_ {};
      // The type of the cloud asset. Valid values:
      // 
      // *   **0**: Elastic Compute Service (ECS)
      // *   **1**: Server Load Balancer (SLB)
      // *   **3**: ApsaraDB RDS
      // *   **4**: ApsaraDB for MongoDB
      // *   **5**: ApsaraDB for Redis
      // *   **6**: Container Registry
      // *   **8**: Container Service for Kubernetes (ACK)
      // *   **9**: Virtual Private Cloud (VPC)
      // *   **11**: ActionTrail
      // *   **12**: Alibaba Cloud CDN
      // *   **13**: Certificate Management Service (formerly SSL Certificates Service)
      // *   **14**: Apsara Devops
      // *   **16**: Anti-DDoS
      // *   **17**: Web Application Firewall (WAF)
      // *   **18**: Object Storage Service (OSS)
      // *   **19**: PolarDB
      // *   **20**: ApsaraDB RDS for PostgreSQL
      // *   **21**: Microservices Engine (MSE)
      // *   **22**: File Storage NAS (NAS)
      // *   **23**: Data Security Center (DSC)
      // *   **24**: Elastic IP Address (EIP)
      // *   **25**: Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM)
      // *   **26**: PolarDB-X
      // *   **27**: Elasticsearch
      shared_ptr<int32_t> assetType_ {};
      // The type name of the cloud asset.
      shared_ptr<string> assetTypeName_ {};
      // The time when the instance was created.
      shared_ptr<int64_t> createdTime_ {};
      // The instance ID of the cloud asset.
      shared_ptr<string> instanceId_ {};
      // The instance name of the cloud asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the cloud asset.
      shared_ptr<string> internetIp_ {};
      // The ID of the region to which the cloud asset belongs.
      shared_ptr<string> regionId_ {};
      // Indicates whether risks are detected on the cloud asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> riskStatus_ {};
      // The security information about the cloud asset.
      shared_ptr<string> securityInfo_ {};
      // Tag list.
      shared_ptr<vector<string>> tags_ {};
      // The service provider (SP) of the cloud asset. Valid values:
      // 
      // *   **0**: a cloud asset provided by Alibaba Cloud
      // *   **1**: a third-party cloud asset
      // *   **2**: a cloud asset in a data center
      // *   **3**, **4**, **5**, and **7**: other cloud asset
      // *   **8**: a lightweight cloud asset
      shared_ptr<int32_t> vendor_ {};
      // The account ID of the multi-cloud instance.
      shared_ptr<string> vendorUid_ {};
      // The user name of the multi-cloud instance.
      shared_ptr<string> vendorUserName_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListCloudAssetInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListCloudAssetInstancesResponseBody::Instances>) };
    inline vector<ListCloudAssetInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListCloudAssetInstancesResponseBody::Instances>) };
    inline ListCloudAssetInstancesResponseBody& setInstances(const vector<ListCloudAssetInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListCloudAssetInstancesResponseBody& setInstances(vector<ListCloudAssetInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCloudAssetInstancesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCloudAssetInstancesResponseBody::PageInfo) };
    inline ListCloudAssetInstancesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCloudAssetInstancesResponseBody::PageInfo) };
    inline ListCloudAssetInstancesResponseBody& setPageInfo(const ListCloudAssetInstancesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCloudAssetInstancesResponseBody& setPageInfo(ListCloudAssetInstancesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAssetInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudAssetInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the cloud assets.
    shared_ptr<vector<ListCloudAssetInstancesResponseBody::Instances>> instances_ {};
    // The pagination information.
    shared_ptr<ListCloudAssetInstancesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
