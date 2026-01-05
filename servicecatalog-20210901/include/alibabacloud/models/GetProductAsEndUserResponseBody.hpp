// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTASENDUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTASENDUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetProductAsEndUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductAsEndUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductSummary, productSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductAsEndUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductSummary, productSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProductAsEndUserResponseBody() = default ;
    GetProductAsEndUserResponseBody(const GetProductAsEndUserResponseBody &) = default ;
    GetProductAsEndUserResponseBody(GetProductAsEndUserResponseBody &&) = default ;
    GetProductAsEndUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductAsEndUserResponseBody() = default ;
    GetProductAsEndUserResponseBody& operator=(const GetProductAsEndUserResponseBody &) = default ;
    GetProductAsEndUserResponseBody& operator=(GetProductAsEndUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductSummary& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ProductSummary& obj) { 
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
      ProductSummary() = default ;
      ProductSummary(const ProductSummary &) = default ;
      ProductSummary(ProductSummary &&) = default ;
      ProductSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductSummary() = default ;
      ProductSummary& operator=(const ProductSummary &) = default ;
      ProductSummary& operator=(ProductSummary &&) = default ;
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
      inline ProductSummary& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductSummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hasDefaultLaunchOption Field Functions 
      bool hasHasDefaultLaunchOption() const { return this->hasDefaultLaunchOption_ != nullptr;};
      void deleteHasDefaultLaunchOption() { this->hasDefaultLaunchOption_ = nullptr;};
      inline bool getHasDefaultLaunchOption() const { DARABONBA_PTR_GET_DEFAULT(hasDefaultLaunchOption_, false) };
      inline ProductSummary& setHasDefaultLaunchOption(bool hasDefaultLaunchOption) { DARABONBA_PTR_SET_VALUE(hasDefaultLaunchOption_, hasDefaultLaunchOption) };


      // productArn Field Functions 
      bool hasProductArn() const { return this->productArn_ != nullptr;};
      void deleteProductArn() { this->productArn_ = nullptr;};
      inline string getProductArn() const { DARABONBA_PTR_GET_DEFAULT(productArn_, "") };
      inline ProductSummary& setProductArn(string productArn) { DARABONBA_PTR_SET_VALUE(productArn_, productArn) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ProductSummary& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ProductSummary& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline ProductSummary& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline ProductSummary& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ProductSummary& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The time when the product was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the product.
      shared_ptr<string> description_ {};
      // Indicates whether the default launch option exists. Valid values:
      // 
      // *   true: The default launch option exists. In this case, the PortfolioId parameter is not required when the product is launched or when the information about the product instance is updated.
      // *   false: The default launch option does not exist. In this case, the PortfolioId parameter is required when the product is launched or when the information about the product instance is updated. For more information about how to obtain the value of the PortfolioId parameter, see [ListLaunchOptions](~~ListLaunchOptions~~).
      // 
      // > If the product is added to only one product portfolio, the default launch option exists. If the product is added to multiple product portfolios, multiple launch options exist at the same time. However, no default launch options exist.
      shared_ptr<bool> hasDefaultLaunchOption_ {};
      // The Alibaba Cloud Resource Name (ARN) of the product.
      shared_ptr<string> productArn_ {};
      // The ID of the product.
      shared_ptr<string> productId_ {};
      // The name of the product.
      shared_ptr<string> productName_ {};
      // The type of the product.
      // 
      // The value is fixed as Ros, which indicates Resource Orchestration Service (ROS).
      shared_ptr<string> productType_ {};
      // The provider of the product.
      shared_ptr<string> providerName_ {};
      // The type of the product template. Valid values:
      // 
      // *   RosTerraformTemplate: The Terraform template that is supported by Resource Orchestration Service (ROS).
      // *   RosStandardTemplate: The standard ROS template.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->productSummary_ == nullptr
        && this->requestId_ == nullptr; };
    // productSummary Field Functions 
    bool hasProductSummary() const { return this->productSummary_ != nullptr;};
    void deleteProductSummary() { this->productSummary_ = nullptr;};
    inline const GetProductAsEndUserResponseBody::ProductSummary & getProductSummary() const { DARABONBA_PTR_GET_CONST(productSummary_, GetProductAsEndUserResponseBody::ProductSummary) };
    inline GetProductAsEndUserResponseBody::ProductSummary getProductSummary() { DARABONBA_PTR_GET(productSummary_, GetProductAsEndUserResponseBody::ProductSummary) };
    inline GetProductAsEndUserResponseBody& setProductSummary(const GetProductAsEndUserResponseBody::ProductSummary & productSummary) { DARABONBA_PTR_SET_VALUE(productSummary_, productSummary) };
    inline GetProductAsEndUserResponseBody& setProductSummary(GetProductAsEndUserResponseBody::ProductSummary && productSummary) { DARABONBA_PTR_SET_RVALUE(productSummary_, productSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductAsEndUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the product.
    shared_ptr<GetProductAsEndUserResponseBody::ProductSummary> productSummary_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
