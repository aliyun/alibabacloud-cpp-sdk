// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASRESPONSEBODY_HPP_
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
  class ListCloudAssetSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetSchemas, cloudAssetSchemas_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetSchemas, cloudAssetSchemas_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudAssetSchemasResponseBody() = default ;
    ListCloudAssetSchemasResponseBody(const ListCloudAssetSchemasResponseBody &) = default ;
    ListCloudAssetSchemasResponseBody(ListCloudAssetSchemasResponseBody &&) = default ;
    ListCloudAssetSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetSchemasResponseBody() = default ;
    ListCloudAssetSchemasResponseBody& operator=(const ListCloudAssetSchemasResponseBody &) = default ;
    ListCloudAssetSchemasResponseBody& operator=(ListCloudAssetSchemasResponseBody &&) = default ;
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
      // Current page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class CloudAssetSchemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAssetSchemas& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(DataName, dataName_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAssetSchemas& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(DataName, dataName_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      CloudAssetSchemas() = default ;
      CloudAssetSchemas(const CloudAssetSchemas &) = default ;
      CloudAssetSchemas(CloudAssetSchemas &&) = default ;
      CloudAssetSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAssetSchemas() = default ;
      CloudAssetSchemas& operator=(const CloudAssetSchemas &) = default ;
      CloudAssetSchemas& operator=(CloudAssetSchemas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->dataName_ == nullptr && this->properties_ == nullptr && this->vendor_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline CloudAssetSchemas& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline CloudAssetSchemas& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // dataName Field Functions 
      bool hasDataName() const { return this->dataName_ != nullptr;};
      void deleteDataName() { this->dataName_ = nullptr;};
      inline string getDataName() const { DARABONBA_PTR_GET_DEFAULT(dataName_, "") };
      inline CloudAssetSchemas& setDataName(string dataName) { DARABONBA_PTR_SET_VALUE(dataName_, dataName) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
      inline CloudAssetSchemas& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline CloudAssetSchemas& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // Subtype of the cloud product.
      shared_ptr<int32_t> assetSubType_ {};
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
      shared_ptr<int32_t> assetType_ {};
      // Asset structure definition name
      shared_ptr<string> dataName_ {};
      // Current asset structure definition text.
      shared_ptr<string> properties_ {};
      // The source of the server. Valid values:
      // 
      // *   **0**: an asset provided by Alibaba Cloud.
      // *   **1**: a third-party cloud server
      // *   **2**: a server in a data center
      // *   **3**, **4**, **5**, and **7**: other cloud asset
      // *   **8**: a lightweight asset
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->cloudAssetSchemas_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // cloudAssetSchemas Field Functions 
    bool hasCloudAssetSchemas() const { return this->cloudAssetSchemas_ != nullptr;};
    void deleteCloudAssetSchemas() { this->cloudAssetSchemas_ = nullptr;};
    inline const vector<ListCloudAssetSchemasResponseBody::CloudAssetSchemas> & getCloudAssetSchemas() const { DARABONBA_PTR_GET_CONST(cloudAssetSchemas_, vector<ListCloudAssetSchemasResponseBody::CloudAssetSchemas>) };
    inline vector<ListCloudAssetSchemasResponseBody::CloudAssetSchemas> getCloudAssetSchemas() { DARABONBA_PTR_GET(cloudAssetSchemas_, vector<ListCloudAssetSchemasResponseBody::CloudAssetSchemas>) };
    inline ListCloudAssetSchemasResponseBody& setCloudAssetSchemas(const vector<ListCloudAssetSchemasResponseBody::CloudAssetSchemas> & cloudAssetSchemas) { DARABONBA_PTR_SET_VALUE(cloudAssetSchemas_, cloudAssetSchemas) };
    inline ListCloudAssetSchemasResponseBody& setCloudAssetSchemas(vector<ListCloudAssetSchemasResponseBody::CloudAssetSchemas> && cloudAssetSchemas) { DARABONBA_PTR_SET_RVALUE(cloudAssetSchemas_, cloudAssetSchemas) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCloudAssetSchemasResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCloudAssetSchemasResponseBody::PageInfo) };
    inline ListCloudAssetSchemasResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCloudAssetSchemasResponseBody::PageInfo) };
    inline ListCloudAssetSchemasResponseBody& setPageInfo(const ListCloudAssetSchemasResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCloudAssetSchemasResponseBody& setPageInfo(ListCloudAssetSchemasResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAssetSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudAssetSchemasResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // List of asset structure definitions
    shared_ptr<vector<ListCloudAssetSchemasResponseBody::CloudAssetSchemas>> cloudAssetSchemas_ {};
    // The pagination information.
    shared_ptr<ListCloudAssetSchemasResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Values: 
    // - **true**: The call was successful. 
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
