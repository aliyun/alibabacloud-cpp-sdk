// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSASADMINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSASADMINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListProductsAsAdminResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsAsAdminResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductDetails, productDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsAsAdminResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductDetails, productDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProductsAsAdminResponseBody() = default ;
    ListProductsAsAdminResponseBody(const ListProductsAsAdminResponseBody &) = default ;
    ListProductsAsAdminResponseBody(ListProductsAsAdminResponseBody &&) = default ;
    ListProductsAsAdminResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsAsAdminResponseBody() = default ;
    ListProductsAsAdminResponseBody& operator=(const ListProductsAsAdminResponseBody &) = default ;
    ListProductsAsAdminResponseBody& operator=(ListProductsAsAdminResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ProductArn, productArn_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, ProductDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ProductArn, productArn_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      ProductDetails() = default ;
      ProductDetails(const ProductDetails &) = default ;
      ProductDetails(ProductDetails &&) = default ;
      ProductDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductDetails() = default ;
      ProductDetails& operator=(const ProductDetails &) = default ;
      ProductDetails& operator=(ProductDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->productArn_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->productType_ == nullptr
        && this->providerName_ == nullptr && this->templateType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProductDetails& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // productArn Field Functions 
      bool hasProductArn() const { return this->productArn_ != nullptr;};
      void deleteProductArn() { this->productArn_ = nullptr;};
      inline string getProductArn() const { DARABONBA_PTR_GET_DEFAULT(productArn_, "") };
      inline ProductDetails& setProductArn(string productArn) { DARABONBA_PTR_SET_VALUE(productArn_, productArn) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ProductDetails& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ProductDetails& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline ProductDetails& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline ProductDetails& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ProductDetails& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The time when the product was created.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the product.
      shared_ptr<string> description_ {};
      // The Alibaba Cloud Resource Name (ARN) of the product.
      shared_ptr<string> productArn_ {};
      // The product ID.
      shared_ptr<string> productId_ {};
      // The name of the product.
      shared_ptr<string> productName_ {};
      // The type of the product.
      // 
      // The value is set to Ros, which indicates Resource Orchestration Service (ROS).
      shared_ptr<string> productType_ {};
      // The provider of the product.
      shared_ptr<string> providerName_ {};
      // The type of the product template. Valid values:
      // 
      // *   RosTerraformTemplate: the Terraform template that is supported by ROS.
      // *   RosStandardTemplate: the standard ROS template.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->productDetails_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProductsAsAdminResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProductsAsAdminResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productDetails Field Functions 
    bool hasProductDetails() const { return this->productDetails_ != nullptr;};
    void deleteProductDetails() { this->productDetails_ = nullptr;};
    inline const vector<ListProductsAsAdminResponseBody::ProductDetails> & getProductDetails() const { DARABONBA_PTR_GET_CONST(productDetails_, vector<ListProductsAsAdminResponseBody::ProductDetails>) };
    inline vector<ListProductsAsAdminResponseBody::ProductDetails> getProductDetails() { DARABONBA_PTR_GET(productDetails_, vector<ListProductsAsAdminResponseBody::ProductDetails>) };
    inline ListProductsAsAdminResponseBody& setProductDetails(const vector<ListProductsAsAdminResponseBody::ProductDetails> & productDetails) { DARABONBA_PTR_SET_VALUE(productDetails_, productDetails) };
    inline ListProductsAsAdminResponseBody& setProductDetails(vector<ListProductsAsAdminResponseBody::ProductDetails> && productDetails) { DARABONBA_PTR_SET_RVALUE(productDetails_, productDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsAsAdminResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductsAsAdminResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The products.
    shared_ptr<vector<ListProductsAsAdminResponseBody::ProductDetails>> productDetails_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
