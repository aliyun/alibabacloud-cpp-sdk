// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataObjectColumnDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectColumnDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectColumnDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeDataObjectColumnDetailRequest() = default ;
    DescribeDataObjectColumnDetailRequest(const DescribeDataObjectColumnDetailRequest &) = default ;
    DescribeDataObjectColumnDetailRequest(DescribeDataObjectColumnDetailRequest &&) = default ;
    DescribeDataObjectColumnDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectColumnDetailRequest() = default ;
    DescribeDataObjectColumnDetailRequest& operator=(const DescribeDataObjectColumnDetailRequest &) = default ;
    DescribeDataObjectColumnDetailRequest& operator=(DescribeDataObjectColumnDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->featureType_ == nullptr && return this->id_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->productId_ == nullptr
        && return this->templateId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataObjectColumnDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeDataObjectColumnDetailRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataObjectColumnDetailRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataObjectColumnDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataObjectColumnDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeDataObjectColumnDetailRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDataObjectColumnDetailRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // When performing a paginated query, set the current page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // Set the unique identifier ID of the data object to be queried.
    // 
    // > You can obtain the identifier ID by calling [DescribeDataObjects](https://help.aliyun.com/document_detail/2399253.html).
    std::shared_ptr<int64_t> id_ = nullptr;
    // The language type for requests and responses. Default value: **zh_cn**. Values:
    // - **zh_cn**: Chinese.
    // - **en_us**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // When performing a paginated query, set the maximum number of data asset instances displayed per page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID corresponding to the product name of the data object. Values:
    // - **1**: MaxCompute
    // - **2**: OSS
    // - **3**: ADB-MYSQL
    // - **4**: TableStore
    // - **5**: RDS
    // - **6**: SELF_DB
    // - **7**: PolarDB-X
    // - **8**: PolarDB
    // - **9**: ADB-PG
    // - **10**: OceanBase
    // - **11**: MongoDB
    // - **25**: Redis
    std::shared_ptr<int64_t> productId_ = nullptr;
    // Industry template ID.
    // > You can obtain the industry template identifier ID by calling [DescribeDataObjects](https://help.aliyun.com/document_detail/2399253.html).
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
