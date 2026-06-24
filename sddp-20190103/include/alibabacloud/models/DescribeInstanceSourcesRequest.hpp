// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeInstanceSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
    };
    DescribeInstanceSourcesRequest() = default ;
    DescribeInstanceSourcesRequest(const DescribeInstanceSourcesRequest &) = default ;
    DescribeInstanceSourcesRequest(DescribeInstanceSourcesRequest &&) = default ;
    DescribeInstanceSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSourcesRequest() = default ;
    DescribeInstanceSourcesRequest& operator=(const DescribeInstanceSourcesRequest &) = default ;
    DescribeInstanceSourcesRequest& operator=(DescribeInstanceSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->authStatus_ == nullptr && this->currentPage_ == nullptr && this->engineType_ == nullptr && this->featureType_ == nullptr && this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->searchKey_ == nullptr
        && this->searchType_ == nullptr && this->serviceRegionId_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline DescribeInstanceSourcesRequest& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline int32_t getAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, 0) };
    inline DescribeInstanceSourcesRequest& setAuthStatus(int32_t authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeInstanceSourcesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeInstanceSourcesRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeInstanceSourcesRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceSourcesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInstanceSourcesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceSourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceSourcesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeInstanceSourcesRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeInstanceSourcesRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline DescribeInstanceSourcesRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeInstanceSourcesRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


  protected:
    // The audit status. Valid values:
    // 
    // - **1**: Auditing is enabled.
    // 
    // - **0**: Auditing is disabled.
    shared_ptr<int32_t> auditStatus_ {};
    // The authorization status of the data asset instance.
    // 
    // - **0**: Unauthorized.
    // 
    // - **1**: Authorized.
    shared_ptr<int32_t> authStatus_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The database engine type. Valid values:
    // 
    // - **MySQL**
    // 
    // - **MariaDB**
    // 
    // - **Oracle**
    // 
    // - **PostgreSQL**
    // 
    // - **SQLServer**
    shared_ptr<string> engineType_ {};
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The language of the request and response. Valid values:
    // 
    // - **zh_cn**: Simplified Chinese. This is the default value.
    // 
    // - **en_us**: English.
    shared_ptr<string> lang_ {};
    // The number of entries per page in a paginated query. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the product to query. Valid values: MaxCompute, OSS, ADS, OTS, and RDS.
    shared_ptr<string> productCode_ {};
    // The product type ID to query. Valid values:
    // 
    // - **1**: MaxCompute
    // 
    // - **2**: OSS
    // 
    // - **3**: ADS
    // 
    // - **4**: OTS
    // 
    // - **5**: RDS
    // 
    // - **6**: SELF_DB
    shared_ptr<int64_t> productId_ {};
    // The keyword for the fuzzy search of data assets.
    shared_ptr<string> searchKey_ {};
    // The type of the fuzzy search for data assets. Valid values:
    // 
    // - **InstanceId**: The instance ID.
    // 
    // - **InstanceName**: The instance name.
    // 
    // - **DatabaseName**: The database name.
    shared_ptr<string> searchType_ {};
    // The region where the asset is located. For more information, see [Supported regions](https://help.aliyun.com/document_detail/214257.html).
    shared_ptr<string> serviceRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
