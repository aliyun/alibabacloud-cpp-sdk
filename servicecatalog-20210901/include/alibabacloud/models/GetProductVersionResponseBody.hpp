// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetProductVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductVersionDetail, productVersionDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductVersionDetail, productVersionDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProductVersionResponseBody() = default ;
    GetProductVersionResponseBody(const GetProductVersionResponseBody &) = default ;
    GetProductVersionResponseBody(GetProductVersionResponseBody &&) = default ;
    GetProductVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductVersionResponseBody() = default ;
    GetProductVersionResponseBody& operator=(const GetProductVersionResponseBody &) = default ;
    GetProductVersionResponseBody& operator=(GetProductVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductVersionDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductVersionDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Guidance, guidance_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_TO_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(TemplateUrl, templateUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ProductVersionDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Guidance, guidance_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_FROM_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(TemplateUrl, templateUrl_);
      };
      ProductVersionDetail() = default ;
      ProductVersionDetail(const ProductVersionDetail &) = default ;
      ProductVersionDetail(ProductVersionDetail &&) = default ;
      ProductVersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductVersionDetail() = default ;
      ProductVersionDetail& operator=(const ProductVersionDetail &) = default ;
      ProductVersionDetail& operator=(ProductVersionDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->guidance_ == nullptr && this->productId_ == nullptr && this->productVersionId_ == nullptr
        && this->productVersionName_ == nullptr && this->templateType_ == nullptr && this->templateUrl_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline ProductVersionDetail& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProductVersionDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductVersionDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // guidance Field Functions 
      bool hasGuidance() const { return this->guidance_ != nullptr;};
      void deleteGuidance() { this->guidance_ = nullptr;};
      inline string getGuidance() const { DARABONBA_PTR_GET_DEFAULT(guidance_, "") };
      inline ProductVersionDetail& setGuidance(string guidance) { DARABONBA_PTR_SET_VALUE(guidance_, guidance) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ProductVersionDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productVersionId Field Functions 
      bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
      void deleteProductVersionId() { this->productVersionId_ = nullptr;};
      inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
      inline ProductVersionDetail& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


      // productVersionName Field Functions 
      bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
      void deleteProductVersionName() { this->productVersionName_ = nullptr;};
      inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
      inline ProductVersionDetail& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ProductVersionDetail& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // templateUrl Field Functions 
      bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
      void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
      inline string getTemplateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, "") };
      inline ProductVersionDetail& setTemplateUrl(string templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


    protected:
      // Indicates whether the product version is visible to end users. Valid values:
      // - true: The product version is visible to end users. This is the default value.
      // - false: The product version is invisible to end users.
      shared_ptr<bool> active_ {};
      // The time when the product version was created.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the product version.
      shared_ptr<string> description_ {};
      // The recommendation information. Valid values:
      // 
      // - Default: No recommendation information is provided. This is the default value.
      // - Recommended: the recommendation version.
      // - Latest: the latest version.
      // - Deprecated: the version that is about to be deprecated.
      shared_ptr<string> guidance_ {};
      // The ID of the product to which the product version belongs.
      shared_ptr<string> productId_ {};
      // The ID of the product version.
      shared_ptr<string> productVersionId_ {};
      // The name of the product version.
      shared_ptr<string> productVersionName_ {};
      // The type of the product template. Valid values:
      // 
      // *   RosTerraformTemplate: The Terraform template that is supported by Resource Orchestration Service (ROS).
      // *   RosStandardTemplate: The standard ROS template.
      shared_ptr<string> templateType_ {};
      // The URL of the template.
      shared_ptr<string> templateUrl_ {};
    };

    virtual bool empty() const override { return this->productVersionDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // productVersionDetail Field Functions 
    bool hasProductVersionDetail() const { return this->productVersionDetail_ != nullptr;};
    void deleteProductVersionDetail() { this->productVersionDetail_ = nullptr;};
    inline const GetProductVersionResponseBody::ProductVersionDetail & getProductVersionDetail() const { DARABONBA_PTR_GET_CONST(productVersionDetail_, GetProductVersionResponseBody::ProductVersionDetail) };
    inline GetProductVersionResponseBody::ProductVersionDetail getProductVersionDetail() { DARABONBA_PTR_GET(productVersionDetail_, GetProductVersionResponseBody::ProductVersionDetail) };
    inline GetProductVersionResponseBody& setProductVersionDetail(const GetProductVersionResponseBody::ProductVersionDetail & productVersionDetail) { DARABONBA_PTR_SET_VALUE(productVersionDetail_, productVersionDetail) };
    inline GetProductVersionResponseBody& setProductVersionDetail(GetProductVersionResponseBody::ProductVersionDetail && productVersionDetail) { DARABONBA_PTR_SET_RVALUE(productVersionDetail_, productVersionDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the product version.
    shared_ptr<GetProductVersionResponseBody::ProductVersionDetail> productVersionDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
