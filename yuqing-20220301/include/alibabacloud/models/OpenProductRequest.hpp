// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProductInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class OpenProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(productInstance, productInstance_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(productInstance, productInstance_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    OpenProductRequest() = default ;
    OpenProductRequest(const OpenProductRequest &) = default ;
    OpenProductRequest(OpenProductRequest &&) = default ;
    OpenProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenProductRequest() = default ;
    OpenProductRequest& operator=(const OpenProductRequest &) = default ;
    OpenProductRequest& operator=(OpenProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->productInstance_ == nullptr && return this->requestId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline OpenProductRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // productInstance Field Functions 
    bool hasProductInstance() const { return this->productInstance_ != nullptr;};
    void deleteProductInstance() { this->productInstance_ = nullptr;};
    inline const ProductInstance & productInstance() const { DARABONBA_PTR_GET_CONST(productInstance_, ProductInstance) };
    inline ProductInstance productInstance() { DARABONBA_PTR_GET(productInstance_, ProductInstance) };
    inline OpenProductRequest& setProductInstance(const ProductInstance & productInstance) { DARABONBA_PTR_SET_VALUE(productInstance_, productInstance) };
    inline OpenProductRequest& setProductInstance(ProductInstance && productInstance) { DARABONBA_PTR_SET_RVALUE(productInstance_, productInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenProductRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<ProductInstance> productInstance_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
