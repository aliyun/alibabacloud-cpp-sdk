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
      DARABONBA_PTR_TO_JSON(IsSaleData, isSaleData_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(IsSaleData, isSaleData_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
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
      // The subtype of the cloud service. The value is in the format of asset type - subtype. Valid values:
      // 
      // - **0**: Elastic Compute Service (ECS) server
      //     *  **1**: cloud disk (storage)
      //     *  **2**: security group
      //     *  **100**: instance
      // - **1**: load balancing
      //     *  **0**: load balancing
      //     *  **1**: Application Load Balancer (ALB)
      // - **3**: ApsaraDB RDS database
      //     *  **0**: instance
      // - **4**: ApsaraDB for MongoDB database
      //     *  **0**: instance
      // - **5**: Tair (Redis® OSS-Compatible) database
      //     *  **0**: instance
      // - **6**: Container Registry
      //     *  **1**: Enterprise Edition
      //     *  **2**: Personal Edition
      // - **8**: Container Service for Kubernetes (ACK)
      //     *  **0**: cluster
      // - **9**: Virtual Private Cloud (VPC)
      //     *  **0**: NAT gateway
      //     *  **1**: EIP
      //     *  **2**: VPN
      //     *  **3**: FLOW_LOG
      // - **11**: ActionTrail
      //     *  **0**: trail
      // - **12**: CDN
      //     *  **0**: instance
      // - **13**: Certificate Management Service (formerly SSL Certificates Service)
      //     *  **0**: certificate
      // - **14**: Apsara Devops
      //     *  **0**: organization
      // - **16**: Anti-DDoS
      //     *  **0**: instance
      // - **17**: Web Application Firewall (WAF)
      //     *  **0**: domain name
      // - **18**: Object Storage Service (OSS)
      //     *  **0**: Bucket
      // - **19**: cloud-native relational database PolarDB
      //     *  **0**: cluster
      // - **20**: ApsaraDB RDS for PostgreSQL database
      //     *  **0**: instance
      // - **21**: Microservices Engine (MSE)
      //     *  **0**: cluster
      // - **22**: Apsara File Storage NAS
      //     *  **0**: file system
      // - **23**: Data Security Center (DSC)
      //     *  **0**: instance
      // - **24**: Elastic IP Address (EIP)
      //     *  **0**: Anycast EIP
      // - **25**: Alibaba Cloud IDaaS EIAM
      //     *  **0**: instance
      // - **26**: PolarDB-X
      //     *  **0**: instance
      // - **27**: Elasticsearch
      //     *  **0**: instance
      shared_ptr<int32_t> assetSubType_ {};
      // The type of the asset. Valid values:
      // 
      // - **0**: Elastic Compute Service (ECS) server
      // - **1**: load balancing
      // - **3**: ApsaraDB RDS database
      // - **4**: ApsaraDB for MongoDB database
      // - **5**: Tair (Redis® OSS-Compatible) database
      // - **6**: Container Registry
      // - **8**: Container Service for Kubernetes (ACK)
      // - **9**: Virtual Private Cloud (VPC)
      // - **11**: ActionTrail
      // - **12**: CDN
      // - **13**: Certificate Management Service (formerly SSL Certificates Service)
      // - **14**: Apsara Devops
      // - **16**: Anti-DDoS
      // - **17**: Web Application Firewall (WAF)
      // - **18**: Object Storage Service (OSS)
      // - **19**: cloud-native relational database PolarDB
      // - **20**: ApsaraDB RDS for PostgreSQL database
      // - **21**: Microservices Engine (MSE)
      // - **22**: Apsara File Storage NAS
      // - **23**: Data Security Center (DSC)
      // - **24**: Elastic IP Address (EIP)
      // - **25**: Alibaba Cloud IDaaS EIAM
      // - **26**: PolarDB-X
      // - **27**: Elasticsearch
      shared_ptr<int32_t> assetType_ {};
      // The server vendor. Valid values:
      // 
      // - **0**: Alibaba Cloud asset
      // - **1**: non-cloud asset
      // - **2**: IDC asset
      // - **3**, **4**, **5**, **7**: third-party cloud asset
      // - **8**: lightweight asset
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->cloudAssetTypes_ == nullptr
        && this->isSaleData_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->vendors_ == nullptr; };
    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<GetCloudAssetSummaryRequest::CloudAssetTypes> & getCloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<GetCloudAssetSummaryRequest::CloudAssetTypes>) };
    inline vector<GetCloudAssetSummaryRequest::CloudAssetTypes> getCloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<GetCloudAssetSummaryRequest::CloudAssetTypes>) };
    inline GetCloudAssetSummaryRequest& setCloudAssetTypes(const vector<GetCloudAssetSummaryRequest::CloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline GetCloudAssetSummaryRequest& setCloudAssetTypes(vector<GetCloudAssetSummaryRequest::CloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // isSaleData Field Functions 
    bool hasIsSaleData() const { return this->isSaleData_ != nullptr;};
    void deleteIsSaleData() { this->isSaleData_ = nullptr;};
    inline bool getIsSaleData() const { DARABONBA_PTR_GET_DEFAULT(isSaleData_, false) };
    inline GetCloudAssetSummaryRequest& setIsSaleData(bool isSaleData) { DARABONBA_PTR_SET_VALUE(isSaleData_, isSaleData) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline GetCloudAssetSummaryRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<int32_t> & getVendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<int32_t>) };
    inline vector<int32_t> getVendors() { DARABONBA_PTR_GET(vendors_, vector<int32_t>) };
    inline GetCloudAssetSummaryRequest& setVendors(const vector<int32_t> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline GetCloudAssetSummaryRequest& setVendors(vector<int32_t> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // The list of asset type information for cloud assets.
    shared_ptr<vector<GetCloudAssetSummaryRequest::CloudAssetTypes>> cloudAssetTypes_ {};
    // Specifies whether to return sale-related data. Valid values:
    // - **true**: Returns sale-related data.
    // - **false**: Does not return sale-related data.
    shared_ptr<bool> isSaleData_ {};
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The list of cloud vendors to query.
    shared_ptr<vector<int32_t>> vendors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
