// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateProductShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProductVersionParameters, productVersionParametersShrink_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProductVersionParameters, productVersionParametersShrink_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateProductShrinkRequest() = default ;
    CreateProductShrinkRequest(const CreateProductShrinkRequest &) = default ;
    CreateProductShrinkRequest(CreateProductShrinkRequest &&) = default ;
    CreateProductShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductShrinkRequest() = default ;
    CreateProductShrinkRequest& operator=(const CreateProductShrinkRequest &) = default ;
    CreateProductShrinkRequest& operator=(CreateProductShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->productName_ == nullptr && this->productType_ == nullptr && this->productVersionParametersShrink_ == nullptr && this->providerName_ == nullptr && this->templateType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProductShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline CreateProductShrinkRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateProductShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // productVersionParametersShrink Field Functions 
    bool hasProductVersionParametersShrink() const { return this->productVersionParametersShrink_ != nullptr;};
    void deleteProductVersionParametersShrink() { this->productVersionParametersShrink_ = nullptr;};
    inline string getProductVersionParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(productVersionParametersShrink_, "") };
    inline CreateProductShrinkRequest& setProductVersionParametersShrink(string productVersionParametersShrink) { DARABONBA_PTR_SET_VALUE(productVersionParametersShrink_, productVersionParametersShrink) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline CreateProductShrinkRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateProductShrinkRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


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
    shared_ptr<string> productVersionParametersShrink_ {};
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
