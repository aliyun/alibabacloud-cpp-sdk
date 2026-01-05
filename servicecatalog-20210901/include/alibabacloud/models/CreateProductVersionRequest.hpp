// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateProductVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Guidance, guidance_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersionName, productVersionName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(TemplateUrl, templateUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Guidance, guidance_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersionName, productVersionName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(TemplateUrl, templateUrl_);
    };
    CreateProductVersionRequest() = default ;
    CreateProductVersionRequest(const CreateProductVersionRequest &) = default ;
    CreateProductVersionRequest(CreateProductVersionRequest &&) = default ;
    CreateProductVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductVersionRequest() = default ;
    CreateProductVersionRequest& operator=(const CreateProductVersionRequest &) = default ;
    CreateProductVersionRequest& operator=(CreateProductVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr && this->guidance_ == nullptr && this->productId_ == nullptr && this->productVersionName_ == nullptr && this->templateType_ == nullptr
        && this->templateUrl_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline CreateProductVersionRequest& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProductVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // guidance Field Functions 
    bool hasGuidance() const { return this->guidance_ != nullptr;};
    void deleteGuidance() { this->guidance_ = nullptr;};
    inline string getGuidance() const { DARABONBA_PTR_GET_DEFAULT(guidance_, "") };
    inline CreateProductVersionRequest& setGuidance(string guidance) { DARABONBA_PTR_SET_VALUE(guidance_, guidance) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CreateProductVersionRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersionName Field Functions 
    bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
    void deleteProductVersionName() { this->productVersionName_ = nullptr;};
    inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
    inline CreateProductVersionRequest& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateProductVersionRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // templateUrl Field Functions 
    bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
    void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
    inline string getTemplateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, "") };
    inline CreateProductVersionRequest& setTemplateUrl(string templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


  protected:
    // Specifies whether the product version is active. Valid values:
    // 
    // *   true: The product version is active. This is the default value.
    // *   false: The product version is inactive.
    shared_ptr<bool> active_ {};
    // The description of the product version.
    // 
    // The value must be 1 to 128 characters in length.
    shared_ptr<string> description_ {};
    // The recommendation information. Valid values:
    // 
    // *   Default: No recommendation information is provided. This is the default value.
    // *   Recommended: the recommendation version.
    // *   Latest: the latest version.
    // *   Deprecated: the version that is about to be discontinued.
    shared_ptr<string> guidance_ {};
    // The ID of the product to which the product version belongs.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The name of the product version.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> productVersionName_ {};
    // The type of the product template. Valid values:
    // 
    // *   RosTerraformTemplate: the Terraform template that is supported by Resource Orchestration Service (ROS).
    // *   RosStandardTemplate: the standard ROS template.
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
    // The URL of the template.
    // 
    // For more information about how to obtain the URL of a template, see [CreateTemplate](~~CreateTemplate~~).
    // 
    // This parameter is required.
    shared_ptr<string> templateUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
