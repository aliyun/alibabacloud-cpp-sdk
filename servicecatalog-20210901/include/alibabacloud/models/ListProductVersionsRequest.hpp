// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListProductVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    ListProductVersionsRequest() = default ;
    ListProductVersionsRequest(const ListProductVersionsRequest &) = default ;
    ListProductVersionsRequest(ListProductVersionsRequest &&) = default ;
    ListProductVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductVersionsRequest() = default ;
    ListProductVersionsRequest& operator=(const ListProductVersionsRequest &) = default ;
    ListProductVersionsRequest& operator=(ListProductVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productId_ == nullptr; };
    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListProductVersionsRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // The ID of the product.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
