// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProductVersionParameters, productVersionParameters_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProductVersionParameters, productVersionParameters_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateProductRequest() = default ;
    CreateProductRequest(const CreateProductRequest &) = default ;
    CreateProductRequest(CreateProductRequest &&) = default ;
    CreateProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductRequest() = default ;
    CreateProductRequest& operator=(const CreateProductRequest &) = default ;
    CreateProductRequest& operator=(CreateProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductVersionParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductVersionParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Guidance, guidance_);
        DARABONBA_PTR_TO_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(TemplateUrl, templateUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ProductVersionParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Guidance, guidance_);
        DARABONBA_PTR_FROM_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(TemplateUrl, templateUrl_);
      };
      ProductVersionParameters() = default ;
      ProductVersionParameters(const ProductVersionParameters &) = default ;
      ProductVersionParameters(ProductVersionParameters &&) = default ;
      ProductVersionParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductVersionParameters() = default ;
      ProductVersionParameters& operator=(const ProductVersionParameters &) = default ;
      ProductVersionParameters& operator=(ProductVersionParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr && this->guidance_ == nullptr && this->productVersionName_ == nullptr && this->templateType_ == nullptr && this->templateUrl_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline ProductVersionParameters& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductVersionParameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // guidance Field Functions 
      bool hasGuidance() const { return this->guidance_ != nullptr;};
      void deleteGuidance() { this->guidance_ = nullptr;};
      inline string getGuidance() const { DARABONBA_PTR_GET_DEFAULT(guidance_, "") };
      inline ProductVersionParameters& setGuidance(string guidance) { DARABONBA_PTR_SET_VALUE(guidance_, guidance) };


      // productVersionName Field Functions 
      bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
      void deleteProductVersionName() { this->productVersionName_ = nullptr;};
      inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
      inline ProductVersionParameters& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ProductVersionParameters& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // templateUrl Field Functions 
      bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
      void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
      inline string getTemplateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, "") };
      inline ProductVersionParameters& setTemplateUrl(string templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


    protected:
      // Specifies whether to enable the product version. Valid values:
      // 
      // *   true (default)
      // *   false
      shared_ptr<bool> active_ {};
      // The description of the product version.
      // 
      // The value must be 1 to 128 characters in length.
      shared_ptr<string> description_ {};
      // The recommended product version. Valid values:
      // 
      // *   Default (default): No product version is recommended.
      // *   Recommended: the stable version.
      // *   Latest: the latest version.
      // *   Deprecated: the version that is about to be deprecated.
      shared_ptr<string> guidance_ {};
      // The name of the product version.
      // 
      // The value must be 1 to 128 characters in length.
      shared_ptr<string> productVersionName_ {};
      // The type of the template.
      // 
      // Set the value to RosTerraformTemplate, which indicates the Terraform template that is supported by Resource Orchestration Service (ROS).
      shared_ptr<string> templateType_ {};
      // The URL of the template.
      // 
      // To obtain the URL of a template, you can call the [CreateTemplate](~~CreateTemplate~~) operation.
      shared_ptr<string> templateUrl_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->productName_ == nullptr && this->productType_ == nullptr && this->productVersionParameters_ == nullptr && this->providerName_ == nullptr && this->templateType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProductRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline CreateProductRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateProductRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // productVersionParameters Field Functions 
    bool hasProductVersionParameters() const { return this->productVersionParameters_ != nullptr;};
    void deleteProductVersionParameters() { this->productVersionParameters_ = nullptr;};
    inline const CreateProductRequest::ProductVersionParameters & getProductVersionParameters() const { DARABONBA_PTR_GET_CONST(productVersionParameters_, CreateProductRequest::ProductVersionParameters) };
    inline CreateProductRequest::ProductVersionParameters getProductVersionParameters() { DARABONBA_PTR_GET(productVersionParameters_, CreateProductRequest::ProductVersionParameters) };
    inline CreateProductRequest& setProductVersionParameters(const CreateProductRequest::ProductVersionParameters & productVersionParameters) { DARABONBA_PTR_SET_VALUE(productVersionParameters_, productVersionParameters) };
    inline CreateProductRequest& setProductVersionParameters(CreateProductRequest::ProductVersionParameters && productVersionParameters) { DARABONBA_PTR_SET_RVALUE(productVersionParameters_, productVersionParameters) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline CreateProductRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateProductRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The description of the product.
    // 
    // The value must be 1 to 128 characters in length.
    shared_ptr<string> description_ {};
    // The name of the product.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> productName_ {};
    // The type of the product.
    // 
    // Set the value to Ros, which specifies Resource Orchestration Service (ROS).
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The information about the product version.
    shared_ptr<CreateProductRequest::ProductVersionParameters> productVersionParameters_ {};
    // The provider of the product.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> providerName_ {};
    // The type of the product template. Valid values:
    // 
    // *   RosTerraformTemplate: the Terraform template that is supported by ROS.
    // *   RosStandardTemplate: the standard ROS template.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
