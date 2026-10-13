// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class SubscribeProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(productId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(productId, productId_);
    };
    SubscribeProductRequest() = default ;
    SubscribeProductRequest(const SubscribeProductRequest &) = default ;
    SubscribeProductRequest(SubscribeProductRequest &&) = default ;
    SubscribeProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeProductRequest() = default ;
    SubscribeProductRequest& operator=(const SubscribeProductRequest &) = default ;
    SubscribeProductRequest& operator=(SubscribeProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productId_ == nullptr; };
    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline SubscribeProductRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // The ID of the API product to subscribe to. This is the primary ID of the API product resource. You can obtain this ID from the productId field in the response of the ListProducts operation.
    shared_ptr<string> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
