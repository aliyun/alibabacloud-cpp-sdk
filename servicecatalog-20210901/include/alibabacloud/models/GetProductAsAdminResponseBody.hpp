// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTASADMINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTASADMINRESPONSEBODY_HPP_
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
  class GetProductAsAdminResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductAsAdminResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagOptions, tagOptions_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductAsAdminResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagOptions, tagOptions_);
    };
    GetProductAsAdminResponseBody() = default ;
    GetProductAsAdminResponseBody(const GetProductAsAdminResponseBody &) = default ;
    GetProductAsAdminResponseBody(GetProductAsAdminResponseBody &&) = default ;
    GetProductAsAdminResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductAsAdminResponseBody() = default ;
    GetProductAsAdminResponseBody& operator=(const GetProductAsAdminResponseBody &) = default ;
    GetProductAsAdminResponseBody& operator=(GetProductAsAdminResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TagOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TagOptions() = default ;
      TagOptions(const TagOptions &) = default ;
      TagOptions(TagOptions &&) = default ;
      TagOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagOptions() = default ;
      TagOptions& operator=(const TagOptions &) = default ;
      TagOptions& operator=(TagOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->key_ == nullptr && this->owner_ == nullptr && this->tagOptionId_ == nullptr && this->value_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline TagOptions& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TagOptions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline TagOptions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // tagOptionId Field Functions 
      bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
      void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
      inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
      inline TagOptions& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TagOptions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Indicates whether the tag option is enabled. Valid values:
      // 
      // *   true (default)
      // *   false
      shared_ptr<bool> active_ {};
      // The key of the tag option.
      shared_ptr<string> key_ {};
      // The ID of the owner of the tag option.
      shared_ptr<string> owner_ {};
      // The ID of the tag option.
      shared_ptr<string> tagOptionId_ {};
      // The value of the tag option.
      shared_ptr<string> value_ {};
    };

    class ProductDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ProductArn, productArn_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, ProductDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ProductArn, productArn_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      ProductDetail() = default ;
      ProductDetail(const ProductDetail &) = default ;
      ProductDetail(ProductDetail &&) = default ;
      ProductDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductDetail() = default ;
      ProductDetail& operator=(const ProductDetail &) = default ;
      ProductDetail& operator=(ProductDetail &&) = default ;
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
      inline ProductDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // productArn Field Functions 
      bool hasProductArn() const { return this->productArn_ != nullptr;};
      void deleteProductArn() { this->productArn_ = nullptr;};
      inline string getProductArn() const { DARABONBA_PTR_GET_DEFAULT(productArn_, "") };
      inline ProductDetail& setProductArn(string productArn) { DARABONBA_PTR_SET_VALUE(productArn_, productArn) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ProductDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ProductDetail& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline ProductDetail& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline ProductDetail& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ProductDetail& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The creation time.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the product.
      shared_ptr<string> description_ {};
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
      // *   RosTerraformTemplate: the Terraform template that is supported by Resource Orchestration Service (ROS).
      // *   RosStandardTemplate: the standard ROS template.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->productDetail_ == nullptr
        && this->requestId_ == nullptr && this->tagOptions_ == nullptr; };
    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline const GetProductAsAdminResponseBody::ProductDetail & getProductDetail() const { DARABONBA_PTR_GET_CONST(productDetail_, GetProductAsAdminResponseBody::ProductDetail) };
    inline GetProductAsAdminResponseBody::ProductDetail getProductDetail() { DARABONBA_PTR_GET(productDetail_, GetProductAsAdminResponseBody::ProductDetail) };
    inline GetProductAsAdminResponseBody& setProductDetail(const GetProductAsAdminResponseBody::ProductDetail & productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };
    inline GetProductAsAdminResponseBody& setProductDetail(GetProductAsAdminResponseBody::ProductDetail && productDetail) { DARABONBA_PTR_SET_RVALUE(productDetail_, productDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductAsAdminResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagOptions Field Functions 
    bool hasTagOptions() const { return this->tagOptions_ != nullptr;};
    void deleteTagOptions() { this->tagOptions_ = nullptr;};
    inline const vector<GetProductAsAdminResponseBody::TagOptions> & getTagOptions() const { DARABONBA_PTR_GET_CONST(tagOptions_, vector<GetProductAsAdminResponseBody::TagOptions>) };
    inline vector<GetProductAsAdminResponseBody::TagOptions> getTagOptions() { DARABONBA_PTR_GET(tagOptions_, vector<GetProductAsAdminResponseBody::TagOptions>) };
    inline GetProductAsAdminResponseBody& setTagOptions(const vector<GetProductAsAdminResponseBody::TagOptions> & tagOptions) { DARABONBA_PTR_SET_VALUE(tagOptions_, tagOptions) };
    inline GetProductAsAdminResponseBody& setTagOptions(vector<GetProductAsAdminResponseBody::TagOptions> && tagOptions) { DARABONBA_PTR_SET_RVALUE(tagOptions_, tagOptions) };


  protected:
    // The information about the product.
    shared_ptr<GetProductAsAdminResponseBody::ProductDetail> productDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The tag options associated with the product.
    shared_ptr<vector<GetProductAsAdminResponseBody::TagOptions>> tagOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
