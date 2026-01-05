// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class UpdateProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
    };
    UpdateProductRequest() = default ;
    UpdateProductRequest(const UpdateProductRequest &) = default ;
    UpdateProductRequest(UpdateProductRequest &&) = default ;
    UpdateProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProductRequest() = default ;
    UpdateProductRequest& operator=(const UpdateProductRequest &) = default ;
    UpdateProductRequest& operator=(UpdateProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->productId_ == nullptr && this->productName_ == nullptr && this->providerName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProductRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline UpdateProductRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline UpdateProductRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline UpdateProductRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


  protected:
    // 产品描述
    shared_ptr<string> description_ {};
    // 代表资源一级ID的资源属性字段
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // 代表资源名称的资源属性字段
    // 
    // This parameter is required.
    shared_ptr<string> productName_ {};
    // 产品提供方
    // 
    // This parameter is required.
    shared_ptr<string> providerName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
