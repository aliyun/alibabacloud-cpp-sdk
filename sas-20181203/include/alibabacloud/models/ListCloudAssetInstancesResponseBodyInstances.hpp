// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESRESPONSEBODYINSTANCES_HPP_
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
  class ListCloudAssetInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetInstancesResponseBodyInstances& obj) { 
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
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetInstancesResponseBodyInstances& obj) { 
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
    };
    ListCloudAssetInstancesResponseBodyInstances() = default ;
    ListCloudAssetInstancesResponseBodyInstances(const ListCloudAssetInstancesResponseBodyInstances &) = default ;
    ListCloudAssetInstancesResponseBodyInstances(ListCloudAssetInstancesResponseBodyInstances &&) = default ;
    ListCloudAssetInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetInstancesResponseBodyInstances() = default ;
    ListCloudAssetInstancesResponseBodyInstances& operator=(const ListCloudAssetInstancesResponseBodyInstances &) = default ;
    ListCloudAssetInstancesResponseBodyInstances& operator=(ListCloudAssetInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmStatus_ != nullptr
        && this->assetSubType_ != nullptr && this->assetSubTypeName_ != nullptr && this->assetType_ != nullptr && this->assetTypeName_ != nullptr && this->createdTime_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->regionId_ != nullptr && this->riskStatus_ != nullptr
        && this->securityInfo_ != nullptr && this->tags_ != nullptr && this->vendor_ != nullptr; };
    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string alarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline string assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setAssetSubType(string assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetSubTypeName Field Functions 
    bool hasAssetSubTypeName() const { return this->assetSubTypeName_ != nullptr;};
    void deleteAssetSubTypeName() { this->assetSubTypeName_ = nullptr;};
    inline string assetSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetSubTypeName_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setAssetSubTypeName(string assetSubTypeName) { DARABONBA_PTR_SET_VALUE(assetSubTypeName_, assetSubTypeName) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline ListCloudAssetInstancesResponseBodyInstances& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // assetTypeName Field Functions 
    bool hasAssetTypeName() const { return this->assetTypeName_ != nullptr;};
    void deleteAssetTypeName() { this->assetTypeName_ = nullptr;};
    inline string assetTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetTypeName_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setAssetTypeName(string assetTypeName) { DARABONBA_PTR_SET_VALUE(assetTypeName_, assetTypeName) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline ListCloudAssetInstancesResponseBodyInstances& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // securityInfo Field Functions 
    bool hasSecurityInfo() const { return this->securityInfo_ != nullptr;};
    void deleteSecurityInfo() { this->securityInfo_ = nullptr;};
    inline string securityInfo() const { DARABONBA_PTR_GET_DEFAULT(securityInfo_, "") };
    inline ListCloudAssetInstancesResponseBodyInstances& setSecurityInfo(string securityInfo) { DARABONBA_PTR_SET_VALUE(securityInfo_, securityInfo) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListCloudAssetInstancesResponseBodyInstances& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListCloudAssetInstancesResponseBodyInstances& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline ListCloudAssetInstancesResponseBodyInstances& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Indicates whether alerts are generated for the cloud asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> alarmStatus_ = nullptr;
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
    std::shared_ptr<string> assetSubType_ = nullptr;
    // The subtype name of the cloud asset.
    std::shared_ptr<string> assetSubTypeName_ = nullptr;
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
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The type name of the cloud asset.
    std::shared_ptr<string> assetTypeName_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The instance ID of the cloud asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the cloud asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the cloud asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The ID of the region to which the cloud asset belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether risks are detected on the cloud asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The security information about the cloud asset.
    std::shared_ptr<string> securityInfo_ = nullptr;
    // Tag list.
    std::shared_ptr<vector<string>> tags_ = nullptr;
    // The service provider (SP) of the cloud asset. Valid values:
    // 
    // *   **0**: a cloud asset provided by Alibaba Cloud
    // *   **1**: a third-party cloud asset
    // *   **2**: a cloud asset in a data center
    // *   **3**, **4**, **5**, and **7**: other cloud asset
    // *   **8**: a lightweight cloud asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
