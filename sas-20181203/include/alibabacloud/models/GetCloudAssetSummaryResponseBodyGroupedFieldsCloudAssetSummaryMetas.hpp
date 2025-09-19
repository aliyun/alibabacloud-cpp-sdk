// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODYGROUPEDFIELDSCLOUDASSETSUMMARYMETAS_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODYGROUPEDFIELDSCLOUDASSETSUMMARYMETAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceRiskCount, instanceRiskCount_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceRiskCount, instanceRiskCount_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas() = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas(const GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas &) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas(GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas &&) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas() = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& operator=(const GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas &) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& operator=(GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetSubType_ != nullptr
        && this->assetType_ != nullptr && this->instanceCount_ != nullptr && this->instanceRiskCount_ != nullptr && this->vendor_ != nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceRiskCount Field Functions 
    bool hasInstanceRiskCount() const { return this->instanceRiskCount_ != nullptr;};
    void deleteInstanceRiskCount() { this->instanceRiskCount_ = nullptr;};
    inline int32_t instanceRiskCount() const { DARABONBA_PTR_GET_DEFAULT(instanceRiskCount_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setInstanceRiskCount(int32_t instanceRiskCount) { DARABONBA_PTR_SET_VALUE(instanceRiskCount_, instanceRiskCount) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The subtype of the cloud service.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The type of the cloud service. Valid values:
    // 
    // *   **0**: Elastic Compute Service (ECS)
    // *   **1**: Server Load Balancer (SLB)
    // *   **3**: ApsaraDB RDS
    // *   **4**: ApsaraDB for MongoDB (MongoDB)
    // *   **5**: ApsaraDB for Redis (Redis)
    // *   **6**: Container Registry
    // *   **8**: Container Service for Kubernetes (ACK)
    // *   **9**: Virtual Private Cloud (VPC)
    // *   **11**: ActionTrail
    // *   **12**: Alibaba Cloud CDN (CDN)
    // *   **13**: Certificate Management Service (formerly SSL Certificates Service)
    // *   **14**: Apsara Devops
    // *   **15**: Resource Access Management (RAM)
    // *   **16**: Anti-DDoS
    // *   **17**: Web Application Firewall (WAF)
    // *   **18**: Object Storage Service (OSS)
    // *   **19**: PolarDB
    // *   **20**: ApsaraDB RDS for PostgreSQL
    // *   **21**: Microservices Engine (MSE)
    // *   **22**: File Storage NAS (NAS)
    // *   **23**: Data Security Center (DSC)
    // *   **24**: Elastic IP Address (EIP)
    // *   **25**: Identity as a Service (IDaaS) - Enterprise Identity Access Management (EIAM)
    // *   **26**: PolarDB for Xscale (PolarDB-X)
    // *   **27**: Elasticsearch
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The total number of cloud service instances of this type.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The total number of cloud service instances that are at risk of this type.
    std::shared_ptr<int32_t> instanceRiskCount_ = nullptr;
    // The server type. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud
    // *   **1**: an asset outside Alibaba Cloud
    // *   **2**: an asset in a data center
    // *   **3**, **4**, **5**, and **7**: an asset provided by a third-party service provider
    // *   **8**: a lightweight asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
