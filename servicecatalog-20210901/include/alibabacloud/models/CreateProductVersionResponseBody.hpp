// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateProductVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateProductVersionResponseBody() = default ;
    CreateProductVersionResponseBody(const CreateProductVersionResponseBody &) = default ;
    CreateProductVersionResponseBody(CreateProductVersionResponseBody &&) = default ;
    CreateProductVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductVersionResponseBody() = default ;
    CreateProductVersionResponseBody& operator=(const CreateProductVersionResponseBody &) = default ;
    CreateProductVersionResponseBody& operator=(CreateProductVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productVersionId_ == nullptr
        && this->requestId_ == nullptr; };
    // productVersionId Field Functions 
    bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
    void deleteProductVersionId() { this->productVersionId_ = nullptr;};
    inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
    inline CreateProductVersionResponseBody& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProductVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the product version.
    shared_ptr<string> productVersionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
