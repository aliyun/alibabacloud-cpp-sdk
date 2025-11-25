// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASRESPONSEBODYCLOUDASSETSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASRESPONSEBODYCLOUDASSETSCHEMAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetSchemasResponseBodyCloudAssetSchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetSchemasResponseBodyCloudAssetSchemas& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(DataName, dataName_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetSchemasResponseBodyCloudAssetSchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(DataName, dataName_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListCloudAssetSchemasResponseBodyCloudAssetSchemas() = default ;
    ListCloudAssetSchemasResponseBodyCloudAssetSchemas(const ListCloudAssetSchemasResponseBodyCloudAssetSchemas &) = default ;
    ListCloudAssetSchemasResponseBodyCloudAssetSchemas(ListCloudAssetSchemasResponseBodyCloudAssetSchemas &&) = default ;
    ListCloudAssetSchemasResponseBodyCloudAssetSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetSchemasResponseBodyCloudAssetSchemas() = default ;
    ListCloudAssetSchemasResponseBodyCloudAssetSchemas& operator=(const ListCloudAssetSchemasResponseBodyCloudAssetSchemas &) = default ;
    ListCloudAssetSchemasResponseBodyCloudAssetSchemas& operator=(ListCloudAssetSchemasResponseBodyCloudAssetSchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSubType_ == nullptr
        && return this->assetType_ == nullptr && return this->dataName_ == nullptr && return this->properties_ == nullptr && return this->vendor_ == nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline ListCloudAssetSchemasResponseBodyCloudAssetSchemas& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline ListCloudAssetSchemasResponseBodyCloudAssetSchemas& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // dataName Field Functions 
    bool hasDataName() const { return this->dataName_ != nullptr;};
    void deleteDataName() { this->dataName_ = nullptr;};
    inline string dataName() const { DARABONBA_PTR_GET_DEFAULT(dataName_, "") };
    inline ListCloudAssetSchemasResponseBodyCloudAssetSchemas& setDataName(string dataName) { DARABONBA_PTR_SET_VALUE(dataName_, dataName) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ListCloudAssetSchemasResponseBodyCloudAssetSchemas& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline ListCloudAssetSchemasResponseBodyCloudAssetSchemas& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Subtype of the cloud product.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The type of the cloud asset. Valid values:
    // 
    // *   **0**: Elastic Compute Service (ECS).
    // *   **1**: Server Load Balancer (SLB).
    // *   **3**: ApsaraDB RDS.
    // *   **4**: ApsaraDB for MongoDB.
    // *   **5**: ApsaraDB for Redis.
    // *   **6**: Container Registry.
    // *   **8**: Container Service for Kubernetes.
    // *   **9**: Virtual Private Cloud (VPC).
    // *   **11**: ActionTrail.
    // *   **12**: Alibaba Cloud CDN (CDN).
    // *   **13**: Certificate Management Service.
    // *   **14**: Apsara Devops.
    // *   **15**: Resource Access Management (RAM).
    // *   **16**: Anti-DDoS.
    // *   **17**: Web Application Firewall (WAF).
    // *   **18**: Object Storage Service (OSS).
    // *   **19**: PolarDB.
    // *   **20**: ApsaraDB RDS for PostgreSQL.
    // *   **21**: Microservices Engine (MSE).
    // *   **22**: File Storage NAS (NAS).
    // *   **23**: Data Security Center (DSC).
    // *   **24**: Elastic IP Address (EIP).
    // *   **25**: Identity as a Service (IDaaS)-Employee Identity and Access Management (EIAM).
    // *   **26**: PolarDB-X.
    // *   **27**: Elasticsearch.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // Asset structure definition name
    std::shared_ptr<string> dataName_ = nullptr;
    // Current asset structure definition text.
    std::shared_ptr<string> properties_ = nullptr;
    // The source of the server. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud.
    // *   **1**: a third-party cloud server
    // *   **2**: a server in a data center
    // *   **3**, **4**, **5**, and **7**: other cloud asset
    // *   **8**: a lightweight asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
