// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYREQUEST_HPP_
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
  class GetCloudAssetSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    GetCloudAssetSummaryRequest() = default ;
    GetCloudAssetSummaryRequest(const GetCloudAssetSummaryRequest &) = default ;
    GetCloudAssetSummaryRequest(GetCloudAssetSummaryRequest &&) = default ;
    GetCloudAssetSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryRequest() = default ;
    GetCloudAssetSummaryRequest& operator=(const GetCloudAssetSummaryRequest &) = default ;
    GetCloudAssetSummaryRequest& operator=(GetCloudAssetSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAssetTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAssetTypes& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAssetTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      CloudAssetTypes() = default ;
      CloudAssetTypes(const CloudAssetTypes &) = default ;
      CloudAssetTypes(CloudAssetTypes &&) = default ;
      CloudAssetTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAssetTypes() = default ;
      CloudAssetTypes& operator=(const CloudAssetTypes &) = default ;
      CloudAssetTypes& operator=(CloudAssetTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->vendor_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline CloudAssetTypes& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline CloudAssetTypes& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline CloudAssetTypes& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // Subtypes of cloud products. Asset type-subtype. Values:
      // - **0**: ECS (Elastic Compute Service)
      //   *  **1**: Disk (Storage)
      //   *  **2**: Security Group
      //   *  **100**: Instance
      // - **1**: Load Balancer 
      //   *  **0**: Load Balancer 
      //   *  **1**: Application Load Balancer 
      // - **3**: ApsaraDB RDS 
      //   *  **0**: Instance 
      // - **4**: ApsaraDB for MongoDB 
      //   *  **0**: Instance 
      // - **5**: ApsaraDB Tair (Redis Compatible) 
      //   *  **0**: Instance 
      // - **6**: Container Registry 
      //   *  **1**: Enterprise Edition 
      //   *  **2**: Personal Edition 
      // - **8**: Container Service for Kubernetes 
      //   *  **0**: Cluster 
      // - **9**: Virtual Private Cloud (VPC) 
      //   *  **0**: NAT Gateway 
      //   *  **1**: EIP (Elastic IP) 
      //   *  **2**: VPN 
      //   *  **3**: FLOW_LOG 
      // - **11**: ActionTrail 
      //   *  **0**: Trail 
      // - **12**: CDN 
      //   *  **0**: Instance 
      // - **13**: Digital Certificate Management Service (formerly SSL Certificates) 
      //   *  **0**: Certificate 
      // - **14**: DevOps 
      //   *  **0**: Organization 
      // - **16**: DDoS Protection 
      //   *  **0**: Instance 
      // - **17**: Web Application Firewall 
      //   *  **0**: Domain 
      // - **18**: Object Storage 
      //   *  **0**: Bucket 
      // - **19**: PolarDB (Cloud-Native Relational Database) 
      //   *  **0**: Cluster 
      // - **20**: ApsaraDB for PostgreSQL 
      //   *  **0**: Instance 
      // - **21**: Microservices Engine 
      //   *  **0**: Cluster 
      // - **22**: File Storage NAS 
      //   *  **0**: File System 
      // - **23**: Data Security Center 
      //   *  **0**: Instance 
      // - **24**: Elastic Public IP 
      //   *  **0**: Anycast Elastic Public IP 
      // - **25**: Cloud Identity Service - EIAM 
      //   *  **0**: Instance 
      // - **26**: PolarDB-X 
      //   *  **0**: Instance 
      // - **27**: Elasticsearch 
      //   *  **0**: Instance
      shared_ptr<int32_t> assetSubType_ {};
      // The type of asset. Values:
      // - **0**: Elastic Compute Service (ECS) 
      // - **1**: Load Balancer 
      // - **3**: ApsaraDB for RDS 
      // - **4**: ApsaraDB for MongoDB 
      // - **5**: ApsaraDB for Tair (Redis compatible) 
      // - **6**: Container Registry 
      // - **8**: Container Service for Kubernetes 
      // - **9**: Virtual Private Cloud (VPC) 
      // - **11**: ActionTrail 
      // - **12**: Content Delivery Network (CDN) 
      // - **13**: SSL Certificates (now known as Certificate Management Service) 
      // - **14**: DevOps 
      // - **16**: DDoS Protection 
      // - **17**: Web Application Firewall 
      // - **18**: Object Storage Service (OSS) 
      // - **19**: PolarDB 
      // - **20**: ApsaraDB for PostgreSQL 
      // - **21**: Microservices Engine 
      // - **22**: File Storage NAS 
      // - **23**: Data Security Center 
      // - **24**: Elastic IP Address 
      // - **25**: Cloud Identity Service - EIAM 
      // - **26**: PolarDB-X 
      // - **27**: Elasticsearch
      shared_ptr<int32_t> assetType_ {};
      // Server vendor. Values:
      // - **0**: Alibaba Cloud Asset 
      // - **1**: Non-cloud Asset 
      // - **2**: IDC Asset 
      // - **3**, **4**, **5**, **7**: Other Cloud Assets 
      // - **8**: Lightweight Asset
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->cloudAssetTypes_ == nullptr
        && this->vendors_ == nullptr; };
    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<GetCloudAssetSummaryRequest::CloudAssetTypes> & getCloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<GetCloudAssetSummaryRequest::CloudAssetTypes>) };
    inline vector<GetCloudAssetSummaryRequest::CloudAssetTypes> getCloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<GetCloudAssetSummaryRequest::CloudAssetTypes>) };
    inline GetCloudAssetSummaryRequest& setCloudAssetTypes(const vector<GetCloudAssetSummaryRequest::CloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline GetCloudAssetSummaryRequest& setCloudAssetTypes(vector<GetCloudAssetSummaryRequest::CloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<int32_t> & getVendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<int32_t>) };
    inline vector<int32_t> getVendors() { DARABONBA_PTR_GET(vendors_, vector<int32_t>) };
    inline GetCloudAssetSummaryRequest& setVendors(const vector<int32_t> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline GetCloudAssetSummaryRequest& setVendors(vector<int32_t> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // List of asset type information for cloud assets
    shared_ptr<vector<GetCloudAssetSummaryRequest::CloudAssetTypes>> cloudAssetTypes_ {};
    // List of cloud vendors to be queried.
    shared_ptr<vector<int32_t>> vendors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
