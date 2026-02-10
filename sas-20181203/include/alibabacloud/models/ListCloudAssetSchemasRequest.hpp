// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASREQUEST_HPP_
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
  class ListCloudAssetSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedDataOnly, associatedDataOnly_);
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DataNames, dataNames_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedDataOnly, associatedDataOnly_);
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DataNames, dataNames_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListCloudAssetSchemasRequest() = default ;
    ListCloudAssetSchemasRequest(const ListCloudAssetSchemasRequest &) = default ;
    ListCloudAssetSchemasRequest(ListCloudAssetSchemasRequest &&) = default ;
    ListCloudAssetSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetSchemasRequest() = default ;
    ListCloudAssetSchemasRequest& operator=(const ListCloudAssetSchemasRequest &) = default ;
    ListCloudAssetSchemasRequest& operator=(ListCloudAssetSchemasRequest &&) = default ;
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
      // The subtype of the cloud service or asset. Valid values:
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
      // *   **4**: MongoDB
      // 
      //     *   **0**: instance
      // 
      // *   **5**: Redis
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
      //     *   **1**: Elastic IP address (EIP)
      //     *   **2**: VPN
      //     *   **3**: VPC Flow Logs
      // 
      // *   **11**: ActionTrail
      // 
      //     *   **0**: trail
      // 
      // *   **12**: CDN
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
      shared_ptr<int32_t> assetSubType_ {};
      // The type of the asset. Valid values:
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
      // *   **16**: Anti-DDoS
      // *   **17**: Web Application Firewall (WAF)
      // *   **18**: Object Storage Service (OSS)
      // *   **19**: PolarDB
      // *   **20**: ApsaraDB RDS for PostgreSQL
      // *   **21**: Microservices Engine (MSE)
      // *   **22**: File Storage NAS (NAS)
      // *   **23**: Data Security Center (DSC)
      // *   **24**: Elastic IP Address (EIP)
      // *   **25**: IDaaS EIAM
      // *   **26**: PolarDB-X
      // *   **27**: Elasticsearch
      shared_ptr<int32_t> assetType_ {};
      // The server type. Valid values:
      // 
      // *   **0**: a cloud asset provided by Alibaba Cloud
      // *   **1**: a cloud asset outside Alibaba Cloud
      // *   **2**: a cloud asset in a data center
      // *   **3**, **4**, **5**, and **7**: a cloud asset provided by a third-party service provider
      // *   **8**: a lightweight cloud asset
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->associatedDataOnly_ == nullptr
        && this->cloudAssetTypes_ == nullptr && this->currentPage_ == nullptr && this->dataNames_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr; };
    // associatedDataOnly Field Functions 
    bool hasAssociatedDataOnly() const { return this->associatedDataOnly_ != nullptr;};
    void deleteAssociatedDataOnly() { this->associatedDataOnly_ = nullptr;};
    inline bool getAssociatedDataOnly() const { DARABONBA_PTR_GET_DEFAULT(associatedDataOnly_, false) };
    inline ListCloudAssetSchemasRequest& setAssociatedDataOnly(bool associatedDataOnly) { DARABONBA_PTR_SET_VALUE(associatedDataOnly_, associatedDataOnly) };


    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<ListCloudAssetSchemasRequest::CloudAssetTypes> & getCloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<ListCloudAssetSchemasRequest::CloudAssetTypes>) };
    inline vector<ListCloudAssetSchemasRequest::CloudAssetTypes> getCloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<ListCloudAssetSchemasRequest::CloudAssetTypes>) };
    inline ListCloudAssetSchemasRequest& setCloudAssetTypes(const vector<ListCloudAssetSchemasRequest::CloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline ListCloudAssetSchemasRequest& setCloudAssetTypes(vector<ListCloudAssetSchemasRequest::CloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudAssetSchemasRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataNames Field Functions 
    bool hasDataNames() const { return this->dataNames_ != nullptr;};
    void deleteDataNames() { this->dataNames_ = nullptr;};
    inline const vector<string> & getDataNames() const { DARABONBA_PTR_GET_CONST(dataNames_, vector<string>) };
    inline vector<string> getDataNames() { DARABONBA_PTR_GET(dataNames_, vector<string>) };
    inline ListCloudAssetSchemasRequest& setDataNames(const vector<string> & dataNames) { DARABONBA_PTR_SET_VALUE(dataNames_, dataNames) };
    inline ListCloudAssetSchemasRequest& setDataNames(vector<string> && dataNames) { DARABONBA_PTR_SET_RVALUE(dataNames_, dataNames) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCloudAssetSchemasRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudAssetSchemasRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Whether to filter out attributes that can be associated with other assets.
    shared_ptr<bool> associatedDataOnly_ {};
    // The types of cloud assets.
    shared_ptr<vector<ListCloudAssetSchemasRequest::CloudAssetTypes>> cloudAssetTypes_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // List of asset data names
    shared_ptr<vector<string>> dataNames_ {};
    // The language type for requesting and receiving messages, with a default value of **zh**. The values can be: - **zh**: Chinese - **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
