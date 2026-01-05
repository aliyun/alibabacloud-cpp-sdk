// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSASENDUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSASENDUSERRESPONSEBODY_HPP_
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
  class ListProductsAsEndUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsAsEndUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductSummaries, productSummaries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsAsEndUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductSummaries, productSummaries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProductsAsEndUserResponseBody() = default ;
    ListProductsAsEndUserResponseBody(const ListProductsAsEndUserResponseBody &) = default ;
    ListProductsAsEndUserResponseBody(ListProductsAsEndUserResponseBody &&) = default ;
    ListProductsAsEndUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsAsEndUserResponseBody() = default ;
    ListProductsAsEndUserResponseBody& operator=(const ListProductsAsEndUserResponseBody &) = default ;
    ListProductsAsEndUserResponseBody& operator=(ListProductsAsEndUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductSummaries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductSummaries& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HasDefaultLaunchOption, hasDefaultLaunchOption_);
        DARABONBA_PTR_TO_JSON(ProductArn, productArn_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, ProductSummaries& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HasDefaultLaunchOption, hasDefaultLaunchOption_);
        DARABONBA_PTR_FROM_JSON(ProductArn, productArn_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      ProductSummaries() = default ;
      ProductSummaries(const ProductSummaries &) = default ;
      ProductSummaries(ProductSummaries &&) = default ;
      ProductSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductSummaries() = default ;
      ProductSummaries& operator=(const ProductSummaries &) = default ;
      ProductSummaries& operator=(ProductSummaries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->hasDefaultLaunchOption_ == nullptr && this->productArn_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr
        && this->productType_ == nullptr && this->providerName_ == nullptr && this->templateType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProductSummaries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductSummaries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hasDefaultLaunchOption Field Functions 
      bool hasHasDefaultLaunchOption() const { return this->hasDefaultLaunchOption_ != nullptr;};
      void deleteHasDefaultLaunchOption() { this->hasDefaultLaunchOption_ = nullptr;};
      inline bool getHasDefaultLaunchOption() const { DARABONBA_PTR_GET_DEFAULT(hasDefaultLaunchOption_, false) };
      inline ProductSummaries& setHasDefaultLaunchOption(bool hasDefaultLaunchOption) { DARABONBA_PTR_SET_VALUE(hasDefaultLaunchOption_, hasDefaultLaunchOption) };


      // productArn Field Functions 
      bool hasProductArn() const { return this->productArn_ != nullptr;};
      void deleteProductArn() { this->productArn_ = nullptr;};
      inline string getProductArn() const { DARABONBA_PTR_GET_DEFAULT(productArn_, "") };
      inline ProductSummaries& setProductArn(string productArn) { DARABONBA_PTR_SET_VALUE(productArn_, productArn) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ProductSummaries& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ProductSummaries& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline ProductSummaries& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline ProductSummaries& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ProductSummaries& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The time when the product was created.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the product.
      shared_ptr<string> description_ {};
      // Indicates whether the default launch option exists. Valid values:
      // 
      // *   true: The default launch option exists. In this case, the PortfolioId parameter is not required when the product is launched or when the information about the product instance is updated.
      // *   false: The default launch option does not exist. In this case, the PortfolioId parameter is required when the product is launched or when the information about the product instance is updated. For more information about the PortfolioId parameter, see [ListLaunchOptions](~~ListLaunchOptions~~).
      // 
      // >  If the product is added to only one product portfolio, the default launch option exists. If the product is added to multiple product portfolios, multiple launch options exist at the same time. However, no default launch options exist.
      shared_ptr<bool> hasDefaultLaunchOption_ {};
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
        && this->pageSize_ == nullptr && this->productSummaries_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProductsAsEndUserResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProductsAsEndUserResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productSummaries Field Functions 
    bool hasProductSummaries() const { return this->productSummaries_ != nullptr;};
    void deleteProductSummaries() { this->productSummaries_ = nullptr;};
    inline const vector<ListProductsAsEndUserResponseBody::ProductSummaries> & getProductSummaries() const { DARABONBA_PTR_GET_CONST(productSummaries_, vector<ListProductsAsEndUserResponseBody::ProductSummaries>) };
    inline vector<ListProductsAsEndUserResponseBody::ProductSummaries> getProductSummaries() { DARABONBA_PTR_GET(productSummaries_, vector<ListProductsAsEndUserResponseBody::ProductSummaries>) };
    inline ListProductsAsEndUserResponseBody& setProductSummaries(const vector<ListProductsAsEndUserResponseBody::ProductSummaries> & productSummaries) { DARABONBA_PTR_SET_VALUE(productSummaries_, productSummaries) };
    inline ListProductsAsEndUserResponseBody& setProductSummaries(vector<ListProductsAsEndUserResponseBody::ProductSummaries> && productSummaries) { DARABONBA_PTR_SET_RVALUE(productSummaries_, productSummaries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsAsEndUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductsAsEndUserResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The products.
    shared_ptr<vector<ListProductsAsEndUserResponseBody::ProductSummaries>> productSummaries_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
